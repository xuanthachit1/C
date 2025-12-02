#include<stdio.h> 
void nhap(int a[],int *n){
	printf("nhap gia tri n:");
	scanf("%d",n);
	for(int i=0;i<*n;i++){
		scanf("%d", &a[i]);
	}
}
void giaTri(int a[],int n){
	int min = a[0];
	int max = a[0];
	for(int i=1;i<n;i++){
		if(a[i]<min){
			min = a[i];
		}
		if(a[i]>max){
			max =a[i];
		}
	}
	printf("min=%d,max=%d\n", min,max);
}
void bubbleSort(int a[],int n){
	for(int i=0;i< n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				int temp=a[j];a[j]=a[j+1];a[j+1]=temp;
			}
		}
	}
}
int main(){
	int a[100];
	int n;
	nhap(a,&n);
	giaTri(a,n);
	bubbleSort(a,n);
	for(int i=0;i<n;i++){
		printf("%d ", a[i]);
	}
	return 0;
}


