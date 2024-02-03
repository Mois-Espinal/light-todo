 //Command Line Interface VERSION 
 #include <iostream>
 #include <fstream>
 // Hashing function 
 int hash(std::string const& inputString){
     if (inputString == "help") return 1;
 }
 // Add command arguments when executing the file later
 int main(int argc, char *argv[]){
 std::string CommandName = argv[1];
 int hashedCommand = hash(CommandName)
 int params;
 switch(hashedCommand){
 case 1:
 
 break;
 default:
  std::cout << "Unknown command, maybe type light-todo -help";
 }
 return 0;
 }