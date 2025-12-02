#include<stdio.h>
#include<string.h>
struct sinhvien {
	char ten[100];
	char lop[100];
	int diemthi;
};
void nhap(struct sinhvien ds[],int n){
	for(int i=0;i<n;i++){
		printf("thong tin sv:%d\n", i+1);
		printf("ten sv:");
		fgets(ds[i].ten, sizeof(ds[i].ten),stdin);ds[i].ten[strcspn(ds[i].ten,"\n")]='\0';
		printf("lop:");
		fgets(ds[i].lop, sizeof(ds[i].lop),stdin);ds[i].lop[strcspn(ds[i].ten,"n")]='\0';
		printf("diem thi:");
		scanf("%d", &ds[i].diemthi);getchar();
	}
}
int main(){
	int n;
	printf("so sinh vien:");scanf("%d",&n);getchar();
	struct sinhvien ds[100];
	nhap(ds, n);
	for(int i=0;i<n;i++){
		printf("sinh vien:%d\n", i+1);
		printf("ten:%s\n",ds[i].ten);
		printf("lop :%s\n", ds[i].lop);
		printf("diem thi:%d", &ds[i].diemthi);
	}
	return 0;
}
