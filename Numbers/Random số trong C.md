# In ra một số từ 0 -> RAND_MAX (32767)
```
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h> // thư viện để in tiếng việt

int main(){
    SetConsoleOutputCP(65001); // Cái này để in ra tiếng việt trong màn hình console
    srand(time(NULL)); // Khởi tạo seed dựa vào thời gian thực (dùng trong random)
    int num = rand(); // Tạo số ngẫu nhiên từ 0 -> 32767
    printf("%d", num);
    return 0;
}
```
# In ra một số từ a đến b tùy chỉnh
```
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h>
int main(){
    SetConsoleOutputCP(65001);
    int a = -100;
    int b = 100;
    srand(time(NULL));
    int num = a + rand() % (b-a+1); // Random trong khoảng [a;b]
    
    printf("Số ngẫu nhiên trong khoảng %d đến %d là: %d", a,b,num);   
    return 0;
}
```

