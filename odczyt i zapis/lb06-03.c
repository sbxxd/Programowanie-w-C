#include <stdio.h>
#include <math.h>

int n, wynik=1;

void silnia(){
    
    if(n==0){
        printf("Silnia z liczby 0 wynosi 1.\n");
    }else if(n<0){
        printf("Nie można obliczyć silni z liczby ujemnej.");
    }else if(n>0){

        for(int i=1;i<=n;i++){
            wynik=wynik*i;
        }

        printf("Silnia z liczby %d wynosi: %d", n, wynik);
    }
    
}


int main(){

    FILE *file_r = fopen("silnia.txt", "r");
    fscanf(file_r,"%d", &n);

    if(file_r == NULL){
        printf("Nie udało się odczytać pliku\n");
    }else

    silnia();

    fclose(file_r);
}