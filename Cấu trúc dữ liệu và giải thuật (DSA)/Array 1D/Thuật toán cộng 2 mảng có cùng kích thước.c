// Thuật toán cộng 2 mảng có cùng kích thước
#include<stdio.h>
int main(){
    int n;
    printf("Nhap kich thuoc mang: "); scanf("%d", &n);
    int a[n], b[n], c[n];
    printf("Nhap phan tu mang a: \n");
    for(int i = 0; i < n; i++){
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &a[i]);
    }

    printf("Nhap phan tu mang b: \n");
    for(int i = 0; i < n; i++){
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &b[i]);
    }
    for(int i = 0; i < n; i++){
        c[i] = a[i] + b[i];
    }
    printf("Mang c: ");
    for(int i = 0; i < n; i++){
        printf("%d ", c[i]);
    }
    return 0;
}
