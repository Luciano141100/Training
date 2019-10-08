#include <iostream>
#include<stdio.h>

using namespace std;

main() 
{
	int n=10;
	int voti[n];
	
	for(n=0; n<10; n++)
	{
		cout<< "Inserisci voti" << endl;
		cin>> voti[n] ;
					
	}
	
	for(n=0; n<10; n++)
	{
	cout<< "I voti inseriti sono "<<voti[n]<<endl;
    }
    
    cout<<"Ciao"<<endl;
    
}
