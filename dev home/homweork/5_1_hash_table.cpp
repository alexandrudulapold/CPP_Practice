
////////////////////////////           NU LUCREAZA CU VERSIA ACEASTA         ////////////////////////////


#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    unordered_map<string, float> book = {
        {"apple", 0.67},
        {"milk", 1.49},
        {"avocado", 1.49}
    };

    // print book
    for (pair<string, float> pair : book) {
        cout << pair.first << ": " << pair.second << "$" << endl;
    }
}
