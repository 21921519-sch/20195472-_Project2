#include <iostream>
#include <stdlib.h>
#include <random>
#include <ctime>
#include <array>

using namespace std;

int main()
{
	// p.353, 1번 문제
	/*
	int input;
	cout << "몇 개의 정수를 입력합니까? ";
	cin >> input;

	int* p = new int[input];

	for (int i = 0; i < input; i++)
	{
		cout << "정수를 입력하시오 : ";
		cin >> p[i];
	}

	cout << "입력된 정수는: ";
	for (int i = 0; i < input; i++)
	{
		cout << p[i] << ", ";
	}
	cout << endl;
	*/

	// p.353, 2번 문제
	int input;
	cout << "얼마나 많은 이름을 입력 하시겠습니까? ";
	cin >> input;

	string* names = new string[input];

	for (int i = 0; i < input; i++)
	{
		cout << "이름 입력 # "<< i+1 <<": ";
		cin >> names[i];
	}

	cout << endl << "다음은 이름 목록입니다." << endl;
	for (int i = 0; i < input; i++)
	{
		cout << "이름 #" << i+1 << ": ";
		cout << names[i] << endl;
	}
}