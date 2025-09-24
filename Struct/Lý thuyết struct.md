# Struct là gì?
Chúng ta có thể hiểu đơn giản như sau: Struct là một kiểu dữ liệu. Kiểu dữ liệu này cho phép nhóm các biến có các kiểu dữ liệu khác nhau lại thành một đơn vị.

VD: Mảng là tập hợp các biến có cùng kiểu dữ liệu
`a[5] = {1,2,3,4,5};` 1,2,3,4,5 đều là kiểu dữ liệu 

`b[5] = {'a', 'b','c' ,'d' ,'e'};` a,b,c,d,e, đều là kiểu dữ liệu char

Ta biết rằng một biến có thể bao gồm nhiều biến thành phần của nó, thay vì phải khai báo nhiều biến riêng lẻ, struct dùng để nhóm các biến thành phần đó lại thành một tập hợp để dễ dàng quản lí hơn. Ví dụ ta khai báo biến struct liên quan đến sinh viên như sau:
```
struct Sinh_vien{
  int age; // Tuổi 
  char gender; // Giới tính
  string name[20]; // Tên
  float score; // Điểm
};
```
Lúc này ta có thể hiểu như sau: `struct Sinh_vien{int age, char gender, string name, float score};` `struct Sinh_vien{19, 'M', "Huynh Tu Khiem", 4.00};`

Như vậy struct về vơ bản cũng chỉ là một loại kiểu dữ liệu do ta định nghĩa và struct có thể tập hợp các kiểu dữ liệu khác thành một đơn vị logic

# Cách dùng struct

