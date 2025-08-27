#include <stdio.h>
void tang1(int n){ // Khi khai báo biến trong hàm thì cũng được cấp phát tại địa chỉ trong RAM, giả sử n 0x101 
    n = n + 1;  
    // n nhận giá trị sao chép từ biến gốc (ví dụ ở đây là a = 10)
    // Tăng giá trị của n lên 1, chỉ ảnh hưởng đến bản sao n mà không ảnh hưởng đến a
    // Sau khi hàm kết thúc, n bị hủy, biến gốc không thay đổi
}


// - Thay đổi giá trị tại địa chỉ mà n trỏ tới sẽ ảnh hưởng trực tiếp đến biến gốc
void tang2(int *n){ // Tham số n lúc này là một con trỏ, nó lưu địa chỉ của biến gốc (a 0x100)
    // Toán tử *n truy cập giá trị tại địa chỉ 0x100 (giá trị của a)
    *n = *n + 1; // Tăng giá trị tại địa chỉ 0x100 lên 1
    // Vì thao tác trực tiếp trên địa chỉ của biến gốc, giá trị của biến gốc sẽ thay đổi
}

int main() {
    int a = 10; // Giả sử a được cấp phát tại địa chỉ 0x100 trong RAM
    tang1(a);
    // n là một biến cục bộ trong tang1, có địa chỉ riêng (giả sử 0x101)
    // Thay đổi n trong tang1 không ảnh hưởng đến a
    printf("Khong su dung con tro: %d\n", a); // Kết quả là 10

    tang2(&a);
    // &a trả về địa chỉ của a (0x100), được gán cho con trỏ n trong tang2
    // Trong tang2, *n truy cập và thay đổi giá trị tại địa chỉ 0x100
    // Do đó n thay đổi thì a được tăng từ 10 lên 11
    printf("Su dung con tro: %d\n", a); // Kết quả là 11
    return 0;
}
