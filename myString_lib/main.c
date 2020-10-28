/*
 * main.c
 *
 *  Created on: ???/???/????
 *      Author: Omar Adel Shalaan
 */


#include<stdio.h>
#include"myString.h"
/*
 int my_strln(char*str);
void my_strcat(char*str1,char*str2);
int my_strcmp(char*str1,char*str2);
void my_strlwr(char str[]);
void my_strcpy(char str1[],char str2[]);

  */

int main(){

	char str1[]="omar";
	char str2[]="shalaan";
	printf("%d\n",my_strln(str1));
	my_strcat(str1,str2);
	my_strupr(str2);
	printf("%s\n",str2);

	return 0;
}
