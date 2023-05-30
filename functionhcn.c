#include<stdio.h>
int chuvi(int a, int b){
	int chuvi;
	chuvi = (a + b) * 2;
	return chuvi;
}
int dientich(int a, int b){
	int dientich;
	dientich = a * b;
	return dientich;
}
int main(int cd, int cr){
	printf("Nhap vao chieu dai va chieu rong hinh chu nhat: \n");
	scanf("%d%d", &cd, &cr);
	printf("Chu vi hinh chu nhat la: %d\n", chuvi(cd, cr) );
	printf("Dien tich hinh chu nhat la: %d\n", dientich(cd, cr));
	return 0;
}

