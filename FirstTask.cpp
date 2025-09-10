#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    int num,guess;
    srand(time(0));
    num=rand()%100+1;

    cout<<"Guess the number (1 to 100)"<<endl;

    while(true)
    {
        cout<<"Enter your Guess:";
        cin>>guess;

        if(guess==num)
        {
          cout<<"Congratulations! YOU WIN"<<endl;
          break;
        }

        else if(guess>num)
        {
            cout<<"too High, try smaller"<<endl;
        }
        else
        {
            cout<<"too low, try higher"<<endl;
        }
    }
    return 0;
}

 

