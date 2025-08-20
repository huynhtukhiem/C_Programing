#include<stdio.h>
#include<stdlib.h>
// Bước 1: Định nghĩa cấu trúc của một node
struct Node{
    int data;
    struct Node* next;
};
/* Nếu sử dụng typedef struct thì phía dưới không cần ghi thêm struct (kể cả trong hàm main)
typedef struct{
    int data;
    struct Node* next;
}Node;
*/
// Bước 2: Tạo node mới
struct Node* Tao_node(int value){
//Node* Tao_node(int value)  
  struct Node* Node_moi = (struct Node*)malloc(sizeof(struct Node));
  //Node* Node_moi = (Node*)malloc(sizeof(Node));
    if(Node_moi == NULL){
        printf("Khong du bo nho");
        exit(1);
    }
    Node_moi->data = value;
    Node_moi->next = NULL;
    return Node_moi;
};
// Bước 3: Chèn node mới thêm vào cuối hàng 
void Chen_node(struct Node** head, int value){
    struct Node* Node_moi = Tao_node(value);
    if(*head == NULL){
        *head = Node_moi;
        return;
    }
    struct Node* temp = *head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = Node_moi;
}
// Bước 4: In ra danh sách liên kết
void PrintList(struct Node* head){
    printf("Danh sach lien ket: ");
    while(head !=  NULL){
        printf("%d ->", head->data); // In ra phần tử
        head = head->next;// Nhảy đến phần tử tiếp
    }
    printf("NULL\n"); // Một danh sách liên kết luôn có NULL là phần tử cuối
}
// Bước 5: Hàm giải phóng bộ nhớ
void FreeList(struct Node* head){
    struct Node* temp;
    while(head != NULL){
        temp = head;
        head = head->next;
        free(temp);
    }
}
// Bước 6: Viết hàm main
int main(){
    int n, value;
    struct Node* head = NULL; // Danh sách liên kết ban đầu chỉ có phần tử NULL
    printf("Nhap kich thuoc danh sach: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("Nhap phan tu thu %d: ", i+1);
        scanf("%d", &value);
        Chen_node(&head, value);// Lập tức thêm phần tử đó vào cuốicuối
    }
    PrintList(head);
    FreeList(head);
    return 0;
}
