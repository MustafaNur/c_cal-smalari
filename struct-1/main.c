#include <stdio.h>

struct ogrenci{
	char adi[50];
	char soyad[50];
	int numara;
	char okul[50];
}ogrenci1,ogrenci2;

int main() {
	
	printf("isim girin: ");
	scanf("%s", &ogrenci1.adi);
	printf("soyad giriniz: ");
	scanf("%s", &ogrenci1.soyad);
	printf("okul adi girin: ");
	scanf("%s", &ogrenci1.okul);
	printf("okul numarasi girin: ");
	scanf("%d", &ogrenci1.numara);
	
	// alýnan veriyi yazdýrma
	printf("****** ***** **** **** ***\n");
	printf("Ogrenci ismi: %s", ogrenci1.adi);
	printf("\nOgrenci soyadi: %s", ogrenci1.soyad);
	printf("\nOgrenci okul: %s", ogrenci1.okul);
	printf("\nOkul numara: %d", ogrenci1.numara);
	return 0;
}
