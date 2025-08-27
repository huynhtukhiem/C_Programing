# Con trỏ trong C

## Định nghĩa về con trỏ

* Mỗi một biến khi được khai báo sẽ được lưu tại một địa chỉ nào đó trong thanh RAM của máy tính.
* Con trỏ là một biến đặc biệt, nó lưu địa chỉ của một biến mà nó trỏ chứ nó không lưu giá trị.

## Thành phần của con trỏ

* **Kiểu dữ liệu mà con trỏ trỏ tới:** int, char, double, ...
* **Giá trị của con trỏ:** địa chỉ của biến mà nó trỏ tới.
* **Giá trị tại địa chỉ mà con trỏ trỏ tới:** giá trị của biến mà con trỏ trỏ tới.

## Cách khai báo một con trỏ trong C

```c
int x;
int *p = &x;  // Vừa khai báo vừa gán
```

hoặc

```c
int *p;        // Khai báo xong mới gán
p = &x;
```

hoặc

```c
int* p = &x;   // Muốn nhấn mạnh con trỏ này kiểu int
```

## Giải thích cách khai báo

* **Toán tử \&x:** lấy địa chỉ của biến x trong bộ nhớ và trả về một địa chỉ dạng thập phân (%d) hoặc thập lục phân (%p).
* \**Toán tử *p:** báo cho máy tính rằng p là một con trỏ.
* \**int *p:** chỉ kiểu dữ liệu của con trỏ.

\=> Vậy `int *p = &x;` nghĩa là: p là một con trỏ kiểu số nguyên và nó lưu địa chỉ của x.
\=> Sau lệnh này: p là địa chỉ của biến x, `*p` là giá trị tại địa chỉ của biến x (giá trị của x).

## Con trỏ dùng để làm gì?

* Thao tác với mảng, chuỗi,... hiệu quả hơn.
* Quản lý bộ nhớ động.
* Tối ưu hiệu năng của chương trình.

## Những loại kiến thức cần nắm về con trỏ

* Con trỏ cơ bản
* Con trỏ và hàm
* Con trỏ và mảng
* Con trỏ và chuỗi
* Con trỏ và cấu trúc
* Con trỏ và bộ nhớ động
* Con trỏ kép
* Con trỏ và File I/O
* Con trỏ hàm
* Con trỏ hằng
---

© Huỳnh Tử Khiêm
