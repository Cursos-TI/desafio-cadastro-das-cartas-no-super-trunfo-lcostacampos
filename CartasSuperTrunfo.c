#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char cidade1[50], letra1, codigo1[5];
    char cidade2[50], letra2, codigo2[5];
    int populacao1, pontos_turisticos1;
    int populacao2, pontos_turisticos2;
    float area1, pib1;
    float area2, pib2;
    // Declaração das Variáveis:

    printf("-----Cadastro da 1ª Carta----- \n");
    printf("Digite a letra da cidade (exemplo: A, B, C, D...): ");
    scanf(" %c", &letra1);

    printf("Digite o codigo da cidade (exemplo: A01, A02, A03, A04): ");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade1);

    printf("Digite a populacao da cidade: ");
    scanf(" %d", &populacao1);

    printf("Digite a area da cidade (em km²): ");
    scanf(" %f", &area1);

    printf("Digite o pib da cidade (em R$): ");
    scanf(" %f", &pib1);

    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf(" %d", &pontos_turisticos1);

    // Cadastro da primeira carta
    printf("-----Cadastro da 2ª Carta----- \n");
    printf("Digite a letra da cidade (exemplo: A, B, C, D...): ");
    scanf(" %c", &letra2);

    printf("Digite o codigo da cidade (exemplo: A01, A02, A03, A04): ");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade2);

    printf("Digite a populacao da cidade: ");
    scanf(" %d", &populacao2);

    printf("Digite a area da cidade (em km²): ");
    scanf(" %f", &area2);

    printf("Digite o pib da cidade (em R$): ");
    scanf(" %f", &pib2);

    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf(" %d", &pontos_turisticos2);

    // Cadastro da segunda carta

    printf("\n");
    printf("-----Dados da primeira carta cadastrada-----\n");
    printf("Letra da cidade: %c\n", letra1);
    printf("Codigo da cidade: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Populacao da cidade: %d\n", populacao1);
    printf("Area da cidade: %.2f km²\n", area1);
    printf("PIB da cidade: R$ %.2f\n", pib1);
    printf("Numero de pontos turisticos da cidade: %d\n", pontos_turisticos1);

    printf("\n");
    printf("-----Dados da segunda carta cadastrada-----\n");
    printf("Letra da cidade: %c\n", letra2);
    printf("Codigo da cidade: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);        
    printf("Populacao da cidade: %d\n", populacao2);
    printf("Area da cidade: %.2f km²\n", area2);
    printf("PIB da cidade: R$ %.2f\n", pib2);
    printf("Numero de pontos turisticos da cidade: %d\n", pontos_turisticos2);  


    return 0;
}