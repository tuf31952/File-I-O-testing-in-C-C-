#include <stdio.h>
#include <string.h>
#include <iostream>
#include <fstream>  

int main(){
   
   FILE* file = fopen("hw7_5.bin", "r");

   char line[256];

   while (fgets(line, sizeof(line), file)) {

    fprintf(stdout, "%s", line);
    
    }

   fclose(file);
    
}
