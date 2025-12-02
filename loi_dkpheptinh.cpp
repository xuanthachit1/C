#include <stdio.h>

int main() {
    int n;
    long long kq = 1;

    printf("Nhap so : ");
    scanf("%d", &n);

    if (n< 0) {
        printf("So khong hop le\n");
    } else if(n<8) {
        for (int i = 2; i <= n; i++) {
            kq *= i;
        }
        printf("%d! = %lld\n", n, kq);
    }else{
    	printf("So khong hop le\n");
	}

    return 0;
}

