# Đọc nội dung trong file và in ra màn hình console:
```
FILE *f = fopen(<file_name>, <mode>); // Mở file và thực hiện mode (chế độ) với file đó, file đó nằm trong cùng thư mục với file code hiện tại
char line[1000]; 
fget(line, sizeof(line), f); //  Đọc chuỗi kí tự từ dòng đầu tiên file rồi lưu vào chuỗi line
printf("%s", line); // In ra chuỗi bằng biến line
fclose(f); // Đóng file  để tránh rò rỉ bộ nhớ
```
Ví dụ trong file data.txt có nội dung: 

Huynh tu khiem

Khiem huynh tu
```
FILE *f = fopen("data.txt", "r"); // Mở file data.txt trong cùng folder chứa file code hiện tại
char line[1000];
fgets(line, sizeof(line), f); // Đọc nội dung dòng đầu tiên
printf("%s", line); // Kết quả trả về dòng đầu tiên: Huynh tu khiem
fclose(f);
```
Nếu muốn in ra tất cả các dòng có trong file:
```
while(fgets(line, sizeof(line), f)){
    printf("%s\n", line);
    // kết quả trả về tất cả các dòng có trong file
}
```
