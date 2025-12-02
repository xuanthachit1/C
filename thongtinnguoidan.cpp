#include<stdio.h>
#include<string.h>
#include<ctype.h>
struct danhBa{
	char ten[50],diaChia[50],soDt[11];
};
void nhap(struct danhBa dB){
	  printf("Nhap ten:");fgets(dB.ten,50,stdin);
	  dB.ten[strcspn(dB.ten,"\n")]='\0';
	  printf("Nhap dia chi:");fgets(dB.diaChia,50,stdin);
	  dB.diaChia[strcspn(dB.diaChia,"\n")]='\0';
	  printf("Nhap so dien thoai:");fgets(dB.soDt,11,stdin);
	  dB.soDt[strcspn(dB.soDt,"\n")]='\0';
}
void xuat(struct danhBa dB){
	printf("\nTen:%s", dB.ten);
	printf("\nDia chia:%s", dB.diaChia);
	printf("\nSo dien thoai:%s", dB.soDt);
	
}
int main(){
	int n;
	struct danhBa dB[1000];
	int luaChon;
	while(1){
		printf("\n1.nhap thong tin");
		printf("\n2.in danh sach thong tin");
		printf("\n3.thoat");
		printf("\nnhap lua chon cua ban (1-3):");scanf("%d",&luaChon);
		if(luaChon == 1){
			printf("\nso luong :");scanf("%d",&n);getchar();
			for(int i=0;i<n;i++){
				nhap(dB[i]);
			}
		}else if(luaChon == 2){
			for(int i=0;i<n;i++){
				xuat(dB[i]);
			}
		}else if(luaChon == 3){
			break;
		}else printf("Nhap lai:");
	}
	return 0;
}
	
