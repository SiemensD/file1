#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

void WriteChar(const char filename[])
{
	
	FILE* fp;
	char line[256];
	printf("Enter line:  ");
	gets_s(line,256);
	
	fp = fopen(filename, "w");
		fprintf(fp,"%s ",line);
		fclose(fp);	
}
void ReadChar(const char filename[])
{
	FILE* fp;
	char line[256];

	if ((fp = fopen(filename, "r")) == NULL)
	{
		perror("Error: ");
	}
	fp = fopen(filename, "r");
	
	while ((fgets (line,256,fp))!=NULL)
	{
		printf("%s", line);
	}
	fclose(fp);
}
void AddChar(const char filename[])
{	
	FILE* fp;
	char line[256];
	printf("Enter line:  ");
	gets_s(line, 256);

	fp = fopen(filename, "a");
		fprintf(fp, "%s", line);
		fclose(fp);		
}

void WriteInt(const char filename[])
{
		
	FILE* fp;       //переменна€ файлового потока
	int value;   //наша переменна€ с числом
	printf("Enter number:  ");
	cin >> value;
	fp = fopen(filename, "w");//открываем файл на перезапись 
		fprintf(fp,"%i ",value); //вывести значение как массив с единственной €чейкой
	
	fclose(fp);//закрыть в любом случае (если fp==NULL, ошибкой всЄ равно не будет, а читаетс€ удобнее, чем все эти ветки if'ов
	
}
void ReadInt(const char filename[])
{
	FILE* fp;
	char line[256];

	if ((fp = fopen(filename, "r")) == NULL)
	{
		perror("Error: ");
	}
	fp = fopen("text.txt", "r");

	while ((fgets(line, 256, fp)) != NULL)
	{
		printf("%s", line);
	}
	fclose(fp);
}
void AddInt(const char filename[])
{
	FILE* fp;
	int value;
	printf("Enter number:  ");
	cin>>value;

	fp = fopen(filename, "a");
	fprintf(fp, "%i", value);
	fclose(fp);
}

void WriteDig(const char filename[])
{

	FILE* fp;       //переменна€ файлового потока
	float value;   //наша переменна€ с числом
	printf("Enter number:  ");
	cin >> value;
	fp = fopen(filename, "w");//открываем файл на перезапись 
	fprintf(fp, "%f  ", value); //вывести значение как массив с единственной €чейкой

	fclose(fp);//закрыть в любом случае (если fp==NULL, ошибкой всЄ равно не будет, а читаетс€ удобнее, чем все эти ветки if'ов

}
void ReadDig(const char filename[])
{
	FILE* fp;
	char line[256];

	if ((fp = fopen(filename, "r")) == NULL)
	{
		perror("Error: ");
	}
	fp = fopen("text.txt", "r");

	while ((fgets(line, 256, fp)) != NULL)
	{
		printf("%s", line);
	}
	fclose(fp);
}
void AddDig(const char filename[])
{

	FILE* fp;
	float value;
	printf("Enter number:  ");
	cin >> value;

	fp = fopen(filename, "a");
	fprintf(fp, "%f", value);
	fclose(fp);
}

#ifdef CHAR
#define Write WriteChar
#define Read ReadChar
#define Add AddChar
#endif // CHAR

#ifdef INT
#define Write WriteInt
#define Read ReadInt
#define Add AddInt
#endif // INT

#ifdef FLOAT
#define Write WriteDig
#define Read ReadDig
#define Add AddDig
#endif // FLOAT


