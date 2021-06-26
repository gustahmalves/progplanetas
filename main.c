#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


void menu();

int escplanets();

int calcplanets(int planrec,float pesrec);

	int main() {
		
		setlocale(LC_ALL, "");
		menu();
		
		return 0;
	}

				void menu(){
					
					int pesc = 0; //peso escolha
					
						while(pesc == 0){
					printf("===========================================================");
					printf("\n=Programa feito para calcular seu peso em outros planetas!=\n");
					printf("===========================================================\n\n\n");
						printf("==========================\n");
						printf("Continuar(1) = Parar(2)\n");
						printf("==========================\n");
					scanf("%d", &pesc);
							if(pesc > 2){
								system("cls");
								printf("Op��o incorreta\n\n");
								menu();		
							}
							else if(pesc < 1){	
								system("cls");
								printf("Op��o incorreta\n\n");
								menu();
							}
							else if(pesc == 2){
								system("cls");
								system("pause");
						}
							else if(pesc == 1){	
								system("cls");
								escplanets();
							}
						}
					}

							escplanets(){
							
									int escpln;
									float peso;
								
								printf("\nExplica��o:");
								printf("============================================================================================================");							
								printf("\n\nDepende da massa do planeta e da dist�ncia entre seu n�cleo e a superf�cie. Peso � uma for�a de atra��o entre dois corpos, em que o de maior massa sai ganhando (atrai mais). Uma das consequ�ncias da atra��o que a Terra exerce em n�s, por exemplo, � o fato de ficarmos presos � sua superf�cie.\n\n\n\n");
								printf("");
								
								
								printf("Escolha o planeta que voc� quer saber seu peso:\n\n\n");
								printf("(1)Merc�rio - (2)V�nus  - (3)Terra  - (4)Marte - (5)J�piter  - (6)Saturno  - (7)Urano  - (8)Netuno  - (9)Plut�o \n\n");
								printf("Escolha um planeta: ");
								scanf("%d", &escpln);
									system("cls");
										printf("Agora digite o seu peso: ");
										scanf("%f", &peso);	
								calcplanets(escpln,peso);
								}

										int calcplanets(int planrec,float pesrec){
											
											int planet, esco;
											float peso, pesoconv;
											
											peso = pesrec;
											planet = planrec; 
											
												
												switch(planet){
												
												case 1:
													printf("\nVoc� escolheu Merc�rio\n\n");
													pesoconv = peso * 0.37;
													printf("Seu peso neste planeta � %.1fkg", pesoconv);
												break;
												
												case 2:
													printf("\nVoc� escolheu V�nus\n\n");
													pesoconv = peso * 0.88;
													printf("Seu peso neste planeta � %.1fkg", pesoconv);
												break;
													
												case 3:
													printf("\nVoc� escolheu Terra\n\n");
													pesoconv = peso * 1.00;
													printf("Seu peso neste planeta � %.1fkg", pesoconv);
												break;
												
												case 4:
													printf("\nVoc� escolheu Marte\n\n");
													pesoconv = peso * 0.38;
													printf("Seu peso neste planeta � %.1fkg", pesoconv);
												break;
												
												case 5:
													printf("\nVoc� escolheu J�piter\n\n");
													pesoconv = peso * 2.64;
													printf("Seu peso neste planeta � %.1fkg", pesoconv);
												break;
												
												case 6:
													printf("\nVoc� escolheu Saturno\n\n");
													pesoconv = peso * 1.15;
													printf("Seu peso neste planeta � %.1fkg", pesoconv);
												break;
												
												case 7:
													printf("\nVoc� escolheu Urano\n\n");
													pesoconv = peso * 1.17;
													printf("Seu peso neste planeta � %.1fkg", pesoconv);
												break;	
												
												case 8:
													printf("\nVoc� escolheu Netuno\n\n");
													pesoconv = peso * 1.18;
													printf("Seu peso neste planeta � %.1fkg", pesoconv);
												break;
												
												case 9:
													printf("\nVoc� escolheu Plut�o\n\n");
													pesoconv = peso * 0.11;
													printf("Seu peso neste planeta � %.1fkg", pesoconv);
												break;		
												
												}
													
													printf("\n\n\nDeseja calcular seu peso novamente?\n\n\n");
															printf("Continuar(1) - Parar(2)\n");
											scanf("%d", &esco);
													if(esco > 2){
														system("cls");
														printf("Op��o incorreta\n\n");
														menu();		
													}
													else if(esco < 1){	
														system("cls");
														printf("Op��o incorreta\n\n");
														menu();
													}
													else if(esco == 2){
														system("cls");
														system("pause");
												}
													else if(esco == 1){	
														system("cls");
														escplanets();
													}
												}
