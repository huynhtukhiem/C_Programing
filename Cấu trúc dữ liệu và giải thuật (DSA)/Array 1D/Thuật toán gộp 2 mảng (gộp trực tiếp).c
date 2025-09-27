/*
Tiến hành gộp 2 mảng khác nhau thành một
VD: a = {1,2,3,4,5};
b = {1,2,3};
=> c = {1,2,3,4,5,1,2,3};
Ý tưởng: copy toàn bộ phần tử trong a vào c. Sau đó copy toàn bộ phần tử b nối tiếp vào c
*/

#include<stdio.h>
void Gop_mang(int a[], int size_a, int b[], int size_b, int c[]){
    // Copy mảng a vào c
    for(int i = 0; i < size_a; i++){
        c[i] = a[i];
    }
    // Cpoy tiếp mảng b vào c nhưng ở chỉ số tiếp theo
     for(int i = 0; i < size_b; i++){
        c[size_a + i] = b[i];
    }
}
int main(){
    int a[] = {1,2,3,4,5};
    int b[] = {6,7,8};
    int size_a = sizeof(a) / sizeof(a[0]); // Kết quả chính là số phần tử của mảng a
    int size_b = sizeof(b) / sizeof(b[0]); // Kết quả chính là số phần tử của mảng b
    int size_c = size_a + size_b; // Kích thước của mảng c
    int c[size_c];
    Gop_mang(a, size_a, b, size_b, c);
    printf("Mang sau khi gop la: ");
    for(int i = 0; i < size_c; ++i){
        printf("%d ", c[i]);
    }
    return 0;

}
