# Bản chất của hàm (function) trong lập trình C
Ta đều biết rằng hàm là một khối lệnh (tập hợp các dòng lệnh) được đặt tên, hàm có đầu vào là các tham số, đầu ra. Ý nghĩa lớn nhất của hàm là tái sử dụng đoạn code để tránh viết đi viết lại các đoạn code trùng nhau. 

Ví dụ đơn giản nhất ta khai báo một hàm cộng 2 số nguyên:
```
#include<stdio.h>
int Tong(int a, int b){
  return a+b;
}
int main(){
  int x = 10, y = 20;
  printf("%d", Tong(x,y)); // Truyền tham số đầu vào
}
```
Kết quả: `30`

Vậy trong máy tính, chuyện gì sẽ xảy ra?
  - Máy tính sẽ biên dịch các dòng lệnh bên trong hàm "Tong" thành đoạn mã máy
  - "Tong" được máy tính gán một địa chỉ ví dụ 0x100321 (giống với một biến, khi khai báo thì biến cũng được gán một địa chỉ)
  - Khi ta gọi hàm thì CPU sẽ di chuyển đến địa chỉ của "Tong", trước khi di chuyển nếu hàm có tham số thì CPU sẽ copy giá trị của tham số vào một cái vùng nhớ gì đó tùy từng máy
Trước khi gọi hàm, biến x = 10 và y = 20 đang nằm trong RAM


