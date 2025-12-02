#include<stdio.h>
#include<math.h>
int main(){
	int x,a,b;
	scanf("%d", &a);
	scanf("%d",&b);
	x = ((a+b-1)/b)*b;
	if(b ==0){
		printf("Loi kq");
	}
	printf("Kq=%d", x);
	return 0;
}
