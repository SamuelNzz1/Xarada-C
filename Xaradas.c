
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<locale.h>
#include<conio.c>
#define gotox 70
#define gotox2 10
#define linM 30
#define colM 100
int main(){
    int escoU = 0, i = 0, j = 0, pontuacao = 0;
	char respostaUsu[linM][colM];

char resposta[linM][colM] = {"26 letras no alfabeto", "7 dias na semana","7 maravilhas do mundo","12 signos do zodiaco","66 livros da biblia","52 cartas num baralho (sem os coringas)", "4 cores da bandeira brasileira","18 buracos num campo de golfe","39 livros no velho testamento","5 dedos em um pe","90 graus num angulo reto","0 graus celsius e a temperatura de congelamento da agua", "5 jogadores em um time de basquete", "3 rodas num triciclo", "100 centavos em um real", "12 meses no ano", "4 rodas tem um carro", "29 dias em fevereiro em um ano bissexto", "27 livros no novo testamento", "365 dias no ano", "10 dedos em 2 maos", "52 semanas em um ano", "9 vidas tem um gato", "60 minutos numa hora", "64 casas num tabuleiro de xadrez", "3 estados na regiao sul", "1 bola branca em um jogo de sinuca", "1000 anos em um milenio", "12 ovos em uma duzia","11 jogadores em um time de futebol"}; 
	
	
	setlocale(LC_ALL, "portuguese");
gotoxy(15, 10);
printf("Aviso, todos os espaços, devem estar exatamente iguais, senão, será considerado resposta invalida!");
printf("\n\n\n\t\t\t\t\t");
system("pause");
clrscr();
do{
	if(strcmp(respostaUsu[0], "1") == 0 || strcmp(respostaUsu[0], " ") == 0){
		gotoxy(gotox2, 1);
		if(strcmp(respostaUsu[0], "1") == 0){
		
		textbackground(2);
		printf("Já respondida!, correta!");
		}
		else{
			textbackground(4);
		printf("Já respondida!, errada!");
		}
	}
		else if(strcmp(respostaUsu[0], "1") != 0 ||strcmp(respostaUsu[0], " ") != 0 ){
		textbackground(0);
		gotoxy(gotox2, 1);	
		printf("1|<26 L no A>");
		}
		//linha 2	


	if(strcmp(respostaUsu[1], "1") == 0 || strcmp(respostaUsu[1], " ") == 0){
		gotoxy(gotox2, 2);
		if(strcmp(respostaUsu[1], "1") == 0){
		
		textbackground(2);
		printf("Já respondida!, correta!");
		}
		else{
			textbackground(4);
		printf("Já respondida!, errada!");
		}
	}
		else if(strcmp(respostaUsu[1], "1") != 0 ||strcmp(respostaUsu[1], " ") != 0 ){
		textbackground(0);		
		gotoxy(gotox2, 2);
		printf("2|<7 D na S>");
		}
		
		//quebra de linha
		
		if(strcmp(respostaUsu[2], "1") == 0 || strcmp(respostaUsu[2], " ") == 0){
	gotoxy(gotox2, 3);
		if(strcmp(respostaUsu[2], "1") == 0){
		
		textbackground(2);
		printf("Já respondida!, correta!");
		}
		else{
			textbackground(4);
		printf("Já respondida!, errada!");
		}
	}
		
	else if(strcmp(respostaUsu[2], "1") != 0 ||strcmp(respostaUsu[2], " ") != 0 ){	
	textbackground(0);
	gotoxy(gotox2, 3);
	printf("3|<7 M do M>");
	}
	
	//linha 4
	
	if(strcmp(respostaUsu[3], "1") == 0 || strcmp(respostaUsu[3], " ") == 0){
		gotoxy(gotox2, 4);
		if(strcmp(respostaUsu[3], "1") == 0){
		
		textbackground(2);
		printf("Já respondida!, correta!");
		}
		else{
			textbackground(4);
		printf("Já respondida!, errada!");
		}
	}
	
	
	else if(strcmp(respostaUsu[3], "1") != 0 ||strcmp(respostaUsu[3], " ") != 0 ){
	textbackground(0);
	gotoxy(gotox2, 4);
	printf("4|<12 S do Z>");
	}
	
		
//linha 5
if(strcmp(respostaUsu[4], "1") == 0 || strcmp(respostaUsu[4], " ") == 0){
	gotoxy(gotox2, 5);
		if(strcmp(respostaUsu[4], "1") == 0){		
		textbackground(2);
		printf("Já respondida!, correta!");
		}
		else{
			textbackground(4);
		printf("Já respondida!, errada!");
		}
}

  else if(strcmp(respostaUsu[4], "1") != 0 ||strcmp(respostaUsu[4], " ") != 0 ){
  textbackground(0);
  gotoxy(gotox2, 5);
  printf("5|<66 L da B>");
  }

// linha 6;

if(strcmp(respostaUsu[5], "1") == 0 || strcmp(respostaUsu[5], " ") == 0){
	gotoxy(gotox2, 6);
		if(strcmp(respostaUsu[5], "1") == 0){		
		textbackground(2);
		printf("Já respondida!, correta!");
		}
		else{
			textbackground(4);
		printf("Já respondida!, errada!");
		}
}

  else if(strcmp(respostaUsu[5], "1") != 0 ||strcmp(respostaUsu[5], " ") != 0 ){
textbackground(0);
gotoxy(gotox2, 6);
printf("6|<52 C num B (S os C)>");
}

// linha 7
if(strcmp(respostaUsu[6], "1") == 0 || strcmp(respostaUsu[6], " ") == 0){
	gotoxy(gotox2, 7);
		if(strcmp(respostaUsu[6], "1") == 0){
		
		textbackground(2);
		printf("Já respondida!, correta!");
		}
		else{
			textbackground(4);
		printf("Já respondida!, errada!");
		}
}

else if(strcmp(respostaUsu[6], "1") != 0 ||strcmp(respostaUsu[6], " ") != 0 ){
textbackground(0);
printf("\n");
gotoxy(gotox2, 7);
printf("7|<4 C na B B>");

}
//linha 8
if(strcmp(respostaUsu[7], "1") == 0 || strcmp(respostaUsu[7], " ") == 0){
	gotoxy(gotox2, 8);
		if(strcmp(respostaUsu[7], "1") == 0){
		
		textbackground(2);
		printf("Já respondida!, correta!");
		}
		else{
			textbackground(4);
		printf("Já respondida!, errada!");
		}
}

else if(strcmp(respostaUsu[7], "1") != 0 ||strcmp(respostaUsu[7], " ") != 0 ){
textbackground(0);
printf("\n");
gotoxy(gotox2, 8);
printf("8|<18 B num C de G>");
}

//linha 9
if(strcmp(respostaUsu[8], "1") == 0 || strcmp(respostaUsu[8], " ") == 0){
	gotoxy(gotox2, 9);
		if(strcmp(respostaUsu[8], "1") == 0){
		
		textbackground(2);
		printf("Já respondida!, correta!");
		}
		else{
			textbackground(4);
		printf("Já respondida!, errada!");
		}
}

else if(strcmp(respostaUsu[8], "1") != 0 ||strcmp(respostaUsu[8], " ") != 0 ){
textbackground(0);
printf("\n");
gotoxy(gotox2, 9);
printf("9|<39 L no V T>");
}

//linha 10
if(strcmp(respostaUsu[9], "1") == 0 || strcmp(respostaUsu[9], " ") == 0){
	gotoxy(gotox2, 10);
		if(strcmp(respostaUsu[9], "1") == 0){
		
		textbackground(2);
		printf("Já respondida!, correta!");
		}
		else{
			textbackground(4);
		printf("Já respondida!, errada!");
		}
}

else if(strcmp(respostaUsu[9], "1") != 0 ||strcmp(respostaUsu[9], " ") != 0 ){
textbackground(0);
printf("\n");
gotoxy(gotox2-1,10);
printf("10|");
gotoxy(gotox2+2, 10);
printf("<5 D em um P>");

}

//linha 11
if(strcmp(respostaUsu[10], "1") == 0 || strcmp(respostaUsu[10], " ") == 0){
	gotoxy(gotox2, 11);
		if(strcmp(respostaUsu[10], "1") == 0){
		
		textbackground(2);
		printf("Já respondida!, correta!");
		}
		else{
			textbackground(4);
		printf("Já respondida!, errada!");
		}
}

else if(strcmp(respostaUsu[10], "1") != 0 ||strcmp(respostaUsu[10], " ") != 0 ){
textbackground(0);
printf("\n");
gotoxy(gotox2-1,11);
printf("11|");
gotoxy(gotox2+2, 11);
printf("<90 G num Â R>");

}

//linha 12
if(strcmp(respostaUsu[11], "1") == 0 || strcmp(respostaUsu[11], " ") == 0){
      	gotoxy(gotox2, 12);
		if(strcmp(respostaUsu[11], "1") == 0){
		
		textbackground(2);
		printf("Já respondida!, correta!");
		}
		else{
			textbackground(4);
		printf("Já respondida!, errada!");
		}
}

else if(strcmp(respostaUsu[11], "1") != 0 ||strcmp(respostaUsu[11], " ") != 0 ){
textbackground(0);
printf("\n");
gotoxy(gotox2-1,12);
printf("12|");
gotoxy(gotox2+2, 12);
printf("<0 G C é a T D C da Á>");

}

//linha 13
if(strcmp(respostaUsu[12], "1") == 0 || strcmp(respostaUsu[12], " ") == 0){
      	gotoxy(gotox2, 13);
		if(strcmp(respostaUsu[12], "1") == 0){
		
		textbackground(2);
		printf("Já respondida!, correta!");
		}
		else{
			textbackground(4);
		printf("Já respondida!, errada!");
		}
}

else if(strcmp(respostaUsu[12], "1") != 0 ||strcmp(respostaUsu[12], " ") != 0 ){
textbackground(0);
printf("\n");
gotoxy(gotox2-1,13);
printf("13|");
gotoxy(gotox2+2, 13);
printf("<5 J em um T D B>");

}

//linha 14
if(strcmp(respostaUsu[13], "1") == 0 || strcmp(respostaUsu[13], " ") == 0){
      	gotoxy(gotox2, 14);
		if(strcmp(respostaUsu[13], "1") == 0){
		
		textbackground(2);
		printf("Já respondida!, correta!");
		}
		else{
			textbackground(4);
		printf("Já respondida!, errada!");
		}
}

else if(strcmp(respostaUsu[13], "1") != 0 ||strcmp(respostaUsu[13], " ") != 0 ){
textbackground(0);
printf("\n");
gotoxy(gotox2-1,14);
printf("14|");
gotoxy(gotox2+2, 14);
printf("<3 R num T>");

}

//linha 15
if(strcmp(respostaUsu[14], "1") == 0 || strcmp(respostaUsu[14], " ") == 0){
      	gotoxy(gotox2, 15);
		if(strcmp(respostaUsu[14], "1") == 0){
		
		textbackground(2);
		printf("Já respondida!, correta!");
		}
		else{
			textbackground(4);
		printf("Já respondida!, errada!");
		}
}

else if(strcmp(respostaUsu[14], "1") != 0 ||strcmp(respostaUsu[14], " ") != 0 ){

textbackground(0);
printf("\n");
gotoxy(gotox2-1,15);
printf("15|");
gotoxy(gotox2+2, 15);
printf("<100 C em um R>");
}        //printf("\n:");

// troca de coluna;
//linha 1
if(strcmp(respostaUsu[15], "1") == 0 || strcmp(respostaUsu[15], " ") == 0){
      	gotoxy(gotox, 1);
		if(strcmp(respostaUsu[15], "1") == 0){
		
		textbackground(2);
		printf("Já respondida!, correta!");
		}
		else{
			textbackground(4);
		printf("Já respondida!, errada!");
		}
}

else if(strcmp(respostaUsu[15], "1") != 0 ||strcmp(respostaUsu[15], " ") != 0 ){

textbackground(0);
gotoxy(gotox, 1);
printf("16|<12 M no A>");
}

//linha 2
if(strcmp(respostaUsu[16], "1") == 0 || strcmp(respostaUsu[16], " ") == 0){
      	gotoxy(gotox, 2);
		if(strcmp(respostaUsu[16], "1") == 0){
		
		textbackground(2);
		printf("Já respondida!, correta!");
		}
		else{
			textbackground(4);
		printf("Já respondida!, errada!");
		}
}

else if(strcmp(respostaUsu[16], "1") != 0 ||strcmp(respostaUsu[16], " ") != 0 ){

textbackground(0);
gotoxy(gotox, 2);
printf("17|<4 R T um C>");
}

//linha 3
if(strcmp(respostaUsu[17], "1") == 0 || strcmp(respostaUsu[17], " ") == 0){
      	gotoxy(gotox, 3);
		if(strcmp(respostaUsu[16], "1") == 0){
		
		textbackground(2);
		printf("Já respondida!, correta!");
		}
		else{
			textbackground(4);
		printf("Já respondida!, errada!");
		}
}

else if(strcmp(respostaUsu[16], "1") != 0 ||strcmp(respostaUsu[16], " ") != 0 ){

textbackground(0);
gotoxy(gotox, 3);
printf("18|<29 D em F em um A B>");
}

//linha 4
if(strcmp(respostaUsu[18], "1") == 0 || strcmp(respostaUsu[18], " ") == 0){
      	gotoxy(gotox, 4);
		if(strcmp(respostaUsu[18], "1") == 0){
		
		textbackground(2);
		printf("Já respondida!, correta!");
		}
		else{
			textbackground(4);
		printf("Já respondida!, errada!");
		}
}

else if(strcmp(respostaUsu[18], "1") != 0 ||strcmp(respostaUsu[18], " ") != 0 ){

textbackground(0);
gotoxy(gotox, 4);
printf("19|<27 L no N T>");
}

//linha 5
if(strcmp(respostaUsu[19], "1") == 0 || strcmp(respostaUsu[19], " ") == 0){
      	gotoxy(gotox, 5);
		if(strcmp(respostaUsu[19], "1") == 0){
		
		textbackground(2);
		printf("Já respondida!, correta!");
		}
		else{
			textbackground(4);
		printf("Já respondida!, errada!");
		}
}

else if(strcmp(respostaUsu[19], "1") != 0 ||strcmp(respostaUsu[19], " ") != 0 ){

textbackground(0);
printf("\n");
gotoxy(gotox, 5);
printf("20|<365 D no A>");
}



//linha 6 coluna 2;
if(strcmp(respostaUsu[20], "1") == 0 || strcmp(respostaUsu[20], " ") == 0){
	gotoxy(gotox, 6);
		if(strcmp(respostaUsu[20], "1") == 0){
		
		textbackground(2);
		printf("Já respondida!, correta!");
		}
		else{
			textbackground(4);
		printf("Já respondida!, errada!");
		}
}

else if(strcmp(respostaUsu[20], "1") != 0 ||strcmp(respostaUsu[20], " ") != 0 ){
textbackground(0);
gotoxy(gotox, 6);
printf("21|<10 D em 2 M>");
}
// linha 7 coluna 2
if(strcmp(respostaUsu[21], "1") == 0 || strcmp(respostaUsu[21], " ") == 0){
	gotoxy(gotox, 7);
		if(strcmp(respostaUsu[21], "1") == 0){
		
		textbackground(2);
		printf("Já respondida!, correta!");
		}
		else{
			textbackground(4);
		printf("Já respondida!, errada!");
		}
}


else if(strcmp(respostaUsu[21], "1") != 0 ||strcmp(respostaUsu[21], " ") != 0 ){
textbackground(0);
gotoxy(gotox, 7);
printf("22|<52 S em um A>");
}

//linha 8 coluna 2;
if(strcmp(respostaUsu[22], "1") == 0 || strcmp(respostaUsu[22], " ") == 0){
	gotoxy(gotox, 8);
		if(strcmp(respostaUsu[22], "1") == 0){
		
		textbackground(2);
		printf("Já respondida!, correta!");
		}
		else{
			textbackground(4);
		printf("Já respondida!, errada!");
		}
}


else if(strcmp(respostaUsu[22], "1") != 0 ||strcmp(respostaUsu[22], " ") != 0 ){
textbackground(0);
gotoxy (gotox, 8);
printf("23|<9 V T um G>");
}


// linha 9 coluna 2;
if(strcmp(respostaUsu[23], "1") == 0 || strcmp(respostaUsu[23], " ") == 0){
	gotoxy(gotox, 9);
		if(strcmp(respostaUsu[23], "1") == 0){
		
		textbackground(2);
		printf("Já respondida!, correta!");
		}
		else{
			textbackground(4);
		printf("Já respondida!, errada!");
		}
}


else if(strcmp(respostaUsu[23], "1") != 0 ||strcmp(respostaUsu[23], " ") != 0){

textbackground(0);
gotoxy(gotox, 9);
printf("24|<60 M N H>");
}
//linha 10;

if(strcmp(respostaUsu[24], "1") == 0 || strcmp(respostaUsu[24], " ") == 0){
	gotoxy(gotox, 10);
		if(strcmp(respostaUsu[24], "1") == 0){
		
		textbackground(2);
		printf("Já respondida!, correta!");
		}
		else{
			textbackground(4);
		printf("Já respondida!, errada!");
		}
}

else if(strcmp(respostaUsu[24], "1") != 0 ||strcmp(respostaUsu[24], " ") != 0){
textbackground(0);
gotoxy(gotox, 10);
printf("25|<64 C num T de X>");
}

//linha 11
if(strcmp(respostaUsu[25], "1") == 0 || strcmp(respostaUsu[25], " ") == 0){
	gotoxy(gotox, 11);
		if(strcmp(respostaUsu[25], "1") == 0){
		
		textbackground(2);
		printf("Já respondida!, correta!");
		}
		else{
			textbackground(4);
		printf("Já respondida!, errada!");
		}
}

else if(strcmp(respostaUsu[25], "1") != 0 ||strcmp(respostaUsu[25], " ") != 0){
textbackground(0);
gotoxy(gotox, 11);
printf("26|<3 E na R S>");
}
//linha 12
if(strcmp(respostaUsu[26], "1") == 0 || strcmp(respostaUsu[26], " ") == 0){
	gotoxy(gotox, 12);
		if(strcmp(respostaUsu[26], "1") == 0){
		
		textbackground(2);
		printf("Já respondida!, correta!");
		}
		else{
			textbackground(4);
		printf("Já respondida!, errada!");
		}
}

else if(strcmp(respostaUsu[26], "1") != 0 ||strcmp(respostaUsu[26], " ") != 0){
textbackground(0);
gotoxy(gotox, 12);
printf("27|<1 B B em um J de S>");
}
//linha 13
if(strcmp(respostaUsu[27], "1") == 0 || strcmp(respostaUsu[27], " ") == 0){
	gotoxy(gotox, 13);
		if(strcmp(respostaUsu[27], "1") == 0){
		
		textbackground(2);
		printf("Já respondida!, correta!");
		}
		else{
			textbackground(4);
		printf("Já respondida!, errada!");
		}
}


else if(strcmp(respostaUsu[27], "1") != 0 ||strcmp(respostaUsu[27], " ") != 0){
textbackground(0);
gotoxy(gotox, 13);
printf("28|<1000 A em um M>");
}
//linha 14
if(strcmp(respostaUsu[28], "1") == 0 || strcmp(respostaUsu[28], " ") == 0){
	gotoxy(gotox, 14);
		if(strcmp(respostaUsu[28], "1") == 0){
		
		textbackground(2);
		printf("Já respondida!, correta!");
		}
		else{
			textbackground(4);
		printf("Já respondida!, errada!");
		}
}

else if(strcmp(respostaUsu[28], "1") != 0 ||strcmp(respostaUsu[28], " ") != 0){
textbackground(0);
gotoxy(gotox, 14);
printf("29|<12 O em uma D>");
}
// linha 15
if(strcmp(respostaUsu[29], "1") == 0 || strcmp(respostaUsu[29], " ") == 0){
	gotoxy(gotox, 15);
		if(strcmp(respostaUsu[29], "1") == 0){
		
		textbackground(2);
		printf("Já respondida!, correta!");
		}
		else{
			textbackground(4);
		printf("Já respondida!, errada!");
		}
}

else if(strcmp(respostaUsu[28], "1") != 0 ||strcmp(respostaUsu[28], " ") != 0){
textbackground(0);
gotoxy(gotox, 15);
printf("30|<11 J em um T D F>");
}


 if(escoU == 1 && strcmp(respostaUsu[0], "1") != 0 && strcmp(respostaUsu[0], " ") != 0 ){
	i = 0;
	gotoxy(gotox2, 1);
	textbackground(0);	
	printf("1|26 L no A: ");
	fflush(stdin);
	gets(respostaUsu[i]);
	
	if(strcmp(strlwr(respostaUsu[i]), resposta[i]) == 0){
		strcpy(respostaUsu[0], "1");
	pontuacao++;
	}
	else{
		strcpy(respostaUsu[0], " ");
	}
}

 else if(escoU == 2 && strcmp(respostaUsu[1], "1") != 0 && strcmp(respostaUsu[1], " ") != 0){
	i = 1;
	gotoxy(gotox2, 2);	
	textbackground(0);
	printf("2|7 D na S: ");
	fflush(stdin);
	gets(respostaUsu[i]);
	
	if(strcmp(strlwr(respostaUsu[i]), resposta[i]) == 0){
		strcpy(respostaUsu[i], "1");
	pontuacao++;
	}
	else{
		strcpy(respostaUsu[i], " ");
	}
}
else  if(escoU == 3 && strcmp(respostaUsu[2], "1") != 0 && strcmp(respostaUsu[2], " ") != 0){
	i = 2;
	gotoxy(gotox2, 3);
	textbackground(0);	
	printf("3|7 M do M: ");
	fflush(stdin);
	gets(respostaUsu[i]);
	
	if(strcmp(strlwr(respostaUsu[i]), resposta[i]) == 0){
		strcpy(respostaUsu[i], "1");
	pontuacao++;
	}
	else{
		strcpy(respostaUsu[i], " ");
	}
}

 else if(escoU == 4 && strcmp(respostaUsu[3], "1") != 0 && strcmp(respostaUsu[3], " ") != 0){
	i = 3;
	gotoxy(gotox2, 4);
	textbackground(0);	
	printf("4|12 S do Z: ");
	fflush(stdin);
	gets(respostaUsu[i]);
	
	if(strcmp(strlwr(respostaUsu[i]), resposta[i]) == 0){
		strcpy(respostaUsu[i], "1");
	pontuacao++;
	}
	else{
		strcpy(respostaUsu[i], " ");
	}
}
else if(escoU == 5 && strcmp(respostaUsu[4], "1") != 0 && strcmp(respostaUsu[4], " ") != 0){
	i = 4;
	gotoxy(gotox2, 5);
	textbackground(0);	
	printf("5|66 L da B: ");
	fflush(stdin);
	gets(respostaUsu[i]);
	
	if(strcmp(strlwr(respostaUsu[i]), resposta[i]) == 0){
		
		pontuacao++;strcpy(respostaUsu[i], "1");
	}
	else{
		strcpy(respostaUsu[i], " ");
	}
}
 else if(escoU == 6 && strcmp(respostaUsu[5], "1") != 0 && strcmp(respostaUsu[5], " ") != 0){
	i = 5;
	gotoxy(gotox2, 6);
	textbackground(0);	
	printf("6|52 C num B (S os C): ");
	fflush(stdin);
	gets(respostaUsu[i]);
	
	if(strcmp(strlwr(respostaUsu[i]), resposta[i]) == 0){
		pontuacao++;
		strcpy(respostaUsu[i], "1");
	}
	else{
		strcpy(respostaUsu[i], " ");
	}
}
//linha 7
if(escoU == 7 && strcmp(respostaUsu[6], "1") != 0 && strcmp(respostaUsu[6], " ") != 0){
	i = 6;
	gotoxy(gotox2, 7);
	textbackground(0);	
    printf("7|4 C na B B: ");

	fflush(stdin);
	gets(respostaUsu[i]);
	
	if(strcmp(strlwr(respostaUsu[i]), resposta[i]) == 0){
		
		pontuacao++;strcpy(respostaUsu[i], "1");
	}
	else{
		strcpy(respostaUsu[i], " ");
	}
}
//linha 8
if(escoU == 8 && strcmp(respostaUsu[7], "1") != 0 && strcmp(respostaUsu[7], " ") != 0){
	i = 7;
	gotoxy(gotox2, 8);
	textbackground(0);	
   printf("8|18 B num C de G: ");

	fflush(stdin);
	gets(respostaUsu[i]);
	
	if(strcmp(strlwr(respostaUsu[i]), resposta[i]) == 0){
		pontuacao++;
		strcpy(respostaUsu[i], "1");
	}
	else{
		strcpy(respostaUsu[i], " ");
	}
}
//linha 9
if(escoU == 9 && strcmp(respostaUsu[8], "1") != 0 && strcmp(respostaUsu[8], " ") != 0){
	i = 8;
	gotoxy(gotox2, 9);
	textbackground(0);	
   printf("9|39 L no V T: ");

	fflush(stdin);
	gets(respostaUsu[i]);
	
	if(strcmp(strlwr(respostaUsu[i]), resposta[i]) == 0){
		pontuacao++;
		strcpy(respostaUsu[i], "1");
	}
	else{
		strcpy(respostaUsu[i], " ");
	}
}
//linha 10
if(escoU == 10 && strcmp(respostaUsu[9], "1") != 0 && strcmp(respostaUsu[9], " ") != 0){
	i = 9;
	printf("\n");
	gotoxy(gotox2-1,10);
	textbackground(0);
    printf("10|");
    gotoxy(gotox2+2, 10);
    textbackground(0);
    printf("5 D em um P: ");


	fflush(stdin);
	gets(respostaUsu[i]);
	
	if(strcmp(strlwr( respostaUsu[i] ), resposta[i]) == 0){
		pontuacao++;
		strcpy(respostaUsu[i], "1");
	}
	else{
		strcpy(respostaUsu[i], " ");
	}
}
//linha 11
if(escoU == 11 && strcmp(respostaUsu[10], "1") != 0 && strcmp(respostaUsu[10]," ") != 0){
	i = 10;
	printf("\n");
	gotoxy(gotox2-1,11);
	textbackground(0);
    printf("11|");
    gotoxy(gotox2+2, 11);
    textbackground(0);
    printf("90 G num Â R: ");


	fflush(stdin);
	gets(respostaUsu[i]);
	
	if(strcmp(strlwr(respostaUsu[i]), resposta[i]) == 0){
		
		pontuacao++;strcpy(respostaUsu[i], "1");
	}
	else{
		strcpy(respostaUsu[i], " ");
	}
}

//linha 12
if(escoU == 12 && strcmp(respostaUsu[11], "1") != 0 && strcmp(respostaUsu[11]," ") != 0){
	i = 11;
	printf("\n");
	gotoxy(gotox2-1,12);
	textbackground(0);
    printf("12|");
    gotoxy(gotox2+2, 12);
    textbackground(0);
    printf("0 G C é a T D C da Á: ");


	fflush(stdin);
	gets(respostaUsu[i]);
	
	if(strcmp(strlwr(respostaUsu[i]), resposta[i]) == 0){
		pontuacao++;
		strcpy(respostaUsu[i], "1");
	}
	else{
		strcpy(respostaUsu[i], " ");
	}
}


//linha 13
if(escoU == 13 && strcmp(respostaUsu[12], "1") != 0 && strcmp(respostaUsu[12], " ") != 0){
	i = 12;
    printf("\n");
    gotoxy(gotox2-1,13);
    textbackground(0);
	printf("13|");
    gotoxy(gotox2+2, 13);
    textbackground(0);
    printf("5 J em um T D B: ");
	fflush(stdin);
	gets(respostaUsu[i]);
	
	if(strcmp(strlwr(respostaUsu[i]), resposta[i]) == 0){
		strcpy(respostaUsu[i], "1");
	pontuacao++;
	}
	else{
		strcpy(respostaUsu[i], " ");
	}
}
//linha 14
if(escoU == 14 && strcmp(respostaUsu[13], "1") != 0 && strcmp(respostaUsu[13], " ") != 0){
	i = 13;
   printf("\n");
   gotoxy(gotox2-1,14);
 textbackground(0);
   printf("14|");
   gotoxy(gotox2+2, 14);
   textbackground(0);
   printf("3 R num T: ");




	fflush(stdin);
	gets(respostaUsu[i]);
	
	if(strcmp(strlwr(respostaUsu[i]), resposta[i]) == 0){
		strcpy(respostaUsu[i], "1");
	pontuacao++;
	}
	else{
		strcpy(respostaUsu[i], " ");
	}
}
//linha 15
if(escoU == 15 && strcmp(respostaUsu[14], "1") != 0 && strcmp(respostaUsu[14], " ") != 0){
	i = 14;
    printf("\n");
    gotoxy(gotox2-1,15);
   textbackground(0);
    printf("15|");
    
    gotoxy(gotox2+2, 15);
    textbackground(0);
    printf("100 C em um R: ");




	fflush(stdin);
	gets(respostaUsu[i]);
	
	if(strcmp(strlwr(respostaUsu[i]), resposta[i]) == 0){
		pontuacao++;
		strcpy(respostaUsu[i], "1");
	}
	else{
		strcpy(respostaUsu[i], " ");
	}
}
//linha 16
if(escoU == 16 && strcmp(respostaUsu[15], "1") != 0 && strcmp(respostaUsu[15], " ") != 0){
	i = 15;
    gotoxy(gotox, 1);
    textbackground(0);
    printf("16|12 M no A: ");




	fflush(stdin);
	gets(respostaUsu[i]);
	
	if(strcmp(strlwr(respostaUsu[i]), resposta[i]) == 0){
		pontuacao++;
		strcpy(respostaUsu[i], "1");
	}
	else{
		strcpy(respostaUsu[i], " ");
	}
}
//linha 17
if(escoU == 17 && strcmp(respostaUsu[16], "1") != 0 && strcmp(respostaUsu[16], " ") != 0){
	i = 16;
gotoxy(gotox, 2);
textbackground(0);
printf("17|4 R T um C: ");



	fflush(stdin);
	gets(respostaUsu[i]);
	
	if(strcmp(strlwr(respostaUsu[i]), resposta[i]) == 0){
		pontuacao++;
		strcpy(respostaUsu[i], "1");
	}
	else{
		strcpy(respostaUsu[i], " ");
	}
}
//linha 18
if(escoU == 18 && strcmp(respostaUsu[17], "1") != 0 && strcmp(respostaUsu[17], " ") != 0){
	i = 17;
    gotoxy(gotox, 3);
    textbackground(0);
    printf("18|29 D em F em um A B: ");



	fflush(stdin);
	gets(respostaUsu[i]);
	
	if(strcmp(strlwr(respostaUsu[i]), resposta[i]) == 0){
		pontuacao++;
		strcpy(respostaUsu[i], "1");
	}
	else{
		strcpy(respostaUsu[i], " ");
	}
}
//linha 19
if(escoU == 19 && strcmp(respostaUsu[18], "1") != 0 && strcmp(respostaUsu[18], " ") != 0){
	i = 18;
   gotoxy(gotox, 4);
   textbackground(0);
   printf("19|27 L no N T: ");



	fflush(stdin);
	gets(respostaUsu[i]);
	
	if(strcmp(strlwr(respostaUsu[i]), resposta[i]) == 0){
		pontuacao++;
		strcpy(respostaUsu[i], "1");
	}
	else{
		strcpy(respostaUsu[i], " ");
	}
}
//linha 20
if(escoU == 20 && strcmp(respostaUsu[19], "1") != 0 && strcmp(respostaUsu[19], " ") != 0){
	i = 19;

gotoxy(gotox, 5);
textbackground(0);
printf("20|365 D no A: ");



	fflush(stdin);
	gets(respostaUsu[i]);
	
	if(strcmp(strlwr(respostaUsu[i]), resposta[i]) == 0){
		pontuacao++;
		strcpy(respostaUsu[i], "1");
	}
	else{
		strcpy(respostaUsu[i], " ");
	}
}


//linha 21;
else if(escoU == 21 && strcmp(respostaUsu[20], "1") != 0 && strcmp(respostaUsu[20], " ") != 0){
	i = 20;
	gotoxy(gotox, 6);
	textbackground(0);	
	printf("21|10 D em 2 M: ");
	fflush(stdin);
	gets(respostaUsu[i]);
	
	if(strcmp(strlwr(respostaUsu[i]), resposta[i]) == 0){
	
	pontuacao++;	strcpy(respostaUsu[i], "1");
	}
	else{
		strcpy(respostaUsu[i], " ");
	}
}
else if(escoU == 22 && strcmp(respostaUsu[21], "1") != 0 && strcmp(respostaUsu[21], " ") != 0){
	i = 21;
	gotoxy(gotox, 7);
	textbackground(0);	
	printf("22|52 S em um A: ");
	fflush(stdin);
	gets(respostaUsu[i]);
	
	if(strcmp(strlwr(respostaUsu[i]), resposta[i]) == 0){
	pontuacao++;
		strcpy(respostaUsu[i], "1");
	}
	else{
		strcpy(respostaUsu[i], " ");
	}
}
else if(escoU == 23 && strcmp(respostaUsu[22], "1") != 0 && strcmp(respostaUsu[22], " ") != 0){
		i = 22;
	gotoxy(gotox, 8);
	textbackground(0);	
	printf("23|9 V T um G: ");
	fflush(stdin);
	gets(respostaUsu[i]);
	
	if(strcmp(strlwr(respostaUsu[i]), resposta[i]) == 0){
	pontuacao++;
		strcpy(respostaUsu[i], "1");
	}
	else{
		strcpy(respostaUsu[i], " ");
	}
}
//linha9
else if(escoU == 24 && strcmp(respostaUsu[23], "1") != 0 && strcmp(respostaUsu[23], " ") != 0){
	i = 23;
	gotoxy(gotox, 9);	
	textbackground(0);
	printf("24|60 M N H: ");
	
	fflush(stdin);
	gets(respostaUsu[i]);
	
	if(strcmp(strlwr(respostaUsu[i]), resposta[i]) == 0){
		strcpy(respostaUsu[i], "1");
	
	pontuacao++;}
	
	else{
		strcpy(respostaUsu[i], " ");
	}
}
//linha 10
else if(escoU == 25 && strcmp(respostaUsu[24], "1") != 0 && strcmp(respostaUsu[24], " ") != 0){
	i = 24;
	gotoxy(gotox, 10);
	textbackground(0);
	
	printf("25|64 C num T de X: ");
	fflush(stdin);
	gets(respostaUsu[i]);
	
	if(strcmp(strlwr(respostaUsu[i]), resposta[i]) == 0){
		strcpy(respostaUsu[i], "1");
	pontuacao++;
	}
	else{
		strcpy(respostaUsu[i], " ");
	}
}
//linha 11
else if(escoU == 26 && strcmp(respostaUsu[25], "1") != 0 && strcmp(respostaUsu[25], " ") != 0){
	i = 25;
	gotoxy(gotox, 11);
	textbackground(0);	
	printf("26|3 E na R S: ");
	fflush(stdin);
	gets(respostaUsu[i]);
	
	if(strcmp(strlwr(respostaUsu[i]), resposta[i]) == 0){
		strcpy(respostaUsu[i], "1");
	pontuacao++;
	}
	else{
		strcpy(respostaUsu[i], " ");
	}
}
//linha 12
else if(escoU == 27 && strcmp(respostaUsu[26], "1") != 0 && strcmp(respostaUsu[26], " ") != 0){
	i = 26;
	
	gotoxy(gotox, 12);	
	textbackground(0);
	printf("27|1 B B em um J de S: ");
	fflush(stdin);
	gets(respostaUsu[i]);
	
	if(strcmp(strlwr(respostaUsu[i]), resposta[i]) == 0){
		strcpy(respostaUsu[i], "1");
		pontuacao++;
	}
	else{
		strcpy(respostaUsu[i], " ");
	}
}
//linha 13
else if(escoU == 28 && strcmp(respostaUsu[27], "1") != 0 && strcmp(respostaUsu[27], " ") != 0){
i = 27;
textbackground(0);
	gotoxy(gotox, 13);	
	printf("28|1000 A em um M: ");
	fflush(stdin);
	gets(respostaUsu[i]);
	
	if(strcmp(strlwr(respostaUsu[i]), resposta[i]) == 0){
		strcpy(respostaUsu[i], "1");
	pontuacao++;
	}
	else{
		strcpy(respostaUsu[i], " ");
	}
}
//linha 14
else if(escoU == 29 && strcmp(respostaUsu[28], "1") != 0 && strcmp(respostaUsu[28], " ") != 0){
i = 28;
textbackground(0);
	gotoxy(gotox, 14);	
	printf("29|12 O em uma D: ");
	fflush(stdin);
	gets(respostaUsu[i]);
	
	if(strcmp(strlwr(respostaUsu[i]), resposta[i]) == 0){
		strcpy(respostaUsu[i], "1");
	pontuacao++;
	}
	else{
		strcpy(respostaUsu[i], " ");
	}
}

//linha 15

else if(escoU == 30 && strcmp(respostaUsu[29], "1") != 0 && strcmp(respostaUsu[29], " ") != 0){
i = 29;
textbackground(0);
	gotoxy(gotox, 15);	
	printf("30|11 J em um T D F: ");
	fflush(stdin);
	gets(respostaUsu[i]);
	
	if(strcmp(strlwr(respostaUsu[i]), resposta[i]) == 0){
		strcpy(respostaUsu[i], "1");
		pontuacao++;
	}
	else{
		strcpy(respostaUsu[i], " ");
	}
}



gotoxy(1, 18);
textbackground(0);
printf("\n\n\nDigite a coluna da palavra que deseja tentar acertar (ou se deseja sair \"0\"): ");
scanf("%d", &escoU);
system("cls");

gotoxy(1, 17);
textbackground(0);
printf("\n\nPontuação: %d", pontuacao);

system("color 07");
}while(escoU != 0 && escoU > 0);
return 0;
}

