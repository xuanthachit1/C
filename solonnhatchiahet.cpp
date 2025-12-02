#include<stdio.h>
#include<math.h>
int main(){
	int x,a,b;
	scanf("\n%d",&a);
	scanf("\n%d",&b);
	if(x<=a){
		x = (a/b)*b;
		printf("Kq=%d",x);
	}
	return 0;
}

