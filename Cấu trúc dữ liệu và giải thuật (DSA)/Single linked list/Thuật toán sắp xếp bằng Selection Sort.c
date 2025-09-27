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
    printf("NULL\n");
}

// Sắp xếp danh sách bằng selection sort
void Sort(Node* head){
    Node* temp = head; // xét node đầu tiên
    while(temp != NULL){
        Node* minNode = temp;           // giả sử node đầu tiên có giá trị nhỏ nhất
        Node* tempElse = temp->next;    // duyệt các node còn lại trong danh sách

        // Tìm node có giá trị nhỏ nhất trong các node còn lại
        while(tempElse != NULL){
            if(tempElse->data < minNode->data){ // Nếu phát hiện node nào nhỏ hơn node đầu tiên
                minNode = tempElse;     // cập nhật minNode chính là node đó
            }
            tempElse = tempElse->next;  // sang node tiếp
        }

        // Hoán đổi giá trị của temp và minNode
        int swap = temp->data;
        temp->data = minNode->data;
        minNode->data = swap; 

        // Sang node kế tiếp
        temp = temp->next;
    }
}


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

    printf("Danh sach lien ket ban dau: ");
    PrintList(head);
    printf("Danh sach lien ket sau khi sap xep: ");
    Sort(head);
    PrintList(head);


    return 0;
}
