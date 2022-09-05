#ifndef InputReader_h
#define InputReader_h

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <sstream>

class InputReader {
public:
    std::string readFile(std::string filename);
    std::string readInput(std::string input);
    std::string peek();
    std::string peek(int k);
    std::string consume();
    std::string consume(int k);
    bool isEOF();
};

#endif
