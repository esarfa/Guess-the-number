#include <iostream>
#include <windows.h>
using namespace std;


int main(){
int n=1;
char input;

    while (n){
    cout << "Salut si bine te-am gasit la 'GUESS THE NUMBER'!" << endl;
      _sleep(1000);
     cout << "Eu voi selecta un numar iar tu vei incerca sa il ghicesti." << endl;
       _sleep(1000);
      cout << "Daca raspunzi corect primesti un punct,daca gresesti primesc eu un punct." << endl;
        _sleep(1000);
      cout << "Daca tu faci 5 puncte ai castigat,daca eu fac 10 puncte inseamna ca EU am castigat." << endl<<endl;

      cout<<"Jucam ?(Y/N)"<<endl;
      cin>>input;
      if (input=='Y'){

           //jocul codu silviu

           break;
    }

    else{
        cout<<"La revedere"<<endl;
        break;
    }



return 0;
};
}
