#include<stdio.h>
#include<math.h>
int nhapSo(int n){
	printf("So ban muon kiem tra la:");scanf("%d", &n);
	return n;
}
void chinhPhuong(int n){
	int can = sqrt(n);
	if (can * can == n) printf("Yes");
	else printf("No");
} 
int main(){
	int n = nhapSo(n);
	chinhPhuong(n);
	return 0;
}
