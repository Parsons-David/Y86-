# include "y86emul.h"

int main(int argc, char** argv){
  std::string filename;


  // TODO : Break up if better
  if(argc > 1){
    std::string arg1 (argv[1]);
    if(arg1.compare("--help") == 0 || arg1.compare("-h") == 0){
      std::cout << "Argument Instructions:" << '\n';
      std::cout << '\t' << "--help, -h, instructions" << '\n';
      std::cout << '\t' << "<.y86 file> Y86 source file." << '\n';
      return 0;
    }
    // TODO : Check Argument
    filename = arg1;
  }

  // TODO : Read from file

  // File Read object
  std::fstream file_input;

  // DEBUG
  std::cout << "OPENING: " << filename << '\n';

  // Open File
  file_input.open(filename.c_str());
  // Determine if file is good.
  if (!file_input.good()){
    // TODO : Exit Properly
    return 1;
  }



  std::cout << "Goodbye!" << '\n';

  // TODO : Allocate Memory Space
  // TODO : Parse Instructions & Populate Memory
  // TODO : Start Execution at IP
}
