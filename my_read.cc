#include <stdio.h>
#include <string.h>
#include <iostream>
#include <fstream>  

int main(){

   int input;

	FILE *fp;
   
	std::ifstream inFile;
   inFile.open("hw7.txt");
	
   while(!inFile.eof())
{ 

      inFile >> input;
    	fprintf(stdout, "%i\n" , input);

}
inFile.close(); 
}
