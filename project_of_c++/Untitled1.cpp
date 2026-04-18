#include <iostream>
#include<ctime>
#include<cstdlib>

using namespace std;
int numberofuser;
int round;
int player;
int computer;
int draw;
char again;
void readHowManyroound(){
	
	cout<<"Round "<<"["<<round<<"]"<<"begins:\n";	
}
void showtheoverScreen(){
	cout<<"                          ____________________________________________________________________\n";
	cout<<"                                                 +++ G a m e O v e r +++\n";
    cout<<"                          _________________________________________________________________________\n";
    cout<<"                          Game Rounds       :"<<round<<"\n";
    cout<<"                          player1 won times  :"<<player<<"\n";
    cout<<"                          computer won times  :"<<computer<<"\n";
    cout<<"                          Draw tiems :"<<draw<<"\n";
	                                   if(player>computer)
    cout<<"                          thefinal winer:"<<"player"<<"\n";
                                       if(computer>player)
    cout<<"                          The final winer:"<<"computer"<<"\n";
    cout<<"                          __________________________________________________________________________\n";
}

void startGame(){
	do{
		cout<<"How Many Rounds 1 to 10 \n";
	cin>>numberofuser;
	for(int i=1; i<=numberofuser;i++){
		++round;
		readHowManyroound();
		int choice;
		string ch;
		string ch2;
		string winer;
		cout<<"your choice: [1]:stone, [2]:peper,[3]:scissors?\n";
		cin>>choice;
		int computerchoice=(rand()%3)+1;
		if(choice==computerchoice || computerchoice==choice)
		++draw;
		if(choice==1 && computerchoice==3)
		++player;
		if(choice==1 && computerchoice==2 )
		++player;
		if(choice==3 && computerchoice==2)
		++player;
		if(computerchoice==1 && choice==3)
		++computer;
		if(computerchoice==1 && choice==2 )
		++computer;
		if(computerchoice==3 && choice==2)
		++computer;
		cout<<"_________________Round["<<round<<"]_______________________\n";
		if(choice==1)
		ch="stone";
		if(choice==2)
		ch="paper";
		if(choice==3)
		ch="scissors";
     	if(computerchoice==1)
		ch2="stone";
		if(computerchoice==2)
		ch2="paper";
		if(computerchoice==3)
		ch2="scissors";
		cout<<"player choice:"<<ch<<"\n";
		cout<<"computer choice:"<<ch2<<"\n";
		if(choice>computerchoice)
		winer="player";
		else
		winer="computer";
		
		cout<<"Round Winer:"<<winer<<"\n";
		
	}
	showtheoverScreen();
	cout<<"        Do you want play again? Y/N?";
	cin>>again;	
	if(again=='Y' && again=='y'){
		round=0;
		computer=0;
		draw=0;
	}
	}while(again=='Y' or again=='y');

	
	
}

int main()
{
	srand((unsigned)time(NULL));
	startGame();
	return 0;
}