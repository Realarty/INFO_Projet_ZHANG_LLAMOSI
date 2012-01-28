#include <iostream>
#include <time.h>
#include "Cell.h"

#define N 10

void showCell(char c, int nu, Cell& cell)
{
	std::cout << c << "[" << nu << "] = " << cell.Value() << std::endl;
}

int main()
{
	//std::cout << "relative directory test" << std::endl;
	const int n = N;

	double a; 
	double b;
	double start, end;

	Cell A[n], B[n], S[n-1], P;

	std::cout << "please enter a number for A[0]" << std::endl;
	std::cin >> a;
	std::cout << "please enter a number for B[0]" << std::endl;
	std::cin >> b;

	A[0] = a;
	B[0] = b;

	for (int i(0); i < n-1 ; i++)
	{
		S[i] = A[i] + B[i];

		showCell('A', i, A[i]);
		showCell('B', i, B[i]);
		showCell('S', i, S[i]);
		std::cout << std::endl;

		A[i+1] = S[i];
		B[i+1] = S[i];
	}

	P = A[n-1] * B[n-1];
	showCell('A', n-1, A[n-1]);
	showCell('B', n-1, B[n-1]);
	showCell('P', n-1, P);

	

	//Partie 2
	int num;

	for (int j(11); j < 25; j++)
	{
		num = j;
		Cell * PA  = new Cell[num];
		Cell * PB  = new Cell[num];
		Cell * PS  = new Cell[num-1];

		PA[0] = 0;
		PB[0] = 0;
		for (int i(0); i < num-1 ; i++)
		{
			PS[i] = PA[i] + PB[i];
			PA[i+1] = PS[i];
			PB[i+1] = PS[i];
		}

		P = PA[num-1] * PB[num-1];

		showCell('P',num-1, P);
		start = clock();
		P.Value();
		end = clock();
		std::cout << "le temps passe pour 'P[" << num-1 << "].Value' : " << end - start << std::endl;

		delete[] PA;
		delete[] PB;
		delete[] PS;

	}
	//le temps augmente exponentiellement rapid

	system("PAUSE");
	return 0;
}