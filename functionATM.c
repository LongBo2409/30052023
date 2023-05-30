#include<stdio.h>
int sodu = 200000000;
int kiemtrasodu(){
	return sodu;
}
guitien(int soluong){
	sodu += soluong;
	printf("Da gui %d VND thanh cong!!!", soluong);
}
ruttien(int soluong){
	if (sodu >= soluong){
		sodu -= soluong;
		printf("Da rut %d VND thanh cong!!!", soluong);
	}else{
		printf("Khong du tien!!");
	}
}
int main(){
	int choice;
	int soluong;
	do {
		printf("\n--------ATM Menu-------\n");
		printf("1. Kiem tra so du\n");
		printf("2. Gui tien\n");
		printf("3. Rut tien\n");
		printf("4. Thoat\n");
		printf("Nhap lua chon:\n");
		scanf("%d", &choice);
		switch(choice){
			case 1: 
				printf("So du con lai la: %d", kiemtrasodu());
				break;
			case 2:
				printf("Nhap vao so tien muon gui: ");
				scanf("%d", &soluong);
				guitien(soluong);
				break;
			case 3:
				printf("Nhap vao so tien muon rut: ");
				scanf("%d", &soluong);
				ruttien(soluong);
				break;
			case 4:
				printf("Thoat");
			default:
				printf("Cam on da su dung internet banking!!\n");
				break;
			}
		}
		while(choice != 4);
	return 0;
	}

