* Trong ngôn ngữ C, mảng (array) là một tập hợp các phần tử có cùng kiểu dữ liệu, được lưu trữ liên tiếp trong bộ nhớ và có thể truy cập thông qua chỉ số của chúng. Cũng có thể hiểu mảng là một biến đặc biệt, dùng để lưu trữ nhiều giá trị có cùng kiểu dữ liệu trong một khối bộ nhớ liên tiếp.

* Đặc điểm của mảng:
- Kiểu dữ liệu đồng nhất: tất cả phần tử trong mảng phải cùng kiểu (int, float, char,…).
- Đánh số chỉ số từ 0: phần tử đầu tiên có chỉ số 0, phần tử cuối cùng có chỉ số n-1.
- Bộ nhớ liên tiếp: các phần tử nằm liền nhau trong RAM, giúp việc truy cập nhanh hơn.
- Kích thước cố định: số phần tử của mảng phải xác định từ lúc khai báo (không tự mở rộng được).

* Cú pháp khai báo:
<kiểu_dữ_liệu> <tên_mảng>[kích_thước]; // Khai báo trước
<kiểu_dữ_liệu> <tên_mảng>[kích_thước] = {}; // Khai báo với các phần tử
VD: int a[5]; hoặc float b[2] = {1.2, 2,2};

* Mảng vừa là kiểu dữ liệu vừa được xem là cấu trúc dữ liệu cơ bản trong khoa học máy tính vì lí do: Nó cho phép tổ chức và lưu trữ dữ liệu trong bộ nhớ để dễ dàng quản lý và thao tác. Mảng tổ chức dữ liệu tuyến tính (linear structure), các phần tử sắp xếp liên tiếp, và có thể truy cập bằng chỉ số.

* Theo mình tìm hiểu và thực hành, mảng có kích thước cố định thực chất là: "Tại một thời điểm cụ thể thì mảng luôn có kích thước cố định" chứ không hẳn là mảng luôn cố định kích thước bởi vì ta có thể mở rộng mảng bằng cấp phát động chẳng hạn. Vậy nên có thể hiểu sâu hơn như sâu:
Mỗi mảng chỉ có kích thước cố định, nhưng ta có thể thay nó bằng một mảng khác có kích thước mới → nhìn bề ngoài giống “mảng co giãn”, nhưng bên trong vẫn chỉ là những mảng cố định được thay thế liên tục.
