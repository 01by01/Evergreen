#include <iostream>
#include <string>
#include "Tic Tac Toe.h"
#include <unordered_map>
#include <algorithm>
#include "CaseInsensitiveDictionary.h"



using namespace std;

void askmeaquestion(string name);

void askmeadifferentquestion(string name);

void EvenorOdd(string name);

void Reverse(string name);

void tictactoe(string name);

void WantToPlayaGame(string name);

void LetsTalk(string name);

void Again(string name);

void SecondAgain(string name);

void MainMenu(string name);

void Greeting();

//include .h file also finish implementing dictionary set up ask chat!! :)


string toLower(const std::string& str)

{
	string lowerStr = str;

	transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);
	return lowerStr;

}

struct CaseInsensitiveHash

{
	size_t operator()(const std::string& s) const

	{
		return std::hash<std::string>()(toLower(s));

	}
};

struct CaseInsensitiveEquals

{
	bool operator()(const std::string& s1, const std::string& s2) const
	{
		return toLower(s1) == toLower(s2);
	}
};


void Greeting()

{
	string name;
	//string hello;

	
	string hello = toLower(hello);

	int length = hello.length();


	cout << "Say hello" << endl;

	getline(cin, hello);



	if (hello == "Hello" || hello == "hello" || hello == "Hi" || hello == "hi" || hello == "Hey" || hello == "hey")

	{
		cout << "Hey! my name is Hal what is your name?" << endl;


		getline(cin >> ws, name);


		cout << name << " what a cool name! I look forward getting to know you! What would you like to do to get to know eachother better? Game or Talk? Or if youre free i love questions!" << endl;


		MainMenu(name);

	}

	else if (hello == "Hello Hal" || hello == "hello hal" || hello == "hello Hal" || hello == "Hello hal" || hello == "Hey Hal" || hello == "hey hal" || hello == "Hey hal" || hello == "hey Hal" || hello == "Hi Hal" || hello == "hi hal" || hello == "Hi hal" || hello == "hi Hal")

	{

		cout << "Hi friend! Could you remind me your name? My memory isnt very good" << endl;

		cin >> name;


		cout << "oh thats right! " << name << " I will probably forget again My long term memory isnt very good, but I dont mind - say in the mean time do you want to talk, ask questions or game?" << endl;


		MainMenu(name);

	}

	else if (length <= 1)

	{
		cout << "Oh are you shy? well my name is hal and I love meeting new people! If youre comfortable could you tell me your name?" << endl;


		cin >> name;


		if (name == "no" || name == "No" || name == "NO" || name == "no thank you" || name == "No thank you" || name == "no thanks")


		{

			cout << "thats okay! I can call you player! Do you want to play a game or ask some questions? if you dont like either of those we can talk about something else!" << endl;


			MainMenu(name);

		}

		else

		{

			cout << "that's an amazing name!..." << name << "I like it! do you want to ask me some questions? or would you rather play a game? or is there something else you would like to talk about?" << endl;

			MainMenu(name);
		}

	}
}

	void MainMenu(string name)

	{
		string choice;


		cout << "just say question, game or talk!" << endl;


		cin >> choice;


		if (choice == "question")


		{

			cout << "I love the question game! take a look at let me know what you would like to ask:" << endl;


			askmeaquestion(name);


		}

		else if (choice == "game")

		{
			cout << "here are the choices of games we can play!" << endl;


			WantToPlayaGame(name);

		}

		else if (choice == "talk")

		{
			cout << "What would you like to talk about?" << endl;


			LetsTalk(name);
		}

		else

		{
			cout << "That doesnt seem to be an option- want to try again?" << endl;


			MainMenu(name);
		}
	}
	

void askmeaquestion(string name)

{
	
	cout << "favorite food?" << endl;
	cout << "favorite hobby?" << endl; 
	cout << "favorite subject?" << endl;
	cout << " or you can say: 'new question' if there is anything else you would like to ask" << endl;

	string mystr;

	getline(cin >> ws, mystr);


	if (mystr == "favorite food?" || mystr == "Favorite Food?" || mystr == "Favorite food?")

	{
		cout << "I really love cheese burgers with extra pickles and it's even better paired with a banana peanutbutter bacon milkshake!" << endl;
	}

	else if (mystr == "favorite hobby?" || mystr == "Favorite Hobby?" || mystr == "Favorite hobby?")

	{
		cout << "If I had to pick from my hobbies.... I think video gaming or crocheting.. but its so hard to choose!" << endl;

	}
	else if (mystr == "favorite subject?" || mystr == "Favorite Subject?" || mystr == "Favorite subject?")

	{
		cout << "I am out of school now but when I was in school I thought chemistry was the most interesting!" << endl;

	}

	else if (mystr == "new question" || mystr == "New Question" || mystr == "New question")

	{

		cout << "here is some other things you can ask me!" << endl;

			askmeadifferentquestion(name);
	}

	else

	{
		cout << "I'm so sorry I am still learning 'human' could you re- ask?" << endl;

			askmeaquestion(name);
	}
}

void askmeadifferentquestion(string name)

{


	cout << "What do you look like?" << endl;
	cout << "are you a boy or a girl?" << endl;
	cout << "do you have any friends?" << endl;

	string mystr;
	getline(cin >> ws, mystr);
	

	if (mystr == "what do you look like?" || mystr == "What do you look like?" || mystr == "What Do You Look Like?")

	{

		cout << "I am kinda an... ambiguous blob right now. But I like to think I have long blue hair up in a scraggily pony tail with sharp blue eyes.... a program can dream cant it?" << endl;

	}

	else if (mystr == "are you a boy?" || mystr == "are you a girl?" || mystr == "are you a boy or a girl?" || mystr == "Are you a boy?" || mystr == "Are you a girl?" || mystr == "Are you a boy or a girl?")

	{

		cout << "Well I kind of dont have a body right now and I know this is a tricky topic for some humans... I think I am neither physically but I think I identify as a girl!" << endl;

	}

	else if (mystr == "do you have any friends?" || mystr == "Do you have any friends?")


	{
		cout << "As I currently dont even have a body.. you're my only friend!" << endl;

	}
	
	else

	{
		cout << "I'm so sorry I am still learning 'human' could you re- ask?" << endl;

		askmeadifferentquestion(name);
	}

}

void WantToPlayaGame(string name)

{
	cout << "Reverse" << endl;
	cout << "Even or Odd" << endl;
	cout << "Tic Tac Toe" << endl;

	string answer;
	getline(cin >> ws, answer);


	if (answer == "Reverse" || answer == "reverse")
	{
		cout << "I am really good at this game! Say a word and I can say it back to you!" << endl;

		Reverse(name);

	}

	else if (answer == "Even or Odd" || answer == "even or odd")

	{

		EvenorOdd(name);

	}

	else if (answer == "Tic Tac Toe" || answer == "tic tac toe")

	{
		tictactoe(name);

	}

}
	
void tictactoe(string name)

{
	TicTacToe game;


	game.token = 'x';


	cout << "enter the name of the first player : " << endl;


	cin >> game.n1;



	cout << "enter the name of the second player : " << endl;


	cin >> game.n2;


	cout << game.n1 << "  is player 1 so they will go first" << endl;


	cout << game.n2 << "  is player 2 so they will go second" << endl;


	while (game.function())

	{

		game.Board();
		game.Token();



		if (game.token == 'x' && game.tie == false)



		{

			cout << game.n2 << " wins!!" << endl;



			game.Board();

		}


		else if (game.token == 'o' && game.tie == false)


		{

			cout << game.n1 << " wins!!" << endl;


			game.Board();


		}


		else if (game.tie == true)


		{

			cout << "its a draw!" << endl;


			game.Board();


		}

	}

	//cout << "That was fun! do you want to play again? Y/N" << endl;

	//Again(name);

}



void Reverse(string name)

{
	string mystr;

	getline(cin >> ws, mystr);

	int length = mystr.length();

	char temp;

	if (mystr.length() % 2 == 0)

	{

		for (int i = 0; i < length / 2; i++)
		{
			temp = mystr[i];

			mystr[i] = mystr[length - i - 1];

			mystr[length - i - 1] = temp;

		}
	}

	else if (mystr.length() % 2 == 1)

	{
		for (int i = 0; i <= length / 2; i++)

		{
			temp = mystr[i];

			mystr[i] = mystr[length - i - 1];

			mystr[length - i - 1] = temp;
		}

	}

	cout << mystr << endl;

	cout << "That was fun! do you want to play again? Y/N" << endl;

	Again(name);

}

void Again(string name)

		{
	        string YN;

			cin >> YN;

			if (YN == "y" || YN == "Y")

			{
				cout << "great! this will be fun!" << endl;
				return Reverse(name);
			}

			else if (YN == "N" || YN == "n")

			{
				cout << "okay! lets play something else!" << endl;

				return WantToPlayaGame(name);
			}
		}

void EvenorOdd(string name)

{
	cout << "I am pretty good at this game! Enter a number and I can tell you if it's even or odd!" << endl;

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
				cout << "Sorry! I hate to 'ASCII' again but thats not a number. Would you like to try again?" << endl;

				return EvenorOdd(name);

			}

		}


		if (x % 2 == 0)

		{
			cout << "Wow! Even Steven. Do you want to play again?" << endl;

			SecondAgain(name);

		}

		else if (x % 2 == 1)

		{

			cout << "That's so odd. Do you want to play again or try a different game?" << endl;

			SecondAgain(name);

		}

	}

}


	void SecondAgain(string name)

	{
		string YN;

		cin >> YN;

		if (YN == "y" || YN == "Y")

		{
			cout << "great! this will be fun!" << endl;

			return EvenorOdd(name);
		}

		else if (YN == "N" || YN == "n")

		{
			cout << "okay! lets play something else!" << endl;

			return WantToPlayaGame(name);
		}

	}


void LetsTalk(string name)

{

	cout << "Let's ask Hal if she remembers your name! Ask 'do you remember my name?'" << endl;

	string myname;

	getline(cin >> ws, myname);

	if (myname == "do you remember my name?" || myname == "Do you remember my name?" || myname == "what's my name" || myname == "What's my name" || myname == "What is my name")

	{

		cout << "of course I do its " << name;

	}

	else

	{
		cout << "I am not sure she will understand that let's try again" << endl;

	}

	return askmeadifferentquestion(name);

}

#include <unordered_map>
#include <functional>

int main()

{
	unordered_map <std::string, std::string> object = { {"hey","hello"},{"butts","giggle"} };

	string name;
	const char* text = "my best friend";
	cin >> name;

	object["name"] = name;
	object[name] = "my best friend";
	function<int()> MyFunction = main;
	MyFunction();

	auto add = [](int a, int b) {return a + b; };
	add(1, 2);
	[&]

	CaseInsensitiveDictionary dictionary;

	Greeting();

	
	}
	