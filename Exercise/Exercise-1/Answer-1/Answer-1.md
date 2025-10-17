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
![[stack_buffer_overflow_attack-f.png]]

Giải thích hình minh họa:

- **Stack** giống như một chồng hộp được xếp chồng lên nhau. Mỗi khi một hàm được gọi, một "hộp" mới được đặt lên đỉnh stack.
    
- Nếu bạn gọi hàm quá nhiều lần (đặc biệt là đệ quy không có điểm dừng), các hộp sẽ chồng lên mãi cho đến khi **tràn ra ngoài**, gây ra lỗi **stack overflow**.
    
- Khi đó, chương trình không còn đủ bộ nhớ để xử lý tiếp và sẽ **bị dừng lại đột ngột**.

**Stack overflow** xảy ra khi chương trình sử dụng quá nhiều bộ nhớ stack, vượt quá giới hạn cho phép. Khi đó, hệ thống không thể cấp thêm bộ nhớ và sẽ gây ra lỗi.
##### Tổng kết
Sau khi tìm hiểu thì...
- `Stack` (xếp chồng) với phương thức hoạt động **LIFO** (Last In, First Out) của bộ đệm đối với dữ liệu bạn đặt trong khi chương trình bạn chạy.
- **LIFO** (Last In, First Out) nghĩa là thứ bạn cho vào cuối cùng luôn là thứ bạn lấy ra đầu tiên. Ví dụ khi bạn viết 1 hàm gán 2 biến a và b:
```C
int a;
int b;
```
Thì chương trình sẽ thực hiện theo `Stack` là: 
	- (step 1) gán biến `b` với kiểu ` int ` --> (step 2) gán biến ` a ` kiểu ` int `.
- Các thuật ngữ mới và cách thức hoạt động: 
	- `heat` (chưa hiểu).
	- `Push` dành cho khi thêm 1 stack vào và `Pop`.
	- 
#### 2. Memory Leak

#### 3. Out of Memory
