//Gregory Sveinbjornson
//200427591
//Feb 4, 2021


#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <cstring>

using namespace std;

const int n = 9;

//Declare the Board class

class Board {

private:

	    char* Ppos;

public:

	    //Default constructor
		Board();

	    //Destructor
		~Board();

		//Copy Constructor
	    Board(const Board& pObj);

		//Assignment operator
	    Board& operator = (const Board& s);

	    //Declaration of Print function
		void Print();

	    //Declaration of Print function
		bool Winner();

	    //Declaration of print function
		int print(int count, Board* s);

	    //Declaration of getp function
		char getp(int p)const;

	    //Declaration of setp function
		void setp(int position, char player)const;
};



//Declaration of Player class

class Player {

private:

	    char* symbol;
	    int* pos;

public:
		//Default constructor
	    Player();

	    //Declaration of virtual destructor
		virtual ~Player();

		//copy constructor
	    Player(char* p, int* q);

		//overrided copy constructor
	    Player(const Player& obj);

		//assignment Operator
	    Player& operator = (Player const& s);

	    //virtual function
		virtual void move(const Board& obj1) = 0;

	    //gets() function
		char gets()const;

	    //getp function
		int getp()const;

	    //sets function
		void sets(char a);

	    //setp function
		void setp(int a);

};

class PlayerHuman :public Player {

private:

	    int* playerNumber;

public:

	    //constructor
		PlayerHuman();

	    //destructor
		~PlayerHuman();

		//copy constructor
	    PlayerHuman(int* p);

		//overrided copy constructor
	    PlayerHuman(const PlayerHuman& pObj);

	    //assignment operator
		PlayerHuman& operator = (const PlayerHuman& s);

	    //virtual function
		virtual void move(const Board& obj1);

};

class PlayerRandom :public Player {

private:

	    int* playerNumber;

public:

	    //Declaration of Default constructor
		PlayerRandom();

	    //Declaration of destructor
		~PlayerRandom();

		//copy constructor
	    PlayerRandom(int* p);

		//overrided copy constructor
	    PlayerRandom(const PlayerRandom& pObj);

	    //assignment opeartor
		PlayerRandom& operator =(const PlayerRandom& s);

	    //virtual function
		virtual void move(const Board& pObj);

};

//human vs human functipon
void hvh();
//comp vs comp function
void cvc();
//human vs comp function
void hvc();