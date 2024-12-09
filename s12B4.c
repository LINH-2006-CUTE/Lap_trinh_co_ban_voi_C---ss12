#include <stdio.h>
int findMax( int arr[], int n ){
	int max = arr[0];
	for ( int i = 1; i< n; i++){
		if ( arr[i] > max ){
			max = arr[i];
		}
	}
	return max;
}
int main(){
	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
	printf("\nPhan tu max trong mang: %d", findMax((array,10));
	return 0;
}

