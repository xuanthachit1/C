#include<stdio.h>
#include<string.h>
#include<math.h>
struct sinhvien{
	char ten[100];
	char maSv[100];
	char lop[50];
	float gK;
	float cK;
	float tB;
};
typedef struct sinhvien sv;

void nhap(sv *a){
	
	printf("ho va ten:");
	fgets(a->ten,sizeof(a->ten),stdin);a->ten[strcspn(a->ten,"\n")]=0;
	printf("ma sinh vien:");
	fgets(a->maSv,sizeof(a->maSv),stdin);a->maSv[strcspn(a->maSv, "\n")]=0;
	printf("lop:");
	fgets(a->lop,sizeof(a->lop),stdin);a->lop[strcspn(a->lop,"\n")]=0;
	printf("diem giua ki:");
	scanf("%f", &a->gK);getchar();
	printf("diem cuoi ki:");
	scanf("%f",&a->cK);getchar();
}
void tB(struct sinhvien sv[],int n){
	for(int i=0;i<n;i++){
		sv[i].tB = 0.4 * sv[i].gK + 0.6 * sv[i].cK;
	    printf("\nDiem trung binh: %f.2\n", sv[i].tB);
    }
}
void xuat(sv a){
	printf("%s %s %s %.2f %.2f %.2f", a.ten,a.maSv,a.lop,a.gK,a.cK,a.tB);
	printf("\n");
}
void timKiem(sinhvien sv[],int n,char m[100]){
	for(int i=0;i<n;i++){
	    if(strcmp(m,sv[i].maSv) == 0){
		    xuat(sv[i]);
			return ;
	    }
	}
	printf("khong tim thay sinh vien\n");
}
void sapXep(sinhvien sv[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(sv[j].tB<sv[j+1].tB){
				sinhvien svtmp = sv[j];
				sv[j] = sv[j+1];
				sv[j+1]= svtmp;
			}
		}
	}
}
void hocLuc(sinhvien sv[],int n){
	for(int i=0;i<n;i++){
		if(sv[i].tB >= 8){
		    gioi = sv[i];
		}
		else if(sv[i].tB >= 6.5){
			kha = sv[i];
		}
		else{
			trung binh = sv[i];
		}
	}
}
int main()
{
	int n;scanf("%d", &n);getchar();
	sinhvien sv[n];
	for(int i=0;i<n;i++){
	    nhap(&sv[i]);
    }
    printf("Diem tb cua 2 ban la")
    tB(sv,n);
	sapXep(sv,n);
	for(int i=0;i<n;i++){
		xuat(sv[i]);
	}
	char s[100];
	printf("\nnhap ma sinh vien can tim kiem:");scanf("%s", s);
	timKiem(sv ,n ,s );
	hocLuc(sv,n);
	return 0;
}
