#pragma once
#include <string>
using namespace std;

class TicTacToe
{
private:	
	char board[3][3];
public:
	TicTacToe();
	~TicTacToe();
	void Print();
	void Restart();
	void Move();
	string isWon();

};

