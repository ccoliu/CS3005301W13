//Name: ¼B®a¦¨
//Date: 2023/5/16
//Last Update: 2023/5/16
//Problem statement: Matrix multiplication

#include <iostream>
using namespace std;

int main()
{
	int rowA, colA, rowB, colB; //declare rowA, colA, rowB, colB
	while (cin >> rowA >> colA >> rowB >> colB) //while loop to input rowA, colA, rowB, colB
	{
		int** matrixA = new int* [rowA]; //declare matrixA
		for (int i = 0; i < rowA; i++) //for loop to input matrixA
		{
			matrixA[i] = new int[colA]; //declare matrixA[i]
			for (int j = 0; j < colA; j++)
			{
				cin >> matrixA[i][j]; //input matrixA[i][j]
			}
		}
		int** matrixB = new int* [rowB]; //declare matrixB
		for (int i = 0; i < rowB; i++) //for loop to input matrixB
		{
			matrixB[i] = new int[colB]; //declare matrixB[i]
			for (int j = 0; j < colB; j++)
			{
				cin >> matrixB[i][j]; //input matrixB[i][j]
			}
		}
		int** matrixC = new int* [rowA]; //declare matrixC
		for (int i = 0; i < rowA; i++) //for loop to initialize matrixC
		{
			matrixC[i] = new int[colB]; //declare matrixC[i]
			for (int j = 0; j < colB; j++) //for loop to initialize matrixC[i][j]
			{
				matrixC[i][j] = 0; //initialize matrixC[i][j]
			}
		}
		if (colA != rowB) //if colA != rowB
		{
			cout << "Matrix multiplication failed." << endl; //output Matrix multiplication failed.
		}
		else //else
		{
			for (int i = 0; i < rowA; i++) //loop row of MatrixA
			{
				for (int j = 0; j < colB; j++) //loop col of MatrixB
				{
					for (int k = 0; k < colA; k++) //loop col of MatrixA
					{
						matrixC[i][j] += matrixA[i][k] * matrixB[k][j]; //matrixC[i][j] is the sum of matrixA[i][k] * matrixB[k][j]
					}
				}
			}
			for (int i = 0; i < rowA; i++) //for loop to output matrixC
			{
				for (int j = 0; j < colB; j++) //for loop to output matrixC[i][j]
				{
					cout << matrixC[i][j]; //output matrixC[i][j]
					if (j != colB - 1)  cout << " "; //if j != colB - 1, output " "
				}
				cout << endl; //output endl
			}
		}
	}
}