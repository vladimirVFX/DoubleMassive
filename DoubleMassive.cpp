// DoubleMassive.cpp 

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    system("chcp 1251 > nul");
    srand(3);
    
    const int width = 9;
    const int height = 5;

    char lst[width][height];

    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; j++) {
            lst[i][j] = 'A' + rand() % 25;
            cout << lst[i][j] << " ";
        }
        cout << endl;
    }

    system("pause > nul");
    return 0;
}

