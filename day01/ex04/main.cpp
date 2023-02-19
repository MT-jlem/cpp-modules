#include <iostream>
#include <string>
#include <fstream>
#include <cstring>

int main(int ac, char **av){

    if (ac == 4 && av[2][0]){
        std::ifstream   inFile;
        std::ofstream    outFile;
        std::string fileName = av[1];
        std::string line;
        size_t  pos = 0;
        size_t  start = 0;

        fileName += ".replace";
        inFile.open(av[1]);
        if (inFile.fail())
            return std::cout << av[1] << " not found\n", 1;
        outFile.open(fileName);
        while(getline(inFile, line))
        {
            line += "\n";
            start = 0;
            while (1){
                pos = line.find(av[2], start);
                if (pos == line.npos)
                    break;
                outFile << line.substr(start, pos - start);
                outFile << av[3];
                start = pos + strlen(av[2]);
            }
            outFile << line.substr(start, line.length() - start);
        }
        inFile.close();
        outFile.close();
    }
    else
        std::cout << "Invalid arguments!\n";
}