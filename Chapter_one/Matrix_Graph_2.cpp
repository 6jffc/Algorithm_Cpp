#include <iostream>
#include <vector>

using namespace std;

// Hàm để tính toán đồ thị chuyển vị từ ma trận kề
vector<vector<int>> transpose_adjacency_matrix(const vector<vector<int>>& matrix) {
    int n = matrix.size();
    vector<vector<int>> transposed_matrix(n, vector<int>(n, 0)); // Khởi tạo ma trận chuyển vị

    for (int u = 0; u < n; ++u) {
        for (int v = 0; v < n; ++v) {
            if (matrix[u][v] == 1) {
                transposed_matrix[v][u] = 1; // Đảo ngược cạnh
            }
        }
    }

    return transposed_matrix;
}

int main() {
    // Ví dụ đồ thị dưới dạng ma trận kề
    vector<vector<int>> adjacency_matrix = {
        {0, 1, 1, 0, 0, 0, 0}, // Đỉnh 1 kết nối với 2 và 3
        {0, 0, 0, 1, 0, 0, 0}, // Đỉnh 2 kết nối với 4
        {0, 0, 0, 1, 1, 0, 0}, // Đỉnh 3 kết nối với 4 và 5
        {0, 0, 0, 0, 0, 0, 0}, // Đỉnh 4 không có kết nối
        {0, 0, 0, 0, 0, 1, 0}, // Đỉnh 5 kết nối với 6
        {0, 0, 1, 0, 0, 0, 0}, // Đỉnh 6 kết nối với 3
        {0, 0, 0, 0, 0, 0, 0}, // Đỉnh 7 không có kết nối
    };

    // Tính toán đồ thị chuyển vị
    auto transposed_matrix = transpose_adjacency_matrix(adjacency_matrix);

    // In kết quả
    for (const auto& row : transposed_matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
