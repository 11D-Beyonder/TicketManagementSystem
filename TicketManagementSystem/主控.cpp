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
			cout << endl << "����������!"<<endl;		
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
		"                                                    ��Ʊ����ϵͳ             \n"
		"\n"
		"\n"
		"\n"
		"                                              ��ѡ����\n"
		"                                            ��1���鿴���а೵��Ϣ\n"
		"                                            ��2����Ӱ೵��Ϣ\n"
		"                                            ��3��������а೵��Ϣ\n"
		"                                            ��4���˳�ϵͳ\n"
		"\n"
		"\n"
	);
	for (int j = 1; j <= 120; j++)
		printf("\033[31m#\033[0m");
	
}