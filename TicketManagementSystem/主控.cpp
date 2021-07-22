#include"Cbus.h"
#include"view.h"
void print_desktop();
int main()
{
	view p;
	p.oninit();
	print_desktop();	
	Cbus f;
	string choice;
	while (cin >> choice)
	{			
		if (choice =="1")
		{
			system("cls");
			f.print_all_information();
			print_desktop();
		}
		else if (choice == "2")
		{
			system("cls");
			f.input_information();
			print_desktop();
		}
		else if (choice == "3")
		{
			system("cls");
			f.clear_all_information();
			print_desktop();
		}
		else if (choice == "4")
		{
			system("cls");
			exit(0);
		}
		else  
		{			
			cerr << "input error!";
			cout << endl << "请重新输入!"<<endl;		
		}		
	}
	return 0;
}
void print_desktop()
{	
	for (int j = 1; j <=120; j++)
		printf("\033[31m#\033[0m");
	printf
	(
		"\n"
		"\n"
		"\n"
		"                                                    车票管理系统             \n"
		"\n"
		"\n"
		"\n"
		"                                              请选择功能\n"
		"                                            【1】查看所有班车信息\n"
		"                                            【2】添加班车信息\n"
		"                                            【3】清空所有班车信息\n"
		"                                            【4】退出系统\n"
		"\n"
		"\n"
	);
	for (int j = 1; j <= 120; j++)
		printf("\033[31m#\033[0m");
	
}