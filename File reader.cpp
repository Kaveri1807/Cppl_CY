#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
    string userInput;
    
    cout<<"Enter some text:";
    getline(cin,userInput);
    
    ofstream outfile("myfile.txt");
    if(outfile.is_open())
    {
        outfile<<userInput;
        outfile.close();
        cout<<"Data saved to file."<<endl;
    }
    else
    {
        cout<<"Error opening file for writing."<<endl;
    }
    
    string fileContent;
    ifstream inFile("myfile.txt");
    if(inFile.is_open())
    {
        getline(inFile, fileContent );
        inFile.close();
        cout<<"Data read from file:"<<fileContent<<endl;
    }
    else
    {
        cout<<"Error opening file for reading."<<endl;
    }
    return 0;
    }
