#include <iostream>
#include <fstream>

int main(int argc, char * argv[]) 
{
    std::string path = std::string(argv[1]);
    std::string write_path = path + std::string("config.ini");

    std::ofstream outfile(write_path);
    if (outfile.is_open()) {
        outfile << "[Settings]" << std::endl;
        outfile << "Key1=Value1" << std::endl;
        outfile << "Key2=Value2" << std::endl;
        outfile.close();
        std::cout << "INI file generated successfully!" << std::endl;
    } else {
        std::cerr << "Unable to create INI file!" << std::endl;
        return 1;
    }
    return 0;
}