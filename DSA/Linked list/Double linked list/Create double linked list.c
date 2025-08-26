// Khởi tạo một double linked list với giá trị do người dùng nhập vào
// Khai báo những thư viện cần dùng
#include <stdio.h>
#include <stdlib.h>

// Bước 1: Định nghĩa cấu trúc của node trong double linked list
typedef struct{
    int data; // Giá trị của node
    struct Node* prev; // Con trỏ trỏ tới node trước nó
    struct Node* next; // Con trỏ trỏ tới node sau (tiếp theo) nó
}Node;

// Bước 2: Tạo node mới
Node* Tao_node(int value) {
    Node* Node_moi = (Node*)malloc(sizeof(Node)); // Cấp phát động cho node mới
    if (Node_moi == NULL) {
        printf("Khong cap phat duoc bo nho!\n");
        exit(1); // Nếu không cấp phát được thì thoát
    }
    Node_moi->data = value; // Giá trị của node ban đầu là value
    // Vì đây là node mới tạo nên mặc định chưa liên kết với ai cả
    Node_moi->prev = NULL; // Chưa có node đứng trước
    Node_moi->next = NULL; // Chưa có node đứng sau
    return Node_moi ; // trả về con trỏ trỏ tới node mới tạo (dùng cho hàm khác)
}

// Bước 3: Thêm node vào cuối danh sách
void Chen_node(Node** head, int value) {
    Node* Node_moi = Tao_node(value); // Tạo node mới với giá trị value
    if (*head == NULL) {  // Danh sách rỗng thì Node_moi trở thành node đầu tiên (head)
        *head = Node_moi;
        return;
    }
    // Ngược lại nếu danh sách đã có phần tử
    Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next; // Duyệt đến node cuối cùng
    }
     // Khi temp đang ở node cuối, ta nối node mới vào sau nó
    temp->next = Node_moi;  // node cuối trỏ tới node mới
    Node_moi->prev = temp;  // node mới trỏ ngược lại về node cuối cũ
}

// Bước 4: In danh sách từ đầu đến cuối
void PrintForward(Node* head) {
    printf("Danh sach (dau -> cuoi): ");
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// Bước 5: In danh sách từ cuối về đầu
void PrintBackward(Node* head) {
    if (head == NULL) return;
    while (head->next != NULL) {
        head = head->next;
    }
    printf("Danh sach (cuoi -> dau): ");
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->prev;
    }
    printf("NULL\n");
}

// Bước 6: Giải phóng bộ nhớ
void FreeList(Node* head) {
    Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    Node* head = NULL; // Ban đầu chưa có phần tử
    int n, value;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    // Nhập giá trị của node
    for (int i = 0; i < n; i++) {
        printf("Nhap gia tri thu %d: ", i + 1);
        scanf("%d", &value);
        Chen_node(&head, value);
    }
    // In ra danh sách xuôi và ngược
    PrintForward(head);
    PrintBackward(head);
    // Giải phóng bộ nhớ
    FreeList(head);
    return 0;
}
