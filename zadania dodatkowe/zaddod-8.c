#include <stdio.h>

int n,i;

int main(){

    printf("Podaj liczbę całkowitą n: ");
    scanf("%d", &n);
    printf("\nDzielniki liczby %d to: ", n,"\n");

    for(i=1;i<=n;i++){
        if((n%i)==0){
            printf("%d, ", i);
        }
    }


}