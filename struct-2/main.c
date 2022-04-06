#include <stdio.h>

typedef struct{
	char adi[50];
	char soyadi[50];
}isim;

typedef struct{
	int telno;
	int kimlikno;
}no;

typedef struct{
	char cadde[50];
	char sokak[50];
	char mahalle[50];
	char il[50];
	char ilce[50];	
}adres;

typedef struct{
	int vize[2];
	int final[2];
}notu;

typedef struct{
	isim isim;
	no no;
	adres adres;
	notu notu;
	char cinsiyet;
}ogrenci;

int main() {
	
	ogrenci ogrenci1;
	printf("Ogrenci adini ve soyadini sirasiyla giriniz\n");
	scanf("%s%s", &ogrenci1.isim.adi, &ogrenci1.isim.soyadi);
	printf("Telno ve kimlik no giriniz\n");
	scanf("%d %d", &ogrenci1.no.telno, &ogrenci1.no.kimlikno);
	printf("il - ilce - mahalle - cadde - sokak - giriniz\n");
	scanf("%s%s%s%s%s", &ogrenci1.adres.il, &ogrenci1.adres.ilce, &ogrenci1.adres.mahalle, &ogrenci1.adres.cadde, &ogrenci1.adres.sokak);
	printf("Ogrencinin vize1 - vize2 ve final-1 final-2 giriniz\n");
	scanf("%d%d%d%d", &ogrenci1.notu.vize[1], &ogrenci1.notu.vize[2], &ogrenci1.notu.final[1], &ogrenci1.notu.final[2]);
	
	int ort;
	ort = ((ogrenci1.notu.vize[1] + ogrenci1.notu.vize[2]) + (ogrenci1.notu.final[1] + ogrenci1.notu.final[2]))/2;
	
	if(ort >= 50){
		printf("ortalamaniz %d  Dersten gecti", ort);
	}
	else{
		printf("ortalamaniz %d  Dersten kaldi", ort);
	}
	
	return 0;
}
