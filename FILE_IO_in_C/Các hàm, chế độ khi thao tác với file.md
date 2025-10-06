# Các hàm khi làm việc với file
 - fopen("file_name","Chế_độ"); Mở một file để làm việc
 - fclose(FILE*); Đóng file vừa mở để tránh rò rỉ bộ nhớ
 - fgets(char, sizeof(char), FILE*); Lưu một dòng trong file vào một chuỗi
  - fprintf(FILE*, "Nội_dung"); Ghi nội dung từ màn hình console vào file

# Các chế độ khi làm việc với file
`FILE *f = fopen("<file_name>", "<chế độ>");`

Các chế độ:
 - "r": Read, Chế độ chỉ đọc nội dung trong file
 - "w": Write, Chế độ chỉ ghi nội dung vào file, nếu file đã có nội dung thì xóa để ghi nội dung mới
 - "a": Append, Chế độ ghi chèn nội dung vào file, nếu file đã có nội dung thì ghi chèn vào sau kí tự cuối cùng
  






