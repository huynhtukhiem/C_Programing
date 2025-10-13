# Phân biệt giữa mảng động và mãng biến thiên trong C
Nếu không nhìn vào code, ta khó có thể phân biệt đâu là mảng động đâu là mảng biến thiên (VLA). Thậm chí kể cả khi nhìn vào code ta cũng khó phân biệt được sự khác nhau giữa 2 loại mảng này.

# Sự khác biệt
Mảng biến thiên về cơ bản là không thể mở rộng trong quá trình chương trình đang chạy. Chúng ta có thể thấy rằng nó có thể mở rộng là bởi vì ta tạo một mảng có kích thước mới sau đó copy mảng cũ vào mảng đó. Ví dụ
```
int n = 5; // Kích thước mảng
int a[n]; // Mảng có kích thước ban đầu là 5
for(int i = 0; i < n; i++){
  a[i] += 5;
}

int m = n + 2; // kích thước mảng mới
int b[m]; // mảng mới
for(int i = 0; i < m; i++){
  b[i] = a[i]; // Copy mảng a vào mảng b
}
```
=> Có nghĩa là chúng ta không thể thêm trực tiếp vào mảng a trong lúc chương trình đang chạy mà phải dùng một mảng b mới

Mảng động có thể thay đổi trục tiếp kích thước mảng a ngay cả khi chương trình chạy
```
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n = 5;
    int *a = (int *)malloc(n * sizeof(int)); // Cấp phát động
    for(int i = 0 ; i < n; i++){
        a[i] = i + 10; // Gán giá trị
    }
    printf("Mang ban dau: ");
    for(int i = 0 ; i < n; i++){
        printf("%d ", a[i]);
    }

    int m = n;
    n = n + 5;
    a = (int *)realloc(a, n * sizeof(int));
    printf("\nDa thay doi kich thuoc mang: \n");
    for(int i = m; i < n; i++){
        a[i] = 21; // Gán giá trị cho các phần tử mới thêm vào mảng a đều là 1
    }

    printf("Mang luc sau: ");
    for(int i = 0 ; i < n; i++){
        printf("%d ", a[i]);
    }

    free(a); // Giải phóng bộ nhớ
    return 0;
```
=> Như vậy ta có thể thay đổi trực tiếp trên mảng a mà không cần phải tạo thêm một mảng mới

