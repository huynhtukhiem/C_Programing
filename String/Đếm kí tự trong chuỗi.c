// Đếm các kí tự trong chuỗi
#include<stdio.h>
#include<string.h>
// Cách 3: Tự viết hàm đếm chuỗi kí tự, có thể tái sử dụng sau này
int Dem_ki_tu(const char str[]){
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++){
        count++;
    }
    return count;
}
int main(){
    char name[] = "Khiem";
    // Cách 1: dùng hàm strlen trong thư viện string.h
    int do_dai = strlen(name);
    int count = 0;
    printf("So ki tu trong chuoi: %d",do_dai);
    printf("\n");
    // Kết quả là 5 vì hàm strlen không tính kí tự NULL '\0'
    
    // Cách 2: dùng vòng lặp for, không tính kí tự NULL
    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }
    printf("So ki tu trong chuoi: %d", count);
    printf("\n");

    // Cách 3: Dùng hàm tự viết để tái sử dụng, không tính kí tự NULL
    printf("So ki tu trong chuoi: %d", Dem_ki_tu(name));
    printf("\n");
  
    // Cách 4: dùng vòng lặp while và đếm cả kí tự NULL
    while(1){
        count++;
        if (name[count - 1] == '\0') break; // Đêm cả kí tự NULL
    }
    printf("So ki tu trong chuoi: %d", count);
    return 0;
}
