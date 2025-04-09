#include <stdio.h>

//Criando as cartas
int main() 
{   
     char paises[50], paises2[50];
     char codigo[50], codigo2[50];
     int atributo1 = 0, atributo2 = 0;
     int r1, r2;
     unsigned long int populacao, populacao2;
     float area, area2;
     float pib, pib2;
     int turisticos, turisticos2;
     float densidade, densidade2;
     float percapita, percapita2;
     float superpoder1, superpoder2;
     int opcao1, opcao2;
     float soma1, soma2;
     float valor1_c1, valor1_c2, valor2_c1, valor2_c2;
 
 //Inicio        
     printf("--- BEM VINDO(A) AO TRUNFO ---\n\n");
     printf("Regras do jogo:\n");
     printf("OBS: - use o ponto [ex: 250.11]\n");
     printf("OBS: - não pule espaçoes ou use (_) [ex: RioDeJaneiro] ou [ex: São_Paulo]\n\n");
  
 //PSrimeira Carta
     printf("Insira as informações da carta 1\n");
     
     printf("Digite o nome do País: \n");
     scanf(" %s", paises);
 
     printf("Digite o código da carta [Ex:A01]: \n");
     scanf("%s", codigo);
     
     printf("Digite a população: \n");
     scanf("%lu", &populacao);
 
     printf("Digite a área[em km²]: \n");
     scanf("%f", &area);
 
     printf("Digite o PIB: \n");
     scanf("%f", &pib);
 
     printf("Digite a quantidade de pontos turísticos na cidade: \n");
     scanf("%d", &turisticos);
 
     densidade = populacao / area;
 
     percapita = (pib / populacao) * 1000000000;
 
 //Segunda Carta
     printf("\nInsira as informações da carta 2\n");
     
     printf("Digite o nome do País: \n");
     scanf(" %s", paises2);
 
     printf("Digite o código da carta [Ex:A01]: \n");
     scanf("%s", codigo2);
     
     printf("Digite a população: \n");
     scanf("%lu", &populacao2);
 
     printf("Digite a área[em km²]: \n");
     scanf(" %f", &area2);
     
     printf("Digite o PIB: \n");
     scanf(" %f", &pib2);
     
     printf("Digite a quantidade de pontos turísticos na cidade: \n");
     scanf("%d", &turisticos2);
 
     densidade2 = populacao2 / area2;
 
     percapita2 = (pib2 / populacao2) * 1000000000;
     
     superpoder1 = populacao + area + pib + turisticos + percapita + (1/densidade);
     
     superpoder2 = populacao2 + area2 + pib2 + turisticos2 + percapita2 + (1/densidade2);
     
 //Escolha do primeiro atributo para a comparação
     printf("\n------ MENU DA BATALHA ------\n");
     printf("Escolha o primeiro atributo: \n");
     printf("[1] População\n");
     printf("[2] Área\n");
     printf("[3] PIB\n");
     printf("[4] Pontos turídticos\n");
     printf("[5] Densidade demográfica\n");
     printf("[6] PIB per Capita\n");
     printf("[7] Super Poder\n");
     printf("\nEscolha uma opção: ");
     scanf("%d", &opcao1);
 
     switch (opcao1)
     {
      case 1:
           valor1_c1 = populacao;
           valor1_c2 = populacao2;
           atributo1 += 1;
           break;
      case 2:
           valor1_c1 = area;
           valor1_c2 = area2;
           atributo1 += 2;
           break;
      case 3:
           valor1_c1 = pib;
           valor1_c2 = pib2;
           atributo1 += 3;
           break;
      case 4:
           valor1_c1 = turisticos;
           valor1_c2 = turisticos2;
           atributo1 += 4;
           break;
      case 5:    
           valor1_c1 = densidade;
           valor1_c2 = densidade2;
           atributo1 += 5;
           break;
      case 6:
           valor1_c1 = percapita;
           valor1_c2 = percapita2;
           atributo1 += 6;
           break;
     case 7:
           valor1_c1 = superpoder1;
           valor1_c2 = superpoder2;
           atributo1 += 7;
           break;
      default:
           printf("Opção inválida");
      break;
     }
 
     //Escolha do segundo atributo para a comparação
     printf("\n------ MENU DA BATALHA ------\n");
     printf("Escolha o segundo atributo \n");
     printf("ATENÇÃO: o segundo atributo nao pode ser igual ao primeiro \n");
     printf("[1] População\n");
     printf("[2] Área\n");
     printf("[3] PIB\n");
     printf("[4] Pontos turídticos\n");
     printf("[5] Densidade demográfica\n");
     printf("[6] PIB per Capita\n");
     printf("[7] Super Poder\n");
     printf("\nEscolha uma opção: ");
     scanf("%d", &opcao2);
 
     if (opcao1 == opcao2) 
     {
           printf("Você escolheu o mesmo atributo!");
     } else
     {
      switch (opcao2) {
      case 1:
           valor2_c1 = populacao;
           valor2_c2 = populacao2;
           atributo2 += 1;
           break;
      case 2:
           valor2_c1 = area;
           valor2_c2 = area2;
           atributo2 += 2;
           break;
      case 3:
           valor2_c1 = pib;
           valor2_c2 = pib2;
           atributo2 += 3;
           break;
      case 4:
           valor2_c1 = turisticos;
           valor2_c2 = turisticos2;
           atributo2 += 4;
           break;
      case 5:    
           valor2_c1 = densidade;
           valor2_c2 = densidade2;
           atributo2 += 5; 
           break;
      case 6:
           valor2_c1 = percapita;
           valor2_c2 = percapita2;
           atributo2 += 6;
           break;
     case 7:
           valor2_c1 = superpoder1;
           valor2_c2 = superpoder2;
           atributo2 += 7;
           break;
      default:
           printf("Opção inválida");
      break;
     }
     //Soma dos atributos
     soma1 = valor1_c1 + valor2_c1;
     soma2 = valor1_c2 + valor2_c2;

     //Resultado final
     printf("\n------------ Resultado Final ----------\n\n");
     printf("%s (Carta 1) e %s (Carta 2)\n\n", paises, paises2);
     printf("Atributos escolhidos: \n");
     printf("- Primeiro atributo:\n");
     if (atributo1 == 1)//Mostra o atributo e valor 
     {
           printf("Carta 1:\n");
           printf(". População: %.2f\n", valor1_c1);
           printf("Carta 2:\n");
           printf(". População: %.2f\n", valor1_c2);
     } else if (atributo1 == 2) 
     {
          printf("Carta 1:\n");
          printf(". Área: %.2f\n", valor1_c1);
          printf("Carta 2:\n");
          printf(". Área: %.2f\n", valor1_c2);     
     }  else if (atributo1 == 3) 
      {
           printf("Carta 1:\n");
           printf(". PIB: %.2f\n", valor1_c1);
           printf("Carta 2:\n");
           printf(". PIB: %.2f\n", valor1_c2);     
      }  else if (atributo1 == 4) 
      {
           printf("Carta 1:\n");
           printf(". Pontos turísticos: %.2f\n", valor1_c1);
           printf("Carta 2:\n");
           printf(". Pontos turísticos: %.2f\n", valor1_c2);     
      }  else if (atributo1 == 5) 
      {
           printf("Carta 1:\n");
           printf(". Densidade demográfica: %.2f\n", valor1_c1);
           printf("Carta 2:\n");
           printf(". Densidade demográfica: %.2f\n", valor1_c2);     
      }  else if (atributo1 == 6)
      {
           printf("Carta 1:\n");
           printf(". PIB per Capita: %.2f\n", valor1_c1);
           printf("Carta 2:\n");
           printf(". PIB per Capita: %.2f\n", valor1_c2);     
      } else 
      {
          printf("Carta 1:\n");
          printf(". Super Poder: %.2f\n", valor1_c1);
          printf("Carta 2:\n");
          printf(". Super Poder: %.2f\n", valor1_c2); 
      }
 
      printf("\n- Segundo atributo:\n");
      if (atributo2 == 1)
     {
           printf("Carta 1:\n");
           printf(". População: %.2f\n", valor2_c1);
           printf("Carta 2:\n");
           printf(". População: %.2f\n", valor2_c2);
     } else if (atributo2 == 2) 
     {
      printf("Carta 1:\n");
      printf(". Área: %.2f\n", valor2_c1);
      printf("Carta 2:\n");
      printf(". Área: %.2f\n", valor2_c2);     
     }  else if (atributo2 == 3) 
      {
           printf("Carta 1:\n");
           printf(". PIB: %.2f\n", valor2_c1);
           printf("Carta 2:\n");
           printf(". PIB: %.2f\n", valor2_c2);     
      }  else if (atributo2 == 4) 
      {
           printf("Carta 1:\n");
           printf(". Pontos turísticos: %.2f\n", valor2_c1);
           printf("Carta 2:\n");
           printf(". Pontos turísticos: %.2f\n", valor2_c2);     
      }  else if (atributo2 == 5) 
      {
           printf("Carta 1:\n");
           printf(". Densidade demográfica: %.2f\n", valor2_c1);
           printf("Carta 2:\n");
           printf(". Densidade demográfica: %.2f\n", valor2_c2);     
      }  else if (atributo2 == 6)
      {
           printf("Carta 1:\n");
           printf(". PIB per Capita: %.2f\n", valor2_c1);
           printf("Carta 2:\n");
           printf(". PIB per Capita: %.2f\n", valor2_c2);     
      } else 
      {
          printf("Carta 1:\n");
          printf(". Super Poder: %.2f\n", valor2_c1);
          printf("Carta 2:\n");
          printf(". Super Poder: %.2f\n", valor2_c2); 
      }
     
          printf("\nSoma dos atributos:\n");
          printf("- Carta 1: %.2f\n", soma1);
          printf("- Carta 2: %.2f:\n\n", soma2);
      
     //Mostra a carta vencedora
     if (soma1 > soma2) 
     {
           printf("*** Carta 1 (%s) venceu! ***\n\n", paises);
     } else if (soma1 == soma2)
     {
           printf("*** EMPATE ***!\n\n");  
     } else 
     {
           printf("*** Carta 2 (%s) venceu! \n\n", paises2);
     }
   }
     return 0;
}