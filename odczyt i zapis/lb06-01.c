#include <stdio.h>
#include <math.h>

int main(){

    double a,b,c;
    float delta, x1, x2;

    FILE *file_r = fopen("wspolczynniki.txt", "r");

    if(file_r == NULL){
        printf("Nie udało się odczytać pliku\n");
    }else

    while(fscanf(file_r, "%lf %lf %lf", &a, &b, &c) == 3){
        if(a==0){

            printf("Współczynnik a nie może być równy 0\n");

        }else if(a!=0){

            delta =(b*b)-(4*a*c);

            if(delta<0){

                printf("To równanie nie ma miejsc zerowych ponieważ delta < 0.\n");

            }else if(delta==0){

                x1=((-b)/(2*a));
                printf("Współczynniki tego równania kwadratowego wynoszą:\na=%.2f\nb=%.2f\nc=%.2f.\n", a,b,c);
                printf("Pierwiastek tego równania kwadratowego wynosi: x0=%.2f\n", x1);

            }else if(delta>0){
              
                x1=(((-b)-sqrt(delta))/(2*a));
                x2=(((-b)+sqrt(delta))/(2*a));

                printf("Współczynniki tego równania kwadratowego wynoszą:\na=%.2f\nb=%.2f\nc=%.2f.\n", a,b,c);
                printf("Pierwiastki tego równania kwadratowego wynoszą odpowiednio: x1=%.2f i x2=%.2f.\n", x1, x2);

            }
        }
    }
    fclose(file_r);
    return 0;
}