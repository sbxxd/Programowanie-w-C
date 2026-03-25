#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int odp1;
float a, b, c, wynik;
char odp2;

void wczytanie(){
        printf("\nWprowadź liczbę:\na=");
        scanf("%f", &a);
        printf("b=");
        scanf("%f", &b);
        printf("c=");
        scanf("%f", &c);
}

void obliczanie(){
    if(a+c==0 || c==0){
        printf("\nNie można dzielić przez zero!\n");
    }else if(a!=-c && c!=0){
        wynik=(b*3*c)/((a+c)*c);
        printf("\nPoszczególne wartości wynoszą: a=%.2f b=%.2f c=%.2f\nWartość tego wyrażenia wynosi: %.2f", a, b, c, wynik);
    }
}


int main(){

    FILE *plik = fopen("wsp.txt", "r");

    printf("Program obliczający wartość równania:\n(b*3c)/((a+c)*c)\n\n");

    if(plik==NULL){
        printf("Błąd otwarcia pliku.\n");
    }   
    
    do{
    printf("Wpisz sposób wprowadzenia współczynników a, b i c wpisując odpowiednia cyfrę:\n");
    printf("1. Dane z klawiatury\n2. Dane z pliku\nWybór:");
    scanf("%d", &odp1);

    switch (odp1)
    {
    case 1:

        wczytanie();
        obliczanie();

        break;
    
    case 2:
        while(fscanf(plik, "%f %f %f", &a, &b, &c) == 3){
            obliczanie();
        }
        break;
    }

    printf("\n\nCzy chcesz kontynuować liczenie dla innego zestawu danych? T/N");
    scanf("%1s", &odp2);

    }while(odp2=='T' || odp2=='t');

    fclose(plik);
    return 0;
}