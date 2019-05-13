// Filo I/O

#include <stdio.h>
#include <string.h>
#include <iostream>
#include <fstream>
#include <iomanip>

int main(int argc, char *argv[]){
	
	FILE* fp;  //Declare file pointers for opening argument then opening file directory on each line
	FILE* fq;
 
  int w = 0;  //counter used for each file lien
  
 	if( argc <= 1 ) {     //demonsrtate how to use the program
       printf("Warning: Please use the following format: my_cat.exe file1.list file2.list file3.list file1.list\n");
       return 0;
	  }
     
  for ( int i = 1; i < argc; i++ ){
    if (std::string(argv[i]) == "help") {
       printf("Warning: Please use the following format: my_cat.exe file1.list file2.list file3.list file1.list\n");
       return 0;
       }
  }
	
	for ( int i = 1; i < argc; i++ ){  //loop that will open each of the argument files
		
		fp = fopen(argv[i], "r"); //open file in read mode
		
		std::ifstream file(argv[i]);
		if (file.is_open()) {
		std::string line;
   
    std::cout << "Opening " << std::string(argv[i]) << ":\n";
   
		while (getline(file, line)) { //opens each of the lines in the file as a directory to be displayed
  
    std::cout << "******\n";
    std::cout << std::setfill('0') << std::setw(6) << w << ": " << line.substr (86) << "\n"; //number each file with correct format
    std::cout << "******\n";
    w++;
   
    fq = fopen(line.c_str(), "r"); //opens each line in each file in read mode
   
    std::ifstream f(line.c_str());

    if (f.is_open())
    
        std::cout << f.rdbuf();
        fclose(fq); //close each file when finished and read to display next
        
		}
   
		}
   fclose(fp); //close each argument file when finished
	}
	
}