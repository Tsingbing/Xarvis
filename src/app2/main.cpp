#include "toml11/toml.hpp"

#include <filesystem>
#include <iostream>

using namespace std;

int main()
{
    std::string filename = "para/config.toml";

    if (std::filesystem::exists("para/config.toml")) {
        std::cout << "File exists." << std::endl;
    } else {
        std::cout << "File does not exist." << std::endl;
        std::exit(EXIT_FAILURE);
    }
    auto toml = toml::parse("config.toml");

    return 0;
}
