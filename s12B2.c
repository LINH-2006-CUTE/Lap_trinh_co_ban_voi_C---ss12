#include <stdio.h>
void show( int arr[], int n){
	for ( int i =0; i<n ; i++){
		printf("%d \n", arr[i]);
	}
}

int main(){
	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
	
	printf("Phan tu trong mang: ");
	show(arr, 10);
	
	return 0;
}
