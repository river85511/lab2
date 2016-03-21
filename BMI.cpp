#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include"BMI.h"

	void BMI::setHeight(float h){
		height = h;
	}

	float BMI::getHeight(){
		return height;
	}

	void BMI::setWeight(float w){
		weight = w;
	}

	float BMI::getWeight(){
		return weight;
	}

	float BMI::getBMI(float weight,float height){
		float BMI_1;
		BMI_1 = weight/( (height/100) * (height/100) );
		return BMI_1;
	}

	string BMI::Cat_Disp(float BMI_1){
		
		string s;
				
		if(BMI_1 < 15){
		s = "Very severely underweight";		
		return s;
		}

		if( (15<=BMI_1) && (BMI_1<16) ){
		s = "Severely underweight";		
		return s;
		}

		if( (16<=BMI_1) && (BMI_1<18.5) ){
		s = "Underweight";		
		return s;
		}

		if( (18.5<=BMI_1) && (BMI_1<25) ){
		s = "Normal";		
		return s;
		}

		if( (25<=BMI_1) && (BMI_1<30) ){
		s = "Overweight";		
		return s;
		}

		if( (30<=BMI_1) && (BMI_1<35) ){
		s = "Obese Class I (Moderately obese)";		
		return s;
		}

		if( (35<=BMI_1) && (BMI_1<40) ){
		s = "Obese Class II (Severely obese)";		
		return s;
		}

		if( 40<=BMI_1 ){
		s = "Obese Class III (Very severely obese)";		
		return s;
		}

	}	


