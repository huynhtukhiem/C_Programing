// Các cách khai báo mảng tĩnh

#include<stdio.h>

int main(){
    // Cách 1: // Mảng tĩnh có giá trị của phần tử cố định
    int a[5] = {1,2,3,4,5}; 
    for(int i = 0; i < 5; i++){
        printf("%d ", a[i]); // In các phần tử trong mảng a
    }
    
    // Cách 2: Mảng tĩnh với giá trị của phần tử do người dùng nhập
    int b[5];
    for(int i = 0; i < 5; i++){
        printf("Nhap gia tri cua phan tu %d trong mang b: ",i);
        scanf("%d", &b[i]);
    }
    for(int i = 0; i < 5; i++){
        printf("%d ", b[i]); // In các phần tử trong mảng b
    }

    // Cách 3: Dùng hàm con để khai báo mảng tĩnh => không hiệu quả 
    return 0;
}
