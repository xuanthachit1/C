#include<stdio.h>
#include<math.h>
int main(){
	long long i;
	long long n,s;
	scanf("%lld", &n);
	for(i = 1; i <= n; i ++){
		s += i * i;
	}
	printf("KQ = %lld", s);
    return 0;
}
