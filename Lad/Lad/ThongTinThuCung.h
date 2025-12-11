#include "tenthucung.h"
#include <string.h>
#include <stdio.h>
#include <math.h>

void thongTinThuCung()
{
	int i;
	struct thuCung;
	while(getchar() != '\n')
	printf("Moi nhap ten thu cung: ");
	fgets(thuCung.tenThucung, sizeof(thuCung.tenThuCung), stdin);
	printf("Moi nhap ma thu cung: ");
	scanf("%d", &thuCung.maThuCung);
	printf("Moi nhap nam sinh: ");
	scanf("%d", thuCung.namSinh);

	printf("ten thu cung la: %s", thuCung.tenThuCung);
	printf("Ma thu cung la: %d", &thuCung.maThuCung);
	printf("Tuoi thu cung: ", thuCung.namSinh);


}