#include <iostream>
#include <fstream>

int main() {
    char ch;
    std::ifstream infile("TEST.TXT");
    while(infile)
    {
        infile.get(ch);
        std::cout << ch;
    }
    std::cout << std::endl;
    system("pause");
    return 0;
}