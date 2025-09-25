#include<stdio.h>
// Cách 1: Khai báo bình thường
struct Sinhvien{
    int age;
    float score;
    char gender;
    char name[20];
}; // Lúc này Sinhvien chính là một kiểu dữ liệu giống như int hay float hay char....

// Cách 2 dùng typedef để đơn giản hơn
typedef struct{
    int age;
    char gender;
}Hocsinh;

int main(){
     // Ta có gán giá trị vào từng biến thành phần cho struct bằng 2 cách sau
    struct Sinhvien sv = {19, 4.0, 'M', "Huynh Tu Khiem"}; // sv là tên biến có kiểu dữ liệu là Sinhvien Giống như int sv hay là float sv
    Hocsinh hs; // Lúc này khi đã dùng typedef thì ta không cần viết struct nữa
    hs.age = 19;
    hs.gender = 'M';

    // Truy cập vào giá trị của biến thành phần trong struct bằng cách sau:
    printf("Tuoi cua sinh vien: %d \n", sv.age);
    printf("Diem cua sinh vien: %.2f \n", sv.score);
    printf("Gioi tinh cua sinh vien: %c \n", sv.gender);

    // Ta cũng có thể thay đổi giá trị của biến thành phần
    sv.score = 3.9;
    printf("Diem cua sinh vien: %.2f \n", sv.score);


    return 0;
}
