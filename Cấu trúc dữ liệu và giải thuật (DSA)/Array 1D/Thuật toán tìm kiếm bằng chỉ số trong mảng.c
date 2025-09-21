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

// Hàm tìm kiếm bằng chỉ số trong mảng
void Timkiem(int n, int a[], int index){
    if(index < n && index >= 0){ // Vị trí cần tìm phải nằm trong mảng
        printf("Phan tu tai vi tri %d la: %d", index, a[index]);
    }
    else{ // Nếu ko thì trả về lỗi
        printf("Chi so khong hop le!!");
    }

}

int main() {
    int n;
    printf("Nhap kich thuoc mang: ");
    scanf("%d", &n);
    int a[n]; // Giới hạn kích thước

    Nhapmang(n, a);
    printf("Mang ban dau: ");
    Inmang(n, a);
    

    int index;
    printf("Nhap vi tri can tim trong mang: ");
    scanf("%d", &index);
    Timkiem(n,a, index);



    return 0;
}
