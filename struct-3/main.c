#include <stdio.h>
struct adsoyad{
  char adi[30];
  char soyadi[30];
 
};
struct adres{
	char sokak[30];
    char mahalle[30];
	char cadde[30];
    char ilce[30];
	char il[30];	
};
struct kilo{
	float kilo;
    float ideal_kilo;
};
struct yasboy{
	int yas;
    int boy;
};
struct kisi{
  struct adsoyad adsoyad;
  struct adres adres;
  struct kilo kilo;
  struct yasboy yasboy;
  char cinsiyet;
}kisi1;

int main (){
	float erkek=0.9;
	float kadin=0.8;
	printf("Ad-Soyad Giriniz:\n");
	scanf("%s%s",&kisi1.adsoyad.adi,&kisi1.adsoyad.soyadi);
	printf("Yasinizi Giriniz:");
	scanf("%d",&kisi1.yasboy.yas);
	printf("Boyunuzu Giriniz (cm):");
	scanf("%d",&kisi1.yasboy.boy);
	printf("Cinsiyetiniz (E/K):");
	scanf("%s",&kisi1.cinsiyet);
	printf("Kilonuzu Giriniz (kg):");
	scanf("%f",&kisi1.kilo.kilo);
	printf("Adresinizi Giriniz(sokak-cadde-mahalle-ilce-il):\n");
	scanf("%s%s%s%s%s",&kisi1.adres.sokak,&kisi1.adres.cadde,
	&kisi1.adres.mahalle,&kisi1.adres.ilce,&kisi1.adres.il);
		if(kisi1.cinsiyet=='E' || kisi1.cinsiyet == 'e'){ //formül iþleme
	kisi1.kilo.ideal_kilo= (kisi1.yasboy.boy-100+kisi1.yasboy.yas/10)*erkek;
	}else{
	kisi1.kilo.ideal_kilo= (kisi1.yasboy.boy-100+kisi1.yasboy.yas/10)*kadin;
	}
	float fark = (kisi1.kilo.kilo - kisi1.kilo.ideal_kilo);
	
	printf("\n\n****************************************\n\n");
	printf("%s %s\n",kisi1.adsoyad.adi,kisi1.adsoyad.soyadi);
	printf("Yasiniz: %d\nBoyunuz:%d cm\n",kisi1.yasboy.yas,kisi1.yasboy.boy);
	printf("Cinsiyetiniz:%c\n",kisi1.cinsiyet);
	printf("Kilonuz: %.2f kg\n",kisi1.kilo.kilo);
	printf("Adresiniz: %s / %s / %s / %s / %s\n\n",kisi1.adres.sokak,kisi1.adres.cadde,
	kisi1.adres.mahalle,kisi1.adres.ilce,kisi1.adres.il);
	printf("ideal kilonuz ==> %.2f\n",kisi1.kilo.ideal_kilo);
	
	if(fark<0) printf("Zayifsiniz");
	else if(fark>=0 && fark<=10) printf("Normal Kilolusunuz");
	else if(fark>=11 && fark<=20) printf("Fazla Kilolusunuz");
	else if(fark>=21 && fark<=29) printf("Obezsiniz");
	else if(fark>=30) printf("ileri Derecede Obezsiniz");
	else printf("Kilo Hesaplanamadi");
	

  return 0;		
}




