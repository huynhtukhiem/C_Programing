# Con trỏ là gì?
Khái niệm: Rất đơn giản, con trỏ là một biến nó mang đặc điểm của một biến nhưng biến này rất đặc biệt vì nó không lưu giá trị dữ liệu, ví dụ như:
```
int a = 10; // Biến a lưu giá trị là 10
char name = 'y'; // Biến name lưu giá trị là y
tương tự với float, double, long long,.....
```
thay vào đó thứ nó lưu là địa chỉ của một biến khác =))) 

# Địa chỉ là sao?
chúng ta có thể hiểu rằng, khi khai báo một biến ví dụ như `int a;` thì bản thân thằng a này sẽ được lưu tại một ví trí nào đó trong RAM với địa chỉ có dạng là hex hay dec gì đó ví dụ như: 0x341414124123,......, ta biết rằng RAM là một dãy các ô nhớ mỗi ô có địa chỉ duy nhất. Đây là cơ chế hoạt động của máy tính thôi, cơ chế đó cụ thể hơn như sau:

Khi khai báo int a = 5 máy tính sẽ thao tác các công đoạn như sau:
 - Máy tính (cụ thể là hệ điều hành) sẽ phát một vùng ô nhớ 4 byte trong RAM (vì kiểu int là 4 byte)
```
Địa chỉ  Giá trị
0x1000   ?
0x1001   ?
0x1002   ?
0x1003   ?
```
 - Sau đó giá trị 5 sẽ được lưu vào vùng ô nhớ này, chúng ta cứ hiểu đơn giản là giá trị của biến sẽ được lưu của ô đầu tiên trong vùng 
```
Địa chỉ  Giá trị
0x1000   5 
0x1001   -
0x1002   -
0x1003   -
```
- Như vậy là xong, x chẳng qua là tên (cái nhãn), máy ko bik x là gì, nó chỉ thấy giá trị 5 ở địa chỉ cụ thể trong RAM và nếu cần dùng đến thì nó sẽ truy cập vào gá trị đó để lấy giá trị ra sử dụng.
# Cơ chế hoạt động của con trỏ
Sau khi chúng ta hiểu được cách máy tính vận hành khi khai báo một biến, ta bắt đầu đi sâu vào con trỏ. Con trỏ là lưu địa chỉ của biến khác nên cách khai báo như sau:
```
int a = 5; // a nằm ở địa chỉ 0x1000
int *p = &a; p lưu địa chỉ 0x1000
// hoặc cách khai báo sau:
int *p;
p = &a; 
```
Toán tử "&":
 - toán tử &<tên biến> dùng để lấy địa chỉ của biến ví dụ &a = 0x1000

Toán tử "*": 
 - khi ta viết <kiểu dữ liệu> *<tên con trỏ> tức là ta đang khai báo con trỏ có kiểu dữ liệu cụ thể
 - khi ta viết *<tên con trỏ> = &<tên biến> lúc này:
    - con trỏ p sẽ lưu địa chỉ của biến
    - *p sẽ lưu giá trị của biến
   
Vậy nên khi ta viết:
```
printf("%d", *p); // kết quả trả về 5
printf("%p", p); // kết quả trả về là địa chỉ của biến a
```      
   
