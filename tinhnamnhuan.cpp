#include<stdio.h>
int main(){
	int namnhuan;
	scanf("%d",&namnhuan);
	if (namnhuan <=0) {
		printf("Invalid");
	}else if(namnhuan % 400 == 0 || (namnhuan % 4 == 0 && namnhuan % 100 != 0 )) {
		printf("Yes");
	}else{
		printf("no");
	}
	return 0;
}
