#include<stdio.h>

	void addItem( int arr[], int size){
		printf(" Nhap so luong phan tu:");
		scanf("%d",&size);
		if(size>100){
			printf(" Mang day \n");	
		}else{
			for(int i =0; i<size; i++){
				printf("Nhap gia tri phan tu %d",i+1);
				scanf(" %d",arr[i]);			}
		}
	}
	
	void showItem(int arr[], int size);
		printf("Cac phan tu trong mang la: \n");


int main(){
	int choice;
	int arr[50];
	int size=50;
	do{
		printf(" \n MENU \n");
		printf("1. Nhap so phan tu va gia tri cac phan tu \n");
		printf("2. In ra cac pha tu dang quan \n");
		printf("3.Them phan tu \n");
		printf("4. Xoa phan tu \n");
		printf("5.Sua mot phan tu \n");
		printf("6. Sap xep cac phan tu \n");
		printf("7. Tim kiem phan tu nhap vao \n");
		printf("8. Thoat");
		scanf(" %d", choice);
		
		switch (choice){
			case 1:{
				addItem(arr,size);
				break;
			}
			case2:{
				showItem(arr,size);
				break;
			}
			case3:{
				
				break;
			}
			case 4:{
				
				break;
			}
			case 5:{
				
				break;
			}
			case 6:{
				
				break;
			}
			case 7:{
				
				break;
			}
			case 8:{
				
				break;
			}
		}
	}
	while( choice != 8 );
		
	return 0;
}
