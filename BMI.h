#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>

using namespace std;

class BMI{
	public:
	void setHeight(float h);
	float getHeight();
	void setWeight(float w);
	float getWeight();
	float getBMI(float weight,float height);
	string Cat_Disp(float BMI_1);

	private:
	
	float height;
	float weight;
	
};


