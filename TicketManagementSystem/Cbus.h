#pragma once
#include<vector>
#include<iostream>
#include<string>
#include<cstdlib>
#include<cstdio>
#include<fstream>
using namespace std;
struct Bus
{
	string shift;
	string departure_time;				
	string departure_station;
	string terminus;
	string travel_time;
	string rated_load;
	string booked_number;
};
class Cbus
{
public:
	void print_all_information();
	void input_information();
	void clear_all_information();
private:
	vector<Bus>bus;
	void get_file_out();
	void get_file_in();
};

