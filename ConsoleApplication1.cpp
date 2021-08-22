#define _CRT_SECURE_NO_WARNINGS
#define CHAR
#include <iostream>
#include<stdio.h>
#include"C_Filework.h"


using namespace std;

int main()
{
    setlocale(0, "");
    system("chcp1251");
    system("cls");
    const char filename[] = "text.txt";

    Write(filename);
    cout << endl;
    Add(filename);
    cout << endl;
    Read(filename);

    return 0;
}
/*Задание
Напишите отдельные функции для работы сфайлами в Файле заголовка 
под названием C_Filework.h. Библиотека должна содержать такие функции как:
- Запись в файл (строки или символа)
- Чтение из файла (строки или символа)
- До запись в файл (строки или символа)
Функции должны быть оформлены как шаблонныес соответствующими проверками, 
а так же обратите внимание на работу с препроцессором -расширения языка.*/