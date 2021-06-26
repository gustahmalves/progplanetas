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
								printf("Opção incorreta\n\n");
								menu();		
							}
							else if(pesc < 1){	
								system("cls");
								printf("Opção incorreta\n\n");
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
								
								printf("\nExplicação:");
								printf("============================================================================================================");							
								printf("\n\nDepende da massa do planeta e da distância entre seu núcleo e a superfície. Peso é uma força de atração entre dois corpos, em que o de maior massa sai ganhando (atrai mais). Uma das consequências da atração que a Terra exerce em nós, por exemplo, é o fato de ficarmos presos à sua superfície.\n\n\n\n");
								printf("");
								
								
								printf("Escolha o planeta que você quer saber seu peso:\n\n\n");
								printf("(1)Mercúrio - (2)Vênus  - (3)Terra  - (4)Marte - (5)Júpiter  - (6)Saturno  - (7)Urano  - (8)Netuno  - (9)Plutão \n\n");
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
													printf("\nVocê escolheu Mercúrio\n\n");
													pesoconv = peso * 0.37;
													printf("Seu peso neste planeta é %.1fkg", pesoconv);
												break;
												
												case 2:
													printf("\nVocê escolheu Vênus\n\n");
													pesoconv = peso * 0.88;
													printf("Seu peso neste planeta é %.1fkg", pesoconv);
												break;
													
												case 3:
													printf("\nVocê escolheu Terra\n\n");
													pesoconv = peso * 1.00;
													printf("Seu peso neste planeta é %.1fkg", pesoconv);
												break;
												
												case 4:
													printf("\nVocê escolheu Marte\n\n");
													pesoconv = peso * 0.38;
													printf("Seu peso neste planeta é %.1fkg", pesoconv);
												break;
												
												case 5:
													printf("\nVocê escolheu Júpiter\n\n");
													pesoconv = peso * 2.64;
													printf("Seu peso neste planeta é %.1fkg", pesoconv);
												break;
												
												case 6:
													printf("\nVocê escolheu Saturno\n\n");
													pesoconv = peso * 1.15;
													printf("Seu peso neste planeta é %.1fkg", pesoconv);
												break;
												
												case 7:
													printf("\nVocê escolheu Urano\n\n");
													pesoconv = peso * 1.17;
													printf("Seu peso neste planeta é %.1fkg", pesoconv);
												break;	
												
												case 8:
													printf("\nVocê escolheu Netuno\n\n");
													pesoconv = peso * 1.18;
													printf("Seu peso neste planeta é %.1fkg", pesoconv);
												break;
												
												case 9:
													printf("\nVocê escolheu Plutão\n\n");
													pesoconv = peso * 0.11;
													printf("Seu peso neste planeta é %.1fkg", pesoconv);
												break;		
												
												}
													
													printf("\n\n\nDeseja calcular seu peso novamente?\n\n\n");
															printf("Continuar(1) - Parar(2)\n");
											scanf("%d", &esco);
													if(esco > 2){
														system("cls");
														printf("Opção incorreta\n\n");
														menu();		
													}
													else if(esco < 1){	
														system("cls");
														printf("Opção incorreta\n\n");
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
