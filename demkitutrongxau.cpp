#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char m[1001];
	fgets(m,sizeof(m),stdin);
	m[strcspn(m,"\n")]='\0';
	int kq1=0,kq2=0,kq3=0,kq4=0;
	for(int i=0;i<strlen(m);i++){
		if(isupper(m[i])){
		++kq1;
		}
		else if(islower(m[i])){
		++kq2;
		}
		else if(isdigit(m[i])){
		++kq3;
		}
		else if(ispunct(m[i])){
		++kq4;
		}
	}
	printf("%d %d %d %d",kq1,kq2,kq3,strlen(m)-kq1-kq2-kq3);
	return  0;
	
}
