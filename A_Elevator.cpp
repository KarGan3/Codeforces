#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");

    string door;
    int rail;
    in >> door >> rail;

    if ((door == "front" && rail == 1) || (door == "back" && rail == 2)) {
        out << "L" << endl;
    } else {
        out << "R" << endl;
    }

    return 0;
}
