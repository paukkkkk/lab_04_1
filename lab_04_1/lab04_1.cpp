
// Lab_04_1.cpp
// Паук Андрій Ігорович
// Лабораторна робота № 4.1
// Цикли.
// Варіант 20

#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
	int k, N, i;
	double S;

	cout << "k= ";
	cin >> k;
	cout << "N= ";
	cin >> N;
	
	S = 0;
	i = k;

	while (i <= N)
	{
		S += (sin(cos(i))) / (1 + pow(cos(i), 2));
		i++;
	}
	cout << S << endl;
	S = 0;
	i = k;

	do {
		S += (sin(cos(i))) / (1 + pow(cos(i), 2));
		i++;


	} while (i <= N);
	cout << S << endl;
	S = 0;
	i = k;


	for (i = k; i <= N; i++)
	{
		S += (sin(cos(i))) / (1 + pow(cos(i), 2));

	}
	cout << S << endl;
	S = 0;
	i = k;


	for (i = N; i >= k; i--)
	{
		S += (sin(cos(i))) / (1 + pow(cos(i), 2));
	}
	cout << S << endl;



	cin.get();
	return 0;
}
