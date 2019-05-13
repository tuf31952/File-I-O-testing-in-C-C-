#include <stdio.h>
#include <string.h>
#include <iostream>
#include <fstream>  

int main(){
	
	char a = 27;
	short int b = 32767;
	unsigned short int c = 32769;
	float d = -27.2727272727272727272727272727272727272727272727;
	double e = -27.2727272727272727272727272727272727272727272727;
	short int f[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	float g[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	double h[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	
	std::ofstream outfile("hw7_5.bin");
 
     outfile << (int)(a) << "\n";
		 outfile << b << "\n";
		 outfile << c << "\n";
		 outfile << d << "\n";
		 outfile << e << "\n";
      
   
   for ( int x = 0; x < 10; x++ ){
		 outfile << f[x] << " ";
      }
      
       outfile << "\n";
     
   for ( int y = 0; y < 10; y++ ){
		 outfile << g[y] << " ";
      }
      
       outfile << "\n";
       
   for ( int z = 0; z < 10; z++ ){
		 outfile << h[z] << " ";
      }
      
      outfile << "\n";

 outfile.close();
}