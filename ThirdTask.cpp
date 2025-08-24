#include <iostream>
using namespace std;

char b[3][3] = { {'1','2','3'}, {'4','5','6'}, {'7','8','9'} };
char t = 'X';

void show() {
    cout << "\n";
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            cout << b[i][j];
            if(j<2) cout << " | ";
        }
        cout << "\n";
        if(i<2) cout << "--|---|--\n";
    }
    cout << "\n";
}

bool win() {
    for(int i=0;i<3;i++) {
        if(b[i][0]==t && b[i][1]==t && b[i][2]==t) return true;
        if(b[0][i]==t && b[1][i]==t && b[2][i]==t) return true;
    }
    if(b[0][0]==t && b[1][1]==t && b[2][2]==t) return true;
    if(b[0][2]==t && b[1][1]==t && b[2][0]==t) return true;
    return false;
}

bool draw() {
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            if(b[i][j]!='X' && b[i][j]!='O') return false;
    return true;
}

int main() {
    char again;
    do {
        char n='1';
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                b[i][j]=n++;
        t='X';

        cout<<"Tic Tac Toe\n";
        show();

        while(true) {
            int c;
            cout<<"Player "<<t<<" enter pos (1-9): ";
            cin>>c;

            if(c<1||c>9) { cout<<"Invalid!\n"; continue; }

            int r=(c-1)/3, cl=(c-1)%3;
            if(b[r][cl]=='X'||b[r][cl]=='O') { cout<<"Taken!\n"; continue; }

            b[r][cl]=t;
            show();

            if(win()) {
                cout<<"Player "<<t<<" wins!\n"; break;
            }
            if(draw()) {
                cout<<"Draw!\n"; break;
            }

            if(t=='X') t='O'; else t='X';
        }

        cout<<"Play again? (y/n): ";
        cin>>again;

    } while(again=='y'||again=='Y');

    cout<<"Game over!\n";
    return 0;
}
