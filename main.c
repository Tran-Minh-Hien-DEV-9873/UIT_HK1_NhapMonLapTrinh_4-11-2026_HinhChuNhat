#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float chieuDai, chieuRong , chuVi, dienTich;
	printf("Nhap chieu dai vao day: ");
	scanf("%f", &chieuDai);
	
	printf("Nhap chieu rong vao day: ");
	scanf("%f", &chieuRong);
	
	chuVi = (chieuDai + chieuRong)*2;
	dienTich = chieuDai * chieuRong;
	
	printf("---------------------------------------------------------------------------- \n");
	printf("Chu vi hinh chu nhat la: %0.2f \n", chuVi);
	printf("---------------------------------------------------------------------------- \n");
	printf("Dien tich hinh chu nhat la: %0.2f \n", dienTich);
	printf("---------------------------------------------------------------------------- \n");
	
	return 0;
}
