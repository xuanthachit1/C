#include<stdio.h>
#include<math.h>
int main(){
	unsigned int a;
	printf("Nhap so:");
	scanf("%u", &a);
	unsigned long long b;
	b = (unsigned long long)a * ( a + 1 ) * ( 2 * a + 1) / 6;
	printf("\nTong la:%llu", b);
	return 0;
}

