/*
// Khai báo 2 con trỏ
// In ra địa chỉ, giá trị tại địa chỉ của con trỏ đó
// Thay đổi giá trị của biến thông qua con trỏ (không dùng hàm)
// Tính toán 2 biến bằng con trỏ
*/
#include<stdio.h>
int main(){
    int a = 99;
    float b = 50;
    int *p = &a; // Khai báo con trỏ trỏ đến biến a
    float *q = &b;
    printf("Dia chi cua bien a: %p\n", &a); // Dia chi cua bien a
    printf("Dia chi cua con tro: %p\n", p); // In ra dia chi cua con tro = Dia chi cua bien a

    printf("Gia tri cua bien a: %d\n", a);
    printf("Gia tri tai dia chi cua con tro: %d\n", *p); // Giá trị tại địa chỉ = giá trị của biến mà con trỏ trỏ tới
    
    *p = a + 1; // Thay đổi giá trị của biến mà con trỏ trỏ tới (không dùng hàm)
    printf("Gia tri tai dia chi cua con tro luc sau: %d\n", *p);
    
    // Tính toán giá trị thông qua con trỏ
    int sum = *p + *q;
    printf("a - b = %d", sum);
    return 0;
}
