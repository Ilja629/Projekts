#include <iostream>
using namespace std;

int main() {
    int z, n;
    cin >> z;
    for ( int i = 0; i < z; i++ ) {
        cin >> n;
        if ( n % 2 == 0 ) { 
            cout << "Pāra " << endl;
        }
        else {
            cout << "Nepāra" << endl;
        }
    }
    return 0;
}