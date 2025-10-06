# Ghi nội dung vào file thông qua màn hình console
Đối với chế độ "w" Write: Ghi nội dung vào file, nếu đã có nội dung sẳn -> xóa hết và ghi mới
```
#include<stdio.h>
int main(){
    FILE *f;
    f = fopen("data.txt", "w"); // Mở file để ghi nội dung mới
    if(f == NULL){
        printf("Khong tim thay file\n");
        return 1;
    }
    fprintf(f, "Huynh Tu Khiem_");
    fclose(f);
    
    f = fopen("data.txt", "w"); 
    fprintf(f, "dep trai");
    fclose(f);
    return 0;
}
```
Kết quả trả về là: dep trai thay vì Huynh Tu Khiem_dep trai. Vì chế độ "w" đã xóa nội dung trước đó

Đối với chế độ "a": Append Ghi nội dung vào file, nếu đã có nội dung sẳn -> ghi chèn nội dung vào cuối
