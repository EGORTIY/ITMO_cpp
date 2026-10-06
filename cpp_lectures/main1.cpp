#include <iostream>
#include <string>

enum Problems {
    first=1,
    second,
    third
};

using namespace std;

namespace problems {
    int problem1() {
        int number, result{};
        cin >> number;
        for (; number > 0;) {
            result += number % 10;
            number = number / 10;
        }
        return result;
    }

    int priblem12() {
        string numberstr;
        cin >> numberstr;
        int result{};

        for (char& symbol: numberstr) 
            result += (symbol - '0');

        return result;
    }
}

int main() {
    int number;
    cin >> number;

    switch (number) {
        case Problems::first:
            cout << problems::problem1() << endl;
            break;
        case Problems::second:
            cout << problems::priblem12() << endl;
            break;
    }
}

