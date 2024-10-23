#include <fstream>
#include <iostream>
using namespace std; 

int main() {
    ifstream infile("example.txt");
    string line; 
    
    if (infile.is_open()) {
        while (getline (infile,  line)) {
            cout << line << endl;
        }
        infile.close();
    }else{
        cout <<"Error:could not open the file. " << endl; 
        
    }
    return 0;
}
