#include<fstream>
#include<iostream>
#include<cmath>
#include<binary_actions.h>
#include<brute-force.h>
#include<iterator>

using namespace std;

void createLookUpArray(int nosOfBits, string fileName){
    int sizeOfArray = pow(2, nosOfBits);
    int parityArray[sizeOfArray];
    for(int i = 0; i < sizeOfArray; i++){
        parityArray[i] = lowestBitMethod(i);
    }
    writeArrayIntoBinaryFile(parityArray, sizeOfArray, fileName);
}

//void getParityArray(int parityArray[], int parityArraySize, string fileName){
//    fstream myFile (fileName, ios::in | ios::binary);
//    if(!myFile){
//        cout<<"File cannot open!!!\n";
//        return;
//    }
//    int sizeOfValue = parityArraySize* sizeof(int);
//    myFile.read(reinterpret_cast<char*>(&parityArray), sizeOfValue);
//    myFile.close();
//}

void getParityArray(vector<int>& parityArray, int sizeOfVector, string fileName){
    fstream myFile (fileName, ios::in | ios::binary);
    if(!myFile){
        cout<<"File cannot open!!!\n";
        return;
    }
    streampos fileSize;

    myFile.seekg(0, ios::end);
    fileSize = myFile.tellg();
    myFile.seekg(0, ios::beg);
    parityArray.resize(sizeOfVector);
    myFile.read(reinterpret_cast<char*>(parityArray.data()), fileSize);
    myFile.close();
}

vector<int> getParityVector(string fileName, int sizeOfVector){

    //open the file
    ifstream myFile(fileName, ios::in | ios::binary);

    myFile.unsetf(ios::skipws);

    streampos fileSize;

    myFile.seekg(0, ios::end);
    fileSize = myFile.tellg();
    myFile.seekg(0, ios::beg);

    //reserve capacity

    vector<int> parityVector;
    parityVector.resize(fileSize/sizeof(int) + (fileSize%sizeof(int)?1U:0U));
//    myFile.read(reinterpret_cast<ifstream::char_type*>(&parityVector.front()), sizeOfVector);
//    parityVector.insert(parityVector.begin(),
//               istream_iterator<int>(myFile),
//               istream_iterator<int>());
    myFile.read(reinterpret_cast<char*>(parityVector.data()), fileSize);
    return parityVector;
}

void writeArrayIntoBinaryFile(int *parityArray, int parityArraySize, string fileName){

    ofstream myFile;
    myFile.open(fileName, ios::out);
    if(!myFile){
        cout<<"File cannot open!!!\n";
        return;
    }
    myFile.close();
    myFile.open(fileName, ios::out | ios::binary);
    int sizeOfValue = parityArraySize* sizeof(int);
    myFile.write(reinterpret_cast<char*>(&parityArray), sizeOfValue);
    myFile.close();
}
