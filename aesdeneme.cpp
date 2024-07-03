#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;


void ShiftRows(vector<vector<char>>& newst) { //vector of vectors provides matrix
    //second row, one shift
    vector<vector<char>> temp = newst;
    newst[1][0] = temp[1][1];
    newst[1][1] = temp[1][2];
    newst[1][2] = temp[1][3];
    newst[1][3] = temp[1][0];
    //third row, two shift
    newst[2][0] = temp[2][2];
    newst[2][1] = temp[2][3];
    newst[2][2] = temp[2][0];
    newst[2][3] = temp[2][1];
    //fourth row, three shift
    newst[3][0] = temp[3][3];
    newst[3][1] = temp[3][0];
    newst[3][2] = temp[3][1];
    newst[3][3] = temp[3][2];
}

void RotWord(vector<char> a){
    char temp = a[0];
    a[0] = a[1];
    a[1] = a[2];
    a[2] = a[3];
    a[3] = temp;
}
