#include <stdio.h>
#include <math.h>
int main()
{
    int chon, a, b, c;
    float t, x1, x2, delta;
    do
    {
        printf("+---------------------------------------------------+\n");
        printf("|              MENU CHUONG TRINH LAB 3              |\n");
        printf("+---------------------------------------------------+\n");
        printf("|  0. Thoat chuong trinh                            |\n");
        printf("|  1. Chuc nang tinh hoc luc sinh vien              |\n");
        printf("|  2. Chuc nang giai phuong trinh bac hai           |\n");
        printf("|  3. Chuc nang tinh tien dien tieu thu hang thang  |\n");
        printf("+---------------------------------------------------+\n");
        printf(">> Chon chuc nang cua ban (0-3): ");
        scanf("%d", &chon);
        switch (chon)
        {
        case 0:
            printf("Ban chon chuc nang 0: Thoat chuong trinh\n");
            break;
        case 1:
            printf("Ban chon chuc nang 1: Tinh hoc luc hoc sinh\n");
            printf("Nhap diem trung binh: ");
            scanf("%f", &t);
            if (t >= 9 && t <= 10)
            {
                printf("Hoc luc xuat sac\n");
            }
            else if (t >= 8 && t < 9)
            {
                printf("Hoc luc gioi\n");
            }
            else if (t >= 6.5 && t < 8)
            {
                printf("Hoc luc kha\n");
            }
            else if (t >= 5 && t < 6.5)
            {
                printf("Hoc luc trung binh\n");
            }
            else if (t >= 3.5 && t < 5)
            {
                printf("Hoc luc yeu\n");
            }
            else if (t >= 0 && t < 3.5)
            {
                printf("Hoc luc kem\n");
            }
            else
            {
                printf("Diem so nhap vao khong hop le!\n");
            }
            break;
        case 2:
            printf("Ban chon chuc nang 2: Giai phuong trinh bac 2\n");
            printf("Nhap he so a, b, c: ");
            scanf("%d%d%d", &a, &b, &c);
            if (a == 0)
            {

                printf("Truong hop 1: a = 0 \n");
                printf("Phuong trinh bac nhat: %dx+%d=0\n", b, c);
                if (b == 0 && c == 0)
                {
                    printf("b = 0 va c = 0\n");
                    printf("Phuong trinh vo so nghiem\n");
                }
                else if (b == 0 && c != 0)
                {
                    printf("b = 0 va c khac 0\n");
                    printf("Phuong trinh vo nghiem\n");
                }
                else if (b != 0)
                {
                    x1 = -(float)c / b;
                    printf("b khac 0\n");
                    printf("Phuong trinh co nghiem duy nhat: x1=%.2f\n", x1);
                }
            }
            else if (a != 0)
            {
                printf("Truong hop 2: a khac 0\n");
                delta = (b * b) - (4 * a * c);
                if (delta == 0)
                {
                    x1 = (-(float)b) / (2 * a);
                    printf("Delta = 0");
                    printf("Phuong trinh nghiem kep x1= %.2f\n", x1);
                }
                else if (delta > 0)
                {
                    x1 = (-(float)b + sqrt(delta)) / (2 * a);
                    x2 = (-(float)b - sqrt(delta)) / (2 * a);
                    printf("Delta > 0");
                    printf("phuong trinh %dx^2+%dx+%d = 0 co nghiem 2 nghiem x1=%.2f, x2=%.2f\n", a, b, c, x1, x2);
                }
                else if (delta < 0)
                {
                    printf("Delta < 0");
                    printf("Phuong trinh vo nghiem\n");
                }
            }
            break;
        case 3:
            printf("Ban chon chuc nang 3: Tien tien dien\n");
            break;
        default:
            printf("Ban phai chon chuc nang 0 - 3\n");
            break;
        }
    } while (chon != 0);
    return 0;
}