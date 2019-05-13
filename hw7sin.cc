#include <stdio.h>
#include <string.h>
#include <iostream>
#include <fstream>  
#define _USE_MATH_DEFINES
#include <math.h>
#define NB_OF_SAMPLES 10000

int main(){
	
	int f1 = 500;
	int f2 = 1000;
	int f3 = 2000;
	int A = 5000;
	int t = 1;
	float angle1 = 0;
	float angle2 = 0;
	float angle3 = 0;
	
	std::ofstream outfile("hw7_4.txt");

  for (int i = 0; i < NB_OF_SAMPLES; i++)
  {
	float y1 = A * sin (angle1);
	float y2 = A * sin (angle2);
	float y3 = A * sin (angle3);
	
	float y4 = y1 + y2 + y3;
	
    outfile << y4 << "\n";
	
    angle1 += (2 * M_PI * f1 * t) / NB_OF_SAMPLES;
	angle2 += (2 * M_PI * f2 * t) / NB_OF_SAMPLES;
	angle3 += (2 * M_PI * f3 * t) / NB_OF_SAMPLES;
  }
 outfile.close();
}
