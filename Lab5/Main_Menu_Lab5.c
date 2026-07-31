#include <stdio.h>
#include <stdbool.h>
void chucNang1();
void chucNang2();
void chucNang3();
void chucNang4();
int Max(int a, int b, int c);
bool kiemTra(int Nam);
void swap(int *a, int *b);
int main()
{
    int chon;
    do
    {
        printf("\n+---------------------------------------------------+\n");
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
            chucNang1();
            break;
        case 2:
            chucNang2();
            break;
        case 3:
            chucNang3();
            break;
        case 4:
            chucNang4();
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

void chucNang1()
{
    int a, b, c;
    printf("Ban chon chuc nang 1: Tim gia tri lon nhat trong 3 so\n");
    printf("Nhap vao 3 so bat ki: ");
    scanf("%d%d%d", &a, &b, &c);
    printf("So lon nhat trong 3 so la: %d\n", Max(a, b, c));
}
int Max(int a, int b, int c)
{
    int max = a;
    if (max < b)
    {
        max = b;
    }
    if (max < c)
    {
        max = c;
    }
    return max;
}

void chucNang2()
{
    int Nam;
    printf("Ban chon chuc nang 2: Kiem tra Nam nhuan\n");
    printf("Nhap vao nam can kiem tra: ");
    scanf("%d", &Nam);
    if (kiemTra(Nam))
    {
        printf(">> Nam %d la nam Nhuan\n");
    }
    else
    {
        printf(">> Nam %d khong phai la nam nhuan\n");
    }
}
bool kiemTra(int Nam)
{
    if (Nam % 400 == 0 || (Nam % 4 == 0 && Nam % 100 != 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void chucNang3()
{
    int x, y;
    printf("Ban chon chuc nang 3: Hoan vi 2 so (Su dung con tro)\n");
    printf("Nhap hai so x, y: ");
    scanf("%d%d", &x, &y);
    printf(">> Hai so truoc khi hoan vi x = %d; y = %d\n", x, y);
    swap(&x, &y);
    printf(">> Hai so sau khi hoan vi x = %d; y = %d\n", x, y);
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void chucNang4()
{
    printf("Ban chon chuc nang 4: Kiem tra & Phan loai tam giac\n");
}