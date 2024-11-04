#include <iostream>
using namespace std;

const int N = 1010;
int n, m;
int adj[N][N];

int main() {
    cin >> n >> m; // Nhập số đỉnh và số cạnh
    // Khởi tạo ma trận kề với giá trị 0
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N; ++j) {
            adj[i][j] = 0;
        }
    }
    
    for(int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b; // Nhập các cạnh
        adj[a][b] = 1; // Nếu đồ thị có trọng số, đổi 1 thành w
        adj[b][a] = 1; // Nếu đồ thị có hướng thì không cần viết dòng này
    }
    
    // Tùy chọn: In ra ma trận kề
    cout << "Adjacency Matrix:\n";
    for(int i = 1; i <= n; ++i) { // Giả sử đỉnh bắt đầu từ 1
        for(int j = 1; j <= n; ++j) {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
