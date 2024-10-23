#include <fstream>
#include <istream>
using namespace std; 

int main() {
    ifstream inputfile("example.txt");
    ofstream outputfule("example.txt");
    fstream file("example.txt",ios::in | ios::out); 
    
    return 0;
}
