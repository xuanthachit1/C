#include<stdio.h>
#include<string.h>
#include<ctype.h>
struct thongTin{
	char tenHang[11];
	char tenMay[16];
	char chip[15];
	int ram;
	float gia;
};
typedef thongTin tt;
void nhap(tt *a){
	printf("Ten hang:");fgets(a->tenHang,sizeof(a->tenHang),stdin);
	a->tenHang[strcspn(a->tenHang,"\n")]='\0';
	printf("Ten may:");fgets(a->tenMay,sizeof(a->tenMay),stdin);
	a->tenMay[strcspn(a->tenMay,"\n")]='\0';
	while(1){
		printf("Vui long chon chip ban muon:");
		printf("\n1.Exynos");
		printf("\n2.M2");
		printf("\n3.M1");
		printf("\n4.SnapDragon\n");
		int e;scanf("%d",&e);getchar();
		if(e==1){
			strcpy(a->chip,"Exynos");
			printf("Exynos\n");
			break;
		}else if(e==2){
			strcpy(a->chip,"M2");
			printf("M2\n");
			break;
		}
		else if(e==3){
			strcpy(a->chip,"M1");
			printf("M1\n");
			break;
		}
		else if(e==4){
			strcpy(a->chip,"SnapDragon");
			printf("SnapDragon\n");
			break;
		}
		else{
			printf("\nKhong co dong chip nay hay chon lai\n");
		}
	}
	
	while(1){
		printf("Chon Ram(4, 8, 16, 32, 64, 128, 512):");scanf("%d", &a->ram);getchar();
		if(a->ram == 4 || a->ram == 8 || a->ram ==16 || a->ram == 32 || a->ram == 64 || a->ram == 128 || a->ram == 512){
			break;
		}else{
			printf("\nRam khong hop le vui long nhap lai\n");
		}
    }
    printf("Gia tien:");scanf("%f", &a->gia);getchar();
    printf("\n");
}
void xuat(tt a[],int n){
	printf("|%-4s|%-15s|%-15s|%-10s|%-15s|%-15s|\n", "STT","TEN HANG","TEN MAY","RAM","CHIP","GIA");
	for(int i=0;i<n;i++){
		printf("|%-4d|%-15s|%-15s|%-10d|%-15s|%-2.3f|\n",i+1,a[i].tenHang,a[i].tenMay,a[i].ram,a[i].chip,a[i].gia);
	}
}
void sapXep(tt a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(strcmp(a[j].tenMay,a[j+1].tenMay)>0){
				tt sx = a[j];
				a[j]=a[j+1];
				a[j+1]= sx;
			}
		}
	}
}
void timKiem(tt a[],int n,int t,float p){
	while(1){
		printf("Tim kiem gia ban muon:");
		scanf("%f", &p);getchar();
		printf("Tim kiem ram ban muon:");
		scanf("%d", &t);getchar();
		int ketQua = -1; 
        for (int i = 0; i < n; i++) {
            if (a[i].gia == p && a[i].ram == t) {
                ketQua = i;
                break; 
            }
        }
        if (ketQua != -1) {
            printf("|%-4s|%-15s|%-15s|%-10s|%-15s|%-10s|\n", "STT","TEN HANG","TEN MAY","RAM","CHIP","GIA");
            printf("|%-4d|%-15s|%-15s|%-10d|%-15s|%-10.2f|\n",
                   ketQua + 1, a[ketQua].tenHang, a[ketQua].tenMay, a[ketQua].ram, a[ketQua].chip, a[ketQua].gia);
            return;
        } else {
            printf("Khong tim thay . Vui long nhap lai ca hai thong tin.\n");
		}
	}
}
int main(){
	int n;printf("So luong chiec dien thoai:");
	scanf("%d", &n);getchar();
	tt a[n];
	for(int i=0;i<n;i++){
		nhap(&a[i]);
	}
	xuat(a,n);
	sapXep(a,n);
	printf("SAP XEP LAI THEO TEN MAY\n");
	xuat(a,n);
	int t;
	float p;
	timKiem(a,n,t,p);

	return 0;
}
