// Thuật toán cộng 2 mảng có kích thước khác nhau
#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[] = {1,2,3,4};
    int size_a = sizeof(a) / sizeof(a[0]); // Lấy kích thước mảng a
    int b[] = {1,2,3};
    int size_b = sizeof(b) / sizeof(b[0]); // Lấy kích thước mảng b 

    int size_c; // Kích thước của mảng c
    // Nếu mảng nào có kích thước lớn hơn thì kích thước của mảng c chính là mảng đó
    if(size_a > size_b){
        size_c = size_a;
    }
    else if(size_a < size_b){
        size_c = size_b;
    }
    // Hoặc đơn giản có thể dùng toán tử 3 ngôi: int size_c = (size_a > size_b) ? size_a : size b;
    int c[size_c]; // Khai báo mảng c với kích thước là kích thước của mảng lớn hơn mảng còn lại
    
    for(int i = 0; i < size_c; i++){
        if(i < size_a && i < size_b){ // Cộng 2 phần tử ở cùng chỉ số trong mảng a và b
            c[i] = a[i] + b[i]; 
        }
        else if(i < size_a){ // Nếu mảng a có kích thước lớn hơn => lấy phần tử ở chỉ số lớn hơn đó
            c[i] = a[i];
        }
        else if(i < size_b){ // Tương tự với mảng b
            c[i] = b[i];
        }
    }
    
    for(int i = 0; i < size_c; i++){
        printf("%d ",c[i]);
    }
    return 0;
}
