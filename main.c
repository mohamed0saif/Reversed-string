/*

 * main.c
 *
 *  Created on: Jan 29, 2023
 *      Author: mohamed

 */

#include "stdio.h"
#include "string.h"
void clear (void);

void main(){

	char string[100];
	char R_string[100];
	printf("enter the string: ");
	clear();
	gets(string);
	int j = strlen(string)-1;
	for(int i =0 ;i<strlen(string);i++){

		R_string[i]=string[j];
		j--;
	}
	R_string[strlen(string)]=0;
	printf("Reversed string is: %s",R_string);

}


void clear(void){

	fflush(stdin);
	fflush(stdout);
}

