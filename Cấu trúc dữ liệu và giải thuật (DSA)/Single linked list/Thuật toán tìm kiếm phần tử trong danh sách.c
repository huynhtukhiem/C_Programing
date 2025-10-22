// Thuật toán tìm kiếm một phần tử nằm ở vị trí nào trong danh sách liên kết
#include<stdio.h>
#include<stdlib.h>  
#include<windows.h>

typedef struct Node{
    int data;
    struct Node* next;
}Node;

void Them_node(Node** head, int value){
    Node* Node_moi = (Node*)malloc(sizeof(Node));
    if(Node_moi == NULL){
        printf("Lỗi bộ nhớ");
        exit(1);
    }
    Node_moi->data = value;
    Node_moi->next = NULL;

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
    printf("Danh sách liên kết: ");
    while(temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void FreeList(Node* head){
    Node* temp;
    while(head != NULL){
        temp = head;
        head = head->next;
        free(temp);
    }
}

int Tong(Node* head){
    int sum = 0;
    Node* temp = head;
    while(temp != NULL){
        sum += temp->data;
        temp = temp->next;
    }
    return sum;
}

Node* Tim_kiem(Node* head, int index){
    struct Node* temp = head;
    int position = 1; // Vị trí 
    while(temp != NULL){
        if(index  == temp->data){
            printf("Phần tử %d nằm tại vị trí %d trong danh sách", index, position);
            return temp;
        }
        temp = temp->next;
        position++;
    }
    printf("Không tìm thấy phần tử %d trong danh sách", index);
    return NULL;
}

int main(){
    SetConsoleOutputCP(65001);
    Node* head = NULL;
    int n, value;
    int index;
    printf("Nhập kích thước danh sách liên kết: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("Nhập phần tử thứ %d: ", i+1);
        scanf("%d", &value);
        Them_node(&head, value);
    }
    PrintList(head);
    printf("Nhập phần tử cần tìm kiếm: ");
    scanf("%d", &index);
    Tim_kiem(head, index);
    
    FreeList(head);
    return 0;
}
