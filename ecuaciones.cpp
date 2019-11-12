#include <iostream>
#include <fstream>
using namespace std;


int euler(float delta_x, string filename);
int implicito(float delta_x, string filename);

int main(){
   euler(0.1, "euler1.dat");
  implicito(0.1, "implicito1.dat");
    
   euler(0.01, "euler2.dat");
   implicito(0.01, "implicito2.dat");
    
   euler(2.0, "euler3.dat");
   implicito(2.0, "implicito3.dat");
  return 0;
}

int euler(float delta_x, string filename){
  float y=1.0;
  float omega=0.1;
  float x;
    
  ofstream outfile;
  outfile.open(filename);

  while(x <= 4/0.1)  {    
    x += delta_x;
      y=y-(delta_x*omega*y);
    
    outfile << x << " "<< y<< endl;
  }
    outfile.close(); 
    return 0;
}

int implicito(float delta_x, string filename){
  float y=1.0;
  float y1=0.0;
  float omega=0.1;
    float x;

  ofstream outfile;
  outfile.open(filename);
    
  while(x <= 4/0.1) {    
    y1= y/(1+(delta_x*omega));
    x += delta_x;
    outfile << x <<" " << y << endl;
	y=y1;
  }
    outfile.close(); 
    return 0;
}
