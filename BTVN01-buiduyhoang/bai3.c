#include <stdio.h>

int main() {
    int a, b;

    printf("Nhap so nguyen a: ");
    scanf("%d", &a);
    printf("Nhap so nguyen b: ");
    scanf("%d", &b);

   
    if (a > 0 && b > 0) {
        printf("\nCa hai so a va b deu lon hon 0.\n");
    } else {
        printf("\nKhong phai ca hai so deu lon hon 0.\n");
    }
    if (a % 2 == 0 || b % 2 == 0) {
        printf("It nhat mot trong hai so la so chan.\n");
    } else {
        printf("Ca hai so deu la so le.\n");
    }

    return 0;
}

