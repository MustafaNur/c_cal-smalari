#include <stdio.h>
struct ogrenci
{
    char adi[50];
    int SiraNo;
    float no;
} ogr[10];
void goster(struct ogrenci ogr[]);
int main(){
    int i;
    printf("Ogrenci kayit ekranina hosgeldiniz:\n");
    for(i=0; i<10; ++i){
        ogr[i].SiraNo = i+1;
        printf("Basvuru Sirasi: %d\n",ogr[i].SiraNo);
        printf("adi: ");
        scanf("%s",ogr[i].adi);
        printf("no: ");
        scanf("%f",&ogr[i].no);
        printf("\n");
    }
    goster(ogr);
    
    return 0;
}

void goster(struct ogrenci ogr[]){
	int i;
	printf("Ekrana yazdirma:\n\n");
    for(i=0; i<10; ++i){
    	ogr[i].SiraNo = i+1;
        printf("\nBasvuru Sirasi: %d\n",ogr[i].SiraNo);
        printf("adi: %s",ogr[i].adi);
        printf("no: %.0f",ogr[i].no);
        printf("\n");
    }
}
 
 


