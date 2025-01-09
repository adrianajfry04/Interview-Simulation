#include <iostream> 
using namespace std; 

struct nodeCandidate {
    string name;
    int age;
    int slot;
    string status;
    nodeCandidate *next;
};

int main() 
{ 
    cout << "Hello, World!" << endl; 
    return 0; 
}