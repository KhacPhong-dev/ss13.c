#include <stdio.h>

//nhap mảng giá trị cho mảng 1.
void nhapmang(int n, int m, int mang[n][m]) {
    printf("Nhap gia tri cho mang:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Nhap gia tri mang[%d][%d]: ", i, j);
            scanf("%d", &mang[i][j]);
        }
    }
}
//in ra mang 2.
void inmang(int n, int m, int mang[n][m]) {
    printf("Cac phan tu cua mang theo ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", mang[i][j]);
        }
        printf("\n");
    }
}
//in ra các phần tủ ở góc
void ingoc(int n, int m, int mang[n][m]) {
    printf("Cac phan tu o goc theo ma tran:\n");
    printf("%d ", mang[0][0]);
    if (m > 1) printf("%d ", mang[0][m - 1]);
    if (n > 1) printf("%d ", mang[n - 1][0]);
    if (n > 1 && m > 1) printf("%d ", mang[n - 1][m - 1]);
    printf("\n");
}
// in ra các các phẩn tử ở biên
void inbien(int n, int m, int mang[n][m]) {
    printf("Cac phan tu nam tren duong bien:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == m - 1) {
                printf("%d ", mang[i][j]);
            }
        }
    }
    printf("\n");
}
//in ra đường chéo  
void induongcheo(int n, int m, int mang[n][m]) {
    printf("Cac phan tu tren duong cheo chinh va cheo phu:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == j || i + j == m - 1) {
                printf("%d ", mang[i][j]);
            }
        }
    }
    printf("\n");
}
//tìm số nguyên tố 
int timsonguyento(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

void ktrasonguyento(int n, int m, int mang[n][m]) {
    printf("Cac phan tu la so nguyen to trong mang:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (timsonguyento(mang[i][j])) {
                printf("%d ", mang[i][j]);
            }
        }
    }
    printf("\n");
}

int main() {
    int n, m;
    printf("Nhap so hang (n): ");
    scanf("%d", &n);
    printf("Nhap so cot (m): ");
    scanf("%d", &m);

    int mang[n][m];
    int luaChon;

    do {
        printf("\nMENU\n");
        printf("1. Nhap gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In ra cac phan tu o goc theo ma tran\n");
        printf("4. In ra cac phan tu nam tren duong bien theo ma tran\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran\n");
        printf("6. In ra cac phan tu la so nguyen to theo ma tran\n");
        printf("7. Thoat\n");
        printf("Nhap lua chon : ");
        scanf("%d", &luaChon);

        switch (luaChon) {
            case 1:
                nhapmang(n, m, mang);
                break;
            case 2:
                inmang(n, m, mang);
                break;
            case 3:
                ingoc(n, m, mang);
                break;
            case 4:
                inbien(n, m, mang);
                break;
            case 5:
                induongcheo(n, m, mang);
                break;
            case 6:
                ktrasonguyento(n, m, mang);
                break;
            case 7:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (luaChon != 7);

    return 0;
}