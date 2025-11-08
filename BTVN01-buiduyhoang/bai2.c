#include <stdio.h>

int main() {
    int x, y;

    
    printf("Nhap so nguyen x: ");
    scanf("%d", &x);
    printf("Nhap so nguyen y: ");
    scanf("%d", &y);

    printf("\n--- Ket qua phep toan so hoc ---\n");
    printf("Tong: %d + %d = %d\n", x, y, x + y);
    printf("Hieu: %d - %d = %d\n", x, y, x - y);
    printf("Tich: %d * %d = %d\n", x, y, x * y);
    if (y != 0) {
        printf("Thuong: %d / %d = %d\n", x, y, x / y);
        printf("Phan du: %d %% %d = %d\n", x, y, x % y);
    } else {
        printf("Khong the chia cho 0!\n");
    }

    printf("\n--- Ket qua so sanh ---\n");
    if (x > y) {
        printf("%d lon hon %d\n", x, y);
    } else if (x < y) {
        printf("%d nho hon %d\n", x, y);
    } else {
        printf("%d bang %d\n", x, y);
    }

    return 0;
}

