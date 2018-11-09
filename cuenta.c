#include <iostream>
#include <math.h>
#include <fstream>
#include <string>
#include <time.h>


using std::cout;
using std::endl;

using namespace std;

/*


for(int i=0;i<40;i++){
cout<<STR[i]<<endl;
}
*/




int main (int argc,char* argv[])
{

string st1= "1";
string st2="2";
string st3="3";
string st4="4";
string st5="5";
clock_t time;
time=clock();	
	ifstream f(argv[1]);
        string STR;

	if(f.is_open()){
int cont1=0;
int cont2=0;
int cont3=0;
int cont4=0;
int cont5=0;
 
        	while(!f.eof())
        {
			
			getline(f,STR);

			for(int i=0;i<STR.size();i++){
  				
				if(STR[i]==st1[0]){
				cont1=cont1+1;}
if((STR[i]==st1[0])&&(STR[i+1]==st2[0])){
  				cont2=cont2+1;}


if((STR[i]==st1[0])&&(STR[i+1]==st2[0])&&(STR[i+2]==st3[0])){
  				cont3=cont3+1;}


                               
if((STR[i]==st1[0])&&(STR[i+1]==st2[0])&&(STR[i+2]==st3[0])&&(STR[i+3]==st4[0])){
  				cont4=cont4+1;}
				

if((STR[i]==st1[0])&&(STR[i+1]==st2[0])&&(STR[i+2]==st3[0])&&(STR[i+3]==st4[0])&&(STR[i+4]==st5[0])){
  				cont5=cont5+1;}



}

}
/*cout<<cont1<<endl;
cout<<cont2<<endl;
cout<<cont3<<endl;
cout<<cont4<<endl;
cout<<cont5<<endl;
*/


f.close();

double tiempo= (clock()-time)/(double)(CLOCKS_PER_SEC);

ofstream (cuenta);
cuenta.open (argv[2]);
cuenta<<cont1<<endl<<cont2<<endl<<cont3<<endl<<cont4<<endl<<cont5<<endl;
cuenta.close();


ofstream(tiempo1);
tiempo1.open(argv[3]);
tiempo1<<tiempo;
tiempo1.close();


        }







return 0;
}

	


