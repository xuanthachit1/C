#include<stdio.h>
#include<math.h>
int main(){
	int i;
	long long n,sn=0;
	scanf("%lld", &n);
	for(i=1;i<=n;i++)
		sn += pow(-1,i)*i;
	printf("kq=%lld", sn);
	return 0;
}

