#include <iostream>
#include <fstream>

using std::string;



int main()
{
    std::ifstream fileIn;
    fileIn.open("testValues.txt");

    if(fileIn.is_open())
        std::cout << "Unchi\n";

    string headers;
    std::getline(fileIn, headers, '\n');

    std::cout << headers << '\n';
    return 0;
}
