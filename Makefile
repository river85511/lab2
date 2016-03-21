Lab2: BMI.o Lab2.o
	g++ -o Lab2 BMI.o Lab2.o

BMI.o: BMI.cpp BMI.h
	g++ -c BMI.cpp

Lab2.o: Lab2.cpp BMI.h
	g++ -c Lab2.cpp

clean:
	rm Lab2 *.o
