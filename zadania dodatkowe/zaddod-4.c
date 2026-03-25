#include <stdio.h>

int n, i=1;

int main(){


    //wprowadzanie zmiennych
    printf("Podaj liczbę n: ");
    scanf("%d",&n,"\n");

    printf("Liczby od 1 do %d podzielne przez 3 lub 5: \n", n);


    for(i=1;i<=n;i++){
        if(((i%3)==0) || ((i%5)==0)){
            printf("%d ", i);
        }
    
    }


}