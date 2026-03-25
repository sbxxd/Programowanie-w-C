#include <stdio.h>
#include <math.h>


const double PI = 3.1415926535;

int wyb=0;
float a,b;

void prostokat(){
    printf("\n\nPodaj długość pierwszej krawędzi prostokąta: ");
    scanf("%f", &a);
    printf("\nPodaj długość drugiej krawędzi prostokąta: ");
    scanf("%f",&b);

    printf("\n\nPole prostokąta o bokach %.2f i %.2f wynosi: %.2f", a,b,a*b);
}

void trojkat(){
    printf("\n\nPodaj długość podstawy trójkąta: ");
    scanf("%f", &a);
    printf("\nPodaj długość wysokości trójkąta: ");
    scanf("%f", &b);

    printf("\n\nPole trójkąta o podstawie %.2f i wysokości równej %.2f wynosi: %.2f", a,b,0.5*a*b);

}

void kolo(){
    printf("\n\nPodaj długość promienia: ");
    scanf("%f", &a);

    printf("\n\nPole koła o promieniu %.2f wynosi: %.2f",a,PI*a*a);


}
int main(){
    printf("Wybierz figurę, której pole chcesz policzyć poprzez wpisanie odpowiadającej jej liczby: \n\n1. Prostokąt\n2. Trójkąt\n3. Koło\n\n");
    scanf("%d", &wyb);

    switch (wyb)
    {
    case 1:
        prostokat();
        break;
    case 2:
        trojkat();
        break;
    case 3:
        kolo();
        break;
    }

}