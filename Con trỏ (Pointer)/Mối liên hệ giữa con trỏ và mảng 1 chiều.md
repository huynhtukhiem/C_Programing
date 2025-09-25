# Mối liên hệ giữa mảng và con trỏ
Trước hết khi ta khai báo một mảng như sau: 
`int a[3] = {1,2,3};`

Về bản chất tên mảng "a" thực ra chính là một con trỏ chứ nó không phải là một biến chứa toàn bộ mảng. Con trỏ a đang trỏ đến phần tử đầu tiên (&a[0])

Vậy nên:
```
printf("%p", a); // In ra địa chỉ của a[0]
printf("%p", &a[0]); // In ra địa chỉ của a[0]
printf("%d", *a); // In giá trị tại địa chỉ a[0] ( = 1)
```
