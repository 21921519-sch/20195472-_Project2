#include <iostream>
#include <stdlib.h>
#include <random>
#include <ctime>
#include <array>

using namespace std;

int main()
{
	/*
	// p.115, 1�� ����
	
	string s1;
	string s2;

	cout << "ù ��° ���ڿ�: ";
	cin >> s1;
	cout << "�� ��° ���ڿ�: ";
	cin >> s2;

	if (s1 == s2)
	{
		cout << "2���� ���ڿ��� �����ϴ�." << endl;
	}
	else
	{
		cout << "2���� ���ڿ��� �ٸ��ϴ�." << endl;
	}
	*/

	/*
	// p.117, 10�� ����
	int a, b, c;
	for (a = 1; a <= 100; a++)
	{
		for (b = 1; b <= 100; b++)
		{
			for (c = 1; c <= 100; c++)
			{
				if ((c*c) == ((a*a) + (b*b)))
				{
					cout << a << " " << b << " " << c << endl;
				}
			}
		}
	}
	*/

	// p.120, 16�� ����

	int cash = 50;
	int target_cash = 250;
	cout << "�ʱ� �ݾ� $" << cash << endl;
	cout << "��ǥ �ݾ� $" << target_cash << endl;

	srand(time(NULL));

	double win_count = 0;
	double bets = 0;

	while (cash < target_cash)
	{
		bets++;
		if((double)rand()/RAND_MAX < 0.5)
		{
			cash++;
			win_count++;
		}
		else
		{
			cash--;
		}
		if (cash < 0)
		{
			cash = 50;
		}
	}

	cout << bets << " ���� " << win_count << "�� �¸�" << endl;
	cout << "�̱� Ȯ��=" << (win_count / bets)*100 << endl;
	cout << "��� ���� Ƚ�� = " << bets << endl;
}