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
	int choice;
	printf("Nhap vao chieu dai va chieu rong hinh chu nhat: \n");
	scanf("%d%d", &cd, &cr);
	printf("Chon lua tinh chu vi hay dien tich:\n");
	printf("Chon 1 de tinh chu vi\n");
	printf("Chon 2 de tinh dien tich\n");
	scanf("%d", &choice);
	
	switch(choice){
		case 1: 
			printf("Chu vi hinh chu nhat la: %d\n", chuvi(cd, cr) );
			break;
				
		case 2: 
			printf("Dien tich hinh chu nhat la: %d\n", dientich(cd, cr));
			break;
			
		default:
			printf("Sai lua chon!");
			break;
	}
	
	return 0;
}


