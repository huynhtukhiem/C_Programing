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

void In_mang(int a[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
}
int main(){
    int a[] = {4,2,5,6,2,3,1};
    int n = sizeof(a) / sizeof(a[0]);
    printf("Mang ban dau la: ");
    In_mang(a, n);

    printf("Mang sau khi sap xep: ");
    Selection_sort(a,n);
    In_mang(a,n);
    return 0;
}
