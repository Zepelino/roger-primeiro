#include <iostream>
#include <fstream>

using namespace std;

int main(){

    //ofstream, ifstream, fstream

    ofstream fileO;

    fileO.open("miguel.txt");

    for(int i = 0; i < 10; i++){
        if(i%2 == 0){
            fileO << endl;
        }
        fileO << " Rua miguel amogus (" << i << ") ";
    }
    fileO.close();

    ifstream fileI;
    string line;

    fileI.open("miguel.txt");

    if(fileI.is_open()){
        while(getline(fileI, line)){
            cout << line << endl;
        }
        fileI.close();
    }else{
        cout << "Couldn't open the file" << endl;
    }
    return 0;
}