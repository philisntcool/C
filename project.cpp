#include <iostream>

int main(){
    char test;

    std::cout << "testing, testing. is this thing on?\n";
    std::cin >> test;

    if (test == 'y' || test == 'Y') {
    std::cout << "we're up and running!\n";
    }
    
    else {
        std::cout << "we're not running.\n";
    }
    return 0;
}