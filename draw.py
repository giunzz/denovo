from PIL import Image

# Đường dẫn đến hình ảnh gốc
input_image_path = "/mnt/data/image.png"
output_image_path = "/mnt/data/image_white_bg.png"

# Mở hình ảnh gốc
image = Image.open(input_image_path)

# Chuyển đổi hình ảnh sang chế độ RGBA để xử lý nền
image = image.convert("RGBA")

# Tạo một hình ảnh mới với nền trắng và kích thước giống với hình ảnh gốc
white_bg = Image.new("RGBA", image.size, (255, 255, 255, 255))

# Kết hợp hình ảnh gốc lên nền trắng
combined = Image.alpha_composite(white_bg, image)

# Chuyển hình ảnh về chế độ RGB để lưu dưới dạng PNG hoặc JPG
final_image = combined.convert("RGB")

# Lưu hình ảnh mới với nền trắng
final_image.save(output_image_path)

output_image_path
