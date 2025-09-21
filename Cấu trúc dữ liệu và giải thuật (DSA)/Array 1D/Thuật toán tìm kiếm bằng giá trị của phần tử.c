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
    int found = 0; // Đặt cờ đánh dấu số phần tử tìm được
    for(int i = 0; i < n; i++){
        if(index == a[i]){
            printf("Gia tri %d xuat hien o vi tri %d trong mang\n",index, i);
            found++; // Đánh dấu là tìm thấy tại 1 vị trí
        }
    }
    if(found == 0){ 
        printf("Khong tim thay phan tu %d trong mang!!!", index);
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
    printf("Nhap gia tri can tim trong mang: ");
    scanf("%d", &index);
    Timkiem(n,a,index);



    return 0;
}
