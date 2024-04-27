// char and || and &&

#include <iostream>
using namespace std;
int main() {
    cout << "do u agree?" << endl;
    
    char c;
    cin >> c;
    
    if (c=='y' && c=='Y') {
        cout << "user agrees" << endl;
        
    }
    else if (c=='n' || c=='N') {
        cout << "user disagrees" << endl;
    }
}
