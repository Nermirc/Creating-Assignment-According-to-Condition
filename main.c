#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct ogrenci{
    char ad[10];
    char soyad[20];
    int no;
    int sinif;
            };
int main()
{
    struct ogrenci ogr;
    printf("Lutfen ogrenci numarasini giriniz.\n");
    scanf("%d",&ogr.no);

    if(ogr.no==2019)
    {
        ogr.no=2019;
        strcpy(ogr.ad,"Emir");
        strcpy(ogr.soyad,"Nergizoglu");
        ogr.sinif=5;
        printf("\n No : %d",ogr.no);
        printf("\n Adi: %s",ogr.ad);
        printf("\n Soyadi:%s",ogr.soyad);
        printf("\n Sinifi: %d",ogr.sinif);
    }
}
