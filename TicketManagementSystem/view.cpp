#include "view.h"
#include<iostream>
#include<cstdio>
using namespace std;
void view::goto_xy(int x, int y)
{	       
	HANDLE HOut = GetStdHandle(STD_OUTPUT_HANDLE);//��ȡ��׼����ľ��
	COORD pos = { x, y };//���λ��x,y       
	SetConsoleCursorPosition(HOut, pos);//���ù��λ��
}
void view::edge()
{
	int x1 = 0, y1 = 0, i, j;
	for (i = 0; i < 30; i++)//���д�ӡ��Ϸ�߿�
	{
		y1 = i;
		goto_xy(x1, y1);//������ƶ���i����ʼ��
		if (i == 0 || i == 29)//�ڵ�1,30�д�ӡ���±߿�
		{
			for (j = 1; j <= 60; j++)
				printf("\033[36m��\033[0m");
		}
		else//������ֻ��ӡ���ұ߿�
		{
			printf("\033[36m��\033[0m");
			x1 = 118;
			goto_xy(x1, y1);
			printf("\033[36m��\033[0m");
			x1 = 0;
		}
	}
}

void view::oninit()
{	
	edge();
	goto_xy(44, 3);
	cout << "      ��ӭʹ�ó�Ʊ����ϵͳ";
	goto_xy(48,5);
	cout << "      ϵͳ��ʼ����";
	goto_xy(38, 15);
	Sleep(1000);
	cout << "���ڽ���ϵͳ";
	Sleep(800);
	goto_xy(38, 18);
	Sleep(700);
	for (int i = 0; i < 20; i++)
	{
		Sleep(500);
		cout << "\033[1;40;32m>\033[0m";
	}
	goto_xy(38, 20);
	cout <<  "��������ϵͳ";
	Sleep(2000);
	for (int i = 1; i <= 10; i++)
	{
		if (i == 2 || i == 3 || i == 4 || i == 5 || i == 6)Sleep(350);
		else Sleep(200);
		cout << '.';
	}
	system("cls");
}
