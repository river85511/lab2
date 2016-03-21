#include<iostream>
#include<string>
#include"BMI.h"
#include<fstream>
#include<cstdlib>
#include<iomanip>

using namespace std;

int main(){

	float h,w;
	BMI A;

	ifstream inFile("file.in",ios::in);
	if(!inFile){
		cerr << "Failed opening" << endl;
		exit(1);
	}
	
	ofstream outFile("file.out",ios::out);
	if(!outFile){
		cerr << "Failed opening" <<endl;
		exit(1);
	}

	while(inFile>>h>>w){

		A.setHeight(h);
		A.setWeight(w);
		
		if( (A.getWeight()!=0) || (A.getHeight()!=0) ){
		outFile <<  setprecision(4) << A.getBMI(A.getWeight(),A.getHeight()) << "\t" << A.Cat_Disp(A.getBMI(A.getWeight(),A.getHeight())) << endl;
		}	
	}

	cout<<"Finish!"<<endl;
	

	return 0;

}
