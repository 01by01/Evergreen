#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	string num;
	cin >> num;
	int length = num.length();
	bool stringdigit(const string & num);
	int x = num[length - 1];
	

	{
		for (auto c : num)
		{

			if (!isdigit(c))
			{

				cout << "sorry! This isnt a number try again?" << endl;

				return false;

			}
		}


			if (x % 2 == 0)

			{
			cout << "its even" << endl;
			}

			else if (x % 2 == 1)

			{
				cout << "its odd" << endl;
			}
		
	}
}