#include "view.h"
#include<iostream>
#include<cstdio>
using namespace std;
void view::goto_xy(int x, int y)
{	       
	HANDLE HOut = GetStdHandle(STD_OUTPUT_HANDLE);//获取标准输出的句柄
	COORD pos = { x, y };//光标位置x,y       
	SetConsoleCursorPosition(HOut, pos);//设置光标位置
}
void view::edge()
{
	int x1 = 0, y1 = 0, i, j;
	for (i = 0; i < 30; i++)//逐行打印游戏边框
	{
		y1 = i;
		goto_xy(x1, y1);//将光标移动到i行起始处
		if (i == 0 || i == 29)//在第1,30行打印上下边框
		{
			for (j = 1; j <= 60; j++)
				printf("\033[36m■\033[0m");
		}
		else//其他行只打印左右边框
		{
			printf("\033[36m■\033[0m");
			x1 = 118;
			goto_xy(x1, y1);
			printf("\033[36m■\033[0m");
			x1 = 0;
		}
	}
}

void view::oninit()
{	
	edge();
	goto_xy(44, 3);
	cout << "      欢迎使用车票管理系统";
	goto_xy(48,5);
	cout << "      系统初始化中";
	goto_xy(38, 15);
	Sleep(1000);
	cout << "正在进入系统";
	Sleep(800);
	goto_xy(38, 18);
	Sleep(700);
	for (int i = 0; i < 20; i++)
	{
		Sleep(500);
		cout << "\033[1;40;32m>\033[0m";
	}
	goto_xy(38, 20);
	cout <<  "即将进入系统";
	Sleep(2000);
	for (int i = 1; i <= 10; i++)
	{
		if (i == 2 || i == 3 || i == 4 || i == 5 || i == 6)Sleep(350);
		else Sleep(200);
		cout << '.';
	}
	system("cls");
}
