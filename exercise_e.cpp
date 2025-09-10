#include <iostream>
#include <string>

using namespace std;

int findMax(int num1, int num2, int num3) {
    int max = 0;
    if ((num1 > num2) && (num1 > num3))
        max = num1;
    if ((num2 > num1) && (num2 > num3))
        max = num2;
    if ((num3 > num1) && (num3 > num2))
        max = num3;
    return max;
}

int main(int argc, char* argv[]) {
    if (argc == 4) { // nhận đúng 3 input từ command-line
        int a = stoi(argv[1]);
        int b = stoi(argv[2]);
        int c = stoi(argv[3]);
        cout << findMax(a, b, c) << endl;
    } else {
        cout << "Please provide 3 numbers" << endl;
    }
    return 0;
}
