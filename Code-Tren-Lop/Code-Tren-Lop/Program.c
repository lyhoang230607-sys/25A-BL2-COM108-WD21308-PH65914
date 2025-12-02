// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
#include <math.h>
#include <string.h>
void sapXepPhanTuMangMotChieu() {
	int integerArray[100];
	int tmp;
	int length;
	printf("So luong phan tu mang: ");
	scanf("%d", &length);
	printf("Nhap du lieu cho mang %d phan tu\n", length);
	for (int i = 0; i < length; i++)
	{
		printf("mang[%d] = ", i);
		scanf("%d", &integerArray[i]);
	}
	printf("Sap xep tang da du lieu mang %d phan tu\n", length);
	for (int i = 0; i < length - 1; i++)
	{
		if (integerArray[i > integerArray[i + 1]])
		{
			tmp = integerArray[i];
			integerArray[i] = integerArray[i + 1];
			integerArray[i + 1] = tmp;
			i = -1;
		}
	}

	printf("Nhap du lieu cho mang %d phan tu\n", length);
	for (int i = 0; i < length; i++)
	{
		printf("mang[%d] = %d\n", i, integerArray);
	}
}
void demoMang2Chieu() {
	char KyTU = 'U';
	//string- "string.h"
	char mangKyTu[10];
	for (int i = 0; i < 10; i++)
	{
		scanf(" %c", &mangKyTu[i]);
		if (mangKyTu[i] == '.')
		{
			break;
		}
	}
	printf("\n");
	//fgets(mangKyTu);
	for (int i = 0; i < 10; i++)
	{
		printf("%c", mangKyTu[i]);
	}
	printf("\n");
	//puts(mangKyTu);


	int array[2][3];
	for (int  i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("Mang [%d] [%d] = ", i, j);
			scanf("%d", &array[i][j]);
		}

	}
	for (int  i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d, ",array[i][j]);
			
		}

	}
	printf("\n");
}
void lapChucNang(chonChucNang)
{
	int tiepTuc = 1;
	while (tiepTuc == 1)
	{
		switch (chonChucNang)
		{
		case 1:
			//kiemTraSoNguyen();
			break;
		case 2:
			//uocChungBoiChung();
			break;
		case 3:
			demoMang2Chieu();
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
		printf("3. Mang 2 chieu ");
		printf("\n");
		printf("Hay chon CN [0-3]: ");
		scanf("%d", &chonChucNang);
		lapChucNang(chonChucNang);
	} while (chonChucNang != 0);
}

// Debug/Run chuong trinh: bam "F5" hoac "Debug > Start Debugging" tren menu

// Danh cho nguoi moi bat dau:
//   1. Dung "Solution Explorer window" de them/quan ly cac files
//   2. Dung "Output window" de kiem tra "build output" va "cac thong bao khac"
//   3. Dung "Error List window" de xem loi
//   4. Chon "Project > Add New Item" de tao moi file code,
//      hoac "Project > Add Existing Item" de them file da ton tai vao project nay.
//   5. Sau nay, de mo lai project nay,
//      chon "File > Open > Project" va chon file *.sln
//      Co the xem thu muc project, noi luu file *.sln bang cach
//      bam phim chuot phai vao "Solution" > chon "Open Folder in File Explorer"

// GV: AnhTT184