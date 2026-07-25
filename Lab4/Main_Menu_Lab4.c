#include <stdio.h>
int main()
{
    int chon, min, max;
    int tong, dem, x;
    float tb;
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
        scanf("%d", &chon);
        switch (chon)
        {
        case 0:
            printf("Ban chon chuc nang 0: Thoat chuong trinh");
            break;
        case 1:
            printf("Ban chon chuc nang 1: Tinh trung binh tong cac so chia het cho 2\n");
            printf("Nhap gia tri min va max: ");
            scanf("%d%d", &min, &max);
            if (min > max)
            {
                printf("Ban nhap sai gia tri min va max!\n");
                break;
            }
            else
            {
                tong = 0;
                dem = 0;
                for (int i = min; i <= max; i++)
                {
                    if (i % 2 == 0)
                    {
                        tong += i;
                        dem++;
                    }
                }
                if (dem == 0)
                {
                    printf("Trong khoang [%d;%d] khong co gia tri chia het cho 2\n", min, max);
                }
                else
                {
                    tb = (float)tong / dem;
                    printf("\nCac so chia het cho 2: %d\n", tong);
                    printf("So luong chia het cho 2: %d\n", dem);
                    printf("Trung binh cong: %.2f\n", tb);
                }
            }
            break;
        case 2:
            printf("Ban chon chuc nang 2: Kiem tra so nguyen to\n");
            printf("Nhap so x: ");
            scanf("%d",&x);
            if(x<2)
            {
                printf("So %d khong phai la so nguyen to\n",x);
            }
            else
            {
                for(int i=2;i<x;i++)
                if (x%i==0)
                {
                    printf("So %d khong phai la so nguyen to\n",x);
                    goto ketthuc;
                }
            }
            printf("So %d la so nguyen to\n",x);
            ketthuc:
            break;
        case 3:
            printf("Ban chon chuc nang 3: Kiem tra so chinh phuong");
            break;
        }
    } while (chon != 0);
    return 0;
}