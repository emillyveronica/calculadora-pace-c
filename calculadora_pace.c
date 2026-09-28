#include<stdio.h>

void calculadora_pace(float distancia, float minutos, float segundos, float *pace){
    float tempoTotalMin = minutos + (segundos / 60);
    *pace =  tempoTotalMin / distancia;
}

int main(){
    float distanciaKM;
    float min;
    float seg;
    float Tpace;

    printf("--------CALCULADORA DE PACE--------\n");

    printf("\nInsira a distancia que voce percorreu em km: ");
    scanf("%f", &distanciaKM);

    printf("Insira o tempo que durou \nMinutos: ");
    scanf("%f", &min);
    printf("Segundos: ");
    scanf("%f", &seg);

    calculadora_pace(distanciaKM, min, seg, &Tpace);
    printf("Seu pace medio foi: %.2f", Tpace);

    return 0;
}