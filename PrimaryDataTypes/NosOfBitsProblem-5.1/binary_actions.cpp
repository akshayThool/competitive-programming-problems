#include<fstream>
#include<iostream>
#include<binary_actions.h>

using namespace std;

int* getParityArray(int *parityArray, string fileName){

    return parityArray;
}

void writeArrayIntoBinaryFile(int *parityArray, int parityArraySize, string fileName){

    fstream myFile (fileName, ios::out | ios::binary);
    if(!myFile){
        cout<<"File cannot open!!!\n";
        return;
    }
    myFile.write((char *)&parityArray, parityArraySize);
    myFile.close();
}
