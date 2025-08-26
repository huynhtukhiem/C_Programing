# 📌 Double Linked List

Danh sách liên kết đôi (**Double Linked List - DLL**) là một **cấu trúc dữ liệu động**, gồm nhiều **node** liên kết lại với nhau.  

Mỗi **node** trong DLL gồm:  
- **Data**: dữ liệu (số, chữ, hoặc kiểu dữ liệu phức tạp).  
- **Prev**: con trỏ trỏ về node **trước** nó.  
- **Next**: con trỏ trỏ tới node **sau** nó.  

 Nhờ có cả `prev` và `next`, ta có thể **duyệt danh sách cả hai chiều** (từ đầu → cuối hoặc ngược lại).  

---

## ✅ Ưu điểm
- Duyệt được 2 chiều (nhờ `prev` và `next`).  
- Xóa hoặc chèn node **ở giữa** dễ dàng (không cần dịch chuyển toàn bộ danh sách như mảng).  

---

## ❌ Nhược điểm
- Tốn thêm bộ nhớ cho con trỏ `prev`.  
- Cấu trúc phức tạp hơn so với danh sách liên kết đơn (Singly Linked List - SLL).  

---

## 📂 Khi nào nên dùng DLL?

1. **Khi cần duyệt theo cả hai chiều**  
   - Ví dụ: trình duyệt web (*Back/Forward*), trình phát nhạc (*Next/Previous*).  
   - SLL không làm được vì chỉ đi được một chiều.  

2. **Khi cần thêm / xóa nhiều ở giữa danh sách**  
   - Ví dụ: quản lý danh sách sinh viên, danh sách tiến trình trong hệ điều hành.  
   - DLL chỉ cần thay đổi vài con trỏ (`prev`, `next`) là xong → nhanh hơn nhiều so với mảng.  

3. **Khi kích thước dữ liệu thay đổi liên tục**  
   - DLL cho phép **cấp phát động**, thêm bao nhiêu node cũng được (miễn còn RAM).  
   - Mảng thì bị giới hạn kích thước cố định (muốn tăng phải cấp phát lại).  

---

📌 **Copyright © Huỳnh Tử Khiêm**  
