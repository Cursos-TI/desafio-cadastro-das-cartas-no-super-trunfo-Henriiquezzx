#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    //Informaçoes da carta 1
    
    char nome_estado1[50] = "BAHIA";
    char codigo1[50] = "B1";
    char nome_cidade1[50] = "SALVADOR";
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int numero_de_pontos_turisticos1 = 40;
    
  //Informações da carta 2
   
  char nome_estado2[50] = "AMAZONAS";
    char codigo2[50] = "A2";
    char nome_cidade2[50] = "MANAUS";
    int populacao2 = 13225000;
    float area2 = 2040.11;
    float pib2 = 599.28;
    int numero_de_pontos_turisticos2 = 60;
     

    printf("INSIRA O CODIGO DA CARTA:\n)");
    scanf("%49s", &codigo1);
    
    printf("INSIRA O ESTADO:\n (para dar espaço utilize '_'\n)");
    scanf("%49s", nome_estado1);


    printf("INSIRA A POPULAÇÃO:\n");
    scanf("%d", &populacao1);

    printf("INSIRA A ÁREA: (em km²)\n");
    scanf("%f", &area1);

   printf("INSIRA O PIB DA SUA CIDADE: \n");
    scanf("%f", &pib1 );
   
    //Apresentação de dados 
    
    printf("OS DADOS ABSORVIDOS:");
    printf("CIDADE: %s\n", codigo1);
    printf("ESTADO: %s\n", nome_estado1);
    printf("POPULAÇÃO: %d\n", populacao1);
    printf("ÁREA: %d\n", area1);
    printf("PIB: %d\n", pib1);
    return 0;
}
