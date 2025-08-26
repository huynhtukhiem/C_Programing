// Tạo một array 1D theo cách đơn giản và thông dụng (mảng tĩnh)
#include<stdio.h>
void Nhapmang(int n, int a[]){
    for(int i = 0; i < n; i++){
        printf("Nhap phan tu thu %d: ", i+1);
        scanf("%d", &a[i]);
    }
}
void Inmang(int n, int a[]){
    for(int i = 0; i< n; i++){
        printf("%d ", a[i]);
    }
}

int main(){
    int n;
    printf("Nhap kich thuoc mang: ");
    scanf("%d", &n);
    int a[n];
    Nhapmang(n,a);
    Inmang(n,a);
}
