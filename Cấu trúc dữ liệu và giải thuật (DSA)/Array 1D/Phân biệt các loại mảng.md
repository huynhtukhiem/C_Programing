# Có 3 loại mảng chính trong C gồm:
 - Mảng tĩnh
 - Mảng biến thiên
 - Mảng cấp phát động

Mỗi loại sẽ có đặc điểm và cách dùng khác nhau tùy trường hợp
# Mảng tĩnh
Mảng có kích thước cố định được khai báo khi biên dịch, TRƯỚC KHI CHƯƠNG TRÌNH CHẠY

`int a[5] = {1,2,3,4,5};` mảng a có kích thước là 5 phần tử

=> Ưu điểm: Truy cập nhanh, code dễ dàng,..

=> Nhược điểm: Không linh hoạt, nếu sau này cần thay đổi kích thước mảng thì khó khăn , nếu vượt quá phạm vi mảng có thể gây ra

=> Cách dùng: 

# Mảng biến thiên (Variable Length Array)
Mảng có kích thước biến thiên TRONG KHI CHƯƠNG TRÌNH ĐANG CHẠY (nó sẽ có kích thước xác định khi chương trình đang), không thể thay đổi kích thước khi chương trình đang chạy
```
int n;
printf("Nhập kích thước của mảng: ");
scanf("%d", &n);
int a[n];
```
=> Ưu điểm: 
- Kích thước mảng có thể thay đổi trong khi chạy chương trình, không cần phải biết trước khi biên dịch.
- Code dễ dàng
- Bộ nhớ nằm trên stack, khi thoát khỏi hàm sẽ tự giải phóng mà không cần phải làm thủ công

=> Nhược điểm: Không thể thay đổi kích thước sau khi khai báo
```
int n = 5;
int a[n]; // mảng a có 5 phần tử
n = 10; // mảng a vẫn có 5 phần tử
```
Nếu muốn một mảng lớn hơn, bạn phải khai báo một mảng biến thiên mới với kích thước khác
```
int m = 10;
int a[m];
```
=> VLA chỉ linh hoạt khi khởi tạo nhưng nó lại cố định trong suốt quá trình chạy chương 

=> Cách dùng:

# Mảng động 
Mảng động là mảng có kích thước xác định TRONG KHI CHƯƠNG TRÌNH ĐANG CHẠY, có thể thay đổi kích thước trong khi chạy chương trình.
```
#include<stdio.h>
#include<stdlib.h>  
int main(){
    int n;
    printf("Nhap kich thuoc cua mang: ");
    scanf("%d", &n);

    // Cấp phát mảng động
    int *a = (int *)malloc(n * sizeof(int));
    
    // Gán giá trị cho phần tử
    for(int i = 0; i < n; i++){
        a[i] = i * 10;
    }
    
    // In mảng
    printf("Mang ban dau: ");
    for(int i = 0 ; i < n; i++){
        printf("%d ", a[i]);
    }
    
    // Thay đổi kích thước
    int new;
    printf("Nhap kich thuoc moi cua mang: ");
    scanf("%d", &new);
    a = (int *)realloc(a, new * sizeof(int));

    //Gán giá trị cho phần tử mới
    for(int i = n; i < new; i++){
        a[i] = i*10;
    }

    // In mảng
    printf("Mang ban dau: ");
    for(int i = 0 ; i < new; i++){
        printf("%d ", a[i]);
    }

    free(a); // Giải phóng bộ nhớ
}
```
=> Ưu điểm: Kích thước linh hoạt
=> Nhược điểm: Trong C, Code khá rườm ra vì phải quản lí bộ nhớ thủ công
=> Cách dùng: 
