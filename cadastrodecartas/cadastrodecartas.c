#include <stdio.h>
#include <string.h>

// Definição da estrutura da Carta Super Trunfo - Países
typedef struct
{
    char Continente_Grupo;     // Adaptado de 'Estado': 'A' a 'H' para agrupar as cartas
    char Codigo_da_Carta[5];   // Letra do grupo + número (ex: A01)
    char Nome_do_Pais[50];     // Adaptado de 'Nome da Cidade': O nome do País
    long População_Milhoes;    // População em milhões de habitantes (usando long para números grandes)
    float Area_Km2_Milhares;   // Área em milhares de km²
    float PIB_Trilhoes_USD;    // PIB em trilhões de US$
    int Num_Pontos_Turisticos; // Número de Pontos Turísticos relevantes (índice de comparação)
} SuperTrunfoPais;

// Função para exibir os dados de uma carta
void exibir_carta(SuperTrunfoPais carta)
{
    printf("\n");
    printf(" SUPER TRUNFO PAÍSES \n");
    printf("\n");
    printf(" Código da Carta: %s\n", carta.Codigo_da_Carta);
    printf(" País: %s\n", carta.Nome_do_Pais);
    printf(" Grupo: %c\n", carta.Continente_Grupo);
    printf("\n");
    printf(" ATRIBUTOS:\n");
    // Multiplicação por 1.000.000 para clareza ao ler, mas o valor real é o 'long'
    printf(" 1. População (Habitantes): %ld.000.000\n", carta.População_Milhoes);
    printf(" 2. Área (km²): %.2f Milhões\n", carta.Area_Km2_Milhares / 1000.0);
    printf(" 3. PIB (USD): %.2f Trilhões\n", carta.PIB_Trilhoes_USD);
    printf(" 4. Nro. Pontos Turísticos: %d\n", carta.Num_Pontos_Turisticos);
    printf("\n");
}

int main()
{
    // --- CARTA 1: BRASIL ---
    SuperTrunfoPais carta1;
    carta1.Continente_Grupo = 'A'; // América do Sul
    strcpy(carta1.Codigo_da_Carta, "A01");
    strcpy(carta1.Nome_do_Pais, "Brasil");
    carta1.População_Milhoes = 217;     // 217 milhões
    carta1.Area_Km2_Milhares = 8515.77; // 8.515.770 km²
    carta1.PIB_Trilhoes_USD = 2.30;     // ~2.30 trilhões USD
    carta1.Num_Pontos_Turisticos = 95;  // Exemplo de índice

    // --- CARTA 2: CANADÁ ---
    SuperTrunfoPais carta2;
    carta2.Continente_Grupo = 'B'; // América do Norte
    strcpy(carta2.Codigo_da_Carta, "B03");
    strcpy(carta2.Nome_do_Pais, "Canadá");
    carta2.População_Milhoes = 41;      // 41 milhões
    carta2.Area_Km2_Milhares = 9984.67; // 9.984.670 km²
    carta2.PIB_Trilhoes_USD = 2.20;     // ~2.20 trilhões USD
    carta2.Num_Pontos_Turisticos = 70;  // Exemplo de índice

    // Exibição das cartas
    exibir_carta(carta1);
    exibir_carta(carta2);

    return 0;
}
