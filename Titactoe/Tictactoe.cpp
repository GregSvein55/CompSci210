//Gregory Sveinbjornson
//200427591
//Feb 4, 2021

#include "Tictactoe.h"

//constructor
Board::Board() {

	    Ppos = new char[n];

	    int i = 0;

		//running while i < n
	    while (i < n) {
		         Ppos[i] = ' ';
		         i++;   
	}
}

//destructor
Board::~Board() {
	    delete[] Ppos;
}

//copy constructor
Board::Board(const Board& obj) {

	    Ppos = new char[n];

	    int i = 0;

		//running while i < n
		    while (i < n) {

		         Ppos[i] = obj.Ppos[i];
		         i++;	   
	}
}

//assignment operator 
Board& Board::operator = (const Board& obj){

	    if (this != &obj)
		   {
		         delete Ppos;

		         Ppos = new char[n];
				 //running while i < n
		         for (int i = 0; i < n; i++)

		             Ppos[i] = obj.Ppos[i];

		    }

	    return *this;

}

//print functipon
void Board::Print() {


		//printing out the board with all the diifernt positions
	    cout << "+---+---+---+" << endl;
	    cout << "|" << Ppos[0] << " |" << Ppos[1] << " |" << Ppos[2] << " |" << endl;
	    cout << "+---+---+---+" << endl;
	    cout << "|" << Ppos[3] << " |" << Ppos[4] << " |" << Ppos[5] << " |" << endl;
	    cout << "+---+---+---+" << endl;
	    cout << "|" << Ppos[6] << " |" << Ppos[7] << " |" << Ppos[8] << " |" << endl;
	    cout << "+---+---+---+" << endl;

}

//getting position
char Board::getp(int p)const {

	    return Ppos[p];

}

//checking to see if there is a winner
bool Board::Winner() {

	//checking all the different possibilities with else if statements
	    if (Ppos[0] == Ppos[1] && Ppos[0] == Ppos[2] && Ppos[0] != ' ') {

		         return true;

		   
	}


		else if (Ppos[2] == Ppos[4] && Ppos[2] == Ppos[6] && Ppos[2] != ' ') {

				return true;


	}
	    else if (Ppos[6] == Ppos[7] && Ppos[6] == Ppos[8] && Ppos[6] != ' ') {

		         return true;

		   
	}

	    else if (Ppos[0] == Ppos[4] && Ppos[0] == Ppos[8] && Ppos[0] != ' ') {

		         return true;

		   
	}

	    else if (Ppos[0] == Ppos[3] && Ppos[0] == Ppos[6] && Ppos[0] != ' ') {

		         return true;

		   
	}

		else if (Ppos[3] == Ppos[4] && Ppos[3] == Ppos[5] && Ppos[3] != ' ') {

				return true;


		}

	    else if (Ppos[1] == Ppos[4] && Ppos[1] == Ppos[7] && Ppos[1] != ' ') {

		         return true;

		   
	}

		else if (Ppos[3] == Ppos[4] && Ppos[3] == Ppos[5] && Ppos[3] != ' ') {

				return true;


	}

	    else if (Ppos[2] == Ppos[5] && Ppos[2] == Ppos[8] && Ppos[2] != ' ') {

		         return true;

		   
	}

	    return false;

}

//print function
int Board::print(int count, Board* s)

{
		//finding out if the user has won
	    if (s->Winner() != true) {
		         return 0;
	}

	    if (s->Winner() == true) {

		        if (count % 2 == 0)
						return 1;

		        if (count % 2 != 0)
						return 2;
	   
	}

}

//set position function
void Board::setp(int pos, char player) const {

		//only allowing a placement if the positon is empty
	    if (Ppos[pos] == ' ') {

		         Ppos[pos] = player;

		   
	}
		
	    else if (Ppos[pos] != ' ') {

		         cout << "error" << endl;

		   
	}

}

/*







:)








*/

//constructor
Player::Player() {

	    symbol = new char;
	    pos = new int;
}

// destructor
Player::~Player() {

	    delete symbol;
	    delete pos;
	    

}

//copy constructor
Player::Player(char* p, int* q) {

	    symbol = p;
	    pos = q;

}

//overrided copy constructor
Player::Player(const Player& obj) {

	    symbol = obj.symbol;
	    pos = obj.pos;

}

//assignment operator
Player& Player::operator=(Player const& s)

{
	
	    if (this != &s)
		   {
		         delete symbol;
		         delete pos;
		         symbol = new char;
		         pos = new int;
		         symbol = s.symbol;
		         pos = s.pos;
		    }

	    return *this;

}

//get symbol function

char Player::gets()const {

	    return *symbol;

}

//get position function

int Player::getp()const {

	    return *pos;

}

//set symbol function

void Player::sets(char a) {

	   * symbol = a;

}

//set position function

void Player::setp(int a) {

	   * pos = a;

}

/*






;)









*/

//constructor

PlayerHuman::PlayerHuman()
{
	    playerNumber = NULL;
}

//destructor
PlayerHuman::~PlayerHuman()

{
	    if (playerNumber != NULL)
		         playerNumber = NULL;  

}

//copy constructor
PlayerHuman::PlayerHuman(int* p)
{
	    playerNumber = p;
}

//overrided copy constructor
PlayerHuman::PlayerHuman(const PlayerHuman& obj) {

	    playerNumber = obj.playerNumber;

}

//assignment operator 
PlayerHuman& PlayerHuman::operator=(const PlayerHuman& s)

{

	    if (this != &s)

		   {

		         delete playerNumber;

		         playerNumber = new int;

		         playerNumber = s.playerNumber;

		    }

	    return *this;

}

//move function
void PlayerHuman::move(const Board& obj1)
{
	    int move;

	    cout << "Next move: ";

	    cin >> move;

	    
		//running while not between 0 and 8
		    while (move < 0 || move>8)
		   {
		         cin >> move;
		    }

				//running while the space is full
			    while (obj1.getp(move) != ' ') {

			         cout << "That space has already been taken. Input again: ";
			         cin >> move;

			   
		}

		    //set symbol as X
			if (*playerNumber == 1) {
				 Player::sets('X');

			   
		}

		    //set symbol O
			else if (*playerNumber == 2) {
				Player::sets('O');

			   
		}

		    obj1.setp(move, Player::gets());

}

/*






:p








*/

//constructor
PlayerRandom::PlayerRandom()
{
	    playerNumber = NULL;
}

//destructor
PlayerRandom::~PlayerRandom()
{
	    if (playerNumber != NULL)
		         playerNumber = NULL;
}

//copy constructor
PlayerRandom::PlayerRandom(int* p)
{
	    playerNumber = p;
}

//overrided cop constructor
PlayerRandom::PlayerRandom(const PlayerRandom& obj)
{
	    playerNumber = obj.playerNumber;
}

//assignment operator
PlayerRandom& PlayerRandom::operator=(const PlayerRandom& s)
{
	    if (this != &s)
		   {
		         delete playerNumber;
		         playerNumber = new int;
		         playerNumber = s.playerNumber;
		    }

	    return *this;
}

//move function
void PlayerRandom::move(const Board& obj1)
{
	    int move;

		//setting time to 0
	    srand(time(0));

		//making a random number between 1 and 9
	    move = rand() % 9;

		//running while not between 1 an d 9
	    while (move < 0 || move>9) {
			//making a random number between 1 and 9
			 move = rand() % 9;   
	}

		//running while the position is full
	    while (obj1.getp(move) != ' ') {
			//making a random number between 1 and 9
		         move = rand() % 9;
   
	}

	    if (*playerNumber == 1) {

		         Player::sets('X');

		   
	}

	    else if (*playerNumber == 2) {

		         Player::sets('O');

		   
	}

	    obj1.setp(move, Player::gets());

}














void cvc()

{

	    int q = 1, w = 2; int count = 0;

	    Board* j = new Board;

	    Player* objectA = new PlayerRandom(&q);

	    Player* objectB = new PlayerRandom(&w);

	    j->Print();

	    while (j->Winner() != true && count <= 8) {

		         objectA->move(*j);

		         j->Print();

		         count++;

		         if (j->Winner() != true && count <= 8) {

			             objectB->move(*j);

			             j->Print();

			             count++;

			        
		}

		   
	}

	    if (j->print(count, j) == 0)

		         cout << "No winner." << endl;

	    else if (j->print(count, j) == 1)

		         cout << "winner is:" << objectB->gets() << endl;

	    else if (j->print(count, j) == 2)

		         cout << "winner is:" << objectA->gets() << endl;

	    j->Print();

	    delete j;

	    delete objectA;

	    delete objectB;

}



void hvc()

{

	    Board* j = new Board;

	    Player* objectA;

	    Player* objectB;

	    j->Print();

	    int q, w;

	    int count = 0;

	    cout << "Do you want play X or O ?" << endl

		         << "1 for X, 2 for O" << endl;

	    cin >> q;

	    while (q != 1 && q != 2) {

		         cout << "Invalid input. Please try again: ";

		         cin >> q;

		   
	}

	    if (q == 1) {

		         w = 2;

		         objectA = new PlayerHuman(&q);

		         objectB = new PlayerRandom(&w);

		   
	}

	    else if (q == 2) {

		         w = 1;

		         objectA = new PlayerRandom(&q);

		         objectB = new PlayerHuman(&w);

		   
	}

	    while (j->Winner() != true && count <= 8) {

		         objectA->move(*j);

		         j->Print();

		         count++;

		         if (j->Winner() != true && count <= 8) {

			             objectB->move(*j);

			             j->Print();

			             count++;

			        
		}

		   
	}

	    if (j->print(count, j) == 0)

		         cout << "No winner." << endl;

	    else if (j->print(count, j) == 1)

		         cout << "winner is:" << objectB->gets() << endl;

	    else if (j->print(count, j) == 2)

		         cout << "winner is:" << objectA->gets() << endl;

	    j->Print();

	    delete j;

	    delete objectA;

	    delete objectB;

}



void hvh() {

	    Board* j = new Board;

	    j->Print();

	    int q = 1, w = 2;

	    int count = 0;

	    Player* objectA = new PlayerHuman(&q);

	    Player* objectB = new PlayerHuman(&w);

	    //Iterate the loop

		    while (j->Winner() != true && count <= 8) {

		         objectA->move(*j);

		         j->Print();

		         count++;

		         if (j->Winner() != true && count <= 8) {

			             objectB->move(*j);

			             j->Print();

			             count++;

			        
		}

		   
	}

	    if (j->print(count, j) == 0)

		         cout << "No winner." << endl;

	    else if (j->print(count, j) == 1)

		         cout << "winner is:" << objectB->gets() << endl;

	    else if (j->print(count, j) == 2)

		         cout << "winner is:" << objectA->gets() << endl;

	    j->Print();

	    delete j;

	    delete objectA;

	    delete objectB;

}