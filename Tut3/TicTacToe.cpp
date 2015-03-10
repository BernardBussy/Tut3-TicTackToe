#include "TicTacToe.h"
#include <iostream>
#include <cstdlib>

using namespace std;


TicTacToe::TicTacToe()
{
	for (int row = 0; row <= 2; row++)
	{
		for (int col = 0; col <= 2; col++)
		{
			board[row][col] = ' ';
		}
	}
}


TicTacToe::~TicTacToe()
{
}

void TicTacToe::Print()
{
	char littleman = '☺';
	system("cls");
	cout << "|"<< littleman << "|A|B|C|" << endl;
	for (int row = 0; row <= 2; row++)
	{
		cout << "|" << (row + 1);
		for (int col = 0; col <= 2; col++)
		{
			cout << "|" << board[row][col];
		}
		cout << "|" << endl;
	}
}