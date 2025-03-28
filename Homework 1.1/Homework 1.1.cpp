

#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter your name: ";
    std::string name;
    std::getline(std::cin, name);

    std::cout << name <<"\n";
    std::cout << name.length() << "\n";
    std::cout << name.front() << " " << name.back();

    std::cin;
    return 0;

}

