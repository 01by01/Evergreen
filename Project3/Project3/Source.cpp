#include <iostream>
using namespace std;

class TicTacToe

{

    public:

	char token;
	int row;
	int column;
	bool tie = false;
	char space[3][3] = { '1','2','3','4','5','6','7','8','9' };
	string n1;
	string n2;
	

	void Board()

	{

		cout << "    |     |    " << endl;
		cout << " " << space[0][0] << "  |  " << space[0][1] << "  |  " << space[0][2] << endl;
		cout << "____|_____|____" << endl;

		cout << " " << space[1][0] << "  |  " << space[1][1] << "  |  " << space[1][2] << endl;
		cout << "____|_____|____" << endl;
		cout << " " << space[2][0] << "  |  " << space[2][1] << "  |  " << space[2][2] << endl;
		cout << "    |     |    " << endl;
	}

	void Token()

	{
		int MyDigit;

		if (token == 'x')
			
		{
			cout << n1 << " please enter" << endl;
			cin >> MyDigit;
		}
		else if (token == '0')
		{
			cout << n2 << " please enter" << endl;
			cin >> MyDigit;
		}

		if (MyDigit == 1)
		{
			row = 0;
			column = 0;

		}
		else if (MyDigit == 2)
		{
			row = 0;
			column = 1;
		}
		else if (MyDigit == 3)
		{
			row = 0;
			column = 2;
		}
		else if (MyDigit == 4)
		{
			row = 1;
			column = 0;
		}
		else if (MyDigit == 5)
		{
			row = 1;
			column = 1;
		}
		else if (MyDigit == 6)
		{
			row = 1;
			column = 2;
		}
		else if (MyDigit == 7)
		{
			row = 2;
			column = 0;
		}
		else if (MyDigit == 8)
		{
			row = 2;
			column = 1;
		}
		else if (MyDigit == 9)
		{
			row = 2;
			column = 2;
		}
		else if (MyDigit < 1 || MyDigit>9)
		{
			cout << "invalid" << endl;
		}

		if (token == 'x' && space[row][column] != 'x' && space[row][column] != '0')
		{
			space[row][column] = 'x';
			token = '0';
		}
		else if (token == '0' && space[row][column] != 'x' && space[row][column] != '0')
		{
			space[row][column] = '0';
			token = 'x';
		}
		else
		{
			cout << "there is no empty space!" << endl;
		}
	}


	bool function()
	{
		for (int i = 0; i < 3; i++)
		{
			if (space[i][0] == space[i][1] && space[i][0] == space[i][2] || space[0][i] == space[1][i] && space[0][i] == space[2][i])
				return false;
		}
		if (space[0][0] == space[1][1] && space[1][1] == space[2][2] || space[0][2] == space[1][1] && space[1][1] == space[2][0])
		{
			return false;
		}
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (space[i][j] != 'x' && space[i][j] != '0')
				{
					return true;
				}
			}
		}
		tie = true;
		return false;
	}
};

	int main()

	{

		TicTacToe obj;
		obj.token = 'x';

		cout << "enter the name of the first player : " << endl;

		cin >> obj.n1;

		cout << "enter the name of the second player : " << endl;

		cin >> obj.n2;

		cout << obj.n1 << " is player 1 so they will go first" << endl;
		cout << obj.n2 << " is player 2 so they will go second" << endl;

		while (obj.function())
		{
			obj.Board();
			obj.Token();
		
		}

		if (obj.token == 'x' && obj.tie == false)
		{
			cout << obj.n2 << "wins!!" << endl;
		}
		else if (obj.token == '0' && obj.tie == false)
		{
			cout <<obj.n1 << "wins!!" << endl;
		}
		else
		{
			cout << "its a draw!" << endl;
		}

		return 0;
	}
