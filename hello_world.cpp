
//hello world the programm displays a greeeting with the users name.
// the programm displays a greeeting with the users name
#include <iostream>
#include <string>
// using namespace std; deleted for better style
int
main()
{
  // declaring a variable to store the username
  std::string name;
  // requesting a username
  std::cout << "Enter your name: ";
  std::cin >> name;
  // greeting output
  std::cout << "Hello world from " << name << std::endl;
  return 0;
}
