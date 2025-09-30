// Các cách khai báo mảng tĩnh kết hợp sử dụng con trỏ
#include<stdio.h>

int main(){
    // Cách 1: // Mảng tĩnh có giá trị của phần tử cố định
    int a[5] = {1,2,3,4,5}; 
    int *p = a; // con trỏ p đang trỏ tới phần tử đầu tiên trong mảng a
    for(int i = 0; i < 5; i++){
        printf("%d ", *(p+i)); // In các phần tử trong mảng a bằng con trỏ
    }
    
    // Cách 2: Mảng tĩnh với giá trị của phần tử do người dùng nhập
    int b[5];
    int *p1 = b; // Con trỏ p1 đang trỏ tới phần tử đầu tiên trong mảng b  
    for(int i = 0; i < 5; i++){
        printf("Nhap gia tri cua phan tu %d trong mang b: ",i);
        scanf("%d", &*(p1 + i)); // Nhập các phần tử
    }
    for(int i = 0; i < 5; i++){
        printf("%d ", *(p1 + i)); // In các phần tử trong mảng b bằng con trỏ
    }

    // Cách 3: Dùng hàm con để khai báo mảng tĩnh => không hiệu quả 

    return 0;
}
