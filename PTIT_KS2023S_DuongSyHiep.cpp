#include<stdio.h>
#include<stdlib.h>
int main(){
	int m,n;
	printf("Nhap vao so dong cua mang 2 chieu:");
	scanf("%d",&n);
	printf("Nhap vao so cot cua mang 2 chieu:");
	scanf("%d",&m);
	int numbers[n][m];
	int amount;
	int currentIndex = 0;
	int sumNumbers;
	int min, max;
	do{
		printf("************************MENU**************************\n");
		printf("1.Nhap gia tri cac phan tu trong mang\n");
		printf("2.In gia tri cac phan tu trong mang theo ma tran\n");
		printf("3.Tinh so luong cac phan tu le chia het cho 5 trong mang\n");
		printf("4.In ra cac phan tu co gia tri lon nhat, gia tri nho nhat nam tren duong bien, duong cheo chinh, duong cheo phu\n");
		printf("5.Su dung thuat toan sap xep lua chon sap xep cac phan tu giam dan theo dong cua mang\n");
		printf("6.Tinh tong cac phan tu la so nguyen trong mang\n");
		printf("7.Su dung thuat toan chen sap xep cac phan tu tren duong cheo phu cua mang tang dan\n");
		printf("8.Nhap gia tri 1 mang 1 chieu gom n phan tu va chi so cot cuoi chen vao mang, thuc hien chen vao mang 2 chieu\n");
		printf("9.thoat\n");
		printf("Lua chon cua ban la:");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Nhap vao so phan tu cua mang:\n");
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						printf("numbers[%d][%d]=",i,j);
						scanf("%d",&numbers[i][j]);
					}
				}
				break;
			case 2:
				printf("Gia tri cac phan tu trong mang in theo ma tran la:\n");
				for(int i=0;i<n;i++){
					for(int j=0; j<m;j++){
						printf("%d\t",numbers[i][j]);
					}
					printf("\n");
				}
				printf("\n");
				break;
			case 3:
				amount=0;
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						if(numbers[i][j]%2!=0&&numbers[i][j]%5==0){
							printf("%d\t",numbers[i][j]);
							amount++;
						}
					}
				}
				printf("\nSo luong cac phan tu le chia het cho 5 trong mang la: %d\n",amount);
				break;				
			case 4:
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						if(i==0 || i==n-1 || j ==0 || j == m-1){
						if(min>numbers[i][j]){
									min = numbers[i][j];
								}
								if(max<numbers[i][j]){
									max = numbers[i][j];
								}	
						}
					}
				}
				printf("Gia tri lon nhat tren duong bien: %d - Gia tri nho nhat tren duong bien: %d\n",max,min);
				
				break;
			case 5:
				break;
			case 6:
				
				break;
			case 7:
				break;
			case 8:
				break;
			case 9:
				exit(0);
			default:
				printf("Vui long chon tu 1-9\n");
		}
	}while(1==1);
}

