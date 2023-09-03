#include<iostream>
#include<cstring>

using namespace std;

int a, b;

void menu(){
    
    cout<<"Enter 1st Value : ";
    cin>>a;
    cout<<endl;
    cout<<"Enter 2nd Value : ";
    cin>>b;
    cout<<endl;

    cout<<"~~~~~~~~~~~MENU~~~~~~~~~~\n";
    cout<<"\nPress 1. for ADDITION";
    cout<<"\nPress 2. for SUBTRACTION";
    cout<<"\nPress 3. for MULTIPLICATION";
    cout<<"\nPress 4. for DIVISION"<<endl;
}

int main()
{
    int choice;
    char wish = 'Y';

    cout<<"<--------------------WELCOME-------------------->\n\n";

    while(wish == 'Y'){
        menu();

        cout<<"ENTER YOUR CHOICE : ";
        cin>>choice;

        if(choice == 1){
            cout<<a<<"+"<<b<<" : "<<(a+b)<<"\n\n";
        }
        else if(choice == 2){
            cout<<a<<"-"<<b<<" : "<<(a-b)<<"\n\n";
        }
        else if(choice == 3){
            cout<<a<<"*"<<b<<" : "<<(a*b)<<"\n\n";
        }
        else if(choice == 4){
            cout<<a<<"/"<<b<<" : "<<(a/b)<<"\n\n";
        }
        else{
            cout<<"WRONG CHOICE.";
        }

        cout<<"\nDo you want to Continue??(Y/N) : ";
        cin>>wish;
        cout<<endl;
    }
    
return 0;
}