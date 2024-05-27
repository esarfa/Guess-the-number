#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
int n=1;
char input;

    while (n){
    cout << "Salut si bine te-am gasit la 'GUESS THE NUMBER'!" << endl;
      _sleep(1000);
     cout << "Eu voi selecta un numar iar tu vei incerca sa il ghicesti." << endl;
       _sleep(1000);
      cout<<"Jucam ?(Y/N)"<<endl;
      cin>>input;
      if (input=='y'||'Y'){
{char mod;
int dif;
    cout<<"Alege dificultate:"<<endl;
    cout<<"Pentru usor apasa u"<<endl<<"Pentru mediu apasa m"<<endl<<"Pentru dificil apasa d"<<endl;
    cin>>mod;
    if(mod=='u')
    dif=9;
    else if(mod=='m')
    dif=7;
    else if(mod=='d')
    dif=4;
	int num, guess, tries = 0,s=100,m=0;
	srand(time(0)); //seed random number generator
	num = rand() % 100 + 1; // random number between 1 and 100
	cout << "Ghiceste numarul la care ma gandesc"<<endl;
    _sleep(1000);
 cout<<"Daca faci mai mult de "<<dif+1<<" greseli ai pierdut."<<endl;
 _sleep(1000);
	do
	{
		cout << "Introdu un numar intre "<<m<<" si "<<s<< ":";
		cin >> guess;
        if(tries==dif)
        {cout<<"Ai piertud!"<<endl;
        cout<<"Numarul a fost: "<<num;
        break;}
        if(guess>s)
            cout<<"Nu ai voie"<<endl;
		else if (guess > num)
			{cout << "Incearca un numar mai mic"<<endl;
           s=guess;
           tries++;
           }
           if(guess<m)
                cout<<"Nu ai voie"<<endl;
		else if (guess < num)
			{cout << "Incearca un numar mai mare"<<endl;
			m=guess;
            tries++;
			}
		else
			{cout << "Felicitari! Ai ghicit in " << tries << " incercari!"<<endl;
            break;}
	} while (guess != num);
	return 0;
}
           break;
    }
    else{
        cout<<"La revedere"<<endl;
        break;
    }
return 0;
};
}