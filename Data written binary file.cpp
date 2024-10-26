#include <fstream>
#include <iostream>
using namespace std; 

struct data{
    int id; 
    char name[50];
};
int main() {
    data d1 = {1, "John Doe"};
    
    ofstream outfile("data. bin", ios::binary); //open binary file for writing 
    if (outfile.is_open ()) {
        outfile.write (reinterpret_cast<char*>(&d1), sizeof (d1) );
        //write binary data
        outfile.close();
        cout <<"Data written to binary file." << endl; 
         }
         else{
    cout <<"Error:could not open file." << endl; 
}
return 0;
}
