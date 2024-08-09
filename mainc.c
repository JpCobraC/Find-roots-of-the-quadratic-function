#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

float delta(float a, float b, float c){
    return (b*b)-4*a*c;
}

void function(float a, float b, float c, float *r1, float *r2){

    *r1 =(-b+ sqrt(delta(a, b, c)))/2*a;
    *r2 =(-b- sqrt(delta(a, b, c)))/2*a;
}

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    float a, b, c, r1, r2;

    printf("Insíra um valor de a:");
    scanf("%f", &a);

    printf("Insíra um valor de b:");
    scanf("%f", &b);

    printf("Insíra um valor de c:");
    scanf("%f", &c);

    if(delta(a, b, c)<0){
        printf("Não existem raizes para esta função");
    }else {
        function(a, b, c, &r1, &r2);
        if(r1==r2){
            printf("Uma raíz real: %.2f", r1);
        }else{
            printf("Duas raízes: %.2f e %.2f", r1, r2);
        }
    }
    return 0;
}