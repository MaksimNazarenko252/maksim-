#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

int main() {
    string str = "AaBbCcDd";
    string upper = "", lower = "";

    for (char c : str) {
        if (isupper(c)) upper += c;
        if (islower(c)) lower += c;
    }

    cout << "Заглавные буквы: " << upper << endl;
    cout << "Строчные буквы: " << lower << endl;

    vector<char> arr = {'a','1','b','2','c','3'};
    vector<char> letters, digits;

    for (char c : arr) {
        if (isalpha(c)) letters.push_back(c);
        if (isdigit(c)) digits.push_back(c);
    }

    cout << "Буквы: ";
    for (char c : letters) cout << c << " ";
    cout << endl;

    cout << "Цифры: ";
    for (char c : digits) cout << c << " ";
    cout << endl;

    return 0;
}
