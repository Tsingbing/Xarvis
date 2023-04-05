#include "toml11/toml.hpp"

#include <filesystem>
#include <iostream>

using namespace std;

int main() 
{
  std::ifstream file("config.toml");
  std::string content((std::istreambuf_iterator<char>(file)),
                      (std::istreambuf_iterator<char>()));
  std::cout << content << std::endl;

  // auto toml = toml::parse("config.toml");
  // std::cout << "Application directory path: " << std::filesystem::current_path() << '\n';
  
  // cout << "Hello World!" << endl;
  return 0;
}
