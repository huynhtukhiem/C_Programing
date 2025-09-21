#include<stdio.h>
/// Hàm nhập phần tử của mảng 
void Nhapmang(int n, int a[]){
    for(int i = 0; i < n; i++){
        printf("Nhap phan tu thu %d cua mang: ", i+1);
        scanf("%d", &a[i]);
    }
}
// Hàm in ra phần tử của mảng
void Inmang(int n, int a[]){
    printf("Mang: ");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}
// Hàm tìm phần tử lớn nhất và nhỏ nhất của mảng
void Tim_MAXMIN(int n, int a[]){
    int max = a[0];
    int min = a[0];
    for(int i = 0; i < n; i++){
        if(a[i] > max){
            max = a[i];
        }
        if(a[i] < min){
            min = a[i];
        }
    }
    printf("%d %d", max, min);
}
int main(){
    int n;
    printf("Nhap kich thuoc mang: ");
    scanf("%d", &n);
    int a[n]; // Khai báo mảng tĩnh với kích thước cố định
    Nhapmang(n,a);
    Inmang(n,a);
    printf("Phan tu lon nhat va nho nhat trong mang la: ");
    Tim_MAXMIN(n,a);
}
