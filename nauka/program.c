#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


float tab[10], pierw[2];
double a, b, c;
float delta, x1, x2;
int wsp[3];
int dec1;
char dec2, odp;

void losowanie(){
    
    srand(time(NULL));
    for(int i=0; i<=2; i++){
        wsp[i]=0+rand()%(10-0+1);

    }
}

void sortowanie(){

    for(int j=0; j<10-1; j++){
        for(int k=0; k<10-j-1; k++){
            if(tab[k]>tab[k+1]){
                float temp=tab[k];
                tab[k]=tab[k+1];
                tab[k+1]=temp;
            }
        }
    }


}

void pierwiastki(){
    if(a==0){
        printf("\nWspółczynnik a nie może być równy 0!\n");
    }else if(a!=0){

    printf("Równanie kwadratowe:\na=%.2f  b=%.2f  c=%.2f\n", a, b, c);

    delta=(b*b)-(4*a*c);
    if(delta==0){
        x1=(-b)/(2*a);
        printf("\nPierwiastek tego równania kwadratowego wynosi: %.2f", x1);
    }else if(delta<0){
        printf("\n\nTo równanie kwadratowe nie posiada rozwiązań!\n");
    }else if(delta>0){
        x1=(-b-sqrt(delta))/(2*a);
        x2=(-b+sqrt(delta))/(2*a);
        printf("\nPierwiastek tego równania kwadratowego wynosi: %.2f oraz %.2f", x1, x2);
    }
    }
}

void wspolczynniki(){
    a=wsp[0];
    b=wsp[1];
    c=wsp[2];
}

void sort_pierw(){

        pierw[0]=x1;
        pierw[1]=x2;

        for(int i=0; i<=3; i++){
            for(int j=0; j<3-i;j++){
                        if(pierw[j]>pierw[j+1]){
                                float temp1 = pierw[j+1];
                                    pierw[j+1]=pierw[j];
                                    pierw[j]=temp1;
                        }
            }
        }
}

int main(){

    FILE *plik = fopen("tab.txt", "r");
    FILE *plik_roz = fopen("roz.txt", "a");


    if(plik==NULL){
        printf("\n\nBłąd otwarcia pliku tab.txt\n\n");
    }

    if(plik_roz==NULL){
        printf("\nBłąd otwarcia pliku roz.txt\n\n");
    }
    
    for(int i=0; i<=10; i++){
        fscanf(plik,"%f ", &tab[i]);
    }



    
    
        printf("\nProgram obliczający pierwiastki równania kwadratowego.\nWybierz operację wpisując odpowiednią cyfrę.\n");
        
    do{
        losowanie();
        printf("1. Wyświetlanie zawartości tablicy z pliku\n2. Sortowanie tablicy\n3. Obliczanie pierwiastka rownania kwadratowego\n\n");
        printf("Wybór:");
        scanf("%d", &dec1);

        switch (dec1)
        {
        case 1:

            printf("\n\nZawartość tablicy:\n");
            for(int i=0; i<=10; i++){
                printf("%.2f ", tab[i]);
            }

            break;
        case 2:


            sortowanie();
            printf("\n\nZawartość posortowanej tablicy:\n");
            for(int i=0; i<=10; i++){
                printf("%.2f ", tab[i]);
            }
                    
                
            break;
        case 3:

                    wspolczynniki();
                    pierwiastki();
                    sort_pierw();

                    printf("\n\nCzy chcesz zapisać te rozwiązania do pliku? T/N");
                    scanf("%1s", &dec2);
                    if(dec2=='T' || dec2=='t'){
                        if(delta>0){
                            fprintf(plik_roz,"Rozwiązania równania kwadratowego o współczynnikach a=%.2f b=%.2f c=%.2f wynoszą: %.2f oraz %.2f\n\n", a, b, c, pierw[0], pierw[1]);
                        }else if(delta<0){
                            fprintf(plik_roz, "Równanie kwadratowe o współczynnikach a=%.2f b=%.2f c=%.2f nie posiada rozwiązań!\n", a, b, c);
                        }else if(delta==0){
                            fprintf(plik_roz, "Pierwiastek równania kwadratowego o współczynnikach a=%.2f b=%.2f c=%.2f wynosi: %.2f", a, b, c, x1);
                        }
                    }


            break;
        }
        printf("\nCzy chcesz kontynuuować? T/N");
        scanf("%1s", &odp);
    }while(odp=='T' || odp=='t');


    fclose(plik);
    fclose(plik_roz);
    return 0;
}