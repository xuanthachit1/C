#include<stdio.h>
void ctr(int *a,int *b){
	int temp = *a;
	*a=*b;
	*b=temp;
}
int main(){
	int a;scanf("%d", &a);
	int b;scanf("%d", &b);
	ctr(&a,&b);
	printf("%d, %d ", a,b);
	return 0; 
}
