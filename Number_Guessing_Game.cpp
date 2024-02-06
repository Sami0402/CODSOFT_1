//Welcome to the Number Guessing Game.
//In this game you have to guess a number.
//Program will provide you hint,Whether the number you guessed is too high or too low then actual number.

#include<iostream>
#include<conio.h>
#include <iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
int num,guess;
int attempt= 0;    
cout << setw (62); 
cout<<"Welcome to the Number Guessing Game!!!\n\n"<<endl;
srand(time(0)); //seed for the rand() function
num=rand() % 100+1; //Random number generator between 1 and 100

do
{
    cout<<"Enter your guess between 1 and 100 : ";
    cin>>guess;
    attempt++;
    if (guess > num){
        cout<<"Too High!\n\n";
                    }
    else if (guess < num){
        cout<<"Too Low!\n\n";
                         }
    else{
        cout << "Congratulations! You guessed the number correctly in " << attempt << " attempts." << endl;
        }
   
}while(guess!=num);  
 getch();
 return 0;

}