#include <iostream>
using namespace std;
int main()
{
	int N, M;
	cin >> N >> M;

	int Basket[100];
	for (int a = 0; a < 100; a++)
	{
		Basket[a] = 0;
	}

	for (int a = 0; a < M; a++)
	{
		int i, j, k;
		cin >> i >> j >> k;
		for (i; i <= j; i++)
		{
			Basket[i] = k;
		}
	}

	for (int a = 1; a <= N; a++)
	{
		cout << Basket[a] << " ";
	}
}