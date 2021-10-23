#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;


string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    cout << "nhap n" << endl;
    int n, i, s;
    
    s = 0;
    cin >> n;
    for (i = 0; i <= n; i++) {
        if (i % 2 != 0) {
            s = s + i;
        }
    }
    cout << s << endl;
    return 0;
}


string toString (double value) { 
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}
