// Dùng hàm không có con trỏ và con trỏ để thấy sự khác biệt của việc dùng con trỏ và không dùng con trỏ
/*
Thay đổi giá trị của một biến
Đổi giá trị của 2 biến
Tính toán 2 biến
*/
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

    printf("%d\n",Thay_doi1(p)); // Kết quả: 11, a cũng thay đổi 
    printf("%d\n", a); // a gốc bây giờ = 11

    return 0;
}
