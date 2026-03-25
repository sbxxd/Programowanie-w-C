#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

float a, b, c, delta, x1, x2;
int dec;
char odp, odp2;


void random(){
    srand(time(NULL));
    a=0+rand()%(10000);
    c=0+rand()%(10000);
    b=0+rand()%(10000);
}

void wyliczanie(){
 
    if(a==0){
        printf("\nWspółczynnik a równania kwadratowego nie może być równy 0!\n");
    }else if(a>0 || a<0){
        delta=(b*b)-(4*a*c);

        if(delta<0){
            printf("\nTo równanie kwadratowe nie posiada rozwiązań w zbiorze liczb rzeczywistych.\n\n");
        }else if(delta==0){
            x1=((-b)/(2*a));
            printf("\nPierwiastek równania kwadratowego o współczynnikach: a=%.2f b=%.2f c=%.2f wynosi: %.2f\n\n", a, b, c, x1);
        }else if(delta>0){
            x1=((-b-sqrt(delta))/(2*a));
            x2=((-b+sqrt(delta))/(2*a));
            printf("\nPierwiastki równania kwadratowego o współczynnikach: a=%.2f b=%.2f c=%.2f wynoszą: %.2f oraz %.2f\n\n", a, b, c, x1, x2);
        }
    }
}


int main(){

    
FILE *plik_zapis = fopen("rozwiazania.txt", "w");
FILE *plik = fopen("wspolczynniki.txt", "r");


    printf("------ Program wyliczający pierwiastki równania kwadratowego ------\n");

do{
    

    printf("\nWybierz sposób wprowadzenia współczynników równania wpisując odpowiednią cyfrę:\n");
    printf("1. Wpisanie z klawiatury\n2. Odczyt z pliku\n3. Wybór losowy\n4. Współczynniki stałe: a=2 b=4 c=1\n");
    printf("\nWybór: ");
    scanf("%d", &dec);

    switch (dec)
    {
    case 1:
        printf("\nPodaj współczynniki równania kwadratowego:\na=");
        scanf("%f", &a);
        printf("b=");
        scanf("%f", &b);
        printf("c=");
        scanf("%f", &c);
        
        wyliczanie();

        
        break;
    case 2:
        
        if(plik==NULL){
            printf("\nNie udało się odczytać pliku.\n\n");
        }

        while(fscanf(plik,"%f %f %f", &a, &b, &c) == 3){
            wyliczanie();

        }

        break;
    case 3:
        random();

        printf("\nWylosowane współczynniki: a=%.2f b=%.2f c=%.2f\n\n", a, b, c);
        wyliczanie();

        
        break;
    case 4:

        a=2;
        b=4;
        c=1;

        wyliczanie();

        break;
    }


    printf("Czy chcesz zapisać rozwiązania do pliku? T/N");
    scanf("%1s", &odp2);
    
    
    if(odp2=='T' || odp2=='t'){
        fprintf(plik_zapis, "Pierwiastki równania o współczynnikach a=%.2f b=%.2f c=%.2f wynoszą odpowiednio: x1=%.2f oraz x2=%.2f", a, b, c , x1, x2);
    }
    
    printf("\n\nChcesz dalej liczyć? T/N");
    scanf("%1s", &odp);


}while(odp=='T' || odp=='t');

    fclose(plik_zapis);
    fclose(plik);
    return 0;
}
