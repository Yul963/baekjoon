#include <iostream>
#include <string>
#include <cmath>

int main() {
    std::string n;
    int b;
    long long dec = 0;
    std::cin >> n >> b;
    for (int i = n.length() - 1; i >= 0; i--) {
        if(n[i] > 64) 
            n[i] -= 55;
        else if(n[i] > 47)
            n[i] -= 48;
        dec += n[i] * std::pow(b, n.length() -1 - i);
    }
    std::cout << dec;
}