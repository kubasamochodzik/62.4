#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


   int convert(int decimal)
    {
        int i = 1, octal = 0;
        while (decimal != 0)
        {
            int rem = decimal % 8;
            decimal /= 8;
            octal += rem * i;
            i *= 10;
        }
        return octal;
    }
    
int main(int argc, char** argv) {
	

	
	fstream plik;  
	

			int liczba=0;
			int liczba1;
			int r=0;
			int ile=0;
			int ilee=0;
								 int i = 1;
					 int o = 0;
			plik.open("liczby2.txt", ios::in); 
			if(plik.good()) 
			while(!plik.eof()) 
			      {
			  		plik>>liczba;
			  		while(liczba!=0)
			  		{
			  			 r=liczba%10;
        				 liczba=liczba/10;
						  
						  	if(r==6)
						  	{
						  		ile++;
							  }
					  }
					  

					}
				

			   
			     plik.close(); 
			     
			     
			     
			plik.open("liczby2.txt", ios::in); 
			if(plik.good()) 
			while(!plik.eof()) 
			      {
					  
					 plik>>liczba;
					 

					liczba1=convert(liczba);
				        
									 
					  while(liczba1!=0)
			  		{
			  			 r=liczba1%10;
        				 liczba1=liczba1/10;
						  
						  	if(r==6)
						  	{
						  		ilee++;
							  }
					  }
			  		
					
					}
				

			   
			     plik.close(); 
			     
				cout<<"Mateusz Kwikert"<<endl<<"osemkowy -> "<<ile<<endl;
				cout<<"dziesietny -> "<<ilee;
						
			   
	
	
	return 0;

}
