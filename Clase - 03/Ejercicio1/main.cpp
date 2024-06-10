#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(nullptr));

    for (int i = 0; i < 10; ++i) {
        int numero = std::rand() % 19 + 2;
        cout << numero << " ";
    }
    cout << endl;

    return 0;
}
