// ConsoleApplication5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <math.h>
using namespace std;

class code
{
public:
	code()
	{
		var.reserve(1);
		var.push_back(1);
	};

	~code() {};

	void clear()
	{
		var.clear();
	}

	void check()
	{
		int t;
		for (int i = 0; i < var.size(); i++)
		{
			t = var.at(i) / 1000000;
			if (var.at(i) > 1000000) {
				if (i + 1 == var.size())didinimas(t);
				else var.at(i + 1) = var.at(i + 1) + t;
				var.at(i) = var.at(i) % 1000000;
			}
		}
	}

	void check2()
	{
		int t;
		while (var.at(5) > 339)
		{
			for (int i = 0; i < var.size(); i++)
			{
				t = var.at(i) % 10;
				var.at(i) = var.at(i) / 10;
				if (i != 0) var.at(i - 1) = var.at(i - 1) + t * 100000;
			}
		}
	}

	void x(int a)
	{
		int t;
		for (int i = 0; i < var.size(); i++)
		{
			var.at(i) = var.at(i) * a;

		}
		check();
	}

	void hashinimas()
	{
		int  t, i = 2;
		while (var.size() < 9)
		{
			x(i);
			i++;
		};
		for (int y = 0; y < 5; y++)
		{
			x(i);
			i++;
		};
		for (int i = 0; i < var.size(); i++)
		{
			t = var.at(i) % 1000;
			var.at(i) = var.at(i) / 1000;
			if (i != 0) var.at(i - 1) = var.at(i - 1) + (t * 1000);
		};
		var.erase(var.begin());
	}

	string GetHex()
	{
		check2();
		std::string hex = "";
		int  r;
		char ati[] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
		while (var.at(0) > 0)
		{
			r = var.at(0) % 16;
			hex = ati[r] + hex;
			for (int i = 0; i < var.size(); i++)
			{
				if (i != 0) var.at(i - 1) = var.at(i - 1) + ((var.at(i) % 16) * 1000000);
				var.at(i) = var.at(i) / 16;
			}
		}
		return hex;
	};

private:
	std::vector<int> var;

	inline void didinimas(int a)
	{
		var.push_back(a);
	};
};
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
vector<string> GetString()
{
	vector<string> eilute;
	eilute = read();
	eilute.erase(eilute.begin());
	return eilute;

}
vector<string> Hash(vector<string> eilutes)
{
	vector<int> skaiciai;
	vector<string> hex;
	int a;
	for (int i = 0; i < eilutes.size(); i++)
	{
		code l;
		for (int o = 0; o < eilutes.at(i).size(); o++)
		{
			a = int(eilutes.at(i).at(o));
			l.x(a + o);
		}
		l.hashinimas();
		hex.push_back(l.GetHex());
		l.clear();
	}
	return hex;
}
int main()
{
	vector<string> eilute = GetString();
	vector<string> hex = Hash(eilute);
	print(hex);
 
}


