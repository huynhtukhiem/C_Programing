// Khai báo thư viện cần dùng
#include<stdio.h>
#include<stdlib.h> // Dùng để

// Khai báo cấu trúc của một node bao gồm: giá trị của node đó và một con trỏ trỏ đến node tiếp
typedef struct Node{
    int data; // Giá trị của node
    struct Node* next; // Con trỏ trỏ đến node kế tiếp cũng mang cấu trúc của một node
}Node;

// Hàm cấp phát vùng nhớ và khởi tạo giá trị node mới
Node* Tao_node(int value){
    Node* Node_moi = (Node*)malloc(sizeof(Node));// cấp phát một vùng nhớ động có kích thước đúng bằng kích thước của struct Node
    Node_moi->data = value; // gán giá trị của node mới là value do người dùng nhập
    Node_moi->next = NULL; // ban đầu node mới chưa nối với node nào nên sẽ gán với null
    return Node_moi; // Trả về con trỏ trỏ đến node vừa tạo, để bên ngoài có thể sử dụng và nối vào danh sách.
}

// Hàm chèn node mới vừa nhập vào cuối danh sách
void Chen_node(Node** head, int value){
    Node* Node_moi = Tao_node(value); // dùng hàm Tao_node để tạo một node mới sau đó nối vào cuối danh sách tức là Bản thân hàm Chen_node không tự cấp phát, mà gọi Tao_node bên trong để làm việc đó.
    if(*head == NULL){// Kiểm tra xem danh sách có rỗng không
        *head = Node_moi; // Nếu có thì gán head là node mới đầu tiên
        return; // kết thúc hàm không cần thêm bước nối
    }
    Node* temp = *head;
    while(temp->next != NULL){ 
        temp = temp->next; // Nếu không thì duyệt từ đầu (head) đến cuối tại (temp->next = NULL)
    }
    temp->next = Node_moi; // Sau khi vòng lặp kết thúc, temp đang ở node cuối cùng. Ta gán node mới vào cuối => đây là chèn node vào cuối danh sách
}

// Hàm in danh sách
void PrintList(Node* head){
    Node* temp = head;
    while(temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NNULL\n");
}

// Hàm giải phóng bộ nhớ
void FreeList(Node* head){
    Node* temp;
    while(head != NULL){
        temp = head; // Lưu node hiện tại
        head = head->next; // Chuyển sang node kế
        free(temp); // giải phóng node hiện tại
    }
}
int main(){
    Node* head = NULL; // ban đầu gán cho head là NULL
    int n, value;
    printf("Nhap kich thuoc danh sach: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("Nhap gia tri phan tu %d: ", i+1);
        scanf("%d", &value);
        Chen_node(&head, value); // Nhập giá trị phần tử nào thì chèn vào cuối danh sách liền
    }    
    PrintList(head);
    FreeList(head);
    return 0;
}
