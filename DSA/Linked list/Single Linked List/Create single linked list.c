// Tạo một single linked list với giá trị của phần tử do người dùng nhập vào 
// Bước 1: Khai báo thư viện cần dùng: stdio.h và stdlib.h
#include<stdio.h>
#include<stdlib.h>

// Bước 2: Định nghĩa cấu trúc của một node bao gồm: giá trị và một con trỏ trỏ đến node tiếp
struct Node{
    int data; // Giá trị của node
    struct Node* next; // Con trỏ trỏ tới node khác, con trỏ có cùng kiểu struct Node
    // Con trỏ này có vai trò liên kết các node lại với nhau
};
/* Ngoài ra có thể sử dụng typedef struct như sau:
typedef struct{
    int data;
    struct Node* next; 
}Node;
Sau bước này thì phần code dưới không cần ghi struct nữa (kể cả trong hàm main)
*/

// Bước 3: Hàm tạo node
// Node* Tao_node(int value); dùng typedef
struct Node* Tao_node(int value){
    struct Node* Node_moi = (struct Node*)malloc(sizeof(struct Node)); 
    //Node* Node_moi = (Node*)malloc(sizeof(Node)); dùng typedef
    //cấp phát động một vùng nhớ đủ lớn để chứa một struct Node.
    if(Node_moi == NULL){
        printf("Khong du bo nho!!");
        exit(1);
// Nếu malloc thất bại (không cấp phát được bộ nhớ), thì Node_moi sẽ bằng NULL và dừng
// chương trình. Máy tính hết RAM thì sẽ báo lỗi này (hầu như không xảy ra)
// Hiểu đơn giản thì khi cấp phát động thì phải kiểm tra để tránh lỗi...
    }
    Node_moi->data = value; //Gán giá trị value vào thành phần data của node.
    Node_moi->next = NULL; //Ban đầu node mới chưa trỏ tới node nào khác nên next = NULL.
    return Node_moi; //Trả về con trỏ Node_moi để sử dụng bên ngoài
}   

// Bước 4: Hàm chèn node
void Chen_node(struct Node** head, int value){
//head là con trỏ tới con trỏ (kiểu struct Node**) vì ta có thể thay đổi giá trị 
//Con trỏ đầu danh sách ngay trong hàm (nếu danh sách đang rỗng).
    struct Node* Node_moi = Tao_node(value); // Gọi lại hàm Tao_node để tạo một node mới chứa value.
    if(*head == NULL){
        *head = Node_moi;
        return;
//Nếu danh sách hiện tại đang rỗng (*head == NULL), nghĩa là chưa có node nào → node mới 
//trở thành head. Sau đó return luôn mà không cần chèn tiếp.
    }
    struct Node* temp = *head;
    while(temp->next != NULL){
        temp = temp->next;
//Nếu danh sách không rỗng → ta tạo một con trỏ tạm temp để duyệt từ head.
// Vòng lặp sẽ chạy cho đến khi tìm được node cuối cùng (temp->next == NULL).
    }
    temp->next = Node_moi; // Gắn next của nó trỏ tới Node_moi.
}
// Bước 5: Hàm in danh sách
void PrintList(struct Node* head){
    while(head != NULL){
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL"); // NULL là phần tử cuối cùng của linked list
}
// Bước 6: Hàm giải phóng bộ nhớ
void FreeList(struct Node* head){
    struct Node* temp;
    while(head != NULL){
        temp = head;
        head = head->next;
        free(temp);
    }
}
int main(){
    struct Node* head = NULL; // ban đầu danh sách liên kết rỗng
    int n, value;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("Nhap phan tu thu %d: ", i+1);
        scanf("%d", &value);
        Chen_node(&head, value);
//Mỗi lần nhập giá trị từ bàn phím, sau đó gọi Chen_node để chèn node vào cuối danh sách.
// Truyền &head vì hàm có thể thay đổi địa chỉ của head
    }
    PrintList(head); // In danh sách
    FreeList(head); // Giải phóng bộ nhớ
    return 0;
}
