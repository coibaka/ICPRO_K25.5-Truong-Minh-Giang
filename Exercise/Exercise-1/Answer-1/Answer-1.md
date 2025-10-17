## Request
### 1. **Viết chương trình `memory_lab.c`** mô phỏng ba lỗi bộ nhớ phổ biến.
### 2. **Biên dịch và chạy chương trình** với từng lỗi.
### 3. **Sử dụng GDB để phân tích và tìm nguyên nhân lỗi**.
## Learn about
### Tổng quan về ba lỗi bộ nhớ.

| Error           | Description                                                                  |
| --------------- | ---------------------------------------------------------------------------- |
| Stack Overflow  | Gọi đệ quy vô hạn hoặc cấp phát biến cục bộ quá lớn → tràn ngăn xếp (stack). |
| `Memory Leak`   | Cấp phát bộ nhớ động nhưng không giải phóng → rò rỉ bộ nhớ.                  |
| `Out of Memory` | Cấp phát quá nhiều bộ nhớ → hệ thống hết RAM → lỗi malloc.                   |
### Khái niệm cơ bản.
#### 1. Stack Overflow.
##### 1.1 Stack là gì???.

Trong lập trình, **stack** (ngăn xếp) là một vùng bộ nhớ dùng để lưu trữ:
- Các **biến cục bộ** trong hàm.
- **Thông tin gọi hàm** (như địa chỉ trả về).
- **Tham số truyền vào hàm**.

Stack hoạt động theo nguyên tắc **LIFO** (Last In, First Out): phần tử được đưa vào sau cùng sẽ được lấy ra đầu tiên.

[Link video tham khảo](https://www.youtube.com/watch?v=Gv7YxOUBXMg)
##### 1.2 Stack Overflow là gì?
![[C:\Users\minhg.DESKTOP-U9VC3B4\OneDrive\LEARNTOSHARE\Documents\ICPRO_K25.5-Truong-Minh-Giang\Image\Answer-1\stack_buffer_overflow_attack-f.png]]
**Stack overflow** xảy ra khi chương trình sử dụng quá nhiều bộ nhớ stack, vượt quá giới hạn cho phép. Khi đó, hệ thống không thể cấp thêm bộ nhớ và sẽ gây ra lỗi.

### Nguyên nhân phổ biến:

- **Gọi đệ quy không có điểm dừng**:
    ```python
    def loop():
        loop()  # Gọi chính nó mãi mãi
    loop()
    ```
    
    → Hàm `loop()` gọi chính nó liên tục, mỗi lần gọi sẽ chiếm thêm bộ nhớ stack.
    
- **Tạo quá nhiều biến cục bộ hoặc mảng lớn trong hàm**:
    
    c
    
    ```
    void bigArray() {
        int arr[1000000];  // Quá lớn cho stack
    }
    ```
#### 2. Memory Leak

#### 3. Out of Memory
