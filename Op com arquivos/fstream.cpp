#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(){

    fstream file;

    char opt = 'y';
    string name, line;

    file.open("tabelita.txt", ios::out);
    while(opt == 'y' || opt == 'Y'){
        cout << "type a name: ";
        cin >> name;
        file << name << endl;
        cout << "wanna type another name?[y/n]";
        cin >> opt;
        system("CLS");
    }
    file.close();

    file.open("tabelita.txt", ios::in);

    cout << "*Nome digitados*\n";

    if(file.is_open()){
        while(getline(file, line)){
            cout << line << endl;
        }
        file.close();
    }else{
        cout << "Couldn't open the file";
    }

    return 0;
}