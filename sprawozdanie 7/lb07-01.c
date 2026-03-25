#include <stdio.h>

float tablica[10];

void elementy(){

        for(int i=0;i<=9;i++){
        printf("%.2f ", tablica[i]);
    }

}

void mintomax(){


    for(int i=0; i<9; i++){
        for(int j=0;j<9-i;j++){
            if(tablica[j]>tablica[j+1]){
                float temp = tablica[j];
                tablica[j] = tablica[j+1];
                tablica[j+1] = temp;
            }
        }
    }

    for(int i=0;i<=9;i++){
        printf("%.2f ", tablica[i]);
    }
}

void maxtomin(){

    for(int i=0; i<9; i++){
        for(int j=0;j<9-i;j++){
            if(tablica[j]<tablica[j+1]){
                float temp = tablica[j];
                tablica[j] = tablica[j+1];
                tablica[j+1] = temp;
            }
        }
    }

    for(int i=0;i<=9;i++){
        printf("%.2f ", tablica[i]);
    }
    printf("\n\n");
}

int main(){

    FILE *plik = fopen("cwiczenie1.txt", "r");

    if(plik == NULL){
        printf("Nie udało się odczytać pliku.\n");
    }

    for(int i=0;i<=9;i++){
        fscanf(plik, "%f ", &tablica[i]);
    }



    printf("\n\nElementy w tablicy:\n");
    elementy();

    printf("\n\nLiczby z tablicy posegregowane od najmniejszej do największej:\n");
    mintomax();

    printf("\n\nLiczby z tablicy posegregowane od największej do najmniejszej:\n");
    maxtomin();



    fclose(plik);

    return 0;
}