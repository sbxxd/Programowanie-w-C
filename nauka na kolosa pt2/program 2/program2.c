#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

//losowe liczby - losowa wielkosc tabeli z losowymi liczbami i posortowana

int n;



int main(){


    srand(time(NULL));

    n=0+rand()%(20+1);
    float tab[n];
    for (int i=0; i<=n; i++){
        tab[i]=0+rand()%(100+1);
    }


    printf("%d", n);
    printf("\n\nZawartość tabeli:\n");
    for(int i=0; i<=n; i++){
        printf("%.2f ", tab[i]);
    }

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i; j++){
            if(tab[j]>tab[j+1]){
                float temp=tab[j+1];
                tab[j+1]=tab[j];
                tab[j]=temp;
            }
        }
    }

    printf("\n\nZawartość posortowanej tabeli:\n");
    for(int i=0; i<=n; i++){
        printf("%.2f ", tab[i]);
    }

    return 0;
}