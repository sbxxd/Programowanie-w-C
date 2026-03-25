#include <stdio.h>

int a, b;

int main(){

    
    //wprowadzanie zmiennych
    printf("Podaj pierwszą liczbę całkowitą: ");
    scanf("%d", &a);
    printf("\nPodaj drugą liczbę całkowita: ");
    scanf("%d", &b);

    //logika programu
    if(a>b){
        printf("\nLiczba a=%d jest wieksza od b=%d",a,b);
    }else if (a<b){
        printf("\nLiczba b=%d jest wieksza od a=%d",b,a);
    }else if(a==b){
        printf("\nLiczby a i b są sobie równe i wynoszą: %d", a);
    }


}