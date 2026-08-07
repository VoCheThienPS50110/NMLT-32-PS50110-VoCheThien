#include <stdio.h>
#include <float.h>
void chucNang1();
void chucNang2();
void chucNang3();
void chucNang4();
void chucNang5();

float TBC(int A[], int n);
void maxMin(int A[], int n);
void sapXepGiam(int A[], int n);
void swap(int *a, int *b);
void maTranBinhPhuong(int row, int col);
void xuatSoLeMaTran(int row, int col);
int main()
{
    int chon;
    do
    {
        printf("+-------------------------------------------------------+\n");
        printf("|              MENU CHUONG TRINH LAB 6                  |\n");
        printf("+-------------------------------------------------------+\n");
        printf("|   1. Tinh trung binh tong so chia het cho 3 va 5      |\n");
        printf("|   2. Tim gia tri lon nhat va nho nhat trong mang      |\n");
        printf("|   3. Sap xep mang theo thu tu giam dan                |\n");
        printf("|   4. Ma tran binh phuong (Mang 2 chieu)               |\n");
        printf("|   5. Loc va xuat vi tri cac So le trong Ma tran       |\n");
        printf("|   6. Thoat chuong trinh                               |\n");
        printf("+-------------------------------------------------------+\n");
        printf(">> Xin moi chon chuc nang (1-6): ");
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
            chucNang5();
            break;
        case 6:
            break;
        }
    } while (chon != 6);
    return 0;
}
//==================================================================================================================================================================

void chucNang1()
{
    int n;
    int A[10];
    printf("Ban chon chuc nang 1: Tinh trung binh tong so chia het cho 3 va 5\n");
    printf("Nhap so luong mang: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Nhap A[%d] = ", i);
        scanf("%d", &A[i]);
    }
    float trungBinhCong = TBC(A, n);
    if (trungBinhCong == -FLT_MAX)
    // Nếu như trung bình cộng bằng với -FLT_MAX thì sẽ không có số chia hết cho 3 và 5
    {
        printf(">> Khong co so chia het cho 3 va 5\n");
    }
    else
    {
        printf(">> Trung binh cong cua mang: %.2f\n", trungBinhCong);
    }
}
//==================================================================================================================================================================

void chucNang2()
{
    int n;
    int A[10];
    printf("Ban chon chuc nang 2: Tim gia tri lon nhat va nho nhat trong mang\n");
    printf("Nhap so luong mang: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Nhap A[%d] = ", i);
        scanf("%d", &A[i]);
    }
    maxMin(A, n);
}
//==================================================================================================================================================================

void chucNang3()
{
    int n;
    printf("Ban chon chuc nang 3: Sap xep mang theo thu tu giam dan\n");
    printf("Nhap so luong mang: ");
    scanf("%d", &n);
    int A[n];
    printf("Nhap A[%d]= ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    sapXepGiam(A, n);
}
//==================================================================================================================================================================

void chucNang4()
{
    int row, col;
    printf("Ban chon chuc nang 4: Ma tran binh phuong (Mang 2 chieu)\n");
    printf("Nhap so dong va so cot: ");
    scanf("%d%d", &row, &col);
    maTranBinhPhuong(row, col);
}
//==================================================================================================================================================================

void chucNang5()
{
    int row, col;
    printf("Ban chon chuc nang 5: Loc va xuat vi tri cac so le trong ma tran\n");
    printf("Nhap so dong va so cot: ");
    scanf("%d%d", &row, &col);
    xuatSoLeMaTran(row, col);
}

//==================================================================================================================================================================
//==================================================================================================================================================================

float TBC(int A[], int n)
// dùng float thay vì void để Sau khi đưa mảng vào là sẽ có kết quả trả ra tên hàm
{
    int tong = 0;
    int dem = 0;
    for (int i = 0; i < n; i++) // tính trung bình cộng
    {
        if (A[i] % 3 == 0 && A[i] % 5 == 0)
        {
            tong += A[i]; // đếm lên 1, tăng tổng
            dem++;        // đếm tổng xong rồi đếm số lượng sau đó chia ra
        }
    }
    if (dem == 0)
    {
        return -FLT_MAX; // lấy số nhỏ nhất trong kiểu float
                         // cờ hiệu (FLT_MAX là số số lớn nhất nhưng thêm dấu trừ thì ngược lại)
    }
    else
    {
        return (float)tong / dem;
    }
}
//==================================================================================================================================================================
void maxMin(int A[], int n)
{
    int max = A[0];
    int min = A[0];
    for (int i = 1; i < n; i++)
    // for i chạy từ 0 thì sẽ bị dư 1 thành ra một lát min so với A[0] trong khi A[0] đã là min ròi
    // Cho nên for chạy từ 1
    {
        if (min > A[i])
        {
            min = A[i];
        } // không else vì xét min và max độc lập
        if (max < A[i])
        {
            max = A[i];
        }
    }
    printf(">> Min = %d va Max = %d\n", min, max);
}

//=========================================================================================================================================================
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

//=========================================================================================================================================================
void sapXepGiam(int A[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (A[i] < A[j])
            {
                swap(&A[i], &A[j]); // đổi vị trí số khi đk hợp lệ
            }
        }
    }
    // Xuất mảng sau khi sắp xếp
    printf("Mang sau khi sap xep giam dan:\n");
    printf(">> A[%d]= ", n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
//==================================================================================================================================================================

void maTranBinhPhuong(int row, int col)
{
    int A[row][col];
    // số dòng là row, số cột là col
    // Nhập mảng
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("A[%d;%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    // Xuất mảng
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%4d\t", A[i][j] * A[i][j]);
        }
        printf("\n");
    }
}
//====================================================================================================================================================================

void xuatSoLeMaTran(int row, int col)
{
    int A[row][col];
    // Nhập mảng
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("A[%d;%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    // Xuất mảng
    printf(">> Cac phan tu le la: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (A[i][j] % 2 != 0)
            {
                printf("A[%d;%d] = %d\n", i, j, A[i][j]);
            }
        }
    }
}