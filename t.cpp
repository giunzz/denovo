Hàm Hierholzer(Đồ thị G)
Đầu vào: Một đồ thị liên thông G có chứa đường đi hoặc chu trình Euler
Đầu ra: Một đường đi hoặc chu trình Euler C trong G

Khởi tạo một ngăn xếp rỗng S  
Khởi tạo một danh sách rỗng path  
Chọn một đỉnh bắt đầu v từ G  
Đưa v vào ngăn xếp S  

Trong khi S không rỗng, thực hiện:  
    Đặt u là đỉnh trên cùng của S  
    Nếu u có một cạnh đi ra (u, w), thực hiện:  
        Loại bỏ cạnh (u, w) khỏi G  
        Đưa w vào ngăn xếp S  
    Ngược lại:  
        Thêm u vào đầu danh sách kết quả  
        Lấy u ra khỏi ngăn xếp S  

Xuất ra đường đi hoặc chu trình Euler là kết quả
