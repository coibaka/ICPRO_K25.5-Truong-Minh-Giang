## Thực hành gỡ lỗi bộ nhớ với GDB
> Viết một chương trình C có khả năng tái hiện **ba lỗi bộ nhớ kinh điển**: `Stack Overflow`, `Memory Leak`, và `Out of Memory`. Sau đó, sử dụng trình gỡ lỗi `GDB` để phân tích, tìm ra nguyên nhân gốc rễ của từng lỗi. 
### 1. Yêu cầu chung
#### 1.1 Viết một chương trình C duy nhất `memory_lab.c`.
#### 1.2 Chương trình nhận một tham số dòng lệnh để chọn lỗi cần tái hiện.

| <center>parameters</center>     | <center>error</center>     |
| ------------------------------- | -------------------------- |
| ``./memory_lab stack_overflow`` | Gây ra lỗi Stack Overflow. |
| ``./memory_lab memory_leak``    | Gây ra lỗi Memory Leak.    |
| ``./memory_lab out_of_memory``  | Gây ra lỗi Out of Memory.  |

 
