/* TRABALHO FEITO POR: GABRIEL LOPES DE ALMEIDA              RA:77279
					   MATHEUS D'AVILLA  DO CARMO            RA:10168							
					
TURMA DO 1-SEMESTRE DE SISTEMAS DE INFORMAÇÃO*/

#include <iostream>
#include <stdlib.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Portuguese");
 
 
 
	char nome[50];
	char resposta;
	int nivel;
	int correto_1=0,errado_1=0,contadorpergun_1=1,totalpergun_1=1;
	int correto_2=0,errado_2=0,contadorpergun_2=1,totalpergun_2=1;
	int correto_3=0,errado_3=0,contadorpergun_3=1,totalpergun_3=1;
	int vida, pontutotal;
	int ajuda = 2;
 
	vida = 3;
	
 
 
 
 
	inicio:
	printf("\t*=============================================================================*\n");
    printf("\t|================================| Mega Quiz |================================|\n");			//primeiro menu
    printf("\t*=============================================================================*");
	printf("\n\n");
	printf ("\nInforme o nome do participante e em seguida pressione \"enter\".\n\n");
	printf ("\nNOME DO PARTICIPANTE: ");
	gets(nome);
    system("cls");
 
 
 
	printf ("\n\tSEJA BEM VINDO \"%s\"\n",nome);
    printf("\n\n");
    printf ("\t*-----------------------------------------------------------------*\n");    
	printf ("\t|                           INSTRUCOES                	          |\n");
	printf ("\t*-----------------------------------------------------------------*\n");
	printf ("\t|       O Mega Quiz e um jogo de perguntas e respostas em geral.  |\n");
	printf ("\t|       O usuario devera escolher, dentre as 4 alternativas       |\n");
	printf ("\t|        apenas uma e em seguida precionar \"enter\".               |\n");      
	printf ("\t|                                                                 |\n");					//segundo menu (instrucoes)
	printf ("\t|         O jogo possui 3 niveis de dificuldade:                  |\n");
	printf ("\t|   Nivel facil - Cada resposta certa valera 3 pontos             |\n");
	printf ("\t|   Nivel intermediário - Cada resposta certa valera 5 pontos     |\n");
	printf ("\t|   Nivel difícil - Cada resposta certa valera 7 pontos           |\n");
	printf ("\t*-----------------------------------------------------------------*\n");
	printf ("Pressione \"enter\" para continuar...");
	getchar();system ("cls");
 
	system("color 0C");
	printf ("----------------------------------------------------------\n");
	printf ("|                         AVISO!!                        |\n");
	printf ("----------------------------------------------------------\n");
	printf ("|      1- Voce tem 3 vida                                |\n");					//terceiro menu (Aviso)
	printf ("|      2- Havera uma premio caso voce venca :D           |\n");
	printf ("----------------------------------------------------------\n");
	printf ("Boa sorte e bom jogo\n\n");
	printf ("Pressione \"enter\" para continuar...");
	getchar();system ("cls");
 
 
 
 
 
 
	
	system("color 07");
    printf ("-----------------------------\n");
	printf ("|          NIVEL FACIL      |\n");				//FACIL
	printf ("-----------------------------\n");                                                       
	printf ("Pressione \"enter\" para continuar...");
	getchar();system ("cls");
 
 
	printf ("---------------------------------\n");
	printf ("|  Pergunta n. 01 - Nivel Facil |\n");				 
	printf ("---------------------------------\n\n");
	printf ("\t\tO Brasil foi colônia de qual país?\n\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tA) Espanha\n"); 
	printf ("\t\tB) Italia\n");
	printf ("\t\tC) Alemanha\n");
	printf ("\t\tD) Portugal\n\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	printf("\n\n");
 
 
 
	if ((resposta=='d')||(resposta=='D'))
	{
	system("color 0A");
	printf ("\t\tResposta correta\n");
	printf ("\t            +3 pontos\n");
	correto_1++;
	}
	else
	{
	system("color 0C");
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"D\"\n");
	errado_1++;
	vida= vida - 1;
    }
 
			getchar();printf ("Pressione \"enter\" para a proxima pergunta...");
			getchar();system("cls");
 
	system("color 07");
	printf ("---------------------------------\n");
	printf ("|  Pergunta n. 02 - Nivel Facil |\n");				 
	printf ("---------------------------------\n\n");	
	printf ("\t\tQual o pintor produziu a obra Monalisa?\n\n");					//Segunda pergunta
	printf ("\t\t----------------------------------\n");
	printf ("\t\tA) Tarsila do amaral\n"); 
	printf ("\t\tB) Candido Portinari\n");
	printf ("\t\tC) Leonardo da Vinci\n");
	printf ("\t\tD) Vincent van Gogh\n\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	printf("\n\n");
 
	if ((resposta=='c')||(resposta=='C')){
	system("color 0A");
	printf ("\t\tResposta correta\n");
	printf ("\t            +3 pontos\n");
	correto_1++;
	}
	else
	{
	system("color 0C");	
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"C\"\n");
	errado_1++;
	vida= vida - 1;
    }
 
 
 
		printf("\n\n");
			getchar();printf ("Pressione \"enter\" para a proxima pergunta...");
			getchar();system("cls");
 
	pergunta3:
	system("cls");
	system("color 07");
    printf ("---------------------------------\n");
	printf ("|  Pergunta n. 03 - Nivel Facil |\n");				 
	printf ("---------------------------------\n\n");
	printf ("\t\tQual a montanha mais alta do mundo?\n\n");       //terceira pergunra
	printf ("\t\t----------------------------------\n");
	printf ("\t\tA) Mauna Kea\n"); 
	printf ("\t\tB) Dhaulagiri\n");
	printf ("\t\tC) Monte Chiliad\n");
	printf ("\t\tD) Monte Everest\n\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	printf("\n\n");
 
 
 
	if ((resposta=='d')||(resposta=='D')){
	system("color 0A");
	printf ("\t\tResposta correta\n");
	printf ("\t            +3 pontos\n");
	correto_1++;
	}
	else{
	system("color 0C");
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"D\"\n");
	errado_1++;
	vida= vida - 1;
    }    
			if(vida==0){
				printf("\n\n");
				printf ("--------------------- GAME OVER -------------------\n");
 
 
 
				goto fim;
				}
 
    printf("\n\n");
			getchar();printf ("Pressione \"enter\" para a proxima pergunta...");
			getchar();system("cls");
 
 
	system("color 07");		
	pergunta4:
	system("cls");
	printf ("---------------------------------\n");
	printf ("|  Pergunta n. 04 - Nivel Facil |\n");				 
	printf ("---------------------------------\n\n");
	printf ("\t\tQuantos minutos tem em três horas?\n\n");       //Quarta pergunra
	printf ("\t\t----------------------------------\n");
	printf ("\t\tA) 185 minutos\n"); 
	printf ("\t\tB) 170 minutos\n");
	printf ("\t\tC) 180 minutos\n");
	printf ("\t\tD) 190 minutos\n\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	ajuda = ajuda - 1;
	scanf ("%s",&resposta);
	printf("\n\n");
 
	if ((resposta=='c')||(resposta=='C')){
	system("color 0A");
	printf ("\t\tResposta correta\n");
	printf ("\t            +3 pontos\n");
	correto_1++;
	}
	else{
	system("color 0C");
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"C\"\n");
	errado_1++;
	vida= vida - 1;
    }
    if(vida==0){
				printf("\n\n");
				printf ("--------------------- GAME OVER -------------------\n");
 
 
 
				goto fim;
				}
 
     printf("\n\n");
			getchar();printf ("Pressione \"enter\" para a proxima pergunta...");
			getchar();system("cls");
 
		system("color 07");	
		pergunta5:
	system("cls");
	printf ("---------------------------------\n");
	printf ("|  Pergunta n. 05 - Nivel Facil |\n");				 
	printf ("---------------------------------\n\n");
	printf ("\t\tA frase “Independência ou morte” foi dita por quem?\n\n");       //Quinta pergunra
	printf ("\t\t----------------------------------\n");
	printf ("\t\tA) Dom pedro 1\n"); 
	printf ("\t\tB) Maria Leopoldina\n");
	printf ("\t\tC) Dom pedro 2\n");
	printf ("\t\tD) Edson Arantes do Nascimento\n\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	printf("\n\n");
 
	if ((resposta=='a')||(resposta=='A')){
	system("color 0A");
	printf ("\t\tResposta correta\n");
	printf ("\t            +3 pontos\n");
	correto_1++;
	}
	else{
	system("color 0C");
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"A\"\n");
	errado_1++;
	vida= vida - 1;
    }
    if(vida==0){
				printf("\n\n");
				printf ("--------------------- GAME OVER -------------------\n");
 
 
 
				goto fim;
				}
 
    printf("\n\n");
			getchar();printf ("Pressione \"enter\" para a proxima pergunta...");
			getchar();system("cls");
 
	system("color 07");
	pergunta6:
	system("cls");
	printf ("---------------------------------\n");
	printf ("|  Pergunta n. 06 - Nivel Facil |\n");				 
	printf ("---------------------------------\n\n");
	printf ("\t\tEm qual pólo fica a Antártica?\n\n");       //Sexta pergunra
	printf ("\t\t----------------------------------\n");
	printf ("\t\tA) Pólo Sul\n"); 
	printf ("\t\tB) Pólo Centro \n");
	printf ("\t\tC) Pólo Norte\n");
	printf ("\t\tD) Pólo Oeste\n\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	printf("\n\n");
 
	if ((resposta=='a')||(resposta=='A')){
	system("color 0A");
	printf ("\t\tResposta correta\n");
	printf ("\t            +3 pontos\n");
	correto_1++;
	}
	else{
	system("color 0C");
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"A\"\n");
	errado_1++;
	vida= vida - 1;
    }
    if(vida==0){
				printf("\n\n");
				printf ("--------------------- GAME OVER -------------------\n");
 
 
 
				goto fim;
				}
 
    printf("\n\n");
			getchar();printf ("Pressione \"enter\" para a proxima pergunta...");
			getchar();system("cls");
 
	system("color 07");		
	pergunta7:
	system("cls");			
	printf ("---------------------------------\n");
	printf ("|  Pergunta n. 07 - Nivel Facil |\n");				 
	printf ("---------------------------------\n\n");
	printf ("\t\tQual a personagem mais famosa de Maurício de Sousa?\n\n");       //Setima pergunra
	printf ("\t\t----------------------------------\n");
	printf ("\t\tA) Mafalda\n"); 
	printf ("\t\tB) Smurfette\n");
	printf ("\t\tC) Menino Maluquinho\n");
	printf ("\t\tD) Mônica\n\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	printf("\n\n");
 
	if ((resposta=='d')||(resposta=='D')){
	system("color 0A");
	printf ("\t\tResposta correta\n");
	printf ("\t            +3 pontos\n");
	correto_1++;
	}
	else{
	system("color 0C");
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"D\"\n");
	errado_1++;
	vida= vida - 1;
    }
    if(vida==0){
				printf("\n\n");
				printf ("--------------------- GAME OVER -------------------\n");
 
 
 
				goto fim;
				}
 
    printf("\n\n");
			getchar();printf ("Pressione \"enter\" para a proxima pergunta...");
			getchar();system("cls");
 
	system("color 07");		
	pergunta8:
	system("cls");	
	printf ("---------------------------------\n");
	printf ("|  Pergunta n. 08 - Nivel Facil |\n");				 
	printf ("---------------------------------\n\n");
	printf ("\t\tComplete a frase a seguir: “De Grão em grão...”\n\n");       //Oitava pergunra
	printf ("\t\t----------------------------------\n");
	printf ("\t\tA) A galinha fica mais gorda\n"); 
	printf ("\t\tB) O galo fica maior\n");
	printf ("\t\tC) O pintinho vai ficando gordo\n");
	printf ("\t\tD) A galinha enche o papo\n\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	printf("\n\n");
 
	if ((resposta=='d')||(resposta=='D')){
	system("color 0A");
	printf ("\t\tResposta correta\n");
	printf ("\t            +3 pontos\n");
	correto_1++;
	}
	else{
	system("color 0C");
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"D\"\n");
	errado_1++;
	vida= vida - 1;
    }
    if(vida==0){
				printf("\n\n");
				printf ("--------------------- GAME OVER -------------------\n");
 
 
 
				goto fim;
				}
 
    printf("\n\n");
			getchar();printf ("Pressione \"enter\" para a proxima pergunta...");
			getchar();system("cls");
 
	system("color 07");		
	pergunta9:
	system("cls");
	printf ("---------------------------------\n");
	printf ("|  Pergunta n. 09 - Nivel Facil |\n");				 
	printf ("---------------------------------\n\n");
	printf ("\t\tA metade de 12 é igual a:\n\n");       //nona pergunra
	printf ("\t\t----------------------------------\n");
	printf ("\t\tA) 6\n"); 
	printf ("\t\tB) 6.5\n");
	printf ("\t\tC) 5\n");
	printf ("\t\tD) 7\n\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	printf("\n\n");
 
	if ((resposta=='a')||(resposta=='A')){
	system("color 0A");
	printf ("\t\tResposta correta\n");
	printf ("\t            +3 pontos\n");
	correto_1++;
	}
	else{
	system("color 0C");
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"A\"\n");
	errado_1++;
	vida= vida - 1;
    }
    if(vida==0){
				printf("\n\n");
				printf ("--------------------- GAME OVER -------------------\n");
 
 
 
				goto fim;
				}
 
    printf("\n\n");
			getchar();printf ("Pressione \"enter\" para a proxima pergunta...");
			getchar();system("cls");
 
    system("color 07");
	pergunta10:
	system("cls");
	printf ("---------------------------------\n");
	printf ("|  Pergunta n. 10 - Nivel Facil |\n");				 
	printf ("---------------------------------\n\n");
	printf ("\t\tQual e a capital do Brasil ?\n\n");       //Ultima do nivel facil
	printf ("\t\t----------------------------------\n");
	printf ("\t\tA) Rio de Janeiro\n"); 
	printf ("\t\tB) Brasília\n");
	printf ("\t\tC) Bahia\n");
	printf ("\t\tD) São Paulo\n\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	printf("\n\n");
 
	if ((resposta=='b')||(resposta=='B')){
	system("color 0A");
	printf ("\t\tResposta correta\n");
	printf ("\t            +3 pontos\n");
	correto_1++;
	}
	else{
	system("color 0C");
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"B\"\n");
	errado_1++;
	vida= vida - 1;
    }
    if(vida==0){
				printf("\n\n");
				printf ("--------------------- GAME OVER -------------------\n");
 
 
 
				goto fim;
				}
 
    printf("\n\n");
			getchar();printf ("Pressione \"enter\" para a proxima pergunta...");
			getchar();system("cls");
 
			//
			totalpergun_1=contadorpergun_1;
				contadorpergun_1=1;
    system("color 07");			
    	printf ("--------------------- Pontuacao Atual -------------------\n");
    printf ("Participante: %s\n",nome);
	printf ("Perguntas respondidas: 10\n");
	printf ("Acertos..: %d\n",correto_1);
	printf ("Erros....: %d\n",errado_1);
	printf ("Pontuacao: %d\n\n",correto_1*3);
	printf("\n\n");
	printf ("As pergunstas deste nivel terminaram.\n");
			printf ("Deseja continuar jogando (s/n)? ");
			scanf ("%s",&resposta);
			if ((resposta=='n')||(resposta=='N'))
			{
 
				system("cls");
			printf ("Muito obrigado por jogar :D.");
			goto fim2;
			}
 
	getchar();printf ("Pressione \"enter\" para continuar...");
	getchar();system ("cls");
 
 
	printf ("----------------------------\n");
	printf ("|    NIVEL INTERMEDIARIO   |\n");			//INTERMEDIARIO
	printf ("----------------------------\n");                                                       
	printf ("Pressione \"enter\" para continuar...");
	getchar();system ("cls");
 
	pergunta11:
	system("cls");
	printf ("----------------------------------------\n");
	printf ("|  Pergunta n. 01 - Nivel Intermediario |\n");				//Primeira Pergunta IN
	printf ("----------------------------------------\n\n");
	printf ("\t\tEm que ano derrubaram as Torres Gêmeas (World Trade Center)?\n\n");       
	printf ("\t\t----------------------------------\n");
	printf ("\t\tA) 2002\n"); 
	printf ("\t\tB) 2000\n");
	printf ("\t\tC) 2004\n");
	printf ("\t\tD) 2001\n\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	printf("\n\n");
 
	if ((resposta=='d')||(resposta=='D')){
	system("color 0A");
	printf ("\t\tResposta correta\n");
	printf ("\t            +5 pontos\n");
	correto_2++;
	}
	else{
	system("color 0C");
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"D\"\n");
	errado_2++;
	vida= vida - 1;
    }
    if(vida==0){
				printf("\n\n");
				printf ("--------------------- GAME OVER -------------------\n");
 
 
 
				goto fim;
				}
 
    printf("\n\n");
			getchar();printf ("Pressione \"enter\" para a proxima pergunta...");
			getchar();system("cls");
 
	system("color 07");		
	pergunta12:
	system("cls");
	printf ("----------------------------------------\n");
	printf ("|  Pergunta n. 02 - Nivel Intermediario |\n");				
	printf ("----------------------------------------\n\n");
	printf ("\t\tDe quem é a famosa frase “Penso, logo existo”?\n\n");       
	printf ("\t\t----------------------------------\n");
	printf ("\t\tA) Platão\n"); 
	printf ("\t\tB) Galileu Galilei\n");
	printf ("\t\tC) Sócrates\n");
	printf ("\t\tD) Descartes\n\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	printf("\n\n");
 
	if ((resposta=='d')||(resposta=='D')){
	system("color 0A");
	printf ("\t\tResposta correta\n");
	printf ("\t            +5 pontos\n");
	correto_2++;
	}
	else{
	system("color 0C");
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"D\"\n");
	errado_2++;
	vida= vida - 1;
    }
    if(vida==0){
				printf("\n\n");
				printf ("--------------------- GAME OVER -------------------\n");
 
 
 
				goto fim;
				}
    printf("\n\n");
			getchar();printf ("Pressione \"enter\" para a proxima pergunta...");
			getchar();system("cls");
 
	system("color 07");		
	pergunta13:
	system("cls");
	printf ("----------------------------------------\n");
	printf ("|  Pergunta n. 03 - Nivel Intermediario |\n");				
	printf ("----------------------------------------\n\n");
	printf ("\t\tQuantos continentes existem?\n\n");       
	printf ("\t\t----------------------------------\n");
	printf ("\t\tA) 7\n"); 
	printf ("\t\tB) 6\n");
	printf ("\t\tC) 8\n");
	printf ("\t\tD) 5\n\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	printf("\n\n");
 
	if ((resposta=='b')||(resposta=='B')){
	system("color 0A");
	printf ("\t\tResposta correta\n");
	printf ("\t            +5 pontos\n");
	correto_2++;
	}
	else{
	system("color 0C");		
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"B\"\n");
	errado_2++;
	vida= vida - 1;
    }
    if(vida==0){
				printf("\n\n");
				printf ("--------------------- GAME OVER -------------------\n");
 
 
 
				goto fim;
				}
    printf("\n\n");
			getchar();printf ("Pressione \"enter\" para a proxima pergunta...");
			getchar();system("cls");
 
		system("color 07");
		pergunta14:
	system("cls");
	printf ("----------------------------------------\n");
	printf ("|  Pergunta n. 04 - Nivel Intermediario |\n");				
	printf ("----------------------------------------\n\n");
	printf ("\t\t Quem foi a primeira pessoa a viajar no Espaço?\n\n");       
	printf ("\t\t----------------------------------\n");
	printf ("\t\tA) Yuri Gagarin\n"); 
	printf ("\t\tB) A cadela Laika\n");
	printf ("\t\tC) Neil Armstrong\n");
	printf ("\t\tD) Buzz lightyear\n\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	printf("\n\n");
 
	if ((resposta=='a')||(resposta=='A')){
	system("color 0A");
	printf ("\t\tResposta correta\n");
	printf ("\t            +5 pontos\n");
	correto_2++;
	}
	else{
	system("color 0C");		
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"A\"\n");
	errado_2++;
	vida= vida - 1;
    }
    if(vida==0){
				printf("\n\n");
				printf ("--------------------- GAME OVER -------------------\n");
 
 
 
				goto fim;
				}
    printf("\n\n");
			getchar();printf ("Pressione \"enter\" para a proxima pergunta...");
			getchar();system("cls");
 
	system("color 07");		
	pergunta15:
	system("cls");
	printf ("----------------------------------------\n");
	printf ("|  Pergunta n. 05 - Nivel Intermediario |\n");				
	printf ("----------------------------------------\n\n");
	printf ("\t\t Em que período da pré-história o fogo foi descoberto?\n\n");       
	printf ("\t\t----------------------------------\n");
	printf ("\t\tA) Neolítico\n"); 
	printf ("\t\tB) Idade dos Metais\n");
	printf ("\t\tC) Paleolítico\n");
	printf ("\t\tD) Idade Média\n\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	printf("\n\n");
 
	if ((resposta=='c')||(resposta=='C')){
	system("color 0A");
	printf ("\t\tResposta correta\n");
	printf ("\t            +5 pontos\n");
	correto_2++;
	}
	else{
	system("color 0C");		
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"C\"\n");
	errado_2++;
	vida= vida - 1;
	}
 
	if(vida==0){
				printf("\n\n");
				printf ("--------------------- GAME OVER -------------------\n");
 
 
 
				goto fim;
				}
	printf("\n\n");
			getchar();printf ("Pressione \"enter\" para a proxima pergunta...");
			getchar();system("cls");
 
	system("color 07");		
	pergunta16:
	system("cls");
	printf ("----------------------------------------\n");
	printf ("|  Pergunta n. 06 - Nivel Intermediario |\n");				
	printf ("----------------------------------------\n\n");
	printf ("\t\t Em que lugar vivem mais cangurus do que pessoas?\n\n");       
	printf ("\t\t----------------------------------\n");
	printf ("\t\tA) Indonésia\n"); 
	printf ("\t\tB) Nova Zelândia\n");
	printf ("\t\tC) Austrália\n");
	printf ("\t\tD) Áustria\n\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	printf("\n\n");
 
	if ((resposta=='c')||(resposta=='C')){
	system("color 0A");
	printf ("\t\tResposta correta\n");
	printf ("\t            +5 pontos\n");
	correto_2++;
	}
	else{
	system("color 0C");		
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"C\"\n");
	errado_2++;
	vida= vida - 1;
	}
	if(vida==0){
				printf("\n\n");
				printf ("--------------------- GAME OVER -------------------\n");
 
 
 
				goto fim;
				}
 
	printf("\n\n");
			getchar();printf ("Pressione \"enter\" para a proxima pergunta...");
			getchar();system("cls");
 
	system("color 07");
	pergunta17:
	system("cls");
	printf ("----------------------------------------\n");
	printf ("|  Pergunta n. 07 - Nivel Intermediario |\n");				
	printf ("----------------------------------------\n\n");
	printf ("\t\t Qual é respectivamente o animal terrestre mais lento e o mais veloz?\n\n");       
	printf ("\t\t----------------------------------\n");
	printf ("\t\tA) Bicho-preguiça e guepardo\n"); 
	printf ("\t\tB) Tartaruga e leão\n");
	printf ("\t\tC) Caracol e tubarão\n");
	printf ("\t\tD) Tartaruga e cavalo\n\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	printf("\n\n");
 
	if ((resposta=='a')||(resposta=='A')){
	system("color 0A");
	printf ("\t\tResposta correta\n");
	printf ("\t            +5 pontos\n");
	correto_2++;
	}
	else{
	system("color 0C");		
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"A\"\n");
	errado_2++;
	vida= vida - 1;
	}
	if(vida==0){
				printf("\n\n");
				printf ("--------------------- GAME OVER -------------------\n");
 
 
 
				goto fim;
				}
	printf("\n\n");
			getchar();printf ("Pressione \"enter\" para a proxima pergunta...");
			getchar();system("cls");
 
	system("color 07");		
	pergunta18:
	system("cls");
	printf ("----------------------------------------\n");
	printf ("|  Pergunta n. 08 - Nivel Intermediario |\n");				
	printf ("----------------------------------------\n\n");
	printf ("\t\t Qual o número mínimo de jogadores numa partida de futebol?\n\n");       
	printf ("\t\t----------------------------------\n");
	printf ("\t\tA) 8\n"); 
	printf ("\t\tB) 9\n");
	printf ("\t\tC) 5\n");
	printf ("\t\tD) 7\n\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	printf("\n\n");
 
	if ((resposta=='d')||(resposta=='D')){
	system("color 0A");
	printf ("\t\tResposta correta\n");
	printf ("\t            +5 pontos\n");
	correto_2++;
	}
	else{
	system("color 0C");		
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"D\"\n");
	errado_2++;
	vida= vida - 1;
	}
	if(vida==0){
				printf("\n\n");
				printf ("--------------------- GAME OVER -------------------\n");
 
 
 
				goto fim;
				}
 
	printf("\n\n");
			getchar();printf ("Pressione \"enter\" para a proxima pergunta...");
			getchar();system("cls");
 
 
	system("color 07");
	pergunta19:
	system("cls");
	printf ("----------------------------------------\n");
	printf ("|  Pergunta n. 09 - Nivel Intermediario |\n");				
	printf ("----------------------------------------\n\n");
	printf ("\t\t Qual a nacionalidade de Che Guevara?\n\n");       
	printf ("\t\t----------------------------------\n");
	printf ("\t\tA) Cubana\n"); 
	printf ("\t\tB) Peruana\n");
	printf ("\t\tC) Boliviana\n");
	printf ("\t\tD) Argentina\n\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	printf("\n\n");
 
	if ((resposta=='d')||(resposta=='D')){
	system("color 0A");
	printf ("\t\tResposta correta\n");
	printf ("\t            +5 pontos\n");
	correto_2++;
	}
	else{
	system("color 0C");		
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"D\"\n");
	errado_2++;
	vida= vida - 1;
	}
	if(vida==0){
				printf("\n\n");
				printf ("--------------------- GAME OVER -------------------\n");
 
 
 
				goto fim;
				}
 
	printf("\n\n");
			getchar();printf ("Pressione \"enter\" para a proxima pergunta...");
			getchar();system("cls");
 
 
	system("color 07");
	pergunta20:
	system("cls");
	printf ("----------------------------------------\n");
	printf ("|  Pergunta n. 10 - Nivel Intermediario |\n");				
	printf ("----------------------------------------\n\n");
	printf ("\t\t Qual personagem folclórico costuma ser agradado pelos caçadores com a oferta de fumo?\n\n");       
	printf ("\t\t----------------------------------\n");
	printf ("\t\tA) Caipora\n"); 
	printf ("\t\tB) Saci\n");
	printf ("\t\tC) Boitatá\n");
	printf ("\t\tD) Lobisomem\n\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	printf("\n\n");
 
		if ((resposta=='a')||(resposta=='A')){
	system("color 0A");
	printf ("\t\tResposta correta\n");
	printf ("\t            +5 pontos\n");
	correto_2++;
	}
	else{
	system("color 0C");		
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"A\"\n");
	errado_2++;
	vida= vida - 1;
	}
	if(vida==0){
				printf("\n\n");
				printf ("--------------------- GAME OVER -------------------\n");
 
 
 
				goto fim;
				}
 
	printf("\n\n");
			getchar();printf ("Pressione \"enter\" para a proxima pergunta...");
			getchar();system("cls");
 
 
    	totalpergun_2=contadorpergun_2;
				contadorpergun_2=1;
 
				system("color 07");
				printf ("--------------------- Pontuacao Atual -------------------\n");
	printf ("Participante: %s\n",nome);
	printf ("Perguntas respondidas: 20\n");
	printf ("Total de acertos.....: %d\n",correto_1+correto_2);
	printf ("Total de erros.......: %d\n",errado_1+errado_2);
	printf ("Pontuacao total......: %d\n\n",(correto_1*3)+(correto_2*5));
 
	printf ("As pergunstas deste nivel terminaram.\n");
			printf ("Deseja continuar jogando (s/n)? ");
			scanf ("%s",&resposta);
			if ((resposta=='n')||(resposta=='N'))
			{
 				system("cls");
			printf ("Muito obrigado por jogar :D.");
			goto fim2;
			}
 
	getchar();printf ("Pressione \"enter\" para continuar...");
	getchar();system ("cls");
 
 
	printf ("-----------------------------\n");
	printf ("|        NIVEL DIFICIL      |\n");			//Dificil
	printf ("-----------------------------\n");                                                       
	printf ("Pressione \"enter\" para continuar...");
	getchar();system ("cls");
 
	pergunta21:
	system("cls");
	printf ("------------------------------------\n");
	printf ("|  Pergunta n. 01 - Nivel Dificil  |\n");				//Primeira Pergunta DF
	printf ("------------------------------------\n\n");
	printf ("\t\t De onde é a invenção do chuveiro elétrico?\n\n");       
	printf ("\t\t----------------------------------\n");
	printf ("\t\tA) França\n"); 
	printf ("\t\tB) Brasil\n");
	printf ("\t\tC) Inglaterra\n");
	printf ("\t\tD) Austria\n\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	printf("\n\n");
 
		if ((resposta=='b')||(resposta=='B')){
	system("color 0A");
	printf ("\t\tResposta correta\n");
	printf ("\t            +7 pontos\n");
	correto_3++;
	}
	else{
	system("color 0C");		
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"B\"\n");
	errado_3++;
	vida= vida - 1;
	}
	if(vida==0){
				printf("\n\n");
				printf ("--------------------- GAME OVER -------------------\n");
 
 
 
				goto fim;
				}
 
	printf("\n\n");
			getchar();printf ("Pressione \"enter\" para a proxima pergunta...");
			getchar();system("cls");
 
	system("color 07");
	pergunta22:
	system("cls");			
			printf ("------------------------------------\n");
	printf ("|  Pergunta n. 02 - Nivel Dificil  |\n");				//Segunda Pergunta DF
	printf ("------------------------------------\n\n");
	printf ("\t\t Qual o maior animal terrestre?\n\n");       
	printf ("\t\t----------------------------------\n");
	printf ("\t\tA) Baleia Azul\n"); 
	printf ("\t\tB) Girafa\n");
	printf ("\t\tC) Elefante africano\n");
	printf ("\t\tD) Anta\n\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	printf("\n\n");
 
 
		if ((resposta=='c')||(resposta=='C')){
	system("color 0A");
	printf ("\t\tResposta correta\n");
	printf ("\t            +7 pontos\n");
	correto_3++;
	}
	else{
	system("color 0C");		
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"C\"\n");
	errado_3++;
	vida= vida - 1;
	}
	if(vida==0){
				printf("\n\n");
				printf ("--------------------- GAME OVER -------------------\n");
 
 
 
				goto fim;
				}
 
	printf("\n\n");
			getchar();printf ("Pressione \"enter\" para a proxima pergunta...");
			getchar();system("cls");
 
	system("color 07");		
	pergunta23:
	system("cls");
					printf ("------------------------------------\n");
	printf ("|  Pergunta n. 03 - Nivel Dificil  |\n");				//Terceira Pergunta DF
	printf ("------------------------------------\n\n");
	printf ("\t\t As pessoas de qual tipo sanguíneo são consideradas doadores universais?\n\n");       
	printf ("\t\t----------------------------------\n");
	printf ("\t\tA) Tipo A\n"); 
	printf ("\t\tB) Tipo AB\n");
	printf ("\t\tC) Tipo O\n");
	printf ("\t\tD) Tipo B\n\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	printf("\n\n");
 
		if ((resposta=='c')||(resposta=='C')){
	system("color 0A");
	printf ("\t\tResposta correta\n");
	printf ("\t            +7 pontos\n");
	correto_3++;
	}
	else{
	system("color 0C");		
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"C\"\n");
	errado_3++;
	vida= vida - 1;
	}
	if(vida==0){
				printf("\n\n");
				printf ("--------------------- GAME OVER -------------------\n");
 
 
 
				goto fim;
				}
 
	printf("\n\n");
			getchar();printf ("Pressione \"enter\" para a proxima pergunta...");
			getchar();system("cls");
 
	system("color 07");		
	pergunta24:
	system("cls");
			printf ("------------------------------------\n");
	printf ("|  Pergunta n. 04 - Nivel Dificil  |\n");				//Quarta Pergunta DF
	printf ("------------------------------------\n\n");
	printf ("\t\t Em que oceano fica Madagascar?\n\n");       
	printf ("\t\t----------------------------------\n");
	printf ("\t\tA) Oceano Índico\n"); 
	printf ("\t\tB) Oceano Antártico\n");
	printf ("\t\tC) Oceano Pacífico\n");
	printf ("\t\tD) Oceano Atlântico\n\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	printf("\n\n");
 
		if ((resposta=='a')||(resposta=='A')){
	system("color 0A");
	printf ("\t\tResposta correta\n");
	printf ("\t            +7 pontos\n");
	correto_3++;
	}
	else{
	system("color 0C");		
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"A\"\n");
	errado_3++;
	vida= vida - 1;
	}
	if(vida==0){
				printf("\n\n");
				printf ("--------------------- GAME OVER -------------------\n");
 
 
 
				goto fim;
				}
 
	printf("\n\n");
			getchar();printf ("Pressione \"enter\" para a proxima pergunta...");
			getchar();system("cls");
 
	system("color 07");		
	pergunta25:
	system("cls");
			printf ("------------------------------------\n");
	printf ("|  Pergunta n. 05 - Nivel Dificil  |\n");				//Quinta Pergunta DF
	printf ("------------------------------------\n\n");
	printf ("\t\t Em que século o continente europeu foi devastado pela peste bubônica?\n\n");       
	printf ("\t\t----------------------------------\n");
	printf ("\t\tA) No século X\n"); 
	printf ("\t\tB) No século XII\n");
	printf ("\t\tC) No século XIII\n");
	printf ("\t\tD) No século XIV\n\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	printf("\n\n");
 
		if ((resposta=='d')||(resposta=='D')){
	system("color 0A");
	printf ("\t\tResposta correta\n");
	printf ("\t            +7 pontos\n");
	correto_3++;
	}
	else{
	system("color 0C");		
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"D\"\n");
	errado_3++;
	vida= vida - 1;
	}
	if(vida==0){
				printf("\n\n");
				printf ("--------------------- GAME OVER -------------------\n");
 
 
 
				goto fim;
				}
 
	printf("\n\n");
			getchar();printf ("Pressione \"enter\" para a proxima pergunta...");
			getchar();system("cls");
 
	system("color 07");		
	pergunta26:
	system("cls");
			printf ("------------------------------------\n");
	printf ("|  Pergunta n. 06 - Nivel Dificil  |\n");				//Sexta Pergunta DF
	printf ("------------------------------------\n\n");
	printf ("\t\t Quem pintou o teto da capela sistina?\n\n");       
	printf ("\t\t----------------------------------\n");
	printf ("\t\tA) Michelangelo\n"); 
	printf ("\t\tB) Rafael\n");
	printf ("\t\tC) Leonardo da Vinci\n");
	printf ("\t\tD) Donatello\n\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	printf("\n\n");
 
		if ((resposta=='a')||(resposta=='A')){
	system("color 0A");
	printf ("\t\tResposta correta\n");
	printf ("\t            +7 pontos\n");
	correto_3++;
	}
	else{
	system("color 0C");		
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"A\"\n");
	errado_3++;
	vida= vida - 1;
	}
	if(vida==0){
				printf("\n\n");
				printf ("--------------------- GAME OVER -------------------\n");
 
 
 
				goto fim;
				}
 
	printf("\n\n");
			getchar();printf ("Pressione \"enter\" para a proxima pergunta...");
			getchar();system("cls");
 
	system("color 07");		
	pergunta27:
	system("cls");
			printf ("------------------------------------\n");
	printf ("|  Pergunta n. 07 - Nivel Dificil  |\n");				//Setima Pergunta DF
	printf ("------------------------------------\n\n");
	printf ("\t\t O etanol é produzido através de qual fonte de energia?\n\n");       
	printf ("\t\t----------------------------------\n");
	printf ("\t\tA) Biomassa\n"); 
	printf ("\t\tB) Solar\n");
	printf ("\t\tC) Geotérmica\n");
	printf ("\t\tD) Hidrelétrica\n\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	printf("\n\n");
 
		if ((resposta=='a')||(resposta=='A')){
	system("color 0A");
	printf ("\t\tResposta correta\n");
	printf ("\t            +7 pontos\n");
	correto_3++;
	}
	else{
	system("color 0C");		
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"A\"\n");
	errado_3++;
	vida= vida - 1;
	}
	if(vida==0){
				printf("\n\n");
				printf ("--------------------- GAME OVER -------------------\n");
 
 
 
				goto fim;
				}
 
	printf("\n\n");
			getchar();printf ("Pressione \"enter\" para a proxima pergunta...");
			getchar();system("cls");
 
	system("color 07");		
	pergunta28:
	system("cls");
			printf ("------------------------------------\n");
	printf ("|  Pergunta n. 08 - Nivel Dificil  |\n");				//Oitava Pergunta DF
	printf ("------------------------------------\n\n");
	printf ("\t\t Qual a unidade que mede a intensidade do som?\n\n");       
	printf ("\t\t----------------------------------\n");
	printf ("\t\tA) Frequência\n"); 
	printf ("\t\tB) Hertz\n");
	printf ("\t\tC) Decibel\n");
	printf ("\t\tD) Ruído\n\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	printf("\n\n");
 
		if ((resposta=='c')||(resposta=='C')){
	system("color 0A");
	printf ("\t\tResposta correta\n");
	printf ("\t            +7 pontos\n");
	correto_3++;
	}
	else{
	system("color 0C");		
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"C\"\n");
	errado_3++;
	vida= vida - 1;
	}
	if(vida==0){
				printf("\n\n");
				printf ("--------------------- GAME OVER -------------------\n");
 
 
 
				goto fim;
				}
 
	printf("\n\n");
			getchar();printf ("Pressione \"enter\" para a proxima pergunta...");
			getchar();system("cls");
 
	system("color 07");		
	pergunta29:
	system("cls");
			printf ("------------------------------------\n");
	printf ("|  Pergunta n. 09 - Nivel Dificil  |\n");				//Nona Pergunta DF
	printf ("------------------------------------\n\n");
	printf ("\t\t Atualmente, quantos elementos químicos a tabela periódica possui?\n\n");       
	printf ("\t\t----------------------------------\n");
	printf ("\t\tA) 113\n"); 
	printf ("\t\tB) 118\n");
	printf ("\t\tC) 92\n");
	printf ("\t\tD) 116\n\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	printf("\n\n");
 
		if ((resposta=='b')||(resposta=='B')){
	system("color 0A");
	printf ("\t\tResposta correta\n");
	printf ("\t            +7 pontos\n");
	correto_3++;
	}
	else{
	system("color 0C");		
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"B\"\n");
	errado_3++;
	vida= vida - 1;
	}
	if(vida==0){
				printf("\n\n");
				printf ("--------------------- GAME OVER -------------------\n");
 
 
 
				goto fim;
				}
 
	printf("\n\n");
			getchar();printf ("Pressione \"enter\" para a proxima pergunta...");
			getchar();system("cls");
 
	system("color 07");		
	pergunta30:
	system("cls");
		printf ("------------------------------------\n");
	printf ("|  Pergunta n. 10 - Nivel Dificil  |\n");				//Ultimaa Pergunta DF
	printf ("------------------------------------\n\n");
	printf ("\t\t Segundo que meridiano acertamos os nossos relógios?\n\n");       
	printf ("\t\t----------------------------------\n");
	printf ("\t\tA) Meridiano do Equador\n"); 
	printf ("\t\tB) Meridiano de Greenwich\n");
	printf ("\t\tC) Meridiano Internacional\n");
	printf ("\t\tD) Meridiano Central\n\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	printf("\n\n");
 
		if ((resposta=='b')||(resposta=='B')){
	system("color 0A");
	printf ("\t\tResposta correta\n");
	printf ("\t            +7 pontos\n");
	correto_3++;
	}
	else{
	system("color 0C");		
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"B\"\n");
	errado_3++;
	vida= vida - 1;
	}
	if(vida==0){
				printf("\n\n");
				printf ("--------------------- GAME OVER -------------------\n");
 
 
 
				goto fim;
				}
 
	printf("\n\n");
			getchar();printf ("Pressione \"enter\" para a proxima pergunta...");
			getchar();system("cls");
 
			totalpergun_3=contadorpergun_3;
				contadorpergun_3=1;
 
 			pontutotal = (correto_1*3)+(correto_2*5)+(correto_3*7);
 
	if (pontutotal <= 136 ){
	system("color 06");
	printf ("\t                  PARABENS\n");
	printf ("\t            VOCE ACABOU DE GANHAR .....\n");
	printf ("\n pressione \"enter\" para descobrir.\n\n");
	getchar();system ("cls");
	printf("\n\n");
	printf("\t               R$250 mil :D");
	printf("\n\n");
	printf ("Pressione \"enter\" para ver seu resultado final ...");
	getchar();system("cls");
	}
	else{
	system("color 06");
	printf ("\t                  PARABENS\n");
	printf ("\t            VOCE ACABOU DE GANHAR .....\n");
	printf ("\n pressione \"enter\" para descobrir.\n\n");
	getchar();system ("cls");
	printf("\n\n");
	printf("\t               R$500 mil reais :D");
	printf("\n\n");
	printf ("Pressione \"enter\" para ver seu resultado final ...");
	getchar();system("cls");
    }
 
			if (pontutotal >= 140){
	system("color 06");
	printf ("\t                  PARABENS\n");
	printf ("\t            VOCE ACABOU DE GANHAR .....\n");
	printf ("\n pressione \"enter\" para descobrir.\n\n");
	getchar();system ("cls");
	printf("\n\n");
	printf("\t              R$1,000,000 reais :D");
	printf("\n\n");
	printf ("Pressione \"enter\" para ver seu resultado final ...");
	getchar();system("cls");
	}
 
 
 
 
 
	system("color 07");			
				printf ("--------------------- RESULTADO FINAL -------------------\n");
	printf ("Participante: %s\n",nome);
	printf ("Perguntas respondidas.: 30\n");
	printf ("Total de acertos.: %d\n",correto_1+correto_2+correto_3);
	printf ("Total de erros.: %d\n",errado_1+errado_2+errado_3);
	printf ("Pontuacao total.: %d\n\n",(correto_1*3)+(correto_2*5)+(correto_3*7));
	printf ("--------------------- NIVEL FACIL -------------------\n");
	printf ("Perguntas respondidas: 10\n");
	printf ("Acertos.: %d\n",correto_1);
	printf ("Erros.: %d\n",errado_1);
	printf ("Pontuacao.: %d\n\n",correto_1*3);
	printf ("-------------------- NIVEL INTERMEDIARIO --------------------\n");
	printf ("Perguntas respondidas: 10\n");
	printf ("Acertos.: %d\n",correto_2);
	printf ("Erros.: %d\n",errado_2);
	printf ("Pontuacao.: %d\n\n",correto_2*5);
	printf ("------------------- NIVEL DIFICIL -------------------\n");
	printf ("Perguntas respondidas:10\n");
	printf ("Acertos.: %d\n",correto_3);
	printf ("Erros.: %d\n",errado_3);
	printf ("Pontuacao.: %d\n",correto_3*7);
	printf ("Sua Vida.:%d\n",vida);
 
 
 
 
			fim:
			printf ("Deseja jogar novamente (s/n)? ");
			scanf ("%s",&resposta);
			if ((resposta=='s')||(resposta=='S')){
			
			return main(); // Retorna pro inicio de todas as funções em main()
		}
			
 				
			else {
				system("cls");
			printf ("Muito obrigado por jogar :D.");
			}
 
			fim2:
				return(0);
 
 
			
 
 
 
 
 
 
 
 
 
 
 
 
 
	return 0;
}
