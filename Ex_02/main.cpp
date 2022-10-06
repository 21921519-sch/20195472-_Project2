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
	// p.160, 2�� ����
	/*
	double radius;
	cout << "�������� �Է��Ͻÿ�: ";
	cin >> radius;
	cout << "���� ���Ǵ� " << calc_volume(radius) << endl;
	*/

	// p.162, 9�� ����
	/*
	srand(time(NULL));
	int dice1, dice2;
	dice1 = dice_generate();
	dice2 = dice_generate();
	cout << "������� �ֻ���: " << dice1 << "+" << dice2 << "=" << dice1 + dice2 << endl;

	if ((dice1 + dice2) == 7 || (dice1 + dice2) == 11)
	{
		cout << "����ڰ� �̰���ϴ�." << endl;
	}
	else if ((dice1 + dice2) == 2 || (dice1 + dice2) == 3 || (dice1 + dice2) == 12)
	{
		cout << "����ڰ� �����ϴ�." << endl;
	}
	else
	{
		cout << "����ڰ� �����ϴ�." << endl;
	}
	*/
	// p.164, 13�� ����
	string password;
	cout << "��ȣ�� �Է��Ͻÿ�: ";
	cin >> password;

	if (check_password(password) == "safe")
	{
		cout << "�����մϴ�." << endl;
	}
	else if (check_password(password) == "danger")
	{
		cout << "�������� �ʽ��ϴ�." << endl;
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