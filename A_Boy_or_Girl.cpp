#include <iostream>
#include <set>
#include <string>
using namespace std;
int main() {
    string username;
    cin >> username;
    set<char> distinctChars;
    for (char c : username) {
        distinctChars.insert(c);
    }
    if (distinctChars.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << std::endl;
    } else {
        cout << "IGNORE HIM!" << std::endl;
    }

    return 0;
}
