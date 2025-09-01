// Sử dụng function để tính toán các phần tử trong mảng 1 chiều
#include<stdio.h>
void Nhapmang(int n, int a[]){
    for(int i = 0; i < n; i++){
        printf("Nhap phan tu thu %d: ", i+1);
        scanf("%d", &a[i]);
    }
}
void Inmang(int n, int a[]){
    printf("Mang ban dau la: ");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}
int Tinh_tong(int n, int a[]){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += a[i];
    }
    return sum;
}
int Tinh_tich(int n, int a[]){
    int multi = 1;
    for(int i = 0; i < n; i++){
        multi *= a[i];
    }
    return multi;
}
int main(){
    int n;
    printf("Nhap kich thuoc mang: ");
    scanf("%d", &n);
    int a[n];
    Nhapmang(n,a);
    Inmang(n,a);
    printf("Tong cac phan tu trong mang: %d\n", Tinh_tong(n,a));
    printf("Tich cac phan tu trong mang: %d\n", Tinh_tich(n,a));
    return 0;
}
