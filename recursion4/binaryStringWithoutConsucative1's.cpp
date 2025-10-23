#include <iostream>
#include <string>
using namespace std;
void generate2(string s, int n) {
    if (s.length() == n) {
        cout << s << endl;
        return;
    }
    generate2(s + '0', n);
    if (s.length() == 0 || s.back() == '0') {
        generate2(s + '1', n);
    }
}
int main() {
    int n = 4;
    generate2("", n);
    return 0;
}
