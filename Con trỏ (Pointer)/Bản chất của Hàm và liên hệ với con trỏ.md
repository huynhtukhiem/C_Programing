# Hàm thật sự là gì trong C, mối liên hệ của nó với con trỏ
 - Function + Pointer gần như là chủ đề nhức đầu nhất trong C, hiểu được, nắm rõ được phần này thì gần như đã giải quyết được rất nhiều bài toán khó (linked list,......)
 - Cách mà hàm hoạt động
 - Bản sao và bản gốc là gì?
# Hàm là gì?
Theo lí thuyết, hàm là một khối lệnh có tên được định nghĩa để làm một nhiệm vụ cụ thể. Hàm giúp ta tái sử dụng những khối lệnh có tính lặp lại, quản lí code dễ hơn,...

 Ta cũng có thể hiểu như sau, 
Hàm là một công thức nấu ăn, trong đó:
 - Tham số đầu vào <=> Nguyên liệu nấu ăn
 - Khối lệnh bên trong <=> Quy trình chế biến
 - Kết quả trả về hoặc không trả về gì cả <=> Một món ăn hoặc không có món ăn nào

VD đơn giản: Hàm tính tổng 2 số nguyên
```
int Tinh_tong(int a, int b){ // Công thức nấu ăn 
    int sum =  a + b; // Quy trình chế biến
    return sum; Kết quả trả về
}
```
Khi bạn gọi hàm -> truyền tham số -> kết quả cũng giống việc gọi đầu bếp -> đưa nguyên liệu -> món ăn.
# Cách hàm vận hành trong máy tính
Bước 1: Gọi hàm

 - Ta viết code về hàm Tinh_tong như sau:

```
int Tinh_tong(int a, int b){ 
    int sum =  a + b;
    return sum;
}
```
 - Sau khi ta ấn biên dịch, máy tính sẽ chuyển hàm `Tinh_tong` thành một đoạn mã máy có địa chỉ cụ thể trong chương trình.


 - Khi ta gọi hàm (truyền tham số) ví dụ: `Tinh_tong(3,5);` Lúc này máy tính sẽ dừng lại tại vị trí này trong `main` Sau đó nó di chuyển đến địa chỉ chứa hàm `Tinh_tong`

 - Địa chỉ của lệnh gọi hàm (trong `main`) được lưu lại để chương trình biết quay về đâu sau khi hàm hoàn thành.

Bước 2: Tạo không gian bộ nhớ (stack frame)
 - Khi ta gọi một hàm (như `tinhTong(3, 5)`), chương trình cần một chỗ để lưu thông tin của hàm đó. Chỗ này gọi là stack frame, giống như một tờ giấy ghi chú nhỏ trong bộ nhớ (gọi là stack). 
  
 - Stack Frame chứa gì:
   -  Thông tin đầu vào (tham số): Như a = 3, b = 5.
   - Biến trong hàm (Biến cục bộ): Nếu hàm tạo biến mới (như sum = a + b).
   - Hướng dẫn quay lại: Nơi để chương trình biết quay về đâu sau khi hàm xong (như dòng lệnh trong main).
 - Khi gọi `Tinh_tong(3,5)` stack frame có thể trông như sau:
```
   Stack Frame của Tinh_tong:
- a: 3
- b: 5
- Địa chỉ trả về: Dòng lệnh tiếp theo trong main()
```
Bước 3: Truyền tham số

 - Tham số được truyền vào theo 2 cách và ảnh hưởng đến cách hàm vận hành: Truyền bằng giá trị hoặc truyền bằng con trỏ (truyền bằng bản sao và địa chỉ)
 - Sau khi truyền xong, chương trình bắt đầu chạy các lệnh bên trong hàm.
 - Sau khi thực thi xong, chương trình quay về lại nơi gọi hàm trong main

# Truyền bằng giá trị (bản sao)
 - VD: `Tinh_tong(3,5); // 3 và 5 là giá trị truyền vào` 
  
 - Khi ta gọi hàm và truyền giá trị bằng bản sao: bằng một cách nào đó máy tính sẽ sao chép giá trị của biến gốc và gửi nó vào hàm (Giá trị của biến gốc được sao chép vào một vị trí bộ nhớ mới trong stack frame của hàm)
 - Hàm làm việc với bản sao này, bản gốc giữ nguyên
 - Hình dung: Tưởng tượng ta có một tờ giấy ghi số 10 (biến gốc). Khi truyền bằng bản sao, ta photocopy tờ giấy đó và đưa bản photocopy cho hàm. Hàm có thể vẽ bậy lên bản photocopy, nhưng tờ giấy gốc vẫn không thay đổi.
 - Trong bộ nhớ: 
   - Trong main, biến a được lưu ở một ô nhớ (ví dụ: địa chỉ 0x100, giá trị 10).
    ```
   int Thay_doi(int n){
        n += 10;
        return n;
   }
   int main(){
        int a = 10;
        Thay_doi(a);
   }
   ```
   - Khi gọi hàm Thay_doi(a), chương trình tạo một ô nhớ mới trong stack frame của hàm (ví dụ: địa chỉ 0x200) và sao chép giá trị 10 vào đó.
   - Khi n = 20, chỉ ô nhớ 0x200 đổi thành 20. Ô nhớ 0x100 (của a) không bị ảnh hưởng.
   - Kết thúc hàm: Stack frame của hàm bị xóa, ô nhớ 0x200 (bản sao n) biến mất.
# Truyền bằng địa chỉ (con trỏ)
VD: `Tinh_tong(&a, &b);` 
- Thay vì gửi bản sao của dữ liệu, bạn gửi địa chỉ bộ nhớ của biến gốc vào hàm.
- Hàm dùng con trỏ (một biến lưu địa chỉ) để truy cập và thay đổi trực tiếp dữ liệu gốc. 

- Điều này khác với truyền bằng bản sao, vì thay đổi trong hàm sẽ ảnh hưởng đến biến gốc.
```
#include <stdio.h>
void thayDoi(int *x) {
    *x = 20; // Đổi giá trị tại địa chỉ mà x trỏ tới
    printf("Trong ham: x = %d", *x);
}
int main() {
    int a = 10;
    printf("Ban dau: a = %d\n", a);
    thayDoi(&a); // Truyền địa chỉ của a
    printf("Luc sau: a = %d\n", a);
    return 0;
}

```
Kết quả:
```
Truoc: a = 10
Trong ham: *x = 20
Sau: a = 20
```
Giải thích:

- a = 10 là biến gốc trong main, nằm ở một địa chỉ bộ nhớ (giả sử 0x100).
 - Khi gọi thayDoi(&a), bạn truyền địa chỉ 0x100 vào hàm.
 - Trong hàm, x là con trỏ, lưu giá trị 0x100.
Lệnh *x = 20 đi đến địa chỉ 0x100 và đổi giá trị tại đó thành 20, nên a cũng đổi thành 20.

