/*
Gộp 2 mảng vào thành một mảng và xóa hết các phần tử trùng, đồng thời sắp xếp tăng dần
Ý tưởng: Xóa phần tử đồng nghĩa với chỉnh lại kích thước mảng
Cách 1: gộp 2 mảng như bình thường => sắp xếp => xóa phần tử nếu trùng (dễ)
Cách 2: gộp 2 mảng => xóa trùng => sắp xếp (khó hơn)
         
*/
#include<stdio.h>
void Selection_sort(int a[], int n){
    for(int i = 0; i < n - 1; i++){
        int min = i;
        for(int j = i + 1; j < n; j++){
            if(a[min] > a[j]){
                min = j;
            }
        }
        // Hoán đổi a[i] và a[min]
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    
}
void Gop_mang(int a[], int size_a, int b[], int size_b, int c[]){
    // Copy a vào c
    for(int i = 0; i < size_a; i++){
        c[i] = a[i];
    }
    // copy nối tiếp b vào c
    for(int i = 0; i < size_b; i++){
        c[size_a + i] = b[i];
    }
}
void In_mang(int a[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}
int  Xoa_phan_tu_trung(int a[], int n){
   int k = 0; // Kích thước của mảng mới sau khi xóa phần tử trùng
   for(int i = 0; i < n; i++){
        if(i == 0 || a[i] != a[i-1]){
            //Khi i = 0 (phần tử đầu tiên trong mảng) Luôn giữ lại phần tử này, vì nó chắc chắn là phần tử đầu tiên và không có gì để so sánh trước nó.
            //Khi i > 0, ta so sánh phần tử hiện tại a[i] với phần tử ngay trước đó a[i-1].
            // Nếu khác nhau → đây là một phần tử mới → giữ lại.
            // Nếu bằng nhau → đây là phần tử trùng → bỏ qua.
            a[k++] = a[i];
        }
   }
   return k; // Trả về kích thước của mảng
}


int main(){ 
    int a[] = {1,3,2,3,5,4};
    int b[] = {3,4,1,2,3,5,6};
    int size_a = sizeof(a) / sizeof(a[0]);
    int size_b = sizeof(b) / sizeof(b[0]);
    int size_c = size_a + size_b;
    int c[size_c];
    Gop_mang(a,size_a,b,size_b,c);
    Selection_sort(c, size_c);
    printf("Mang sau khi sap xep: ");
    In_mang(c,size_c);
  
    printf("Mang sau khi xoa phan tu trung: ");
    size_c = Xoa_phan_tu_trung(c,size_c);
    In_mang(c,size_c);
    return 0;
}
