#include <iostream>
using namespace std;

class TTT{
public:
	int board[3][3];
	void move(int val1, int val2, int p)
	{
		if (val1 >= 0 && val2 >= 0 && val1 <= 3 && val2 <= 3)
		{
			board[val1][val2] = p;
		}
		else
		{
			cout << "illegal move" << endl;
		}
	}


	void reset()
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				board[i][j] = 0;
			}
		}
	}

	void print()
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cout << " " << board[i][j] << endl;
			}
			cout << "\t" << endl;
		}
	}

	void over(int p)
	{
		if (board[0][0]==p && board[1][1]==p && board[2][2]==p)
		{
			cout << "The winner is player " << p << endl;
		}
		if (board[0][0] == p && board[0][1] == p && board[0][2] == p)
		{
			cout << "The winner is player " << p << endl;
		}
		if (board[1][0] == p && board[1][1] == p && board[1][2] == p)
		{
			cout << "The winner is player " << p << endl;
		}
		if (board[2][0] == p && board[2][1] == p && board[2][2] == p)
		{
			cout << "The winner is player " << p << endl;
		}
		if (board[0][0] == p && board[1][0] == p && board[2][0] == p)
		{
			cout << "The winner is player " << p << endl;
		}
		if (board[0][1] == p && board[1][1] == p && board[2][1] == p)
		{
			cout << "The winner is player " << p << endl;
		}
		if (board[0][2] == p && board[1][2] == p && board[2][2] == p)
		{
			cout << "The winner is player " << p << endl;
		}
		if (board[2][2] == p && board[1][1] == p && board[2][0] == p)
		{
			cout << "The winner is player " << p << endl;
		}
	}

};

void main()
{
	TTT obj;
	int player, v1, v2;
	for (int i = 0; i < 9; i++)
	{
		cout << "Enter player number: 1 or 2 " << endl;
		cin >> player;
		cout << "Enter column to play: " << endl;
		cin >> v1;
		cout << "Enter row to play: " << endl;
		cin >> v2;
		obj.move(v1, v2, player);
	}
	int choice;
	bool flag=true;
	while (flag == true){
		cout << "Enter 0 to quit\n1. Reset board\n2. Announce winner\n3. Print board" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			obj.reset();
			break;
		case 2:
			obj.over(player);
			break;
		case 3:
			obj.print();
			break;

		default:
			flag = false;
			break;
		}
	}
}//Loop