#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int numer;
int min = 0;
int max = 2000;
int proba=0;
int licznik=0;

int losuj(){

    srand(time(NULL));
    numer = min + rand() % (max - min + 1); 
    return numer;
}

void zgadnij(){
    while (min <= max) {
        licznik++;
 
        proba = min + (max - min) / 2;

        printf("Proba nr %d: Zgaduje %d... ", licznik, proba);

        if (proba == numer) {
            printf("\n\nSUKCES! Trafiono liczbe %d.\n\n", proba);
            break;
        } 
        else if (proba < numer) {
            printf("Za malo!\n");
            min = proba + 1;
        } 
        else {
            printf("Za duzo! \n");
            max = proba - 1; 
        }
    }
}

int main() {

    losuj();
    printf("Wylosowana liczba: %d\n", numer);
    zgadnij();
    

    return 0;
}