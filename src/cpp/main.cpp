#include <iostream>

using namespace std;

extern "C" int get123(void);

int main() {
    cout << "Hello World!" << endl;
    cout << get123() << endl;
    string str; 
    getline(cin, str); 
    return 0;
}