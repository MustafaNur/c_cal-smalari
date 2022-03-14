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
	printf("L�tfen yeni kay�t etmek isdedi�inz �yenin ismini giriniz:");
	scanf("%s", &kisi.isim);
	printf("Soyisim giriniz: ");
	scanf("%s", &kisi.soyisim);
	printf("No girin: ");
	scanf("%d", &kisi.sno);
	printf("Mail adresini girin: ");
	scanf("%s", &kisi.mail);
	printf("|****|\n");
	printf("%s %s %d %s", kisi.isim, kisi.soyisim, kisi.sno, kisi.mail);
	printf("\nYeni uyenizi onayl�yor musnuz (evet = e / hay�r = h): ");
	
	char sor;
	bool anahtar=false;
	do{
		scanf("%s", &sor);
		if(sor == 'e' || sor == 'E'){
			printf("%s %s %d %s", kisi.isim, kisi.soyisim, kisi.sno, kisi.mail);
			printf("\n�yeniz ba�ar�l� bir �ekilde kaydedildi");
			//anahtar = false;
		}
		else if(sor == 'h' || sor == 'H'){
			printf("uye onaylanmad��� i�in kaydedilmeden programdan ��k�l�yor");
			//anahtar = false;
		}
		else{
			printf("Yanl�s bir harg girdiniz \n Yeni �yenizi onayl�yor musnuz? (evet = e / hay�r = h)");
			anahtar = true;
		}
	}while(anahtar == true);
	return 0;
}
