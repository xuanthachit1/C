#include<stdio.h>
void bubbleSort(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				int temp=a[j];a[j]=a[j+1];a[j+1]=temp;
			}
		}
	}
}
int main(){
	int a[]={0,-1,3,-10,-5,14};
	int n=sizeof(a)/sizeof(a[0]);
	printf("cac so sau khi ssap xep la:");
	bubbleSort(a,n);
	for(int i=0;i<n;i++){
		printf("%d,", a[i]);
	}
	return 0;
}
