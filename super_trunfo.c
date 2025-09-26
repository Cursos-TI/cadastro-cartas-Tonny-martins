#include <stdio.h>

int main (){

    char codigo_da_carta[4],nome_da_cidade[30],estado[50];
    int populacao, numero_de_pontos_turisticos;
    float area_em_km, pib_cidade;
    
    printf ("\nVamos a Primeira Carta do Super Trunfo!\n");

    printf ("\nDigite um nome de estado: \n");
    scanf ("%s", &estado);

    printf ("Digite o código da carta: \n");
    scanf ("%s", &codigo_da_carta);

    printf ("Digite o nome da cidade:\n");
    scanf ("%s", &nome_da_cidade);

    printf ("Digite a população: \n");
    scanf ("%d", &populacao);

    printf ("Digite a área da cidade Km²:\n");
    scanf ("%f", &area_em_km);

    printf ("Digite o PIB da cidade:\n");
    scanf ("%f", &pib_cidade);

    printf ("Digite o número de pontos turisticos da cidade:\n");
    scanf ("%d", &numero_de_pontos_turisticos);

    char codigo_da_carta2[4],nome_da_cidade2[30],estado2[50];
    int populacao2, numero_de_pontos_turisticos2;
    float area_em_km2, pib_cidade2;

    printf ("\nVamos a Segunda Carta do Super Trunfo!\n");

    printf ("\nDigite um nome de estado: \n");
    scanf ("%s", &estado2);

    printf ("Digite o código da carta: \n");
    scanf ("%s", &codigo_da_carta2);

    printf ("Digite o nome da cidade:\n");
    scanf ("%s", &nome_da_cidade2);

    printf ("Digite a população: \n");
    scanf ("%d", &populacao2);

    printf ("Digite a área da cidade Km²:\n");
    scanf ("%f", &area_em_km2);

    printf ("Digite o PIB da cidade:\n");
    scanf ("%f", &pib_cidade2);

    printf ("Digite o número de pontos turisticos da cidade:\n");
    scanf ("%d", &numero_de_pontos_turisticos2);

    printf ("\nCarta 1 \n");
    printf ("Estado: %s \n", estado);
    printf ("Código da carta: %s \n", codigo_da_carta);
    printf ("Nome da cidade: %s \n", nome_da_cidade);
    printf ("População: %d \n", populacao);
    printf ("Área em Km²: %.2f Km² \n", area_em_km);
    printf ("PIB: %.2f Bilhões de Reais \n", pib_cidade);
    printf ("Numero de Pontos Turisticos: %d \n\n", numero_de_pontos_turisticos);

    printf ("Carta 2 \n");
    printf ("Estado: %s \n", estado2);
    printf ("Código da carta: %s \n", codigo_da_carta2);
    printf ("Nome da cidade: %s \n", nome_da_cidade2);
    printf ("População: %d \n", populacao2);
    printf ("Área em Km²: %.2f km² \n", area_em_km2);
    printf ("PIB: %.2f Bilhões de Reais \n", pib_cidade2);
    printf ("Numero de Pontos Turisticos: %d \n\n", numero_de_pontos_turisticos2);

/*DADOS USADOS COMO MODELO PARA GERAÇÃO DAS CARTAS

Carta 1
Estado: Ceara
Código da carta: C01
Nome da cidade: Fortaleza
População: 2428678
Área em Km²: 313.80 Km²
PIB: 73.80 Bilhões de Reais
Numero de Pontos Turisticos: 15

Carta 2
Estado: Bahia
Código da carta: B01
Nome da cidade: Salvador
População: 2417678
Área em Km²: 693.80 km²
PIB: 62.95 Bilhões de Reais
Numero de Pontos Turisticos: 20*/

    return 0;

}