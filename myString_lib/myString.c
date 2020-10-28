/*
 *  myString.c
 *
 *  Created on: ???/???/????
 *      Author: Omar Adel Shalaan
 */

int my_strln(char*str){
	int count=0;
	while(*str!='\0')
	{
		count++;
		str++;
	}
	return count;
}

void my_strcat(char*str1,char*str2)
{
	int count1=my_strln(str1);
	int count2=my_strln(str2);
	int i,j=0;
	char str[count1+count2-1];
	for(i=0;i<count1;i++)
	{
		str[i]=str1[i];
	}
	for(i=count1;i<count1+count2;i++)
	{
		str[i]=str2[j];
		j++;
	}
	str[i]='\0';
	puts(str);
}

int my_strcmp(char*str1,char*str2)
{
	int count1= my_strln(str1);
	int count2= my_strln(str2);
	if (count1!=count2)
		return 0;
	int i;
	for(i=0;i<count1;i++)
	{
		if (str1[i]!=str2[i])
			return 0;
	}
	return 1;
}

void my_strlwr(char str[])
{
	int i=0;
	while(str[i]!='\0')
	{
		if (str[i]>='A'&&str[i]<='Z')
			str[i]=((str[i]-'0')+32)+'0';
		i++;
	}
}

void my_strupr(char str[])
{
	int i=0;
	while(str[i]!='\0')
	{
		if (str[i]>='a'&&str[i]<='z')
			str[i]=((str[i]-'0')-32)+'0';
		i++;
	}
}

void my_strcpy(char str1[],char str2[])
{
	int i=0;
	while(str2[i]!='\0')
	{
		str1[i]=str2[i];
		i++;
	}
	str1[i]='\0';
	return ;
}










