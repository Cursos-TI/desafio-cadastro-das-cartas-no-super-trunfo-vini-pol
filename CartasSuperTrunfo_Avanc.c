#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
//Programa inicial do cadastro de duas cartas de Super Trunfo.

    char estado[20]; //Representado pelas duas letras correspondentes à sigla oficial do estado
    char codigo[20]; //Código da carta, representado pela sigla do estado e um número
    char nome1[20]; //Nome da cidade escolhida
    char nome2[20];
    int populacao1, populacao2; //População total da cidade escolhida
    float area1, area2; //Área total da cidade escolhida, em km²
    float pib1, pib2; //PIB total da cidade escolhida
    int turismo1, turismo2; //Quantidade de pontos turísticos na cidade
    float densidade1, densidade2; //Variável da densidade populacional
    float pibpercapita1, pibpercapita2; //Variável do PIB per capita
    float superpoder1, superpoder2; //Variáveis do Super Poder

    printf("Seja bem-vindo(a) ao cadastro de cartas de Super Trunfo.\n");
    printf("Seu objetivo é cadastrar apenas duas cartas. Para cada dado inserido, clique Enter.\n");
    printf("Vamos começar!\n");
    printf("\n");
    //Mensagem de boas-vindas e breve explicação sobre o processo a ser realizado pelo usuário
    //O cadastro será feito na seguinte ordem: Nome, Estado, Código, População, Área, PIB e Turismo

    printf("Digite o nome da cidade:  \n");
    scanf("%s", &nome1);
    //Inserção e salvamento da variável 'nome1'

    printf("Digite a UF da cidade escolhida:  \n");
    scanf("%s", &estado);
    //Inserção e salvamento da variável 'estado'

    printf("Forneça o código da carta, conforme exemplo: RS01\n");
    printf("O código deve seguir uma ordem ascendente, de modo que duas cidades no mesmo estado possuam códigos diferentes.\n");
    printf("Código da carta:  \n");
    scanf("%s", &codigo);
    /*Breve explicação de como inserir o código e inserção e salvamento da variável 'codigo'.
    Eu optei por trocar o estilo do código por uma questão de lógica, para não ter que atribuir uma letra para cada estado,
    sendo que todos já possuem uma sigla (a Unidade federativa).*/

    printf("Qual o tamanho da população dessa cidade? \n");
    scanf("%d", &populacao1);
    //Inserção e salvamento da variável 'populacao1'

    printf("Qual o tamanho total, em km², dessa cidade? \n");
    scanf("%f", &area1);
    //Inserção e salvamento da variável 'area1'

    printf("Qual o PIB total da cidade? \n");
    scanf("%f", &pib1);
    //Inserção e salvamento da variável 'pib1'

    printf("Quantos pontos turísticos existem nessa cidade? \n");
    scanf("%d", &turismo1);
    //Inserção e salvamento da variável 'turismo1'.

    densidade1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;
    superpoder1 = populacao1 + area1 + pib1 + turismo1 + pibpercapita1 - densidade1;
    //Cálculos da densidade populacional, pib per capita e Super Poder após a inserção dos dados.

    printf("\n"); //Linha em branco para melhor visualização.

    printf("Carta 01\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turismo1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB Per Capita: %.2f reais\n", pibpercapita1);
    printf("Super Poder: %f\n", superpoder1);
    // Exibição dos dados da primeira carta

    printf("\n");
    //Linha em branco para melhor visualização

    printf("Agora vamos cadastrar a segunda carta!\n");
    printf("\n");
    printf("\n");
    //Início do cadastro da segunda carta

    printf("Digite o nome da cidade:  \n");
    scanf("%s", &nome2);
    //Inserção e salvamento da variável 'nome2'

    printf("Digite a UF da cidade escolhida:  \n");
    scanf("%s", &estado);
    //Inserção e salvamento da variável 'estado'

    printf("Código da carta:  \n");
    scanf("%s", &codigo);
    //Inserção e salvamento da variável 'codigo'.

    printf("Qual o tamanho da população dessa cidade? \n");
    scanf("%d", &populacao2);
    //Inserção e salvamento da variável 'populacao2'

    printf("Qual o tamanho total, em km², dessa cidade? \n");
    scanf("%f", &area2);
    //Inserção e salvamento da variável 'area2'

    printf("Qual o PIB total da cidade? \n");
    scanf("%f", &pib2);
    //Inserção e salvamento da variável 'pib2'

    printf("Quantos pontos turísticos existem nessa cidade? \n");
    scanf("%d", &turismo2);
    //Inserção e salvamento da variável 'turismo2'.

    densidade2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;
    superpoder2 = populacao2 + area2 + pib2 + turismo2 + pibpercapita2 - densidade2;
    //Cálculos da densidade populacional e pib per capita após a inserção dos dados.
    
    printf("\n"); //Linha em branco para melhor visualização.

    printf("Carta 01\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turismo2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB Per Capita: %.2f reais\n", pibpercapita2);
    printf("Super Poder: %f\n", superpoder2);
    // Exibição dos dados da segunda carta

    printf("\n");
    printf("Dados cadastrados com sucesso!\n");
    printf("\n");
    //Mensagem de confirmação

    printf("Agora vamos comparar as cartas!\n");
    printf("\n");
    printf("A população de %s é maior que a população de %s? %d\n", nome1, nome2, populacao1 > populacao2);
    printf("A área de %s é maior que a área de %s? %d\n", nome1, nome2, area1 > area2);
    printf("O PIB de %s é maior que o PIB de %s? %d\n", nome1, nome2, pib1 > pib2);
    printf("%s tem mais pontos de turismo que %s? %d\n", nome1, nome2, turismo1 > turismo2);
    printf("A densidade de %s é menor que a de %s? %d\n", nome1, nome2, densidade1 < densidade2);
    printf("O PIB per capita de %s é maior que o PIB per capita de %s? %d\n", nome1, nome2, pibpercapita1 > pibpercapita2);
    printf("O Super Poder de %s é maior que o Super Poder de %s? %d\n", nome1, nome2, superpoder1 > superpoder2);
    //Comparação das cartas após dados inseridos



        return 0;


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
}
