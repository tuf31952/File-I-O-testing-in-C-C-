#include <stdio.h>
#include <string.h>
#include <iostream>
#include <fstream>  

int main(){
	
	signed int MAX_VAL = 25000;
	signed int MIN_VAL = -25000;
 	signed int x;
	int N = 100;
	
	std::ofstream outfile("hw7.txt");

 for(long i = 0; i < N; i++) {
		 fprintf(stdout, "%d\n",
         x = (MAX_VAL - MIN_VAL) / (float)N * i + MIN_VAL);
         outfile << x << "\n";
	} 
 outfile.close();
}