    #include<stdio.h>
    struct Address{
        int so_nha;
        char street[10];
        char district[20];
        char city[10];
    };
    struct Sinhvien{
        int age;
        float score;
        char name[20];
        struct Address ar; // Đây là tên biến kiểu Address, ta phải khai báo trong đây 
    };


    int main(){
        struct Sinhvien sv = {19, 3.9, "Huynh Tu Khiem",{14, "Tu Cuong", "Phuong Tan Son Nhat", "TP.HCM"}};
        printf("Thong tin sinh vien\n");
        printf("Ten sinh vien: %s\n", sv.name);
        printf("Dia chi: %d, %s, %s, %s", sv.ar.so_nha , sv.ar.street, sv.ar.district , sv.ar.city);   
        return 0;
    }
