#include <stdio.h>
#include <math.h>

float x;

int main()
{
    //wprowadzanie zmiennych
    printf("Podaj liczbę zmiennoprzecinkową x: ");
    scanf("%f", &x);


    //sprawdzanie warunku sqrt(x) > lub < 0
    if(sqrt(x)<10){
        printf("Pierwiastek z x=%f wynosi %f więc jest mniejszy od 10", x, sqrt(x));
    }else if(sqrt(x)>10){
        printf("Pierwiastek z x=%f wynosi %f więc jest większy od 10", x, sqrt(x));
    }


}