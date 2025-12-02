#include <stdio.h>
#include <string.h>

int main() {
    char Hovaten[500], Quequan[100];
    int Tuoi, Songaynamvien, Tienthuoc, Tienphauthuat;
    char Tinhtrangphauthuat[10], Loaibaohiem[10];
    float gold = 0.3, sivel = 0.5, citzen = 0.7;

    printf("Ho va ten: ");
    fgets(Hovaten, sizeof(Hovaten), stdin);
    
    printf("Que Quan: ");
    fgets(Quequan, sizeof(Quequan), stdin);
    
    printf("Tuoi: ");
    scanf("%d", &Tuoi);
    
    printf("So Ngay Nam Vien: ");
    scanf("%d", &Songaynamvien);
    
    printf("Tien thuoc: ");
    scanf("%d", &Tienthuoc);
    
    printf("So Tien Phau Thuat La: ");
    scanf("%d", &Tienphauthuat);
    
    printf("Tinh Trang Phau Thuat Cua Benh Nhan: ");
    scanf("%s", Tinhtrangphauthuat);
    
    printf("Loai Bao Hiem Cua Benh Nhan: ");
    getchar(); 
    fgets(Loaibaohiem, sizeof(Loaibaohiem), stdin);

    Loaibaohiem[strcspn(Loaibaohiem, "\n")] = 0;

    float Phinoitru = 150000 * Songaynamvien;
    float Tongtien = (Phinoitru + Tienthuoc + Tienphauthuat);
    float Chiphilaiban;

    if (strcmp(Loaibaohiem, "Gold") == 0) {
        Chiphilaiban = Tongtien * gold;
        printf("Benh nhan chi can thanh toan 30%% chi phi\n");
    } else if (strcmp(Loaibaohiem, "Silver") == 0) {
        Chiphilaiban = Tongtien * sivel;
        printf("Benh nhan chi can thanh toan 50%% chi phi\n");
    } else if (strcmp(Loaibaohiem, "Citizen") == 0) {
        Chiphilaiban = Tongtien * citzen;
        printf("Benh nhan phai thanh toan 70%% chi phi\n");
    } else {
        printf("Loai bao hiem khong hop le.\n");
        return 1; 
    }
    printf("\nHo ten benh nhan: %s", Hovaten);
    printf("Que quan: %s", Quequan);
    printf("Tuoi: %d\n", Tuoi);
    printf("So ngay nam vien la: %d\n", Songaynamvien);
    printf("Tinh trang phau thuat la: %s\n", Tinhtrangphauthuat);
    printf("Loai bao hiem la: %s\n", Loaibaohiem);
    printf("Tien thuoc la: %d\n", Tienthuoc);
    printf("Tien phau thuat la: %d\n", Tienphauthuat);
    printf("Tong chi phi benh nhan phai thanh toan: %.2f VND\n", Chiphilaiban);
    
    return 0;
}
