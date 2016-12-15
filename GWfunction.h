#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <windows.h>
#include <cstdio>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <conio.h>

using namespace std;


void menu(int &wybor, int &jama, int &cel)
{
	do
	{
	cout<<"z ilu pol ma skladac sie gra? Minimum 5"<<endl;
	cin>>wybor;
	jama=rand()%(wybor+1);
	cel=rand()%(wybor+1);
	}
	while(wybor<5);
	
	while(cel==jama || jama==0 || cel==0)
	{
	jama=rand()%(wybor+1);
	cel=rand()%(wybor+1);
	}

	cout<<"Jama znajduje sie na polu nr "<<jama<<endl;
	cout<<"Cel znajduje sie na polu nr "<<cel<<endl;

}

void NowyRuch(bool &ruchKomp, int &gracz, int &komputer, int wybor){
	
	getch();
	if(ruchKomp){
		int r1 = 1+rand()%6;
		int r2 = 1+rand()%6;
		cout << "==================" << endl;
		cout << "Ruch Komputera!\n";
		cout << "Ruzt pierwszy: " << r1 << endl;
		cout << "Ruzt drugi: " << r2 << endl;
		cout << "Suma rzutow: " << r1+r2 << endl;
		komputer = (komputer+r1+r2)%wybor+1;
		cout << "Jestes na polu nr: " << komputer;
	}
	else{
		int r1 = 1+rand()%6;
		int r2 = 1+rand()%6;
		cout << "==================" << endl;
		cout << "Twoj ruch!\n";
		cout << "Ruzt pierwszy: " << r1<< endl;
		cout << "Ruzt drugi: " << r2 << endl;
		cout << "Suma rzutow: " << r1+r2 << endl;
		gracz = (gracz+r1+r2)%wybor+1;
		cout << "Jestes na polu nr: " << gracz;
	}
	
	ruchKomp = !ruchKomp;
}

void start()
{
int jama, cel, wybor, gracz = 0, komputer = 0;
bool ruchkomputer=false, bool jeszczeRaz = true;
	srand(time(NULL));
	menu(wybor,jama,cel);
	
	while()
	{
		NowyRuch(ruchkomputer, gracz, komputer, wybor);
		if (gracz==jama)
		{
		cout<<"Przegrales, poniewaz wpadles do jamy !!!\n";  break;
		}

		if(gracz==cel)
		{
		cout<<"Gratulacje wygrales!!!\n"; break;
		}
		
		if(komputer==jama)
		{
		cout<<"Gratulacje wygrales ! Komputer wpadl do jamy.\n"; break;
		}
		
		if(komputer==cel)
		{
		cout<<"Przegrales. Kompter osiagnal cel.\n"; break;
		}
			
			
	}
	

}

