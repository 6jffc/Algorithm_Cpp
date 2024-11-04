#include <iostream>
#include <vector>
#include <queue>
#include <limits>

using namespace std;

enum Color { WHITE, GRAY, BLACK };

struct Vertex {
    Color color;
    int d;
    Vertex* pi; // predecessor
    vector<Vertex*> adj; // adjacency list

    Vertex() : color(WHITE), d(numeric_limits<int>::max()), pi(nullptr) {}
};

void BFS(vector<Vertex>& G, Vertex* s) {
    // Khởi tạo tất cả các đỉnh
    for (auto& u : G) {
        if (&u != s) {
            u.color = WHITE;
            u.d = numeric_limits<int>::max();
            u.pi = nullptr;
        }
    }

    s->color = GRAY;
    s->d = 0;
    s->pi = nullptr;

    queue<Vertex*> Q;
    Q.push(s);

    while (!Q.empty()) {
        Vertex* u = Q.front();
        Q.pop();

        for (auto& v : u->adj) { // Duyệt các đỉnh kề của u
            if (v->color == WHITE) { // Nếu v chưa được khám phá
                v->color = GRAY;
                v->d = u->d + 1;
                v->pi = u;
                Q.push(v); // Thêm v vào hàng đợi
            }
        }
        u->color = BLACK; // Đánh dấu u đã được khám phá
    }
}

// Ví dụ sử dụng
int main() {
    // Tạo đồ thị
    vector<Vertex> G(5); // Giả sử có 5 đỉnh
    G[0].adj = { &G[1], &G[2] }; // Đỉnh 0 kết nối đến 1 và 2
    G[1].adj = { &G[3] };        // Đỉnh 1 kết nối đến 3
    G[2].adj = { &G[3] };        // Đỉnh 2 kết nối đến 3
    G[3].adj = { &G[4] };        // Đỉnh 3 kết nối đến 4

    // Thực hiện BFS bắt đầu từ đỉnh 0
    BFS(G, &G[0]);

    // In kết quả
    for (int i = 0; i < G.size(); ++i) {
        cout << "Vertex " << i << ": "
             << "Distance = " << G[i].d
             << ", Predecessor = " << (G[i].pi ? to_string(G[i].pi - &G[0]) : "NIL") << endl;
    }

    return 0;
}
