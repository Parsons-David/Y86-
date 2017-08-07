# include "y86emul.h"

int main(int argc, char** argv){
  if(argc > 1){
    std::string arg1 (argv[1]);
    if(arg1.compare("--help") == 0 || arg1.compare("-h") == 0){
      std::cout << "Argument Instructions:" << '\n';
      std::cout << '\t' << "--help, -h, instructions" << '\n';
      std::cout << '\t' << "<.y86 file> Y86 source file." << '\n';
    }
  }
  std::cout << "Goodbye!" << '\n';
}
