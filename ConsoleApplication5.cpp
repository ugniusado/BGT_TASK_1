// ConsoleApplication5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <math.h>
#include <chrono>
using namespace std;
vector<string> read()
{
	string pav;
	vector<string> line;
	cout << "Text file name : ";
	cin >> pav;
	pav = pav + ".txt";
	ifstream fin(pav);
	if (fin)
	{
		while (!fin.eof())
		{
			getline(fin, pav);
			line.push_back(pav);
		}
		fin.close();
	}
	else
	{
		cout << "error" << endl;
		line = read();
	}
	return line;
}
void print(vector<string> hex)
{
	ofstream fout("Hash.txt");
	for (int i = 0; i < hex.size(); i++)
	{
		fout << hex.at(i) << endl;
	}
}
int main()
{
    cout << "Hello World!\n";
}


