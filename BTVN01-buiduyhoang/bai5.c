#include <stdio.h>
#include <string.h> 

int main() {
    char str[100];

    
    printf("Nhap mot chuoi ky tu: ");
    fgets(str, sizeof(str), stdin); 

    
    str[strcspn(str, "\n")] = '\0';

   
    int doDai = strlen(str);

    
    int soSanh = strcmp(str, "hello");

    
    printf("\nDo dai cua chuoi la: %d\n", doDai);

    if (soSanh == 0) {
        printf("Chuoi nhap vao giong voi 'hello'.\n");
    } else {
        printf("Chuoi nhap vao khong giong 'hello'.\n");
    }

    return 0;
}

