#ifndef parser_h
#define parser_h

#include <iostream>

class Parser {
private:
    std::string regexArgument;
    std::string payload;
    std::string regexResult;

public:
    Parser(std::string regexArgument);
    void setPayload(std::string payload);
    std::string getResult();
};

#endif