# TicTacToeGame

#include<iostream>
#include<string>
using namespace std;

//structure array
struct block{
	string block[9];
	string player1, player2;
};

block b;

//player one's input
void player1()
{
	back:
		
	int in;
	
	cout << "\n\t---Player1---" << "\n";
	cout << "\nEnter Number from 1 to 9 :: ";
	cin >> in;
	
	cout << "\t 1 | 2 | 3 " << "\n";
	cout << "\t--- --- ---" << "\n";
	cout << "\t 4 | 5 | 6 " << "\n";
	cout << "\t--- --- ---" << "\n";
	cout << "\t 7 | 8 | 9 " << "\n";
	
	cout << "\n\nNote : Remember the Above Structure then Enter Numbers. \n\n";
	
	if(in == 1)
	{
		b.block[1]={"X"};
	}
	else if(in == 2)
	{
		b.block[2]={"X"};
	}
	else if(in == 3)
	{
		b.block[3]={"X"};
	}
	else if(in == 4)
	{
		b.block[4]={"X"};
	}
	else if(in == 5)
	{
		b.block[5]={"X"};
	}
	else if(in == 6)
	{
		b.block[6]={"X"};
	}
	else if(in == 7)
	{
		b.block[7]={"X"};
	}
	else if(in == 8)
	{
		b.block[8]={"X"};
	}
	else if(in == 9)
	{
		b.block[9]={"X"};
	}
	else
	{
		cout << "Invalid input !" << "\n\n" ;
		goto back;
	}
}

//player two's input
void player2()
{
	backk:
		
	int iin;
	
	cout << "\n\t---Player2---" << "\n";
	cout << "\nEnter Number from 1 to 9 :: ";
	cin >> iin;
	
	cout << "\t 1 | 2 | 3 " << "\n";
	cout << "\t--- --- ---" << "\n";
	cout << "\t 4 | 5 | 6 " << "\n";
	cout << "\t--- --- ---" << "\n";
	cout << "\t 7 | 8 | 9 " << "\n\n";
	
	cout << "\n\nNote : Remember the Above Structure then Enter Numbers. \n\n";
	
	if(iin == 1)
	{
		b.block[1]={"O"} ; 
	}
	else if(iin == 2)
	{
		b.block[2]={"O"};
	}
	else if(iin == 3)
	{
		b.block[3]={"O"};
	}
	else if(iin == 4)
	{
		b.block[4]={"O"};
	}
	else if(iin == 5)
	{
		b.block[5]={"O"};
	}
	else if(iin ==6)
	{
		b.block[6]={"O"};
	}
	else if(iin == 7)
	{
		b.block[7]={"O"};
	}
	else if(iin == 8)
	{
		b.block[8]={"O"};
	}
	else if(iin == 9)
	{
		b.block[9]={"O"};
	}
	else
	{
		cout << "Invalid input !" << "\n\n" ;
		goto backk;
	}
}

//function to print direct output
void output()
{
	cout << "output : \n\n" ;
	
	//show output after every input
	cout << "\t" << b.block[1] << " | " << b.block[2] << " | " << b.block[3] << "\n" ; //1st row
	cout << "\t" << "---------" << "\n" ;
	cout << "\t" << b.block[4] << " | " << b.block[5] << " | " << b.block[6] << "\n" ; // 2nd row
	cout << "\t" << "---------" << "\n" ;
	cout << "\t" << b.block[7] << " | " << b.block[8] << " | " << b.block[9] << "\n" ; //3rd row
}

//condition to check the row, column and cross are same or note
void check()
{ 
	if(b.block[1] == "X" && b.block[2] == "X" && b.block[3] == "X") //checking 1st row for player 1
	{
		cout << "---Player 1 Wins !!---" << "\n" ;
	}
	else if(b.block[1] == "O" && b.block[2] == "O" && b.block[3] == "O") //checking 1st row for player 2
	{
		cout << "---Player 2 Wins !!---" << "\n" ;
	}
	else if(b.block[4] == "X" && b.block[5] == "X" && b.block[6] == "X") //checking 2nd row for player 1
	{
		cout << "---Player 1 Wins !!--- " << "\n" ;
	}
	else if(b.block[4] == "O" && b.block[5] == "O" && b.block[6] == "O") //checking 2nd row for player 2
	{
		cout << "---Player 2 Wins !!--- " << "\n" ;
	}
	else if(b.block[7] == "X" && b.block[8] == "X" && b.block[9] == "X") // checking 3rd row for player 1
	{
		cout << "---Player 1 Wins !!--- " << "\n" ;
	}
	else if(b.block[7] == "O" && b.block[8] == "O" && b.block[9] == "O") // checking 3rd row for player 2
	{
		cout << "---Player 2 Wins !!--- " << "\n" ;
	}
	else if(b.block[1] == "X" && b.block[5] == "X" && b.block[9] == "X") //cheching cross line for player 1
	{
		cout << "---Player 1 Wins !!--- " << "\n" ;
	}
	else if(b.block[1] == "O" && b.block[5] == "O" && b.block[9] == "O") // checking cross line for player 2
	{
		cout << "---Player 2 Wins !!--- " << "\n" ;
	}
	else if(b.block[3] == "X" && b.block[5] == "X" && b.block[7] == "X")  //cheching cross line for player 1
	{
		cout << "---Player 1 Wins !!--- " << "\n" ;
	}
	else if(b.block[3] == "O" && b.block[5] == "O" && b.block[7] == "O") // checking cross line for player 2
	{
		cout << "---Player 2 Wins !!--- " << "\n" ;
	}
	else
	{
		cout << "\n\n ...Match Draw, No One Won The Match " << "\n" ;
	}
}

// checking input while palying 
int checking()
{ 
	if(b.block[1] == "X" && b.block[2] == "X" && b.block[3] == "X") //checking 1st row for player 1
	{
		return 1;
	}
	else if(b.block[1] == "O" && b.block[2] == "O" && b.block[3] == "O") //checking 1st row for player 2
	{
		return 2;
	}
	else if(b.block[4] == "X" && b.block[5] == "X" && b.block[6] == "X") //checking 2nd row for player 1
	{
		return 1;
	}
	else if(b.block[4] == "O" && b.block[5] == "O" && b.block[6] == "O") //checking 2nd row for player 2
	{
		return 2;
	}
	else if(b.block[7] == "X" && b.block[8] == "X" && b.block[9] == "X") // checking 3rd row for player 1
	{
		return 1;
	}
	else if(b.block[7] == "O" && b.block[8] == "O" && b.block[9] == "O") // checking 3rd row for player 2
	{
		return 2;
	}
	else if(b.block[1] == "X" && b.block[5] == "X" && b.block[9] == "X") //cheching cross line for player 1
	{
		return 1;
	}
	else if(b.block[1] == "O" && b.block[5] == "O" && b.block[9] == "O") // checking cross line for player 2
	{
		return 2;
	}
	else if(b.block[3] == "X" && b.block[5] == "X" && b.block[7] == "X")  //cheching cross line for player 1
	{
		return 1;
	}
	else if(b.block[3] == "O" && b.block[5] == "O" && b.block[7] == "O") // checking cross line for player 2
	{
		return 2;
	}
	else
	{
		return 0;
	}
}

//main function
int main()
{
	cout << "\t\t\t*************************" << "\n" ;
	cout << "\t\t\t|     TIC-TAC-TOE       |" << "\n" ;
	cout << "\t\t\t*************************" << "\n\n" ;
	
	cout << "Stucture Of Tic-Tac-Toe \n\n" ;	
	
	cout << "\t 1 | 2 | 3 " << "\n";
	cout << "\t-----------" << "\n";
	cout << "\t 4 | 5 | 6 " << "\n";
	cout << "\t-----------" << "\n";
	cout << "\t 7 | 8 | 9 " << "\n\n";
	
	cout << "------X For Player 1.------" << "\n\n";
	
	cout << "------O For Player 2.------" << "\n\n";  
	
	player1();
	output();
	
	player2();
	output();
	
	player1();
	output();
	
	player2();
	output();
	
	player1();
	output();
	if(checking() == 1)
	{
		cout << "----------Player 1 Win !----------" << "\n";
		goto result;
	}
	
	player2();
	output();
	if(checking() == 2)
	{
		cout << "----------Player 2 Win !----------" << "\n";
		goto result;
	}	
	
	player1();
	output();
	if(checking() == 1)
	{
		cout << "----------Player 1 Win !----------" << "\n";
		goto result;
	}
	
	player2();
	output();
	if(checking() == 2)
	{
		cout << "----------Player 2 Win !----------" << "\n";
		goto result;
	}
	
	player1();
	output();
	
	result:
		
	check();
	
	return 0;
	
}
