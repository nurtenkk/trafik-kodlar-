#include <stdio.h>
#include <stdlib.h>

int main()
{
FILE *filep=fopen("C:\\Users\\Administrator\\Desktop\\trafik_kodlarý.txt","r");
   char satir[250];
   int sayi;
   char sehir;
   int x;

       if(filep==NULL){
        printf("dosya olusturulamadi");
    }
    else{
   printf("Trafik kodunu giriniz: ");
    scanf("%d", &sayi);

    while (fgets(satir, sizeof(satir), filep) != NULL) {
        int kodoku;
        char sehiroku[81];
        sscanf(satir, "%d %s", &kodoku, sehiroku);

        if (sayi == kodoku) {

            printf("%s Dogu Karadeniz bolgesinde yer alir.\n", sehiroku);
            x=1;
            break;}}
            fclose(filep);
            if(!x){
                printf("yanlis kod girdiniz..\n");
            }
    }
    return 0;
}
