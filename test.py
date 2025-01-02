class Point2D:
    def __init__(self, x=0, y=0):
        self.x = x
        self.y = y

    def __str__(self):
        return "({0}, {1})".format(self.x, self.y)

class Triangle:
    def __init__(self, A, B, C):
        # A, B, và C phải là các đối tượng của lớp Point2D
        self.A = A
        self.B = B
        self.C = C

    def __str__(self):
        return "Tam giác với các đỉnh: A" + str(self.A) + ", B" + str(self.B) + ", C" + str(self.C)
        
# Ví dụ sử dụng:
# Tạo 3 điểm
A = Point2D(1, 2)
B = Point2D(3, 4)
C = Point2D(5, 6)

# Tạo một tam giác sử dụng các điểm
triangle = Triangle(A, B, C)

# In ra các đỉnh của tam giác
print(triangle)

