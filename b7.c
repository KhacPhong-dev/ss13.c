#include <stdio.h>

void MaTran(int soHang, int soCot, int maTran[soHang][soCot]) {
    for (int i = 0; i < soHang; i++) {
        for (int j = 0; j < soCot; j++) {
            printf("Nhap so tai hang %d, cot %d: ", i + 1, j + 1);
            scanf("%d", &maTran[i][j]);
        }
    }
     for (int i = 0; i < soHang; i++) {
        for (int j = 0; j < soCot; j++) {
            printf("%d ", maTran[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int soHang, soCot;
    printf("so hang ");
    scanf("%d", &soHang);
    printf("xo cot ");
    scanf("%d", &soCot);
    int maTran[soHang][soCot];
    MaTran(soHang, soCot, maTran);
}

