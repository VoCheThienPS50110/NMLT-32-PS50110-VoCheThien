#include <stdio.h>
int main()
{
    int chon;
    do
    {
        printf("\n+---------------------------------------------------+\n");
        printf("|             MENU CHUONG TRINH LAB 4               |\n");
        printf("+---------------------------------------------------+\n");
        printf("| o. Thoat chuong trinh                             |\n");
        printf("| 1. Tinh trung binh tong cac so chia het cho 2     |\n");
        printf("| 2. Kiem tra So nguyen to                          |\n");
        printf("| 3. Kiem tra So chinh phuong                       |\n");
        printf("+---------------------------------------------------+\n");
        printf(">> Chon chuc nang cua ban (0-3): ");
        scanf("%d",&chon);
        switch (chon)
        {
        case 0:
            printf("Ban chon chuc nang 0: Thoat chuong trinh");
            break;
        case 1:
            printf("Ban chon chuc nang 1: Tinh trung binh tong cac so chia het cho 2");
            break;
        case 2:
            printf("Ban chon chuc nang 2: Kiem tra so nguyen");
            break;
        case 3:
            printf("Ban chon chuc nang 3: Kiem tra so chinh phuong");
            break;
        default:
            printf("Ban phai chon chuc nang 0 - 3\n");
            break;
        }
    } while (chon != 0);
    return 0;
}