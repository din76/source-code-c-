
#include "iostream"
#include "windows.h"

using namespace std;

void gotoXY(int x,int y)
{
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD c;
    c.X = (short)x;
    c.Y = (short)y;
    SetConsoleCursorPosition(consoleHandle,c);
}

class Snake
{
private:
    int x;
    int y;

};

int main()
{

    gotoXY(10,10);
    cout << "Anh yeu be tram";
    return 0;
}
