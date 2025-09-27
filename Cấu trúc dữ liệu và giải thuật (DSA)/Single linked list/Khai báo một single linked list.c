// Cách 1: Khai báo một linked list với phần tử cố định
// Khai báo thư viện cần dùng
#include<stdio.h>
#include<stdlib.h> // Dùng để

// Khai báo cấu trúc của một node bao gồm: giá trị của node đó và một con trỏ trỏ đến node tiếp
typedef struct Node{
    int data; // Giá trị của node
    struct Node* next; // Con trỏ trỏ đến node kế tiếp cũng mang cấu trúc của một node
}Node;

// Hàm tạo một node mới
Node* Tao_node(int value){
    Node* Node_moi = (Node*)malloc(sizeof(Node));// cấp phát một vùng nhớ động có kích thước đúng bằng kích thước của struct Node
    Node_moi->data = value; // gán giá trị của node mới là value do người dùng nhập
    Node_moi->next = NULL; // ban đầu node mới chưa nối với node nào nên sẽ gán với null
    return Node_moi; // Trả về con trỏ trỏ đến node vừa tạo, để bên ngoài có thể sử dụng và nối vào danh sách.
}
int main(){
    Node* head = Tao_node(10); // gán giá trị cho node đầu tiên (head) là 10
    head->next = Tao_node(20); // gán giá trị cho node kế node đầu là 20
    head->next->next = Tao_node(30); //  tương tự như v
    Node* temp = head; // Khai báo một biến temp bắt đầu từ head
    while(temp != NULL){ // Duyệt danh sách
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");
    return 0;

}
