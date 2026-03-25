#include <stdio.h>

int n;

int main(){

    printf("Wprowadź liczbę n: ");
    scanf("%d",&n,"\n");

    while(n>=1){
        printf("%d ",n);
        n--;
    }
}