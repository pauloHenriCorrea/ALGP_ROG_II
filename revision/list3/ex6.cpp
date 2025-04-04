#include <stdio.h>
bool testetri(double a, double b, double c);

int main(){
    double a, b, c;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    if(testetri(a, b, c))
        printf("%.1f %.1f %.1f formam um triângulo retângulo", a, b, c);
    else
        printf("%.1f %.1f %.1f não formam um triângulo retângulo", a, b, c);
    return 0;
}

bool testetri(double a, double b, double c){
    if((a*a + b*b) == c*c)
        return true;
    else
        return false;
}