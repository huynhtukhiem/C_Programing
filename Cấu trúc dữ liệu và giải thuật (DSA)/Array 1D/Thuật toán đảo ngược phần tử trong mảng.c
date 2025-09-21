#include <stdio.h>

// Hàm nhập mảng
void Nhapmang(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }
}
// Hàm in mảng
void Inmang(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

// Hàm đảo ngược mảng (thuật toán tối ưu nhất)
void ReverseArray(int n, int a[n]){
    for(int i = 0; i < n / 2; i++){
        int temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 -i] = temp;
    }
}



int main() {
    int n;
    printf("Nhap kich thuoc mang: ");
    scanf("%d", &n);
    int a[n]; // Khai báo mảng tĩnh

    Nhapmang(n, a);
    printf("Mang ban dau: ");
    Inmang(n, a);
    
    ReverseArray(n,a);
    printf("Mang sau khi dao nguoc: ");
    Inmang(n,a);



    return 0;
}
