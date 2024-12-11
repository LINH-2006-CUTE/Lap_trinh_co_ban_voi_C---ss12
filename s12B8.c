#include <stdio.h>
int ucln(int a, int b){
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main(){
    int n1, n2;

    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &n1);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &n2);

    int kq = ucln(n1, n2);
    printf("UCLN cua %d va %d la: %d\n", n1, n2, kq);

    return 0;
}
