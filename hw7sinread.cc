#include <stdio.h>
#include <string.h>
#include <iostream>
#include <fstream>  

int main(){

   float input;

	 FILE *fp;
   
	 std::ifstream inFile;
   inFile.open("hw7_4.txt");
	
   while(!inFile.eof())
{ 

      inFile >> input;
    	fprintf(stdout, "%f\n" , input);

}
inFile.close(); 
}
