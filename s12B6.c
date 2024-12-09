#include <stdio.h>
int checkPerfect(int n){
    int sum = 1;
    for (int i = 2; i < n; i++){
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum == n;
}
int main(){
    int a, b;
    printf("Nhap so bat ki: ");
    scanf("%d", &a);
    printf("Nhap so bat ki: ");
    scanf("%d", &b);

    if (checkPerfect(a) == 0){
        printf("\nSo %d khong phai so hoan hao!", a);
    } else {
        printf("\nSo %d la so hoan hao!", a);
    }

    if (checkPerfect(b) == 0){
	
        printf("\nSo %d khong phai so hoan hao!", b);
    } else {
        printf("\nSo %d la so hoan hao!", b);
    }

    return 0;
}

