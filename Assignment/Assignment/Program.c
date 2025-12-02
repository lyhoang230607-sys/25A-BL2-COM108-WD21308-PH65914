
#include <stdio.h>
#include <conio.h>
#include <math.h>
void kiemTraSoNguyenTo() {
	int n;
	int i;
	int dem = 0;
	do
	{
		printf("Moi nhap so n: ");
		scanf("%d", &n);
		if (n < 0)
		{
			printf("Vui long nhap n > 0\n");
		}
	} while (n < 0);
	if (n < 2)
	{
		printf("%d khong phai la so nguyen to\n", n);
	}
	else
	{
		for (i = 2; i <= sqrt(n); i++)
		{
			if (n % i == 0)
				dem++;
		}
		if (dem == 0)
		{
			printf("%d la so nguyen to\n", n);
		}
		else
		{
			printf("%d khong phai la so nguyen to\n", n);
		}
	}
}
void kiemTraSoNguyen()
{
	float x;
	printf("Moi nhap so x: ");
	scanf("%f", &x);
	//kiem tra co phai so nguyen khong
	if (x == (int)x)
	{
		printf("%.1f la so nguyen\n",x);
	}
	else
	{
		printf("%.1f khong phai la so nguyen\n", x);
	}
}  
void kiemTraSoChinhPhuong() {

}
void uocChungBoiChung()
{
	printf("Uoc Chung Boi Chung");
}

void lapChucNang(chonChucNang)
{
	int tiepTuc = 1;
	while (tiepTuc == 1)
	{
		switch (chonChucNang)
		{
		case 1:
			kiemTraSoNguyen();
			break;
		case 2:
			uocChungBoiChung();
			break;
		case 3:
			// goi TEN ham CN3
			break;
		case 0:
			return;
		default:
			printf("Hay chon lai [0-3]");
			break;
		}

		printf("\n");
		printf("Tiep tuc CN nay? [1=Co | 0=Khong]: ");
		scanf("%d", &tiepTuc);
		system("cls");
	}
}

int main()
{
	int chonChucNang;
	do
	{
		printf("Menu");
		printf("\n");
		printf("1. Kiem Tra So Nguyen");
		printf("\n");
		printf("2. TEN chuc nang 2");
		printf("\n");
		printf("3. TEN chuc nang 3");
		printf("\n");
		printf("Hay chon CN [0-3]: ");
		scanf("%d", &chonChucNang);
		lapChucNang(chonChucNang);
	} while (chonChucNang != 0);
}

// GV: AnhTT184