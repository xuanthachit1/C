#include <stdio.h>

int main() {
    int n;
    long long sum = 0; // Dùng long long d? tránh tràn s?

    // Nh?p n
    printf("Nh?p n: ");
    scanf("%d", &n);

    // Tính t?ng các bình phuong
    for (int i = 1; i <= n; i++) {
        sum += (long long)i * i;
    }

    // In k?t qu?
    printf("T?ng S_n = %lld\n", sum);

    return 0;
}

