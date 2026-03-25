#include <stdio.h>

int a;

int main(){

    printf("Podaj liczbę całkowitą: ");
    scanf("%d",&a,"\n");

    if(a>0){
        printf("Liczba a=%d jest dodatnia.", a);
    }else if (a==0){
        printf("Liczba a=%d jest równa zero.",a);
    }else if(a<0){
        printf("Liczba a=%d jest ujemna.",a);
    }

}