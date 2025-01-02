import math

def hamiltonian_path_dp(graph):
    n = len(graph)  # Số lượng đỉnh
    INF = math.inf
    # Khởi tạo bảng DP :dp[mask][u]: Chi phí nhỏ nhất để đi qua các đỉnh trong tập hợp mask và kết thúc tại đỉnh 𝑢
    dp = [[INF] * n for _ in range(1 << n)]  # 2^n x n : tất cả đều INF 
    for i in range(n):
        dp[1 << i][i] = 0  # DP[2 ^i][i]=0,∀u∈V.: không tốn chi phí
    # Duyệt qua tất cả các tập hợp (mask)
    for mask in range(1 << n):  # Duyệt tất cả các tập hợp đỉnh
        for u in range(n):  # Duyệt đỉnh kết thúc của tập hợp
            if mask & (1 << u):  # Nếu đỉnh u nằm trong tập hợp
                for v in range(n):  # Duyệt đỉnh v liền kề
                    if mask & (1 << v) and graph[v][u] != INF:  # Nếu v nằm trong mask và có cạnh v -> u
                        dp[mask][u] = min(dp[mask][u], dp[mask ^ (1 << u)][v] + graph[v][u])
    # Tìm kết quả tốt nhất
    end_mask = (1 << n) - 1  # Tập hợp chứa tất cả các đỉnh 2^n - 1
    result = min(dp[end_mask][u] for u in range(n))  # min(DP[2^n - 1][u]),∀u∈V.

    return result if result != INF else None



graph = [[0, 10, 15, 20],[10, 15, 35, 25],[15, 35, 0, 30],[20, 25, 30, 0]]
print(hamiltonian_path_dp(graph))  # 50
