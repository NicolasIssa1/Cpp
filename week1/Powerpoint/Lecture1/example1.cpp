#include <iostream>
#include <string>

int main()
{
    std::string name;
    std::cin >> name;

    std::cout << "\nHello " << name << "!\n";

    std::cout << "Your name contains " << name.length()
              << " characters" << std::endl;

  return 0;
}