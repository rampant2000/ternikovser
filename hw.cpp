#include <iostream>
#include <stdlib.h>
#include <unistd.h>


extern char **environ;
int main() {
for (char **env=environ; *env != nullptr; env++){
std::cout << *env <<std::endl;
}

const char* shawerma = std::getenv("MEOW");
if(shawerma != nullptr){
   std::string poop = shawerma;
}else{
    std::cout << "MEOW NOT FOUND!";
}
}