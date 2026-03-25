#include <stdio.h>
#include <math.h>
float a, b, c, x1, x2, delta;

float miejsca_zerowe(){

    delta = sqrt((b*b) - 4*(a*c));

    if (((b*b) - 4*(a*c))<0)
    {
        printf("Równanie nie posiada miejsc zerowych w zbiorze liczb rzeczywistych.\n");
        return 0;
    }
    if (((b*b) - 4*(a*c))==0)
    {
        x1 = -b/(2*a);
        printf("Równanie posiada jedno miejsce zerowe: x1 = %f\n", x1);
        printf("delta = %f", ((b*b) - 4*(a*c)));
        return 0;
    }
    if (((b*b) - 4*(a*c))>0)
    {
    
    x1 = (-1*b + delta)/ (2*a);
    x2 = (-1*b - delta)/ (2*a);
    printf("Miejsca zerowe równania to: x1 = %f oraz x2 = %f\n", x1, x2);

    return 0;
    }
}


float main(){
    printf("Podaj wspołczynniki a, b i c równania kwadratowego w postaci ax^2 + bx + c");
    printf("\nPodaj współczynnik a: ");
    scanf("%lf", &a);
    printf("\nPodaj współczynnik b: ");
    scanf("%lf", &b);
    printf("\nPodaj współczynnik c: ");
    scanf("%lf", &c);
    miejsca_zerowe();
    return 0;
}