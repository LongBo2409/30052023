#include<stdio.h>
hocluc(int diem){
	if(diem >= 90)
		printf("Xep loai A\n");
	else if(diem >= 80)
		printf("Xep loai B\n");
	else if(diem >= 70)
		printf("Xep loai C\n");
	else if(diem >= 60)
		printf("Xep loai D\n");
	else if(diem < 60)
		printf("Xep loai F\n");
	else 
		printf("Nhap sai");	
}
main(int diem){
    printf("Nhap diem cua sinh vien: ");
    scanf("%d", &diem);
    hocluc(diem);
    return 0;
}
