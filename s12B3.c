#include <stdio.h>

int factorial( int a){
	int factorial = 1;
	if ( a == 0){
		return factorial;	
	}
	
	for ( int i = 2; i<=a; i++){
		factorial *= i ;
	}
	return factorial;
}


int main() {
    int number;
    printf("Nhap 1 so nguyen: ");
    scanf("%d", &number);
    	if ( a >0 ){
    	printf("Giai thua cua %d la: %d \n", number, factorial(number));
		}else{
		printf(" Khong co giai thua cho so am  ") 
		}	 
    return 0;
} 
