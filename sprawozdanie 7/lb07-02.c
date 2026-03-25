#include <stdio.h>
#include <math.h>

double a,b;
char odp, dec;


void dod(){
    printf("\n%.2f + %.2f = %.2f", a,b,a+b);
}

void odej(){
    printf("\n%.2f - %.2f = %.2f", a,b,a-b);
}

void mno(){
    printf("\n%.2f*%.2f = %.2f", a,b,a*b);
}

void dzie(){
    if(b!=0){
    printf("\n%.2f/%.2f = %.2f", a,b,a/b);
    }else if(b==0){
    printf("%.2f/%.2f ---> Nie można dzielić przez 0.\n\n", a,b);
    }
}

int main(){


    FILE *plik = fopen("cwiczenie2.txt", "r");

    if(plik == NULL){
        printf("Nie udało się odczytać pliku\n");
    }

 while (fscanf(plik, "%lf %c %lf", &a, &dec, &b) == 3) {

    printf("------------------------------\n");
    switch(dec){
        case '+': dod(); break;
        case '-': odej(); break;
        case '*': mno(); break;
        case '/': dzie(); break;
    }

    printf("\n\nCzy chcesz wykonać kolejne obliczenia? T/N: ");
    scanf(" %c", &odp);

    if (odp == 'N' || odp == 'n') {
        break; 
    }
} 
    fclose(plik);
    return 0;
}