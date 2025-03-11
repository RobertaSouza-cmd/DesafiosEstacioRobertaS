#include <stdio.h>

int main () {

    char Estado1, Estado2; 
    //Declara a variavel Estado 

    char CodigodaCarta1[50], CodigodaCarta2[50]; 
    // Declara a variavel Codigo da Carta. O código da carta consiste em a letra que representa o estado e um número de zero a quatro 

    char NomedaCidade1[50], NomedaCidade2[50]; 
    //Declara a variavel Nome da Cidade

    unsigned long int Populacao1, Populacao2;
    //Declara a variável População

    float Area1, Area2;
    //Declara a variável Área

    float PIB1, PIB2;
    //Declara a variável PIB 

    int NumeroDePontosTuristicos1, NumeroDePontosTuristicos2;
    //Declara a variável Número de Pontos Turisticos 

    float densidadepopulacional1, densidadepopulacional2;
    //Declara a variável densidade populacional  

    long double PIBpercapta1, PIBpercapta2;
    //Declara a variável PIB percapta

    float  superpoder1, superpoder2;
    // Declara a variável super poder, o super poder é a soma de todos os atributos numéricos 

 // Mover o cálculo das variáveis dependentes para depois da entrada dos dados


    printf("Digite uma letra de A a H para representar o estado: \n ");
    scanf(" %c", &Estado1);
    //Pede para o usuário digitar uma letra de A a H para representar o estado e armazena na variavel estado 

    printf("Digite o estado e um número de zero a quatro: \n");
    scanf("%s", &CodigodaCarta1);
    printf("Você acabou de criar um código para o seu estado! \n");
    //Pede para o usuário digitar o estado e um número de zero a quatro e armazena na variável Codigo da Carta

    printf("Digite o nome da cidade: \n");
    scanf("%s", &NomedaCidade1);
    //Pede para o usuário digitar o nome da cidade e armazena na variável Nome da Cidade 

    printf("Qual a população da cidade? \n");
    scanf("%lu", &Populacao1);
    //Pede para o usuário digitar a população da cidade e armazena na variável População 

    printf("Qual a área da cidade em km²? \n"); 
    scanf("%f", &Area1); 
    //Pede para o usuário digitar a área da cidade em km² e armazena na variável Área 

    printf("Qual o PIB da cidade? \n");
    scanf("%f", &PIB1);
    //Pede para o usuário digitar o PIB da cidade e armazena na variável PIB

    printf("Quantos pontos turísticos há na cidade? \n"); 
    scanf("%d", &NumeroDePontosTuristicos1);
    //Pede para o usuário digitar quantos pontos turísticos há na cidade e armazena na variável Número de Pontos Turísticos 

    // Calcular variáveis dependentes após a entrada dos dados
    densidadepopulacional1 = Populacao1 / Area1;
    PIBpercapta1 = PIB1 / Populacao1;

    printf("Estado: %c \n", Estado1);
    printf("Código da Carta: %s \n", CodigodaCarta1);
    printf("Nome da Cidade: %s \n", NomedaCidade1);
    printf("População: %lu \n", Populacao1);
    printf("Área: %.2f km² \n", Area1); 
    printf("PIB: %.5f \n", PIB1);
    printf("Número de Pontos Turísticos: %d \n", NumeroDePontosTuristicos1); 
    printf("Densidade Populacional: %.2f \n", densidadepopulacional1);
    printf("PIB percapta: %.5f \n", PIBpercapta1);

    printf("Agora escolha sua segunda carta! \n"); 

    printf("Digite uma letra de A a H para representar o estado: \n ");
    scanf(" %c", &Estado2);

    printf("Digite o estado e um número de zero a quatro: \n");
    scanf("%s", &CodigodaCarta2);
    printf("Você acabou de criar um código para o seu estado! \n");
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", &NomedaCidade2);

    printf("Qual a população da cidade? \n");
    scanf("%lu", &Populacao2);

    printf("Qual a área da cidade em km²? \n"); 
    scanf("%f", &Area2); 

    printf("Qual o PIB da cidade? \n");
    scanf("%f", &PIB2);

    printf("Quantos pontos turísticos há na cidade? \n"); 
    scanf("%d", &NumeroDePontosTuristicos2);

    // Calcular variáveis dependentes após a entrada dos dados
    densidadepopulacional2 = Populacao2 / Area2;
    PIBpercapta2 = PIB2 / Populacao2;

    printf("Estado: %c \n", Estado2);
    printf("Código da Carta: %s \n", CodigodaCarta2);
    printf("Nome da Cidade: %s \n", NomedaCidade2);
    printf("População: %lu \n", Populacao2);
    printf("Área: %.2f km² \n", Area2); 
    printf("PIB: %.5f \n", PIB2);
    printf("Número de Pontos Turísticos: %d \n", NumeroDePontosTuristicos2); 
    printf("Densidade Populacional: %.2f \n", densidadepopulacional2);
    printf("PIB percapta: %.5f \n", PIBpercapta2);

    //Calcular o super poder de cada carta 
    
    superpoder1 = (float)(Populacao1 + Area1 + PIB1 + NumeroDePontosTuristicos1 + densidadepopulacional1 + PIBpercapta1);
    superpoder2 = (float)(Populacao2 + Area2 + PIB2 + NumeroDePontosTuristicos2 + densidadepopulacional2 + PIBpercapta2);  

    printf ("Superpoder carta1: %.5f \n", superpoder1);
    printf ("Superpoder carta2: %.5f \n", superpoder2);


   //Comparar as cartas
   
   printf("***RESULTADO DA BATALHA*** \n");
   printf("População: Carta 1 venceu %d \n", (Populacao1 > Populacao2)); 
   printf("Área: Carta 1 venceu %d \n", (Area1 > Area2)); 
   printf("PIB: Carta 1 venceu %d \n", (PIB1 > PIB2)); 
   printf("Número de Pontos Turísticos: Carta 1 venceu %d \n", (NumeroDePontosTuristicos1 > NumeroDePontosTuristicos2)); 
   printf("Densidade Populacional: Carta 1 venceu %d \n", (densidadepopulacional1 > densidadepopulacional2) );
   printf("PIB percapta: Carta 1 venceu %d \n", (PIBpercapta1 > PIBpercapta2) );
   printf("Super Poder: Carta 1 venceu %d \n", (superpoder1 > superpoder2) );

    return 0;
}


