#include<stdio.h>
int nhap(int n){
	printf("so muon nhap n :");
	scanf("%d", &n);
	return n;
}
float tong(int n){
	float s =0.0;
	for(int i=1;i<n;i++){
		s += 1.0/i;
	}	
	return s;
}
int main(){
	int n = nhap(n);
	float s = tong(n);
	printf("Kq tong la:%f", s);
	return 0;
}
