#include <stdio.h>

int UCLN(int a, int b) {
    while (b != 0) {
        int c = b;
        b = a % b;
        a = c;
    }
    return a;
}

int main() {
    int so1, so2;
    printf("Nhap so thu nhat: ");
    scanf("%d", &so1);
    printf("Nhap so thu hai: ");
    scanf("%d", &so2);

    int ucln = UCLN(so1, so2);
    printf("Uoc chung lon nhat cua %d va %d la: %d\n", so1, so2, ucln);
}