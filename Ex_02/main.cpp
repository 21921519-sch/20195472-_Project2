#include <iostream>
#include <stdlib.h>
#include <random>
#include <ctime>
#include <array>

using namespace std;

inline double calc_volume(double x);
int dice_generate();
string check_password(string& pwd);

int main()
{
	// p.160, 2번 문제
	/*
	double radius;
	cout << "반지름을 입력하시오: ";
	cin >> radius;
	cout << "구의 부피는 " << calc_volume(radius) << endl;
	*/

	// p.162, 9번 문제
	/*
	srand(time(NULL));
	int dice1, dice2;
	dice1 = dice_generate();
	dice2 = dice_generate();
	cout << "사용자의 주사위: " << dice1 << "+" << dice2 << "=" << dice1 + dice2 << endl;

	if ((dice1 + dice2) == 7 || (dice1 + dice2) == 11)
	{
		cout << "사용자가 이겼습니다." << endl;
	}
	else if ((dice1 + dice2) == 2 || (dice1 + dice2) == 3 || (dice1 + dice2) == 12)
	{
		cout << "사용자가 졌습니다." << endl;
	}
	else
	{
		cout << "사용자가 비겼습니다." << endl;
	}
	*/
	// p.164, 13번 문제
	string password;
	cout << "암호를 입력하시오: ";
	cin >> password;

	if (check_password(password) == "safe")
	{
		cout << "안전합니다." << endl;
	}
	else if (check_password(password) == "danger")
	{
		cout << "안전하지 않습니다." << endl;
	}
}

inline double calc_volume(double x=5.0)
{
	return (4.0 / 3.0 * 3.14 * pow(x, 3));
}

int dice_generate()
{
	return (rand() % 6) + 1;
}

string check_password(string& pwd)
{
	for (int i = 0; i < pwd.length(); i++)
	{
		if (isdigit(pwd[i]) && (pwd[i] >= 'A' && pwd[i] <= 'Z') && (pwd[i] >= 'a' && pwd[i] <= 'z'))
		{
			return "safe";
		}
		else
		{
			if (!(pwd[i] >= 'A' && pwd[i] <= 'Z'))
			{
				if (!(pwd[i] >= 'a' && pwd[i] <= 'z'))
				{
					return "danger";
				}
			}
			else if (!(pwd[i] >= 'a' && pwd[i] <= 'z'))
			{
				if (!(pwd[i] >= 'A' && pwd[i] <= 'Z'))
				{
					return "danger";
				}
			}
		}
	}
}