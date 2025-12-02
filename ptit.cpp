#include<stdio.h>
#include<string.h>
struct nam{
	int ngay;
	int thang;
	int nam;
};
typedef nam y;
void nhap(y *n){
	printf("nhap nam :");scanf("%d", &n->nam);getchar();
	do{
		printf("nhap thang :");scanf("%d", &n->thang);getchar();
		if(n->thang <0 || n->thang > 12){
			printf("vui long nhap lai thang hop le:");scanf("%d", &n->thang);
		}
	}while(n->thang <0 || n->thang > 12);
	printf("thang da nhap lai la :%d",n->thang);
	do{
	    printf("nhap ngay :");scanf("%d", &n->ngay);getchar();
	    if(n->thang == 1 || n->thang == 3 || n->thang == 5 || n->thang == 7 || n->thang == 8 || n->thang == 10 || n->thang == 12){
	    	printf("")
		}
	
}
