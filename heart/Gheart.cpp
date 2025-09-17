#include<iostream>
#include<windows.h> 
using namespace std ;

#define C(a) ((a)*(a)*(a))

void setcolor(int color = 7)
{
  HANDLE hConsole;
  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(hConsole,color);
}

int main(){
    int x,y;

    setcolor(4) ;
    for (int y = 9; y>-6; y--)
    {
        for (int x = -8; x < 9; x++)
        {
            putchar(C(x*x+y*y-25)<25*x*x*y*y*y ? putchar('#') : putchar(' ') );
        }
        putchar('\n');
    }
    setcolor(7) ;

    return 0 ;
}
