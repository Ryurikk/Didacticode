#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <string>

//Code by Ryurikk

using namespace std;

//같같같같같Functions Declaration같같같같같

double equ(double n){
	return n;
}

//From Celsius degrees to *
double cenkel(double n){
	return n+273.15;
}

double cenfar(double n){
	return n*(9.0000/5.0000)+32;
}

double cennew(double n){
	return n*(33.0000/100.0000);
}

double cendes(double n){
	return (100-n)*(3.0000/2.0000);
}

double cenran(double n){
	return (n+273.15)*(9.0000/5.0000);
}

//From farenheit degrees to *
double farkel(double n){
	return (n+459.67)*(5.000/9.000);
}

double farnew(double n){
	return (n-32)*(33.0000/60.0000);
}

double farcen(double n){
	return (n-32)*(5.0000/9.0000);
}

double fardes(double n){
	return (121-n)*(5.0000/6.0000);
}

double farran(double n){
	return n+459.67;
}

//From Newton degrees to *
double newkel(double n){
	return n*(100.0000/33.0000)+273.15;
}

double newfar(double n){
	return n*(60.0000/11.0000)+32;
}

double newcen(double n){
	return n*(100.0000/33.0000);
}

double newdes(double n){
	return (33-n)*(50.0000/11.0000);
}

double newran(double n){
	return n*(60.0000/11.0000)+491.67;
}

//From Kelvin degrees to *
double kelnew(double n){
	return (n-273.15)*(33.0000/100.0000);
}

double kelfar(double n){
	return n*(9.0000/5.0000)-459.67;
}

double kelcen(double n){
	return n-273.15;
}

double keldes(double n){
	return (373.15-n)*(3.0000/2.0000);
}

double kelran(double n){
	return (9.0000/5.0000)*n;
}

//From Deslie degrees to *
double descen(double n){
	return 100-n*(2.0000/3.0000);
}

double desfar(double n){
	return 121-n*(6.0000/5.0000);
}

double deskel(double n){
	return 373.15-n*(2.0000/3.0000);
}

double desnew(double n){
	return 33-n*(11.0000/50.0000);
}

double desran(double n){
	return 171.67-n*(6.0000/5.0000);
}

//From Rankine degrees to *
double rancen(double n){
	return (n-491.67)*(5.0000/9.0000);
}

double ranfar(double n){
	return n-459.67;
}

double rankel(double n){
	return n*(5.0000/9.0000);
}

double rannew(double n){
	return (n-491.67)*(11.0000/60.0000);
}

double randes(double n){
	return (580.67-n)*(5.0000/6.0000);
}

//This function decide what conversion function use based on l1 and l2 values
double result (double g, int l1, int l2){
	int res;
		if(l1 == l2){
			res = equ(g);
		}
		else if(l1 == 1 && l2 == 2){
			res = cenfar(g);
		}
		else if(l1 == 1 && l2 == 3){
			res = cenkel(g);
		}
		else if(l1 == 1 && l2 == 4){
			res = cendes(g);
		}
		else if(l1 == 1 && l2 == 5){
			res = cenran(g);
		}
		else if(l1 == 1 && l2 == 6){
			res = cennew(g);
		}
		else if(l1 == 2 && l2 == 1){
			res = farcen(g);
		}
		else if(l1 == 2 && l2 == 3){
			res = farkel(g);
		}
		else if(l1 == 2 && l2 == 4){
			res = fardes(g);
		}
		else if(l1 == 2 && l2 == 5){
			res = farran(g);
		}
		else if(l1 == 2 && l2 == 6){
			res = farnew(g);
		}
		else if(l1 == 3 && l2 == 1){
			res = kelcen(g);
		}
		else if(l1 == 3 && l2 == 2){
			res = kelfar(g);
		}
		else if(l1 == 3 && l2 == 4){
			res = keldes(g);
		}
		else if(l1 == 3 && l2 == 5){
			res = kelran(g);
		}
		else if(l1 == 3 && l2 == 6){
			res = kelnew(g);
		}
		else if(l1 == 4 && l2 == 1){
			res = descen(g);
		}
		else if(l1 == 4 && l2 == 2){
			res = desfar(g);
		}
		else if(l1 == 4 && l2 == 3){
			res = deskel(g);
		}
		else if(l1 == 4 && l2 == 5){
			res = desran(g);
		}
		else if(l1 == 4 && l2 == 6){
			res = desnew(g);
		}
		else if(l1 == 5 && l2 == 1){
			res = rancen(g);
		}
		else if(l1 == 5 && l2 == 2){
			res = ranfar(g);
		}
		else if(l1 == 5 && l2 == 3){
			res = rankel(g);
		}
		else if(l1 == 5 && l2 == 4){
			res = randes(g);
		}
		else if(l1 == 5 && l2 == 6){
			res = rannew(g);
		}
		else if(l1 == 6 && l2 == 1){
			res = newcen(g);
		}
		else if(l1 == 6 && l2 == 2){
			res = newfar(g);
		}
		else if(l1 == 6 && l2 == 3){
			res = newkel(g);
		}
		else if(l1 == 6 && l2 == 4){
			res = newdes(g);
		}
		else if(l1 == 6 && l2 == 5){
			res = newran(g);
		}
		return res;
}

//Funcion Main
int main(int argc, char** argv) {
	int l1; //Input scale
	int l2; //Output scale
    double u; //Mount of degrees
	bool pasa; //Control variable for while cycles
	
	//Array of posible grades available to choose
	string grados[6] = {"Centigrados", "Farenheit", "Kelvin", "Deslie",
					"Rankine", "Newton"};
	
	//Strings to create the main menu				
    string title = "-|-|-|-|-|-||CONVERSOR DE TEMPERATURA||-|-|-|-|-|-\n\n";
    string ops ="1-Centigrados.\n2-Farenheit.\n3-Kelvin.\n4-Deslie.\n5-Rankine.\n6-Newton.\n\n";
		
	do{
		system("cls"); //Clear console (Replace "cls" for "clear" for Linux OS)
		
		cout<<title<<ops;
		do{
			pasa = true;
			system("cls");
			cout<<title<<ops;
			//Here, I'am asking for the income temperature scale
			cout<<"Elige la escala de entrada: "; 
			cin>>l1;
			
			/* With this block, we'll figure out if the type of the
			   value given to the variable is wrong.
			*/	
			if(cin.fail()){
				pasa = false;
				cin.clear();  //Clear the in 
      			cin.ignore();  //Ignoring that error
			}
				
			/* If the type was wrong, or the number if out of the options
			   range, we ask for the value again	
			*/
		}while(!pasa || l1 < 1 || l1 > 6);
			
		do{
			pasa = true;
			system("cls");
			cout<<title<<ops;
			//Here, I'am asking for the new temperature scale to show
			cout<<"Elige la escala de salida: ";
			cin>>l2;
				
			if(cin.fail()){
				pasa = false;
				cin.clear();  
      			cin.ignore();  
			}
				
		}while(!pasa || l2 < 1 || l2 > 6);
		
		do{
			pasa = true;
			system("cls");
			cout<<title<<ops;
			//Here we ask for the value of the given scale to convert
			cout<<"Dame los grados "<<grados[l1-1]<<": ";
			cin>>u;
			
			//We make sure the input type value is correct again
			if(cin.fail()){
				pasa = false;
				cin.clear();  
      			cin.ignore();  
			}
			//If it's wrong, ask for the value again.
		}while(!pasa);
		
		char c;
		/*Give the values to the function result and it'll provide the
		  answer in terms of the previous inputs
		*/
		double res = result(u,l1,l2);
		
	    do{	
	        system("cls");
	        cout<<title<<ops;
	        //Here, we show on the console the result of that conversion
	        cout<<"Conversion de "<<u<<" grados "
				<<grados[l1-1]<<" a "+grados[l2-1]<<": "<<fixed <<setprecision(4)
					<<res<<endl<<endl;
			//We ask if the user want to convert another value	
        	cout<<"Quieres convertir otro numero? (S/N): ";
			cin>>c;
			
			if(cin.fail()){
				c = 'd';
				cin.clear();  
      			cin.ignore();  
			}
			//We make sure the input value is equal to the following options
		}while(c!='S' && c!='s' && c!='N' && c!='n');
		
		if(c=='S' || c=='s'){
			pasa = true; //If is S or s, it means Yes and we start form the beginning
		}
		else{
			pasa = false; //It means a No and we are out of the program.
		}
	}
	while(pasa);
	
	return 0; //The program is over
}
