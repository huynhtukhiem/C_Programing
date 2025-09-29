// Dùng hàm không có con trỏ và con trỏ để thấy sự khác biệt của việc dùng con trỏ và không dùng con trỏ (truyền tham số bằng giá trị hoặc conn trỏ)
/*
Thay đổi giá trị của một biến
Đổi giá trị của 2 biến
Tính toán 2 biến
*/

// Bài 1: Thay đổi giá trị 1 biến
#include<stdio.h>
// Truyền hàm bằng giá trị => chỉ làm việc với bản sao
int Thay_doi(int n){
    n = n + 1;
    return n; // Trả về giá trị của bản sao khi truyền vào
}
// Truyền hàm bằng con trỏ => Thay đổi trực tiếp bản gốc
int Thay_doi1(int *n){
    *n = *n + 1;
    return *n; // Trả về giá trị mới của tham số
}
int main(){
    int a = 10;
    int *p = &a;
    printf("%d\n", Thay_doi(a)); // Kết quả: 11, nhưng a gốc không đổi
    printf("%d\n", a); // Giá trị gốc của a là 10

    printf("%d\n",Thay_doi1(p)); // Kết quả: 11, a cũng thay đổi (Cũng có thể ghi Thay_doi(&a);) 
    printf("%d\n", a); // a gốc bây giờ = 11

    return 0;
}

// Bài 2: Hoán đổi 2 số
#include<stdio.h>
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}
void swap1(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a = 10;
    int b = 20;
    printf("Gia tri ban dau cua a: %d\n", a);
    printf("Gia tri ban dau cua b: %d\n", b);
    
    printf("Hoan doi khong dung con tro: \n"); // Không dùng con trỏ để hoán đổi
    swap(a,b);
    printf("Gia tri luc sau cua a: %d\n", a);
    printf("Gia tri luc sau cua b: %d\n", b);
    
    printf("Hoan doi su dung con tro: \n"); // Dùng con trỏ để hoán đổi
    swap1(&a, &b);
    printf("Gia tri luc sau cua a: %d\n", a);
    printf("Gia tri luc sau cua b: %d\n", b);



    return 0;
}
