#include <bits/stdc++.h>
using namespace std;

// Function to find a Hamiltonian Path using backtracking
bool hamiltonianPath(vector<vector<int>>& adj, vector<bool>& visited, vector<int>& path, int pos, int n) {
    if (pos == n) {
        return true; // Found a Hamiltonian Path
    }

    int u = path[pos - 1]; // Last vertex in the current path
    for (int v = 0; v < n; v++) {
        if (adj[u][v] && !visited[v]) { // Check adjacency and if vertex is not visited
            visited[v] = true;
            path[pos] = v; // Add vertex to the path
            if (hamiltonianPath(adj, visited, path, pos + 1, n)) {
                return true;
            }
            visited[v] = false; // Backtrack
        }
    }
    return false;
}

// Function to create adjacency matrix based on overlap of k-mers
void createAdjacencyMatrix(vector<string>& reads, vector<vector<int>>& adj, int k) {
    int n = reads.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && reads[i].substr(1) == reads[j].substr(0, k - 1)) {
                adj[i][j] = 1; // There is an edge between i and j
            }
        }
    }
}

// Hàm tìm phần chồng lấn giữa hai chuỗi
int findOverlap(const string& a, const string& b) {
    int max_overlap = 0;
    int len_a = a.size();
    int len_b = b.size();
    
    // Tìm phần chồng lấn lớn nhất khi chuỗi b nối vào cuối chuỗi a
    for (int i = 1; i <= len_a && i <= len_b; ++i) {
        if (a.substr(len_a - i) == b.substr(0, i)) {
            max_overlap = i;
        }
    }
    return max_overlap;
}

// Hàm hợp nhất các k-mers dựa trên chồng lấn
string mergeKMers(const vector<string>& kmers) {
    if (kmers.empty()) return "";
    
    string result = kmers[0]; // Chuỗi đầu tiên làm nền tảng
    for (int i = 1; i < kmers.size(); ++i) {
        int overlap = findOverlap(result, kmers[i]);
        result += kmers[i].substr(overlap); // Thêm phần không trùng lặp vào kết quả
    }
    
    return result;
}

int main() {
    int n, k;
    cin >> n >> k;

    // Nhập vào n - k + 1 chuỗi đọc (reads)
    int num_reads = n - k + 1;
    vector<string> reads(num_reads);
    
    for (int i = 0; i < num_reads; i++) {
        cin >> reads[i];
    }

    // Tạo ma trận kề (adjacency matrix)
    vector<vector<int>> adj(num_reads, vector<int>(num_reads, 0));
    createAdjacencyMatrix(reads, adj, k);

    // Khởi tạo đường đi và mảng đã thăm
    vector<int> path(num_reads);
    vector<bool> visited(num_reads, false);
    
    vector<string> kmers;
    
    // Tìm đường đi Hamilton và lưu các chuỗi k-mers tương ứng
    for (int i = 0; i < num_reads; i++) {
        path[0] = i; // Bắt đầu từ đỉnh i
        visited[i] = true;
        if (hamiltonianPath(adj, visited, path, 1, num_reads)) {
            for (int j = 0; j < num_reads; j++) {
                kmers.push_back(reads[path[j]]);
            }
            break;
        }
        visited[i] = false;
    }

    // Hợp nhất các k-mers để có chuỗi kết quả
    string result = mergeKMers(kmers);
    cout << result << endl;

    return 0;
}
