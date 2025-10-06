# Đọc và ghi nội dung trong một file
```
FILE *f = fopen(<file_name>, <mode>); // Mở file và thực hiện mode với file đó
char line[1000]; // 
fget(line, sizeof(line), f); //  Đọc chuỗi kí tự từ file hoặc stdin rồi lưu vào chuỗi line
printf("%s", line); // In ra chuỗi line
fclose(f); // Đóng file
```
Ví dụ trong file data.txt có nội dung: Huỳnh Tử Khiêm
```
FILE *f = fopen("data.txt", "r");
char line[1000];
fgets(line, sizeof(line), f);
printf("%s", line); // Kết quả trả về Huỳnh Tử Khiêm
fclose(f);
```
Các mode:

"r": đọc dữ liệu trong file (kết hợp với các hàm khác để đọc theo mong muốn)
