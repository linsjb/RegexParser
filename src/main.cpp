#include <getopt.h>
#include <iostream>

#include "InputReader.h"
#include "Parser.h"
#include "tokens.h"

int main(int argc, char *argv[]) {
  int inputArguments;
  static auto GETOPT_INPUTS = "i:f:r:";
  std::string filePayload;
  std::string regexArgument;
  InputReader inputReader;

  while ((inputArguments = getopt(argc, argv, GETOPT_INPUTS)) != -1) {
    switch (inputArguments) {
      // Input
      case 'i': {
				inputReader.readInput(optarg);
				break;
      }
		
      // File reader
      case 'f': {
				filePayload = inputReader.readFile(optarg);
				break;
      }
		
      // Input arguments for reg.ex
      case 'r': {
				Parser parser(optarg);

				if (filePayload != "") {
					parser.setPayload(filePayload);
				}

				break;
      }

      default: {
				return EXIT_FAILURE;
				break;
      }
    }
  }
  return EXIT_SUCCESS;
}
