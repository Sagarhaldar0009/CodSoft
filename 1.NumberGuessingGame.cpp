#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
 
int main()
{
    srand(time(0)); // It is used in C++ to help in the generation of random numbers by seeding rand with a starting value.

    int hiddenNumber = rand() % 100 + 1; // Generating a Random Number.
    int Guess;          // User Guesses.
    int Tries = 0;      // No. of Tries by the User.
    bool correctGuess = false;      // Inialising the correctGuess as FALSE.

    cout<<"Welcome to the Number Guessing Game :)"<<endl;
    while(!correctGuess){
        cout<<"Enter your Guess : ";
        cin>>Guess;
        Tries++;

        if(Guess < hiddenNumber){
            cout<<"Your Guess is Too Low.\nTry Again."<<endl;
        }
        else if(Guess > hiddenNumber){
            cout<<"Your Guess is Too High.\nTry Again."<<endl;
        }
        else{
            cout<<"Congratulations !!! You guess the Number in "<<Tries<<" attempts.\n";
            correctGuess = true;
        }
    }
return 0;
}