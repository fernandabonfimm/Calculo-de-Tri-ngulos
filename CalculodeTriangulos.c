// Author: Fernanda Bonfim Santos - Ciência da Computação || 2Semestre //

#include <stdio.h>
#include <stdlib.h>

int main(){
    float medida1, medida2, medida3;

printf("\n|--------------------------------------------------|");
printf("\n| Bem-Vindo ao Código de Revelação dos Triângulos! |");
printf("\n|--------------------------------------------------|");

    printf("\n Digite a 1° Medida de um dos lados do seu Triângulo: \n");
    scanf("%f", &medida1);
    printf("\n Digite a 2° Medida de um dos lados do seu Triângulo: \n ");
    scanf("%f", &medida2); 
    printf("\n Digite a 3° Medida de um dos lados do seu Triângulo: \n ");
    scanf("%f", &medida3);

    if (medida1==medida2 && medida2==medida3)
    printf("As medidas correspondem a um Triângulo Equilatero!");

else if (medida1==medida2 || medida1==medida3 || medida2==medida3)
    printf("As medidas correspondem a um Triângulo Isosceles!");

else
    printf("As medidas correspondem a um Triângulo Escaleno!");


    return 0;
}