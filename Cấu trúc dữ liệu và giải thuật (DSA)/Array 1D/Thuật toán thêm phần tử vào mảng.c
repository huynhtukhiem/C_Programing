#include<stdio.h>
#include<stdlib.h>
#include<windows.h> 
int main(){
    SetConsoleOutputCP(65001); // In ra tiếng việt
    int n;
    printf("Nhập kích thước danh sách liên kết: ");
    scanf("%d", &n);
    int *a = (int *)malloc(n * sizeof(int));
    if(a == NULL){
        printf("Loi bo nho!");
        exit(1);
    }

    // Gán giá trị cho các phần tử ban đầu
    for(int i = 0; i < n; i++){
        printf("Nhap phan tu thu %d: ", i+1);
        scanf("%d", &a[i]);
    }

    int old_size = n;
    // In ra mảng ban đầu
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }

    // Thêm kích thước cho mảng
    int m;
    printf("\nNhập số phần tử cần thêm vào mảng: ");
    scanf("%d", &m);
    int new_size = old_size + m;
    a = (int *)realloc(a, new_size * sizeof(int));

    // Gán giá trị cho các phần tử mới
    for(int i = old_size; i < new_size; i++){
        printf("Nhập phần tử thứ %d: ", i+1);
        scanf("%d", &a[i]);
    }

    // In ra mảng lúc sau
    for(int i = 0; i < new_size; i++){
        printf("%d ", a[i]);
    }
    free(a);
    return 0;
}
