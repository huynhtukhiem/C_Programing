// Bài toán: Sử dụng hàm để thay đổi giá trị điểm trung bình (score) của Sinh viên trong hàm main

// Khai báo thư viện cần dùng
#include<stdio.h>
#include<stdlib.h>

// Khai báo struct Sinhvien
typedef struct{
    char name[20];
    int age;
    float score;
}Sinhvien;

// Hàm thay đổi thông tin trong struct
float Diem(Sinhvien *sv, float Diem_moi){
    // Sử dụng con trỏ là để thay đổi giá trị trong hàm main
    // Nếu không dùng con trỏ thì chỉ thay đổi bản sao trong hàm Diem
    sv->score = Diem_moi;
    // Dùng -> để truy cập thành phần của struct thông qua con trỏ
}
// Hàm in thông tin các thành phần: Tên và tuổi trong struct
void In(Sinhvien sv){
    printf("Ten sinh vien: %s\n", sv.name);
    printf("Tuoi sinh vien: %d\n", sv.age);
}

int main(){
    Sinhvien sv = {"Huynh Tu Khiem", 19, 2.0};
    float Diem_moi;
    In(sv);

    printf("Diem ban dau: %.2f \n", sv.score);

    printf("Nhap diem moi: ");
    scanf("%f", &Diem_moi);
    Diem(&sv, Diem_moi); // Toán tử & để truy cập vào dữ liệu trong địa chỉ gốc

    printf("Diem luc sau: %.2f\n", sv.score);
    return 0;
}
