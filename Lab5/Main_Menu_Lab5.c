#include <stdio.h>
int main()
{
    int chon;
    do
    {
        printf("+---------------------------------------------------+\n");
        printf("|             MENU CHUONG TRINH LAB 5               |\n");
        printf("+---------------------------------------------------+\n");
        printf("| 1. Tim gia tri lon nhat trong 3 so                |\n");
        printf("| 2. Kiem tra Nam nhuan                             |\n");
        printf("| 3. Hoam vi 2 so (Su dung con tro)                 |\n");
        printf("| 4. Kiem tra & Phan loai tam giac                  |\n");
        printf("| 5. Thoat chuong trinh                             |\n");
        printf("+---------------------------------------------------+\n");
        printf(">> Xin moi chon chuc nang (1-5): ");
        scanf("%d", &chon);
        switch (chon)
        {
        case 1:
            printf("Ban chon chuc nang 1: Tim gia tri lon nhat trong 3 so\n");
            break;
        case 2:
            printf("Ban chon chuc nang 2: Kiem tra Nam nhuan\n");
            break;
        case 3:
            printf("Ban chon chuc nang 3: Hoan vi 2 so (Su dung con tro)\n");
            break;
        case 4:
            printf("Ban chon chuc nang 4: Kiem tra & Phan loai tam giac\n");
            break;
        case 5:
            printf("Ban chon chuc nang 5: Thoat chuong trinh\n");
            break;
        default:
            printf(">> Ban phai chon chuc nang tu 1 - 5 <<\n");
            break;
        }
    } while (chon != 5);
    return 0;
}