// In ra các kí tự trong chuỗi name
#include<stdio.h>
int main(){
    char name[] = "Khiem";
    // K h i e m \0
    // 1 2 3 4 5 6
    // Cách 1: dùng vòng lặp for với '\0' là kí tự NULL 
    for(int i = 0; name[i] != '\0'; i++){
        printf("%c ", name[i]); 
    }
    printf("\n");
    // Cách 2: dùng con trỏ
    char *p = name; // con trỏ p trỏ vào phần tử đầu tiên trong chuỗi
    while(*p != '\0'){
        printf("%c ", *p); // in ra kí tự mà con trỏ p đang trỏ tới
        p++; // Dịch con trỏ lên một đơn vị
    }
    return 0;
}
