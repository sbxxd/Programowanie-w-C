#include <stdio.h>
#include <math.h>

float tablica[10];


int main(){

    FILE *file_r = fopen("tablica.txt", "r");

     if(file_r == NULL){
        printf("Nie udało się odczytać pliku\n");
    }else

    for(int i=0;i<10;i++){
        fscanf(file_r,"%f ", &tablica[i]);
    }


    printf("\n\n\nElementy w tablicy:\n");
    for(int i=0;i<10;i++){
        printf("%.1f ", tablica[i]);
    }

        float max = tablica[0];
        float min = tablica[0];
    
    for(int i=0;i<10;i++){

            
       if(max<=tablica[i]){
        max=tablica[i];
       }
       if(min>=tablica[i]){
        min=tablica[i];
       }
        
    }
    
    printf("\n\n\nNajwiekszą liczbą w tej tablicy jest: %.2f, natomiast najmniejszą jest %.2f\n\n\n", max, min);

    fclose(file_r);
}