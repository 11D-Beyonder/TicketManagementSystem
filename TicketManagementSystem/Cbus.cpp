#include "Cbus.h"
void Cbus::get_file_in()
{
	vector <Bus>().swap(bus);
	ifstream infile;
	infile.open("班车信息.txt", ios::in || ios::_Nocreate);
	if (!infile)
	{
		cerr << "打开文件错误！";
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
	outfile.open("班车信息.txt", ios::out);
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
		cout << "    班次";
		cout << "    发车时间";
		cout << "  起点站";
		cout << "   终点站";
		cout << "   行车时间";
		cout << "   额定载量";
		cout<<"    已定票人数" << endl;
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
		cout<< "没有班车信息！" << endl << endl;
	}
	for (int j = 1; j <= 120; j++)
		printf("\033[31m#\033[0m");
	string sign;
	cout << endl << "                                                    ";
	cout << "请选择功能："<< endl;
	cout << "                                                    ";
	cout << "【1】结束程序" << endl;
	cout << "                                                    ";
	cout<< "【2】返回桌面" << endl;
	
	while (cin >> sign)
	{
		if (sign == "1" || sign == "2")break;
		else
		{
			cerr << "输入错误！";
			cout << endl << "请重新输入：";
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
		cout<< "请输入录入班车的数量：";
		cin >> n;
		
		for(int i=1;i<=n;i++)
		{
			system("cls");
			for (int j = 1; j <= 120; j++)
				printf("\033[31m#\033[0m");
			cout << "                                                    ";
			cout<< "请输入第" << i << "辆车的信息" << endl;
			cout << "                                                    ";
			cout<< "请输入班次：";
			cin >> t.shift;
			cout << "                                                    ";
			cout<< "请输入发车时间：";
			cin >> t.departure_time;
			cout << "                                                    ";
			cout<< "请输入起点站：";
			cin >> t.departure_station;
			cout << "                                                    ";
			cout<< "请输入终点站：";
			cin >> t.terminus;
			cout << "                                                    ";
			cout<< "请输入行车时间：";
			cin >> t.travel_time;
			cout << "                                                    ";
			cout<< "请输入额定载量：";
			cin >> t.rated_load;
			cout << "                                                    ";
			cout<< "请输入已定票人数：";
			cin >> t.booked_number;
			bus.push_back(t);
		}
		cout << "                                                    ";
		cout << "录入信息完成，是否继续录入？" << endl;
		cout << "                                                    ";
		cout << "【1】是" << endl;
		cout << "                                                    ";
		cout<< "【2】否" << endl;
		while (cin >> sign)
		{
			if (sign =="1" || sign == "2")break;
			else
			{
				cerr << "输入错误！";
				cout << endl << "请重新输入：";
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
	cout<< "请选择功能：" << endl;
	cout << "                                                    ";
	cout << "【1】结束程序" << endl;
	cout << "                                                    ";
	cout<< "【2】返回桌面" << endl;
	while (cin >> sign)
	{
		if (sign == "1" || sign == "2")break;
		else
		{
			cerr << "输入错误！";
			cout << endl << "请重新输入：";
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
	outfile.open("班车信息.txt");
	if (!outfile)
	{
		cerr << "打开文件错误！" << endl;
		exit(0);
	}
	outfile.close();
	for (int j = 1; j <= 120; j++)
		printf("\033[31m#\033[0m");
	cout << endl<<endl;
	cout << "                                                    ";
	cout<< "已清空所有信息!" << endl << endl;
	string sign;
	for (int j = 1; j <= 120; j++)
		printf("\033[31m#\033[0m");
	cout << endl;
	cout << "                                                    ";
	cout << "请选择功能：" << endl;
	cout << "                                                    ";
	cout << "【1】结束程序" << endl;
	cout << "                                                    ";
	cout<< "【2】返回桌面" << endl;
	while (cin >> sign)
	{
		if (sign == "1" || sign == "2")break;
		else
		{
			cerr << "输入错误！";
			cout << endl << "请重新输入：";
			continue;
		}
	}
	if (sign == "1")exit(0);
	else if (sign == "2")system("cls");
}