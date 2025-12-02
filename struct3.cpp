#include<stdio.h>
#include<string.h>
struct sinhvien {
	char hoTen[100];
	char maSv[100];
	char lop[100];
	float diemGk;
	float diemCk;
	float diemTb;
};
void nhap(struct sinhvien ds[],int n){
	for(int i=0;i<n;i++){
		printf("sinh vien:%d\n", i+1);
		printf("Ho va ten:");fgets(ds[i].hoTen,sizeof(ds[i].hoTen),stdin);
		ds[i].hoTen[strcspn(ds[i].hoTen,"\n")]='\0';
		printf("Ma so sinh vien:");fgets(ds[i].maSv,sizeof(ds[i].maSv),stdin);
		ds[i].maSv[strcspn(ds[i].maSv,"\n")]='\0';
		printf("Lop:");fgets(ds[i].lop,sizeof(ds[i].lop),stdin);
		ds[i].lop[strcspn(ds[i].lop,"\n")]='\0';
		printf("Diem giua ki:");scanf("%f", &ds[i].diemGk);getchar();
		printf("Diem cuoi ki:");scanf("%f", &ds[i].diemCk);getchar();
		printf("\n");
	}
}
void xuat(struct sinhvien ds[], int n){
	for(int i=0;i<n;i++){
		printf("Thong tin sinh vien %d\n",i+1);
		printf("Ho va ten:%s\n", ds[i].hoTen);
		printf("Ma so sinh vien:%s\n", ds[i].maSv);
		printf("Lop:%s\n", ds[i].lop);
		printf("Diem giua ki:%.2f\n", ds[i].diemGk);		
		printf("Diem cuoi ki:%.2f\n", ds[i].diemCk);
		printf("Diem trung binh la:%.2f\n", ds[i].diemTb);
		printf("\n");
	}
}
void diemTb(struct sinhvien ds[], int n){
	for(int i=0;i<n;i++){
		ds[i].diemTb = 0.4 * ds[i].diemGk + 0.6 * ds[i].diemCk;
	}
}
void bubbleSort(struct sinhvien ds[], int n){
	for(int i=0;i<n-1;i++){
		for (int j=i-1;j<n;j++){
			if(ds[i].diemTb<ds[j].diemTb){
				struct sinhvien temp = ds[i];ds[i]=ds[j];ds[j]=temp;
			}
		}
	}
}
void in(sinhvien ds){
	printf("%s %s %s %d %d %d ", ds.hoTen,ds.maSv,ds.lop,ds.diemGk,ds.diemCk,ds.diemTb);
}
void  timKiem(sinhvien ds[], int n,char hoTen[100]){
	for(int i=0;i<n;i++){
		if(strcmp(hoTen, ds[i].hoTen) == 0){
			in(ds[i]);
			return;
		}
	}
	printf("Khong thay sinh vien nao ca.\n");
}
int main(){
	int n;printf("Nhap so luong sinh vien:");scanf("%d", &n);getchar();
	struct sinhvien ds[100];
	nhap(ds,n);
	diemTb(ds,n);
	bubbleSort(ds,n);
	xuat(ds,n);
	timKiem(ds,n,hoTen);
	in(ds)
	return 0;
	
}

