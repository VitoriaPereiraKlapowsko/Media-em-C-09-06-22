#include <stdio.h>

#define numero_de_participantes 3
#define numero_total 10

// Função para pegar a maior nota entre os participantes
int pegarMaiorNota(float notas[])
{
    int contadorMaiorNota = 0;
    for (int i = 1; i < numero_de_participantes; ++i)
    {
        if (notas[i] > notas[contadorMaiorNota])
        {
            contadorMaiorNota = i;
        }
    }
    return contadorMaiorNota;
}

// Função para pegar a média dos números
float calcularMedia(int numeros[])
{
    int soma = 0;
    for (int i = 0; i < numero_total; ++i)
    {
        soma += numeros[i];
    }
    return (float)soma / numero_total;
}

int main()
{
    // Pegar as notas dos participantes
    printf("Atividade 1!\n");

    float notas[numero_de_participantes];
    for (int i = 0; i < numero_de_participantes; ++i)
    {
        printf("Participante %d, por favor, digite sua nota: ", i + 1);
        scanf("%f", &notas[i]);
    }

    int contadorMaiorNota = pegarMaiorNota(notas);
    printf("O participante %d tem a maior nota. Parabéns!!!\n", contadorMaiorNota + 1);

    // Pegar os números e calcular a média
    printf("\nAtividade 2!\n");

    int numeros[numero_total];
    printf("Digite %d números abaixo, separados por espaços:\n", numero_total);
    for (int i = 0; i < numero_total; ++i)
    {
        printf("-> ");
        scanf("%d", &numeros[i]);
    }

    float media = calcularMedia(numeros);
    printf("O valor da média é: %.2f\n", media);

    return 0;
}
