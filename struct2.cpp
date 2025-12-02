#include<stdio.h>
#include<string.h>
struct sinhvien {
	char ten[100];
	char lop[100];
	int diem;
};
void nhap(struct sinhvien ds[],int n){
	for(int i=0;i<n;i++){
		printf("sinh vien:%d\n", i+1);
		printf("ten:");fgets(ds[i].ten,sizeof(ds[i].ten),stdin);ds[i].ten[strcspn(ds[i].ten,"\n")]='\0';
		printf("lop:");fgets(ds[i].lop,sizeof(ds[i].lop),stdin);ds[i].lop[strcspn(ds[i].lop,"\n")]='\0';
		printf("diem:");scanf("%d", &ds[i].diem);getchar();
	}
}
void xuat(struct sinhvien ds[],int n){
	for(int i=0;i<n;i++){	
		printf("thong tin sinh vien\n", i+1);
		printf("Ten sinh vien :%s\n", ds[i].ten);
		printf("Lop:%s\n", ds[i].lop);
		printf("Diem:%d\n", &ds[i].diem);
	}
}
int main(){
	int n;
	printf("So luong sinh vien la:");scanf("%d", &n);getchar();
	struct sinhvien ds[100];
	nhap(ds,n);
	xuat(ds,n);
	return 0;
}
