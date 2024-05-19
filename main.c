#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h> // Para a função abs()
#include <conio.h>


#define ROWS 10
#define COLS 10
#define ROWS2 20
#define COLS2 20
#define ROWS3 40
#define COLS3 40
	
		int vidas = 3;
// Função para exibir a lore
void showLore() {
    system("color 7");
	printf("\t\t=== Lore do CESUPA ===\n\n");
    printf("No cenario academico do Centro Universitario do Estado do Para (CESUPA), uma aura de misterio envolvia os corredores e os espacos de aprendizagem.\n");
    printf("Entre as lendas urbanas compartilhadas pelos alunos, destacavam-se os relatos sobre os Carrascos: Alessandra, Natasha e Ricardo Casseb.\n");
    printf("Esses tres professores eram conhecidos por sua exigencia implacavel e metodos de ensino desafiadores.\n");
    printf("Alessandra, com sua postura imponente e olhar perspicaz, era temida pelos estudantes por sua capacidade de identificar fraquezas academicas e desafiar constantemente seus limites intelectuais.\n");
    printf("Ricardo Casseb, figura lendaria entre os corredores do CESUPA, era conhecido por sua rigorosidade . Seus metodos de ensino desafiavam os alunos a superarem seus proprios limites e a se dedicarem intensamente ao aprendizado.\n");
    printf("No entanto, em meio a esse ambiente desafiador, havia um aluno que se destacava pela sua genialidade e astucia: Pedrinho Girotto, conhecido como o 'Salvador da Patria'.\n");
    printf("Com sua inteligencia impar e habilidade de encontrar solucoes para os problemas mais complexos, Pedrinho tornou-se uma lenda viva entre os estudantes do CESUPA, sendo reverenciado como um verdadeiro heroi academico.\n");
    printf("Esses personagens, envoltos em misterios e desafios, contribuiram para a construção de uma atmosfera unica no CESUPA, onde o conhecimento era valorizado como uma jornada de superação e descobertas constantes.\n");
    printf("======================\n\n");
    system("pause");
    system("clear || cls"); // Limpa a tela
}

// Função para exibir o menu inicial
void showMainMenu() {
    
	system("color A");
	printf("\n\n\n\n\t\t\t\t Bem vindo ao Dungeon Crawler\t\t\n\t\t\t\t\t\t\t\n");
	printf("\t\t\t\t  Digite o numero para escolher \t\t\n\t\t\t\t\t\t\t\n");
	printf("\t\t\t\t(1)Jogar Dugeon Crawler =D\t\t\t\n");
	printf("\t\t\t\t(2)Tutorial\t\t\t\t\t\n");
	printf("\t\t\t\t(3)Sair \t\t\t\t\t\n\n\t");
	// quadradro \t|""\t\t\t\t\t\t|\n


}

// Função para exibir o tutorial
void showTutorial() {
    system("color F");
	system("clear || cls"); // Limpa a tela
	printf("\n\t\t\t=== Tutorial ===\n");
    printf("\tEste e voce: '&'\n");
    printf("\tSeu objetivo e passar pela porta (D) para ganhar\n");
	printf("\tUse as teclas 'w', 'a', 's' e 'd' para movimentar o personagem.\n");
    printf("\tEncontre a chave (@) para abrir a porta.\n");
    printf("\tCuidado com os espinhos (#) e evite toca-los.\n");
    printf("\tTome cuidado com os monstros (x)(V) eles nao sao amigaveis\n");
    printf("\tCaso precise, aperte o botao (O) para revelar a posicao da porta e chave\n");
	printf("\tQuando a porta estiver aberta (=), passe por ela para ganhar a fase\n\n");
    
    system("pause");
}

void showSair(){
	system("clear || cls");
	printf("\n\n\n\n\n\t\t\t\tObrigado por jogar\n\n\n\n\n");
	printf("\tFeito por: Andrey Garcia, Andrey de Matos e Daniel Camara\n\n\n\n");
	printf("\n\n\n\n\n\n\n");
	
	
	
}



// Função para imprimir o mapa
void printMap(char map[ROWS][COLS], int playerRow, int playerCol) {
    
	int i,j;
	
	
		printf("\n\n\n\n");
	for (i = 0; i < ROWS; ++i) {
        
			printf("\t\t\t\t\t\t");
		for (j = 0; j < COLS; ++j) {
			if (i == playerRow && j == playerCol) {
                printf("& ");
            } else {
                printf("%c ", map[i][j]);
            }
        
		}
        printf("\n");
    }
}


// Função para imprimir o mapa
void printMap2(char map2[ROWS2][COLS2], int playerRow, int playerCol) {
    
	int i,j;
	
	
		printf("\n\n\n\n");
	for (i = 0; i < ROWS2; ++i) {
        
			printf("\t\t\t\t\t\t");
		for (j = 0; j < COLS2; ++j) {
			if (i == playerRow && j == playerCol) {
                printf("& ");
            } else {
                printf("%c ", map2[i][j]);
            }
        
		}
        printf("\n");
    }
}

// Função para imprimir o mapa
void printMap3(char map3[ROWS3][COLS3], int playerRow, int playerCol) {
    
	int i,j;
	
	
		printf("\n\n\n\n");
	for (i = 0; i < ROWS3; ++i) {
        
			printf("\t\t\t\t\t\t");
		for (j = 0; j < COLS3; ++j) {
			if (i == playerRow && j == playerCol) {
                printf("& ");
            } else {
                printf("%c ", map3[i][j]);
            }
        
		}
        printf("\n");
    }
}

// Função para movimentar o monstro em direção ao jogador de forma mais precisa
void moveMonster2(int *monsterRow, int *monsterCol, int playerRow, int playerCol) {
    // Calcula a diferença entre as posições do monstro e do jogador
    int rowDiff = playerRow - *monsterRow;
    int colDiff = playerCol - *monsterCol;
    
	
    // Movimenta o monstro na direção que reduz a distância até o jogador
    if (abs(rowDiff) > abs(colDiff)) {
        if (rowDiff > 0){
            
			(*monsterRow)++;
        } else {
           
			(*monsterRow)--;
        }
    } else {
        if (colDiff > 0) {
            
			(*monsterCol)++;
        } else {
            
			(*monsterCol)--;
        }
    }
	
}

void moveMonster1(int *monsterRow, int *monsterCol){
	int movimento1;
	srand(time(0));
	movimento1 = rand()%4;
	
	
	if(movimento1 == 0){
		(*monsterRow)++;
	}else if(movimento1 == 1){
		(*monsterRow)--;
	}else if(movimento1 == 2){
		(*monsterCol)++;
	}else if(movimento1 == 3){
		(*monsterCol)--;
	}
}
	

// Função para exibir a tela de vitória
void showVictoryScreen() {
    system("color E");
	printf("\n\n\t\tParabens! Voce e um verdadeiro girascedor e cientista da computacao! \n");
    printf("\t\tVoce venceu o jogo!\n\n\t\t");

    system("pause");
	system("clear || cls");
}

void showGameover(){
	printf("\n\t\t\tVoce perdeu! :( \n\n");
	
	printf("\t\tVoce tocou nos espinhos ou foi pego pelo monstro! A fase sera reiniciada!.\n\n");
	if(vidas != 0){
		printf("\tQuantidade de vidas restantes: %d\n", vidas);
	
		printf("\t\tTente novamente!\n\n\t");
	}else{
		("\t\tVoce tocou nos espinhos ou foi pego pelo monstro! A fase sera reiniciada!.\n\n");
		printf("\t\tBoa sorte da proxima vez :c\n\n\t");
	}
	
	system("pause");
	system("clear || cls");
}

int main() {
    // Exibir a lore do CESUPA
    showLore();

    int choice;

    // Menu inicial
    do {
        showMainMenu();
        printf("\t\t\tEscolha uma opcao: ");
        scanf("%d", &choice);
		
		int fase = 1;
		
        if (choice == 1) {
            
			//Escolher a dificuldade do monstro
		
			int whichMonster;
			do{
			system("clear || cls");
			printf("\n\tCom qual monstro jogar?\n");
			printf("\t(1) Monstro aleatorio\n");
			printf("\t(2) Monstro inteligente\n");
			scanf(" %d",&whichMonster);
			}while (whichMonster != 1 && whichMonster != 2);
			
			
			// Iniciar jogo
            
			system("clear || cls");
			// Definindo o mapa
            char map[ROWS][COLS];
            char map2[ROWS2][COLS2];
			char map3[ROWS3][COLS3];
            
            //definincdo fases
            

            // Preenchendo o mapa com espaços em branco
            	int i,j;

				
			for ( i = 0; i < ROWS; ++i) {
                for ( j = 0; j < COLS; ++j) {
                    map[0][j] = '*';
					map[9][j] = '*';
					map[i][0] = '*';
					map[i][9] = '*';
					
					if(map[i][j] != '*')
					{
					map[i][j] = '.';
					}
					
                }
            }
            

            // Posição inicial do jogador
        		int playerRow = 8;
        		int playerCol = 7;

            // Posição inicial do monstro
            int monsterRow=5;
            int monsterCol=5;

			int monsterOldCol;
			int monsterOldRow;
			
			//Variavel para interagir
			int interact;
			
            // Variável para verificar se o jogo acabou
            int gameOver = 0;

            // Variável para verificar se o jogador tem a chave
            int hasKey = 0;
            
            int buttonPressed = 0;
            int buttonRow;
            int buttonCol;
            
            int teleport1Row,teleport1Col;
            int teleport2Row,teleport2Col;

            // Variáveis para armazenar a posição da porta e da chave
            int doorRow, doorCol,doorWall, keyRow, keyCol;
            // Definindo a posição da chave
            srand(time(NULL)); // inicializar a semente para números aleatórios
            
			
					keyRow = 1+rand() % (ROWS-2);
		        	keyCol = 1+rand() % (COLS-2);
			

            // Adicionando a chave ao mapa
            map[keyRow][keyCol] = '@'; // Chave na posição (keyRow, keyCol)
            
            // Definindo a posição da porta
			doorWall = rand()%4 ;
			

				do {
				if(doorWall == 0){
					doorRow = 1+rand() % (ROWS-2);
                	doorCol = 0;
				}
				if(doorWall == 1){
					doorRow = 1+rand() % (ROWS-2);
                	doorCol = 9;
				}
				if(doorWall == 2){
					doorRow = 0;
                	doorCol = 1+rand() % (COLS-2);
				}
				if(doorWall == 3){
					doorRow = 9;
                	doorCol = 1+rand() % (COLS-2);
				}
				
            } while (map[doorRow][doorCol] != '.' && map[doorRow][doorCol] != '*' );

			
			

            // Adicionando a porta ao mapa
            map[doorRow][doorCol] = 'D'; // Porta na posição (doorRow, doorCol)

            // Adicionando os espinhos ao mapa
            int spikesPlaced = 0;
            		while (spikesPlaced < 7) { // Adiciona espinhos
                int spikeRow, spikeCol;
                spikeRow = rand() % ROWS;
                spikeCol = rand() % COLS;
                if (map[spikeRow][spikeCol] == '.') {
                    map[spikeRow][spikeCol] = '#';
                    spikesPlaced++;
                	}
            	}
	
			

            // Loop principal da fase 1
            vidas = 3;
			system("color 0B");
			while (fase == 1 ) {
                //manter as paredes
            for ( i = 0; i < ROWS; ++i) {
                for ( j = 0; j < COLS; ++j) {
                    map[0][j] = '*';
					map[9][j] = '*';
					map[i][0] = '*';
					map[i][9] = '*';
					
                }
            }
                
				//Atualizar a posição antiga do monstro
				if(interact == 0){
					map[monsterOldRow][monsterOldCol] = '.';
				monsterOldCol = monsterCol;
				monsterOldRow = monsterRow;
				}
				
				
				
				
				// Movimentar o monstro em direção ao jogador
						
					if(interact == 0){	
						
						if(whichMonster == 1){
							map[monsterRow][monsterCol] = 'x';
						}if(whichMonster == 2){
							map[monsterRow][monsterCol] = 'V';
						}
						
						if(whichMonster == 1){
							moveMonster1(&monsterRow,&monsterCol);
							
							if(map[monsterRow][monsterCol] == '#'){
								monsterRow = 5;
		                    monsterCol = 5;
							}
							
						}
						if(whichMonster == 2){
							moveMonster2(&monsterRow, &monsterCol, playerRow, playerCol);
							
							if(map[monsterRow][monsterCol] == '#'){
								monsterRow = 5;
		                    	monsterCol = 5;
							}
						}
						if(map[monsterRow][monsterCol] == '*'){
							monsterRow = monsterOldRow;
							monsterCol = monsterOldCol;
						}
					}else if(interact == 1){
						
					}
				

				
				//Verificar se a porta esta aberta e se a chave esta no mapa
				if (hasKey == 1 ){
						map[doorRow][doorCol] = '=';
				}else{
						map[doorRow][doorCol] = 'D';
						map[keyRow][keyCol] = '@';
				}
				

                // Imprimir o mapa
				interact = 0;
				printf("\t\tVidas restantes:  %d\n\n",vidas);
				printMap(map, playerRow, playerCol);
				
				
				//Manter a chave no mapa
				if (hasKey == 1 ){
					map[keyRow][keyCol] = '.';
				}
				

				
                // Ler o input do jogador
                char move;
                printf("\t\tDigite 'w' para cima, 'a' para esquerda, 's' para baixo, 'd' para direita:\n\t\t Digite 'i' para interagir com o o mapa ");
                move = getch();
                system("clear || cls");

                // Mover o jogador
                int newRow = playerRow;
                int newCol = playerCol;
                if (move == 'w') {
                    newRow--;
                } else if (move == 'a') {
                    newCol--;
                } else if (move == 's') {
                    newRow++;
                } else if (move == 'd') {
                    newCol++;
                }else if (move == 'i'){
                	interact = 1;
				}

                // Verificar se o movimento é válido
                if (newRow >= 0 && newRow < ROWS && newCol >= 0 && newCol < COLS && map[newRow][newCol] != '*' ) {
                    // Atualizar a posição do jogador
                    playerRow = newRow;
                    playerCol = newCol;

                    // Remover a chave do mapa
						if (hasKey == 1){
							map[keyRow][keyCol] = '.';
						}
					
					// Verificar se o jogador encontrou a chave
                    if (map[playerRow][playerCol] == '@' && interact == 1) {
                        printf("Voce encontrou a chave!\n");
                        hasKey = 1;
                        
						
                        
                    }

                    // Verificar se o jogador chegou à porta com a chave
                    if (playerRow == doorRow && playerCol == doorCol && hasKey == 1) {
                        
                        // Remover a porta do mapa
                        map[playerRow][playerCol] = '.';
                        fase = 2;
                    }
                } else {
                    printf("Movimento invalido! Tente novamente.\n");
                    
                }
	
                // Verificar se o jogador tocou nos espinhos
                if (map[playerRow][playerCol] == '#' || (playerRow == monsterRow && playerCol == monsterCol && interact == 0)) {
                    // Reiniciar a fase
                    playerRow = 5;
                    playerCol = 5;
                    hasKey = 0; // resetar a chave
                    map[monsterRow][monsterCol] = '.';
                    map[keyRow][keyCol] = '@';
					monsterRow = 8;
                    monsterCol = 7;
                    interact =0;
                    vidas--;
                    showGameover();
                    if(vidas == 0){
                    	choice = 0;
                    	fase = 0;
					}
                    
                    
                }
				
			}
		
		//parabens 1 fase
		system("clear || cls");
		if(vidas > 0 && fase == 2){
			printf("\nParabens, Voce passou pela fase 1!\n");
			system("pause");
			system("clear || cls");
		}
		
			//Criar a fase 2
			for ( i = 0; i < ROWS2; ++i) {
                for ( j = 0; j < COLS2; ++j) {
                    map2[0][j] = '*';
					map2[19][j] = '*';
					map2[i][0] = '*';
					map2[i][19] = '*';
					
					if(map2[i][j] != '*')
					{
					map2[i][j] = '.';
					}
					
                }
            }
				//mudar as coordenadas do monstro e player 
				hasKey = 0;
				buttonPressed = 0;
				monsterRow = 15;
            	monsterCol = 15;
			
				playerRow = 10;
            	playerCol = 10;
            	//gerar butao
					buttonRow = 1+rand() % (ROWS2-2);
		        	buttonCol = 1+rand() % (COLS2-2);
				
				//mudar as coordenadas da chave 

					keyRow = 1+rand() % (ROWS2-1);
		        	keyCol = 1+rand() % (COLS2-1);
			
				//mudar as coordenadas da porta
				doorWall = rand()%4;
				do {
				
				if(doorWall == 0){
					doorRow =  1+rand() % (ROWS2-2);
                	doorCol = 0;
				}
				if(doorWall == 1){
					doorRow =  1+rand() % (ROWS2-2);
                	doorCol = 19;
				}
				if(doorWall == 2){
					doorRow = 0;
                	doorCol =  1+rand() % (COLS2-2);
				}
				if(doorWall == 3){
					doorRow = 19;
                	doorCol =  1+rand() % (COLS2-2);
				}
			
            } while (map[doorRow][doorCol] != '.' && map[doorRow][doorCol] != '*' );
			
				
			map2[doorRow][doorCol] = 'D';
				

		    
		    spikesPlaced = 0;
		    while (spikesPlaced < 40) { // Adiciona espinhos
                int spikeRow, spikeCol;
                spikeRow = rand() % ROWS2;
                spikeCol = rand() % COLS2;
                if (map2[spikeRow][spikeCol] == '.') {
                    map2[spikeRow][spikeCol] = '#';
                    spikesPlaced++;
                	}
            	}
				
				//loop fase 2
				vidas = 3;
				system("color 03");
				while (fase == 2 ) {
                

				//Atualizar a posição antiga do monstro
				map2[monsterOldRow][monsterOldCol] = '.';
				monsterOldCol = monsterCol;
				monsterOldRow = monsterRow;
				
				
				
				// Movimentar o monstro em direção ao jogador
					
				if(interact == 0){
					
					
					if(whichMonster == 1){
						map2[monsterRow][monsterCol] = 'x';
					}if(whichMonster == 2){
						map2[monsterRow][monsterCol] = 'V';
					}
					
					if(whichMonster == 1){
						moveMonster1(&monsterRow,&monsterCol);
						
						if(map2[monsterRow][monsterCol] == '#'){
						monsterRow = 15;
	                    monsterCol = 15;
						}
						
					}
					if(whichMonster == 2){
						moveMonster2(&monsterRow, &monsterCol, playerRow, playerCol);
						
						if(map2[monsterRow][monsterCol] == '#'){
							monsterRow = 15;
	                    	monsterCol = 15;
						}
					}
					if(map2[monsterRow][monsterCol] == '*'){
							monsterRow = monsterOldRow;
							monsterCol = monsterOldCol;
						}

				}else if(interact == 1){
				}
				

				
				//Verificar se a porta esta aberta e se a chave esta no mapa
				if (hasKey == 1 ){
						map2[doorRow][doorCol] = '=';
				}else{
						map2[doorRow][doorCol] = 'D';
						map2[keyRow][keyCol] = '@';
				}

				if(buttonPressed == 0){
					map2[buttonRow][buttonCol] ='O';
					map2[keyRow][keyCol] = '.';
					map2[doorRow][doorCol] = '*';
					
					
				}if(buttonPressed == 1){
					map2[buttonRow][buttonCol] ='.';
				}

                // Imprimir o mapa
				interact = 0;
				printf("\t\tVidas restantes:  %d\n\n",vidas);
				printMap2(map2, playerRow, playerCol);
				
				
				//Manter a chave no mapa
				if (hasKey == 1 ){
					map2[keyRow][keyCol] = '.';
				}
				

				
                // Ler o input do jogador
                char move;
                printf("\t\tDigite 'w' para cima, 'a' para esquerda, 's' para baixo, 'd' para direita:\n\t\t Digite 'i' para interagir com o o mapa ");
                move = getch();
                system("clear || cls");

                // Mover o jogador
                int newRow = playerRow;
                int newCol = playerCol;
                if (move == 'w') {
                    newRow--;
                } else if (move == 'a') {
                    newCol--;
                } else if (move == 's') {
                    newRow++;
                } else if (move == 'd') {
                    newCol++;
                }else if (move == 'i'){
                	interact = 1;
				}

                // Verificar se o movimento é válido
                if (newRow >= 0 && newRow < ROWS2 && newCol >= 0 && newCol < COLS2 && map2[newRow][newCol] != '*' ) {
                    // Atualizar a posição do jogador
                    playerRow = newRow;
                    playerCol = newCol;

					// Verificar se o jogador encontrou a chave
                    if (map2[playerRow][playerCol] == '@' && interact == 1) {
                        printf("\tVoce encontrou a chave!\n");
                        hasKey = 1;
                        
                    }
                    
                    // Verificar se o jogador apertou o butao
                    if (map2[playerRow][playerCol] == 'O' && interact == 1) {
                        printf("\tVoce apertou o botao!\n");
                        buttonPressed = 1;
                        
                    }


                    // Verificar se o jogador chegou à porta com a chave
                    if (playerRow == doorRow && playerCol == doorCol && hasKey == 1) {

                    map2[playerRow][playerCol] = '.';
                    fase = 3;
                         
						 

                    }
                } else {
                    printf("Movimento invalido! Tente novamente.\n");
                    
                }
	
                // Verificar se o jogador tocou nos espinhos
                if (map2[playerRow][playerCol] == '#' || (playerRow == monsterRow && playerCol == monsterCol && interact == 0)) {
                    
                    // Reiniciar a fase
                    playerRow = 10;
                    playerCol = 10;
                    hasKey = 0; // resetar a chave
                    map2[monsterRow][monsterCol] = '.';
                    map2[keyRow][keyCol] = '@';
					monsterRow = 15;
                    monsterCol = 15;
                    buttonPressed = 0;
					interact = 0;
					vidas--;
					showGameover();
					if(vidas == 0){
                    	choice = 0;
                    	fase = 0;
					}
                    
                }
        	}
        	
        	
		//parabens da fase 2        
        system("clear || cls");
		if(vidas > 0 && fase == 3) {
			printf("\nParabens, Voce passou pela fase 2!\n");
			system("pause");
			system("clear || cls");
		}
		
			//Criar a fase 3
			for ( i = 0; i < ROWS3; ++i) {
                for ( j = 0; j < COLS3; ++j) {
                    map3[0][j] = '*';
					map3[39][j] = '*';
					
					map3[i][19] = '*';
					
					map3[i][0] = '*';
					map3[i][39] = '*';
					
					if(map3[i][j] != '*')
					{
					map3[i][j] = '.';
					}
					
                }
            }
				//mudar as coordenadas do monstro e player 
				hasKey = 0;
				buttonPressed = 0;
				monsterRow = 15;
            	monsterCol = 15;
			
				playerRow = 10;
            	playerCol = 10;
            	//gerar butao
					buttonRow = 1+rand() % (ROWS3-2);
		        	buttonCol = 1+rand() % (COLS3-2);
				
				//mudar as coordenadas da chave 

					keyRow = 1+rand() % (ROWS3-1);
		        	keyCol = 1+rand() % (COLS3-1);
			
				teleport1Row = 5;	teleport1Col = 5;
				teleport2Row = 35;	teleport2Col = 35;
			
				//mudar as coordenadas da porta
				doorWall = rand()%4;
				do {
				
				if(doorWall == 0){
					doorRow =  1+rand() % (ROWS3-2);
                	doorCol = 0;
				}
				if(doorWall == 1){
					doorRow =  1+rand() % (ROWS3-2);
                	doorCol = 39;
				}
				if(doorWall == 2){
					doorRow = 0;
                	doorCol =  1+rand() % (COLS3-2);
				}
				if(doorWall == 3){
					doorRow = 39;
                	doorCol =  1+rand() % (COLS3-2);
				}
			
            } while (map[doorRow][doorCol] != '.' && map[doorRow][doorCol] != '*' );
			
				
			map3[doorRow][doorCol] = 'D';
			map3[teleport1Row][teleport1Col] = '<';
			map3[teleport2Row][teleport2Col] = '>';
		    map3[teleport1Row-1][teleport1Col] = '.';
			map3[teleport2Row+1][teleport2Col] = '.';
		    spikesPlaced = 0;
		    while (spikesPlaced < 40) { // Adiciona espinhos
                int spikeRow, spikeCol;
                spikeRow = rand() % ROWS3;
                spikeCol = rand() % COLS3;
                if (map3[spikeRow][spikeCol] == '.') {
                    map3[spikeRow][spikeCol] = '#';
                    spikesPlaced++;
                	}
            	}
                
				//loop da fase 3
				vidas = 3;
				system("color 09");
				while (fase == 3 ) {
                
            	//manter os teleportes
            	map3[teleport1Row][teleport1Col] = '<';
				map3[teleport2Row][teleport2Col] = '>';
				
				
				//Atualizar a posição antiga do monstro
				map3[monsterOldRow][monsterOldCol] = '.';
				monsterOldCol = monsterCol;
				monsterOldRow = monsterRow;
				
				
				
				// Movimentar o monstro em direção ao jogador
					
				if(interact == 0){
					
					
					if(whichMonster == 1){
						map3[monsterRow][monsterCol] = 'x';
					}if(whichMonster == 2){
						map3[monsterRow][monsterCol] = 'V';
					}
					
					if(whichMonster == 1){
						moveMonster1(&monsterRow,&monsterCol);
						
						if(map3[monsterRow][monsterCol] == '#'){
						monsterRow = 15;
	                    monsterCol = 15;
						}
						
					}
					if(whichMonster == 2){
						moveMonster2(&monsterRow, &monsterCol, playerRow, playerCol);
						
						if(map3[monsterRow][monsterCol] == '#'){
							monsterRow = 15;
	                    	monsterCol = 15;
						}
					}
					if(map3[monsterRow][monsterCol] == '*'){
							monsterRow = monsterOldRow;
							monsterCol = monsterOldCol;
						}

				}else if(interact == 1){
				}
				

				
				//Verificar se a porta esta aberta e se a chave esta no mapa
				if (hasKey == 1 ){
						map3[doorRow][doorCol] = '=';
				}else{
						map3[doorRow][doorCol] = 'D';
						map3[keyRow][keyCol] = '@';
				}

				if(buttonPressed == 0){
					map3[buttonRow][buttonCol] ='O';
					map3[keyRow][keyCol] = '.';
					map3[doorRow][doorCol] = '*';
					
					
				}if(buttonPressed == 1){
					map3[buttonRow][buttonCol] ='.';
				}

                // Imprimir o mapa
				interact = 0;
				printf("\t\tVidas restantes:  %d\n\n",vidas);
				printMap3(map3, playerRow, playerCol);
				
				
				//Manter a chave no mapa
				if (hasKey == 1 ){
					map3[keyRow][keyCol] = '.';
				}
				

				
                // Ler o input do jogador
                char move;
                printf("\t\tDigite 'w' para cima, 'a' para esquerda, 's' para baixo, 'd' para direita:\n\t\t Digite 'i' para interagir com o o mapa ");
                move = getch();
                system("clear || cls");

                // Mover o jogador
                int newRow = playerRow;
                int newCol = playerCol;
                if (move == 'w') {
                    newRow--;
                } else if (move == 'a') {
                    newCol--;
                } else if (move == 's') {
                    newRow++;
                } else if (move == 'd') {
                    newCol++;
                }else if (move == 'i'){
                	interact = 1;
				}

                // Verificar se o movimento é válido
                if (newRow >= 0 && newRow < ROWS3 && newCol >= 0 && newCol < COLS3 && map3[newRow][newCol] != '*' ) {
                    // Atualizar a posição do jogador
                    playerRow = newRow;
                    playerCol = newCol;

					// Verificar se o jogador encontrou a chave
                    if (map3[playerRow][playerCol] == '@' && interact == 1) {
                        printf("\tVoce encontrou a chave!\n");
                        hasKey = 1;
                        
                    }
                    
                    // Verificar se o jogador apertou o butao
                    if (map3[playerRow][playerCol] == 'O' && interact == 1) {
                        printf("\tVoce apertou o botao!\n");
                        buttonPressed = 1;
                        
                    }
                    
                    if (map3[playerRow][playerCol] == '<' && interact == 1) {
                        playerRow = teleport2Row;
                        playerCol = teleport2Col-1;
                    }
					
					if (map3[playerRow][playerCol] == '>' && interact == 1) {
                        playerRow = teleport1Row;
                        playerCol = teleport1Col+1;
                    }

                    // Verificar se o jogador chegou à porta com a chave
                    if (playerRow == doorRow && playerCol == doorCol && hasKey == 1) {

                    map3[playerRow][playerCol] = '.';
                    fase = 4;
                         
						 
						 gameOver = 1;
                         showVictoryScreen();getchar(); 
                    }
                } else {
                    printf("Movimento invalido! Tente novamente.\n");
                    
                }
	
                // Verificar se o jogador tocou nos espinhos
                if (map3[playerRow][playerCol] == '#' || (playerRow == monsterRow && playerCol == monsterCol && interact == 0)) {
                    
                    // Reiniciar a fase
                    playerRow = 10;
                    playerCol = 10;
                    hasKey = 0; // resetar a chave
                    map3[monsterRow][monsterCol] = '.';
                    map3[keyRow][keyCol] = '@';
					monsterRow = 15;
                    monsterCol = 15;
                    buttonPressed = 0;
					interact = 0;
					vidas--;
					showGameover();
					if(vidas == 0){
                    	choice = 0;
                    	fase = 0;
					}
                    
                }
                
            }
        } else if (choice == 2) {
            // Exibir tutorial
            showTutorial();
            system("clear || cls");
        } else if (choice == 3) {
            // Sair
            system("clear || cls");
			printf("\t\t\t\tObrigado por jogar!\n");
        } else {
			system("clear || cls"); // Limpa a tela
			printf("Opcao invalida! Por favor, escolha uma opcao valida.\n\n");
        }
    } while (choice != 3);
	
	if(choice == 3){
		showSair();
	}
	
    return 0;
}
