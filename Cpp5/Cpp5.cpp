#include "pch.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream fin("input.txt");
	int N, k;
	int A[1000];
	if (!fin.good())
	{
		cout << "Where input.txt ?" << endl;
	}
	else
	{
		k = 0;
		while (fin >> N)
		{
			A[k++] = N;
		}

		cout << "Array:" << endl;
		for (int i = 0; i < k; i++)
		{
			cout << A[i] << " ";
		}
		int tmp = A[0] - A[k - 1];
		cout << "\nThe difference of the first and last component of the file = " << tmp << endl;

	}
	fin.close();
	cin.get();
	return 0;
}