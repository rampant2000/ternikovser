#include <iostream>

int main(int argc, char* argv[]) {
    int nail[9];
    
    for (int i = 0; i < 9 ; i++) {
        nail[i] = i;
    }
    
    for (int i = 0; i < argc; i++) {
        std::cout << "argv[" << i << "] = " << argv[i] << "\n";
    }
    
    return 0;
}