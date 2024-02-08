 //Command Line Interface VERSION 
 #include <iostream>
 #include <fstream>
 // Hashing function 
 int hash(std::string const& inputString){
    if (inputString == "add") return 1;
    if (inputString == "due") return 2;
    if (inputString == "help") return 3;
    if (inputString == "list") return 4;
    if (inputString == "delete") return 5;
    if (inputString == "complete") return 6;
    if (inputString == "prioritize") return 7;
   
   return 0;
 }
 // Add command arguments when executing the file later
 int main(int argc, char *argv[]){
 std::string CommandName = argv[1];
 int hashedCommand = hash(CommandName);
 int params;
 switch(hashedCommand){ 
    //ADD COMMAND
    std::ifstream todoList ("list.txt");
    if (todoList.is_open())
      todoList << "\n" << argv[2];
 case 1:
 {

 
 break;
 }
 //HELP COMMAND
 case 3:
 {
 std::ifstream helpPage ("manual.txt");
  if (helpPage.is_open())
        std::cout << helpPage.rdbuf();
 break;
 }
 //LIST COMMAND
 case 4:
  {
 std::ifstream todoList ("list.txt");
  if (todoList.is_open())
        std::cout << todoList.rdbuf();
 break;
 }
 default:
  std::cout << "Unknown command, maybe type light-todo -help";
 }
 return 0;
 }