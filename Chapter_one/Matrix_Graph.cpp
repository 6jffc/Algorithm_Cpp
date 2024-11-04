#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

// Hàm để tính toán đồ thị chuyển vị từ danh sách kề
unordered_map<int, vector<int>> transpose_adjacency_list(const unordered_map<int, vector<int>>& graph) {
    unordered_map<int, vector<int>> transposed_graph;

    for (const auto& pair : graph) {
        int u = pair.first;
        for (int v : pair.second) {
            transposed_graph[v].push_back(u); // Đảo ngược cạnh
        }
    }

    return transposed_graph;
}

int main() {
    // Ví dụ đồ thị dưới dạng danh sách kề
    unordered_map<int, vector<int>> graph = {
        {1, {2, 3}},
        {2, {4}},
        {3, {4, 5}},
        {4, {}},
        {5, {6}},
        {6, {3}},
    };

    // Tính toán đồ thị chuyển vị
    auto transposed = transpose_adjacency_list(graph);

    // In kết quả
    for (const auto& pair : transposed) {
        cout << pair.first << ": ";
        for (int v : pair.second) {
            cout << v << " ";
        }
        cout << endl;
    }

    return 0;
}
