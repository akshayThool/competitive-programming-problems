#ifndef BINARY_ACTIONS_H
#define BINARY_ACTIONS_H
#include<string>
#include<vector>
using namespace std;

void createLookUpArray(int nosOfBits, string fileName);
vector<int> getParityVector(string fileName, int);
//void getParityArray(int parityArray[], int parityArraySize, string fileName);
void getParityArray(vector<int>& parityArray, int sizeOfVector, string fileName);
void writeArrayIntoBinaryFile(int *parityArray, int parityArraySize, string fileName);

#endif // BINARY_ACTIONS_H
