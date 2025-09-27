/*
#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node* next;
}Node;
Node* Tao_node(int value){
    Node* Node_moi = (Node*)malloc(sizeof(Node));
    Node_moi->data = value;
    Node_moi->next = NULL;
    return Node_moi;
}
void Chen_node(Node** head, int value){
    Node* Node_moi = Tao_node(value); 
    if(*head == NULL){
        *head = Node_moi;
        return;
    }
    Node* temp = *head;
    while(temp->next != NULL){ 
        temp = temp->next;
    }
    temp->next = Node_moi;
}
void PrintList(Node* head){
    Node* temp = head;
    while(temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NNULL\n");
}
void FreeList(Node* head){
    Node* temp;
    while(head != NULL){
        temp = head;
        head = head->next;
        free(temp);
    }
}
*/

// Hàm duyệt qua các phần tử và tính tổng
int Tinh_tong(Node* head){
    Node* temp = head;
    int tong = 0;
    while(temp != NULL){
        tong += temp->data;
        temp = temp->next;
    }
    return tong;
}
/*
int main(){
    Node* head = NULL;
    int n, value;
    printf("Nhap kich thuoc danh sach: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("Nhap gia tri phan tu %d: ", i+1);
        scanf("%d", &value);
        Chen_node(&head, value); 
    }    

    printf("Tong cac phan tu: %d", Tinh_tong(head));

    FreeList(head);
    return 0;
}
*/
