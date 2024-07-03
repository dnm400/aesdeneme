#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void ShiftRows() {
    //second row, one shift
    newst[1][0] = newst[1][1];
    newst[1][1] = newst[1][2];
    newst[1][2] = newst[1][3];
    newst[1][3] = newst[1][0];
    //third row, two shift
    newst[2][0] = newst[2][2];
    newst[2][1] = newst[2][3];
    newst[2][2] = newst[2][0];
    newst[2][3] = newst[2][1];
    //fourth row, three shift
    newst[3][0] = newst[3][3];
    newst[3][1] = newst[3][0];
    newst[3][2] = newst[3][1];
    newst[3][3] = newst[3][2];
} //tekrar belirle(degisken ve fn. inputunu)
