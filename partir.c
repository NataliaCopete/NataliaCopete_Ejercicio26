#include <iostream>
#include <fstream>
#include <string>
#include <time.h>



using std::cout;
using std::endl;

using namespace std;

int main (int argc,char* argv[])
{

ifstream f(argv[1]);
string STR;
string* num=new string[10];
for (int i=0; i<10;i++){

num[i]=(string)i;
}


if(f.is_open()){

 
        	while(!f.eof())
        {
			string nombre="0.txt";
			getline(f,STR);
			int divi=STR.length()/10;     /*Luego lo hacemos entrar por parametros*/
			for(int i=0,;i<10;i++){ 
nombre[0]=num[i];
ofstream (nombre1);
nombre1.open(nombre);
			for(int j=i*div;j<(i+1)*divi+1,j++){
  

nombre<<STR[j];
			}
nombre.close();
}




}


f.close();
}
return 0;
}
