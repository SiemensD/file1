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
/*�������
�������� ��������� ������� ��� ������ �������� � ����� ��������� 
��� ��������� C_Filework.h. ���������� ������ ��������� ����� ������� ���:
- ������ � ���� (������ ��� �������)
- ������ �� ����� (������ ��� �������)
- �� ������ � ���� (������ ��� �������)
������� ������ ���� ��������� ��� ���������� ���������������� ����������, 
� ��� �� �������� �������� �� ������ � �������������� -���������� �����.*/