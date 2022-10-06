#include <iostream>
#include <stdlib.h>
#include <random>
#include <ctime>
#include <array>

using namespace std;

int main()
{
	/*
	// p.115, 1번 문제
	
	string s1;
	string s2;

	cout << "첫 번째 문자열: ";
	cin >> s1;
	cout << "두 번째 문자열: ";
	cin >> s2;

	if (s1 == s2)
	{
		cout << "2개의 문자열은 같습니다." << endl;
	}
	else
	{
		cout << "2개의 문자열은 다릅니다." << endl;
	}
	*/

	/*
	// p.117, 10번 문제
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

	// p.120, 16번 문제

	int cash = 50;
	int target_cash = 250;
	cout << "초기 금액 $" << cash << endl;
	cout << "목표 금액 $" << target_cash << endl;

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

	cout << bets << " 중의 " << win_count << "번 승리" << endl;
	cout << "이긴 확률=" << (win_count / bets)*100 << endl;
	cout << "평균 배팅 횟수 = " << bets << endl;
}