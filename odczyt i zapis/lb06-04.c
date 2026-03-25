#include <stdio.h>
#include <math.h>

float liczby[10];
float suma=0,sr_a=0;
double sr_g=1;

void suma_elementow(){

       for(int i=0;i<10;i++){
        suma = suma + liczby[i];
    }
    printf("\nSuma elementów wynosi: %.2f", suma);

}
void srednia_arytmetyczna(){

    sr_a=suma/10;
    
    printf("\nŚrednia arytmetyczna tych elementów wynosi: %.2f", sr_a);

}

void srednia_geometryczna(){


      for(int i=0;i<10;i++)
    {
        sr_g *= liczby[i];
    }
    printf("\nŚrednia geometryczna tych elementów wynosi: %.2f", pow(sr_g, 1.0/10));

}


int main(){

    FILE *file_r = fopen("elementy.txt", "r");

    if(file_r == NULL){
        printf("Nie udało się odczytać pliku.\n");
        return 1;
    }else

    for(int i=0;i<10;i++){
        fscanf(file_r,"%f ", &liczby[i]);
    }

    printf("Elementy:\n");
    for(int i=0;i<10;i++){
        printf("%.2f ", liczby[i]);
    }

    suma_elementow();
    srednia_arytmetyczna();
    srednia_geometryczna();


    fclose(file_r);

}