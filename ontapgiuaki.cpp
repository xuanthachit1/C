#include<stdio.h>
#include<string.h>
struct thongTin {
	char hang[11];
	char tenSp[16];
	int ram;
	char chip[20];
	float gia;
};
typedef thongTin tt;
void nhap(tt *a){
	printf("Ten hang san xuat:");
	fgets(a->hang,sizeof(a->hang),stdin);
	a->hang[strcspn(a->hang,"\n")]='\0';
	printf("Ten may:");
	fgets(a->tenSp,sizeof(a->tenSp),stdin);
	a->tenSp[strcspn(a->tenSp,"\n")]='\0';
	do {
    printf("Dung luong ram: ");
    scanf("%d", &a->ram); getchar();
    if (a->ram % 4 != 0) {
        printf("RAM khong hop le! Vui long nhap lai.\n");
    }
} while (a->ram % 4 != 0);
	do {
    printf("Chip: ");
    fgets(a->chip, sizeof(a->chip), stdin);
    a->chip[strcspn(a->chip, "\n")] = '\0';
    if (
        strcmp(a->chip, "Exynos") != 0 &&
        strcmp(a->chip, "SnapDragon") != 0 &&
        strcmp(a->chip, "M1") != 0 &&
        strcmp(a->chip, "M2") != 0
    ) {
        printf("Khong hop le, vui long nhap lai!\n");
    }
} while (
    strcmp(a->chip, "Exynos") != 0 &&
    strcmp(a->chip, "SnapDragon") != 0 &&
    strcmp(a->chip, "M1") != 0 &&
    strcmp(a->chip, "M2") != 0
);

	printf("Gia:");scanf("%f",&a->gia);getchar();
	printf("\n");
}
void in(tt a,int stt){
	printf("+---+--------------+--------+-------+------------+-------+\n");
	printf("|stt| Ten hang     |Ten may | ram   |  chip      | gia   |\n");
 	printf("|%-3d|%-14s|%-8s|%-6dGB|%-12s|%-5.1f|\n",stt,a.hang,a.tenSp,a.ram,a.chip,a.gia);
} 
void bubbleSort(thongTin tt[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(strcmp(tt[j].tenSp,tt[j+1].tenSp)>0){
				thongTin tttmp = tt[j];
				tt[j]=tt[j+1];
				tt[j+1]= tttmp;
			}
		}
	}
}
void timKiem(thongTin tt[],int n,char s[100]){
	for(int i=0;i<n;i++){
		if(strcmp(s,tt[i].chip)==0){
		    in(tt[i], i + 1);
			return ;
		}
	}
	printf("khong tim thay thong tin.");
}
int main(){
	int n;printf("So luong may la:");scanf("%d", &n);getchar();
	thongTin tt[n];
	for(int i=0;i<n;i++){
		nhap(&tt[i]);
	}
	bubbleSort(tt,n);
	for(int i=0;i<n;i++){
		in(tt[i],i+1);
	}
	char m[100];
	printf("Ten ram can tim kiem:");fgets(m, sizeof(m), stdin);m[strcspn(m, "\n")] = '\0';
	timKiem(tt,n,m);
	return 0;
	
	
	
}


