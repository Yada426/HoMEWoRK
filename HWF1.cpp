#include <iostream>
#include <time.h>
using namespace std ;
int Guess ( int ) ;

int main  ( )
{
	int num , Round ;
	srand(time(NULL)) ;
	num = 1 + rand() % 10 ;

	cout << " ##### Welcome To Guessing Number Game ##### " << endl ;
	cout << " Secret Number Has Been Chosen " << endl ;
	Round = Guess(num) ;

	cout << " Congratulations ! " << endl ;
	cout << " Secret Number Is " << num << endl ;
	cout << " You Made " << Round << " guesses " << endl ;
	cout << " " << endl ;

    return ( 0 ) ;
}

int Guess ( int num )
{
	int Data , round , i ;

	for (i = 1 ; i >= 0 ; i ++) {
		cout << " Guess The Number " << i << " ( 1 to 10 )  :" ;
		cin >> Data ;
        
		if (num == Data){
			break ;
		}

		else if (num > Data) {
			cout << " The Secret Number Is Lower " << endl ;
			cout << " " << endl ;
		}
		
		else if (num < Data) {
			cout << " The Secret Number Is Higher " << endl ;
			cout << " " << endl ;
		}
		}
	round = i ;
	return ( round ) ; 
}
