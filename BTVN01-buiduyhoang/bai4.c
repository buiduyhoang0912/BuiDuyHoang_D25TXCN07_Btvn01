#include <stdio.h>
#include <math.h> 

int main() {
    double x;

    
    printf("Nhap mot so thuc x: ");
    scanf("%lf", &x);

    
    double canBacHai = sqrt(x);
    double luyThuaBa = pow(x, 3);

    
    printf("\nCan bac hai cua %.2lf la: %.2lf\n", x, canBacHai);
    printf("Luy thua bac 3 cua %.2lf la: %.2lf\n", x, luyThuaBa);

    return 0;
}

