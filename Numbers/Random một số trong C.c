// In ra một số từ 0 -> RAND_MAX (32767)
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h> // thư viện để in tiếng việt

int main(){
    SetConsoleOutputCP(65001); // Cái này để in ra tiếng việt trong màn hình console
    srand(time(NULL)); // Khởi tạo seed dựa vào thời gian thực (dùng trong random)
    int num = rand(); // Tạo số ngẫu nhiên từ 0 -> 32767
    printf("%d", num);
    return 0;
}
