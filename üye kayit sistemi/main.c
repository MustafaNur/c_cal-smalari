#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
struct uye{
	char isim[20];
	char soyisim[25];
	int sno;
	char mail[50];
};
struct uye kisi;

int main() {
	setlocale(LC_ALL, "Turkish");
	printf("Uye kayit sistemine hosgeldin\n");
	printf("-----------------------------\n");
	printf("Lütfen yeni kayýt etmek isdediðinz üyenin ismini giriniz:");
	scanf("%s", &kisi.isim);
	printf("Soyisim giriniz: ");
	scanf("%s", &kisi.soyisim);
	printf("No girin: ");
	scanf("%d", &kisi.sno);
	printf("Mail adresini girin: ");
	scanf("%s", &kisi.mail);
	printf("|****|\n");
	printf("%s %s %d %s", kisi.isim, kisi.soyisim, kisi.sno, kisi.mail);
	printf("\nYeni uyenizi onaylýyor musnuz (evet = e / hayýr = h): ");
	
	char sor;
	bool anahtar=false;
	do{
		scanf("%s", &sor);
		if(sor == 'e' || sor == 'E'){
			printf("%s %s %d %s", kisi.isim, kisi.soyisim, kisi.sno, kisi.mail);
			printf("\nüyeniz baþarýlý bir þekilde kaydedildi");
			//anahtar = false;
		}
		else if(sor == 'h' || sor == 'H'){
			printf("uye onaylanmadýðý için kaydedilmeden programdan çýkýlýyor");
			//anahtar = false;
		}
		else{
			printf("Yanlýs bir harg girdiniz \n Yeni üyenizi onaylýyor musnuz? (evet = e / hayýr = h)");
			anahtar = true;
		}
	}while(anahtar == true);
	return 0;
}
