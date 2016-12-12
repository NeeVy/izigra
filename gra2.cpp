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

using namespace std;

void menu(int &wybor, int &jama, int &cel)
{
	do
	{
	cout<<"z ilu pol ma skladac sie gra?"<<endl;
	cin>>wybor;
	}
	while(wybor<5);
	
	while(cel==jama)
	{
	jama=rand()%(wybor+1);
	cel=rand()%(wybor+1);
	}

	cout<<"Jama znajduje sie na polu nr "<<jama<<endl;
	cout<<"Cel znajduje sie na polu nr "<<cel<<endl;

}

int main()
{
int jama=0, cel=0, wybor;
	menu(wybor,jama,cel);
}

