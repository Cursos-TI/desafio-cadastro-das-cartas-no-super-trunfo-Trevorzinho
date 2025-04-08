#include <stdio.h>

//nivel aventureiro
int main() {
    int populacao1, populacao2, turistico1, turistico2;
    float area1, area2, pib1, pib2, densidade1, densidade2, pibcap1, pibcap2;

    char nome1[100], nome2[100];
    char codigo1[3], codigo2[3];
    char estado1[50], estado2[50];

    printf("Digite o nome da carta 1: ");
    scanf("%s", nome1);

    printf("Digite o estado da carta 1 (de A a H): ");
    scanf("%s", estado1);

    printf("Digite o código da carta 1: ");
    scanf("%s", codigo1);

    printf("Digite a área(km²) da carta 1: ");
    scanf("%f", &area1);

    printf("Digite a população da carta 1: ");
    scanf("%d", &populacao1);

    printf("Digite o PIB da carta 1: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de lugares túristicos da carta 1: ");
    scanf("%d", &turistico1);

    densidade1 = populacao1 / area1;
    pibcap1 = pib1 / populacao1;

    printf("Digite o nome da carta 2: ");
    scanf("%s", nome2);

    printf("Digite o estado da carta 2 (de A a H): ");
    scanf("%s", estado2);

    printf("Digite o código da carta 2: ");
    scanf("%s", codigo2);

    printf("Digite a área(km²) da carta 2: ");
    scanf("%f", &area2);

    printf("Digite a população da carta 2: ");
    scanf("%d", &populacao2);

    printf("Digite o PIB da carta 2: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de lugares túristicos da carta 2: ");
    scanf("%d", &turistico2);

    densidade2 = populacao2 / area2;
    pibcap2 = pib2 / populacao2;

    printf("\n=========================================================="
           "\nCarta 1: %s"
           "\n=========================================================="
           "\nCódigo: %s"
           "\nEstado: %s"
           "\nÁrea: %.2f km²"
           "\nPopulação: %d"
           "\nPIB: %.2f"
           "\nPIB per capta: %f"
           "\nDensidade Populacional: %f"
           "\nQuantidade de lugares túristicos: %d"
           "\n==========================================================",
           nome1, codigo1, estado1, area1, populacao1, pib1, pibcap1, densidade1, turistico1);

    printf("\n=========================================================="
           "\nCarta 2: %s"
           "\n=========================================================="
           "\nCódigo: %s"
           "\nEstado: %s"
           "\nÁrea: %.2f km²"
           "\nPopulação: %d"
           "\nPIB: %.2f"
           "\nPIB per capta: %f"
           "\nDensidade Populacional: %f"
           "\nQuantidade de lugares túristicos: %d"
           "\n==========================================================",
           nome2, codigo2, estado2, area2, populacao2, pib2, pibcap2, densidade2, turistico2);

    return 0;
}