// Khai báo một con trỏ trỏ đến một biến và in ra các thành phần của con trỏ đó
#include<stdio.h>
#include<windows.h> // Thư viện in ra tiếng việt

int main(){
    SetConsoleOutputCP(65001); // In ra tiếng việt có dấu
    SetConsoleCP(65001); // In ra tiếng việt có dấu
    
    int x = 10; // Khai báo một biến
    printf("Giá trị của biến x: %d\n", x);// Giá trị của biến
    printf("Địa chỉ của biến x trong máy (thập phân): %d\n",&x); // In địa chỉ của biến
    printf("Địa chỉ của biến x trong máy (thập lục phân): %p\n",&x);// In địa chỉ của biến
    printf("--------------------------------------------------\n");
    
    // Khai báo con trỏ trỏ đến biến x (nhiều cách)
    int *p = &x; // Cách vừa khai báo vừa gán (thông dụng nhất)
    /*
      Giá trị của con trỏ = Địa chỉ của biến
      Giá trị tại địa chỉ của con trỏ = Giá trị của biến
    */
    printf("Giá trị của con trỏ (thập lục phân): %p\n", p); // In địa chỉ biến mà con trỏ trỏ tới
    printf("Giá trị tại địa chỉ của con trỏ: %d\n", *p); // In giá trị của biến
    
  return 0;
}
