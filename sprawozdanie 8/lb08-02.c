#include <stdio.h>
#include <math.h>

char odp;
float dlugosc = 0;

struct punkt {
    float x, y;
};

struct okrag
{
    float t, u, r;
};


float odleglosc(struct punkt a, struct okrag o) {
    return sqrtf((o.t-a.x)*(o.t-a.x) + (o.u-a.y)*(o.u-a.y));
}

int main() {

    struct punkt a;
    struct okrag o;


    printf("Podaj współrzędne środka okręgu:\nX:");
    scanf("%f", &o.t);
    printf("Y:");
    scanf("%f", &o.u);
    printf("\nPodaj długość promienia tego okręgu:\nR:");
    scanf("%f", &o.r);
    printf("\nPodaj współrzędne punktu:\nX:");
    scanf("%f", &a.x);
    printf("Y:");
    scanf("%f", &a.y);

    float d = odleglosc(a , o);

    if(d<o.r){
        printf("\n\nPunkt znajduje się wewnątrz okręgu.\n");
    }else if(d==o.r){
        printf("\n\nPunkt znajduje się na okręgu.\n");
    }else if(d>o.r){
        printf("\n\nPunkt znajduje poza okręgiem.\n");
    }


    return 0;
}