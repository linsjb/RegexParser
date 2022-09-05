#include "InputReader.h"

std::string InputReader::readFile(std::string filename) {
  std::fstream file;
  file.open(filename);

  if(file.is_open()) {
    std::stringstream buffer;
    buffer << file.rdbuf();
    file.close();
    return buffer.str();
  } else {
    std::cout << "File " << filename << " does not exist or can't open \n";
    return "";
  }
}

std::string InputReader::readInput(std::string input) {
  std::cout << input<<std::endl;
  return input;
}

std::string InputReader::peek() {
	std::cout << "Peek" << std::endl;

  return "peek";
}

std::string InputReader::peek(int k) {
	std::cout << "Peek at: " << k << std::endl;
  
  return "peek";
}

std::string InputReader::consume() {
  std::cout << "Consume" << std::endl;

  return "Consume";
}

std::string InputReader::consume(int k) {
  std::cout << "Consume at: " << k << std::endl;

  return "Consume";
}

bool InputReader::isEOF() {
  return true;
}
