#include <stdio.h>
int checkElement(int n){
    if (n < 2){
        return 0;
    }
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main(){
    int a, b;
    printf("Nhap so bat ki: ");
    scanf("%d", &a);
    printf("Nhap so bat ki: ");
    scanf("%d", &b);
    if (checkElement(a) == 0){
        printf("\nSo %d khong phai so nguyen to!", a);
    } else {
        printf("\nSo %d la so nguyen to!", a);
    }

    if (checkElement(b) == 0){
        printf("\nSo %d khong phai so nguyen to!", b);
    } else {
        printf("\nSo %d la so nguyen to!", b);
    }

    return 0;
}

