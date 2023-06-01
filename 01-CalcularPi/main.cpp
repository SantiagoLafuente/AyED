#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

int main(){
	double pi = 0.0;
	string c = "3.141592";
	for (int i = 0; i <= 866860; i++)
	{
		double formula = 4*(pow((-1), i)/((2*i)+1));
		pi += formula;
        cout << fixed << setprecision(6) << pi << endl;
        string b = to_string(pi);
		
		if(b == c){
			cout << b << " = " << c << " Cantidad de iteraciones: " << i << endl;
			break;
		}
	}
	system("pause");
	return 0;
}