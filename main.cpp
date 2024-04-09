#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;
int tab[7][6];
int choice, player;
bool end = false;
int a=0;

void check(int x)
{
    if(tab[x-1][a]!=0 && a<6)
    {
        a++;
        check(x);
    }   else if (player==1 && a<6)
            {
            tab[x-1][a]=1;
            a=0;
            }
        else if (player==2 && a<6)
            {
            tab[x-1][a]=2;
            a=0;
            }
        else
        {
        cout << "WRONG!" << endl;
        a=0;
        player++;
        }
}

int draw()
{
    for(int i = 0; i<9; i++)
    {
        if(i<2)
        {
        cout<<"-";
        } else if(i>7)
        {
        cout<<i-1<<"--"<< endl;
        } else {
        cout<<i-1<<"----";
        }
    }
    for(int i = 0; i<6; i++)
    {
        for(int j = 0; j<7; j++)
        {
            if(tab[j][i]!=0)
            {
                if(tab[j][i]==1)
                {
                cout<<"| X |";
                }else
                cout<<"| O |";
            }
            else
            cout<<"|   |";
        } cout<<endl;
    }
    for(int i = 0; i<35; i++)
    {
        std::cout<<"=";
    } cout<<endl;
}

int win_check()
{
    for(int i = 0; i<6; i++)
    {
        for(int j = 0; j<7; j++)
        {
        if(tab[j][i]==1 && tab[j+1][i+1]==1 && tab[j+2][i+2]==1 && tab[j+3][i+3]==1)
            {
            end = true;
            cout << "\nPLAYER 1 WIN!" << endl;
            }
        if(tab[j][i]==1 && tab[j+1][i-1]==1 && tab[j+2][i-2]==1 && tab[j+3][i-3]==1)
            {
            cout << "\nPLAYER 1 WIN!" << endl;
            end = true;
            }
        if(tab[j][i]==2 && tab[j+1][i-1]==2 && tab[j+2][i-2]==2 && tab[j+3][i-3]==2)
            {
            cout << "\nPLAYER 2 WIN!" << std::endl;
            end=true;
            }
        else if(tab[j][i]==2 && tab[j-1][i-1]==2 && tab[j-2][i-2]==2 && tab[j-3][i-3]==2)
            {
            end = true;
            cout << "\nPLAYER 2 WIN!" << endl;
            }
        else if(tab[j][i]==1 && tab[j][i-1]==1 && tab[j][i-2]==1 && tab[j][i-3]==1)
            {
            cout << "\nPLAYER 1 WIN!" << endl;
            end = true;
            }
        else if(tab[j][i]==1 && tab[j-1][i]==1 && tab[j-2][i]==1 && tab[j-3][i]==1)
            {
            cout << "\nPLAYER 1 WIN!" << endl;
            end = true;
            }
        else if(tab[j][i]==2 && tab[j][i-1]==2 && tab[j][i-2]==2 && tab[j][i-3]==2)
            {
            cout << "\nPLAYER 2 WIN!" << endl;
            end = true;
            }
        else if(tab[j][i]==2 && tab[j-1][i]==2 && tab[j-2][i]==2 && tab[j-3][i]==2)
            {
            cout << "\nPLAYER 2 WIN!" << endl;
            end = true;
            }
        }
    }
}
int p_choice()
{
    player = 1;
    while(end!=true)
    {
    cout << "PLAYER " << player << ": ";
    cin >> choice;
        if (choice>0 && choice<8)
        {
            check(choice);
            draw();
            if (player == 1)
            {
                player++;
            }
            else
            {
                player--;
            }
        }
    else
        {
    cout << "PUT A NUMBER NEXT TIME!" << endl;
        }
    win_check();
    }
}


int main()
{
    cout<<"WELCOME IN CONNECT 4"<<endl;
    draw();
    p_choice();
    return 0;
}
