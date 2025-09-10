#include <iostream>
#include <string>   
#include <cmath>

using namespace std;
int f3(int x) {
if (log(x * x * cos(x)) < 3 * x)
return 2 * x;
else
return 2 * x;
}
int main(int argc, char* argv[]) {
    if (argc > 1) {
        int x = stoi(argv[1]);  // lấy số từ command-line
        cout << f3(x) << endl;
    } else {
        cout << "No input" << endl;
    }
    return 0;
}