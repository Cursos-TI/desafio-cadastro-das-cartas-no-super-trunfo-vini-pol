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
    char nome[20]; //Nome da cidade escolhida
    int populacao; //População total da cidade escolhida
    float area; //Área total da cidade escolhida, em km²
    float pib; //PIB total da cidade escolhida
    int turismo; //Quantidade de pontos turísticos na cidade

    printf("Seja bem-vindo(a) ao cadastro de cartas de Super Trunfo.\n");
    printf("Seu objetivo é cadastrar apenas duas cartas. Para cada dado inserido, clique Enter.\n");
    printf("Vamos começar!\n");
    printf("\n");
    //Mensagem de boas-vindas e breve explicação sobre o processo a ser realizado pelo usuário
    //O cadastro será feito na seguinte ordem: Nome, Estado, Código, População, Área, PIB e Turismo

    printf("Digite o nome da cidade:  \n");
    scanf("%s", &nome);
    //Inserção e salvamento da variável 'nome'

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
    scanf("%d", &populacao);
    //Inserção e salvamento da variável 'populacao'

    printf("Qual o tamanho total, em km², dessa cidade? \n");
    scanf("%f", &area);
    //Inserção e salvamento da variável 'area'

    printf("Qual o PIB total da cidade? \n");
    scanf("%f", &pib);
    //Inserção e salvamento da variável 'pib'

    printf("Quantos pontos turísticos existem nessa cidade? \n");
    scanf("%d", &turismo);
    //Inserção e salvamento da variável 'turismo'.

    printf("\n"); //Linha em branco para melhor visualização.

    printf("Carta 01\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", turismo);
    // Exibição dos dados da primeira carta

    printf("\n");
    //Linha em branco para melhor visualização

    printf("Agora vamos cadastrar a segunda carta!\n");
    printf("\n");
    printf("\n");
    //Início do cadastro da segunda carta

    printf("Digite o nome da cidade:  \n");
    scanf("%s", &nome);
    //Inserção e salvamento da variável 'nome'

    printf("Digite a UF da cidade escolhida:  \n");
    scanf("%s", &estado);
    //Inserção e salvamento da variável 'estado'

    printf("Código da carta:  \n");
    scanf("%s", &codigo);
    //Inserção e salvamento da variável 'codigo'.

    printf("Qual o tamanho da população dessa cidade? \n");
    scanf("%d", &populacao);
    //Inserção e salvamento da variável 'populacao'

    printf("Qual o tamanho total, em km², dessa cidade? \n");
    scanf("%f", &area);
    //Inserção e salvamento da variável 'area'

    printf("Qual o PIB total da cidade? \n");
    scanf("%f", &pib);
    //Inserção e salvamento da variável 'pib'

    printf("Quantos pontos turísticos existem nessa cidade? \n");
    scanf("%d", &turismo);
    //Inserção e salvamento da variável 'turismo'.

    printf("\n"); //Linha em branco para melhor visualização.

    printf("Carta 02\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", turismo);
    // Exibição dos dados da segunda carta

    printf("\n");
    printf("Dados cadastrados com sucesso!\n");

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
