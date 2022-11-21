#pragma once
#include <iostream>

class Fraction
{
public:
	Fraction();
	~Fraction();

private:
	int first_numerator = 0;
	int first_denominator = 0;

	int second_numerator = 0;
	int second_denominator = 0;

public:
	// SET FUNCTIONS 
	// first fraction
	void set_first_numerator(int numerator);
	void set_first_denominator(int denominator);

	// second fraction
	void set_second_numerator(int numerator);
	void set_second_denominator(int denominator);


	//// GET FUNCTIONS 
	//// first fraction
	//int get_first_numerator();
	//int get_first_denominator();

	//// second fraction
	//int get_second_numerator();
	//int get_second_denominator();


	// ARITHMETIC OPERATIONS
	void addition(); // +
	void substruction(); // -
	void multiplication(); // *
	void division(); // :
};

