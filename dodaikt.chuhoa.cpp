#include<stdio.h>
#include<string.h>
#include <ctype.h>
int xauKiTu(){
	char str[11];fgets(str,sizeof(str),stdin);
	int doDai=strlen(str);
	if (strlen(str)< 10){
			return 1;
		}else{
			return 0;
		}
}
int kiemTra(char str[]){
	int chuHoa=0,chuThuong=0,coSo=0,kiTuDB=0;
	for(int i=0;str[i] != '\0';i++){
		if(isupper(str[i])){
			chuHoa=1;
		}
		else if(islower(str[i])){
			chuThuong=1;
		}
		else if(isdigit(str[i])){
			coSo=1;
		}
		else if(strchr("!@#$%^&*",str[i])){
			kiTuDB=1;
		}
	}
	if(chuHoa && chuThuong && coSo && kiTuDB){
		return 1;
	}else {
		return 0;
	}
}
int main(){
	char str[11];
	xauKiTu();
	if(kiemTra(str)){
		printf("xau nhap khong hop le");
	}else {
		printf("xau nhap hop le");
	}
	return 0;
}
