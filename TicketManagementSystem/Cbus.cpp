#include "Cbus.h"
void Cbus::get_file_in()
{
	vector <Bus>().swap(bus);
	ifstream infile;
	infile.open("�೵��Ϣ.txt", ios::in || ios::_Nocreate);
	if (!infile)
	{
		cerr << "���ļ�����";
		cout<< endl;
		exit(0);
	}
	Bus t;
	while 
		(
		infile >> t.shift&&
		infile>> t.departure_time &&
		infile>> t.departure_station &&
		infile>> t.terminus&&
		infile >> t.travel_time &&
		infile>> t.rated_load &&
		infile>> t.booked_number
		)
	{
		bus.push_back(t);
	}	
	infile.close();
}
void Cbus::get_file_out()
{
	ofstream outfile;
	outfile.open("�೵��Ϣ.txt", ios::out);
	if (!outfile)
	{
		cerr << "open error!" << endl;
		exit(0);
	}	
	vector<Bus>::iterator it;
	for ( it = bus.begin(); it != bus.end(); it++)
	{
		outfile << (*it).shift << ' ';
		outfile << (*it).departure_time << ' ';
		outfile << (*it).departure_station << ' ';
		outfile << (*it).terminus << ' ';
		outfile << (*it).travel_time << ' ';
		outfile << (*it).rated_load << ' ';
		outfile<< (*it).booked_number << endl;
	}
	outfile.close();
}
void Cbus::print_all_information()
{
	get_file_in();
	for (int j = 1; j <= 120; j++)
		printf("\033[31m#\033[0m");
	if (!bus.empty())
	{
		cout << endl << endl<<"                   ";
		cout << "    ���";
		cout << "    ����ʱ��";
		cout << "  ���վ";
		cout << "   �յ�վ";
		cout << "   �г�ʱ��";
		cout << "   �����";
		cout<<"    �Ѷ�Ʊ����" << endl;
		vector<Bus>::iterator it;
		for ( it = bus.begin(); it != bus.end(); it++)
		{
			cout << "     "<< "                   ";
			cout << (*it).shift << "        ";
			cout << (*it).departure_time << "    ";
			cout << (*it).departure_station << "     ";
			cout << (*it).terminus << "       ";
			cout << (*it).travel_time << "         ";
			cout << (*it).rated_load << "          ";
			cout<< (*it).booked_number << endl;
		}
		cout << endl << endl;
	}
	else
	{
		cout << endl<<endl;
		cout << "                                                    ";
		cout<< "û�а೵��Ϣ��" << endl << endl;
	}
	for (int j = 1; j <= 120; j++)
		printf("\033[31m#\033[0m");
	string sign;
	cout << endl << "                                                    ";
	cout << "��ѡ���ܣ�"<< endl;
	cout << "                                                    ";
	cout << "��1����������" << endl;
	cout << "                                                    ";
	cout<< "��2����������" << endl;
	
	while (cin >> sign)
	{
		if (sign == "1" || sign == "2")break;
		else
		{
			cerr << "�������";
			cout << endl << "���������룺";
			continue;
		}
	}
	if (sign == "1")exit(0);
	else if (sign =="2")system("cls");
}
void Cbus::input_information()
{
	get_file_in();
	Bus t;
	string sign ;
	while (1)
	{
		for (int j = 1; j <= 120; j++)
			printf("\033[31m#\033[0m");
		int n;
		cout << "                                                    ";
		cout<< "������¼��೵��������";
		cin >> n;
		
		for(int i=1;i<=n;i++)
		{
			system("cls");
			for (int j = 1; j <= 120; j++)
				printf("\033[31m#\033[0m");
			cout << "                                                    ";
			cout<< "�������" << i << "��������Ϣ" << endl;
			cout << "                                                    ";
			cout<< "�������Σ�";
			cin >> t.shift;
			cout << "                                                    ";
			cout<< "�����뷢��ʱ�䣺";
			cin >> t.departure_time;
			cout << "                                                    ";
			cout<< "���������վ��";
			cin >> t.departure_station;
			cout << "                                                    ";
			cout<< "�������յ�վ��";
			cin >> t.terminus;
			cout << "                                                    ";
			cout<< "�������г�ʱ�䣺";
			cin >> t.travel_time;
			cout << "                                                    ";
			cout<< "������������";
			cin >> t.rated_load;
			cout << "                                                    ";
			cout<< "�������Ѷ�Ʊ������";
			cin >> t.booked_number;
			bus.push_back(t);
		}
		cout << "                                                    ";
		cout << "¼����Ϣ��ɣ��Ƿ����¼�룿" << endl;
		cout << "                                                    ";
		cout << "��1����" << endl;
		cout << "                                                    ";
		cout<< "��2����" << endl;
		while (cin >> sign)
		{
			if (sign =="1" || sign == "2")break;
			else
			{
				cerr << "�������";
				cout << endl << "���������룺";
				continue;
			}
		}
		if (sign == "1")
		{
			system("cls");
			continue;
		}
		else if (sign == "2")break;
	}
	get_file_out();
	for (int j = 1; j <= 120; j++)
		printf("\033[31m#\033[0m");
	cout << "                                                    ";
	cout<< "��ѡ���ܣ�" << endl;
	cout << "                                                    ";
	cout << "��1����������" << endl;
	cout << "                                                    ";
	cout<< "��2����������" << endl;
	while (cin >> sign)
	{
		if (sign == "1" || sign == "2")break;
		else
		{
			cerr << "�������";
			cout << endl << "���������룺";
			continue;
		}
	}
	if (sign == "1")
	{
		system("cls");
		exit(0);
	}
	else if (sign == "2")system("cls");
}
void Cbus::clear_all_information()
{
	ofstream outfile;
	outfile.open("�೵��Ϣ.txt");
	if (!outfile)
	{
		cerr << "���ļ�����" << endl;
		exit(0);
	}
	outfile.close();
	for (int j = 1; j <= 120; j++)
		printf("\033[31m#\033[0m");
	cout << endl<<endl;
	cout << "                                                    ";
	cout<< "�����������Ϣ!" << endl << endl;
	string sign;
	for (int j = 1; j <= 120; j++)
		printf("\033[31m#\033[0m");
	cout << endl;
	cout << "                                                    ";
	cout << "��ѡ���ܣ�" << endl;
	cout << "                                                    ";
	cout << "��1����������" << endl;
	cout << "                                                    ";
	cout<< "��2����������" << endl;
	while (cin >> sign)
	{
		if (sign == "1" || sign == "2")break;
		else
		{
			cerr << "�������";
			cout << endl << "���������룺";
			continue;
		}
	}
	if (sign == "1")exit(0);
	else if (sign == "2")system("cls");
}