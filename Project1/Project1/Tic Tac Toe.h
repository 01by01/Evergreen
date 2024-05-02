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

		cout << "enter a number 1 - 9, depending where you want your token to go!" << endl;

		cin >> MyDigit;



		if (MyDigit < 1 || MyDigit > 9)

		{
			cout << "Invalid number! try again" << endl;
			return;

		}


		int row = (MyDigit - 1) / 3;
		int column = (MyDigit - 1) % 3;


		if (space[row][column] == ' ')

		{
			if (token == 'x')

			{
				space[row][column] = 'x';

				token = 'o';
			}
			else if (token == 'o')

			{
				space[row][column] = 'o';

				token = 'x';
			}

		}

		else

		{
			cout << "Uh oh! Looks like this space is taken. Try again!" << endl;
			return;

		}
	}


		bool function()

		{
			for (int i = 0; i < 3; i++)
			{
				if (space[i][0] == space[i][1] && space[i][0] == space[i][2] && space[i][0] != ' ')

				return false;

			if (space[0][i] == space[1][i] && space[0][i] == space[2][i] && space[0][i] != ' ')

				return false;

			}

			if ((space[0][0] == space[1][1] && space[0][0] == space[2][2] && space[0][0] != ' ') || (space[0][2] == space[1][1] && space[0][2] == space[2][0] && space[0][2] != ' '))

			{
				return false;
			}

			for (int i = 0; i < 3; i++)

			{
				for (int j = 0; j < 3; j++)

				{
					if (space[i][j] == ' ')

					{
						return true;

					}
					

				}

			}
			/*tie = true;
			return false;*/
		}
	};