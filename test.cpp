#include <iostream>
#include <Windows.h>
#include <Time.h>
using namespace std;

 

int main()
{   
    srand(time(0));
    for (int a = 0; a < 200; a++) {
        for (int y = 0; y < 20; y++) {
            for (int x = 0; x < 40; x++) {
                cout << '0' + rand() % 10;
            }
            cout << endl;
        }
        Sleep(100);
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { 0, 0 });
    }
}