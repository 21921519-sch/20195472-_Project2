#include <iostream>
#include <stdlib.h>
#include <random>
#include <ctime>
#include <array>

using namespace std;

int main()
{
	// p.353, 1�� ����
	/*
	int input;
	cout << "�� ���� ������ �Է��մϱ�? ";
	cin >> input;

	int* p = new int[input];

	for (int i = 0; i < input; i++)
	{
		cout << "������ �Է��Ͻÿ� : ";
		cin >> p[i];
	}

	cout << "�Էµ� ������: ";
	for (int i = 0; i < input; i++)
	{
		cout << p[i] << ", ";
	}
	cout << endl;
	*/

	// p.353, 2�� ����
	int input;
	cout << "�󸶳� ���� �̸��� �Է� �Ͻðڽ��ϱ�? ";
	cin >> input;

	string* names = new string[input];

	for (int i = 0; i < input; i++)
	{
		cout << "�̸� �Է� # "<< i+1 <<": ";
		cin >> names[i];
	}

	cout << endl << "������ �̸� ����Դϴ�." << endl;
	for (int i = 0; i < input; i++)
	{
		cout << "�̸� #" << i+1 << ": ";
		cout << names[i] << endl;
	}
}