#include<stdio.h>
#include<string.h>
#include<locale.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>
#include<string.h>

using namespace std;

void perm(char *a, char *b);

int main(){
	
	char a, b;
	
	printf("insira uma letra para a: ");
	scanf("%c", &a);
	fflush(stdin);
	printf("insira uma letra para b: ");
	scanf("%c", &b);
	
	perm(&a, &b);
	
}

void perm(char *a, char *b){
	
	char aux;
	
	aux=*a;
	*a=*b;
	*b=aux;
	
	printf("a: %c\n", *a);
	printf("b: %c\n", *b);
	
}

