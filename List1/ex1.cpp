#include <stdio.h>

int main(){
    double volume, ray, height, PI = 3.14;

    printf("ENTER THE RADIUS AND HEIGHT RESPECTIVELY: \n");    
    scanf("%lf %lf", &ray, &height);

    volume = PI * (ray * ray) * height;

    printf("THE VOLUME IS: %.2f", volume);
    return 0;
}