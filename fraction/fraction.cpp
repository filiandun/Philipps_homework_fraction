#include "fraction.h"
#include <iostream>

Fraction::Fraction() {

}

Fraction::~Fraction() {

}


// SET FUNCTIONS 
// first fraction
void Fraction::set_first_numerator(int numerator)
{
	this->first_numerator = numerator;
}

void Fraction::set_first_denominator(int denominator)
{
	this->first_denominator = denominator;
}

// second fraction
void Fraction::set_second_numerator(int numerator)
{
	this->second_numerator = numerator;
}

void Fraction::set_second_denominator(int denominator)
{
	this->second_denominator = denominator;
}


//// GET FUNCTIONS 
//// first fraction
//int Fraction::get_first_numerator()
//{
//	return this->first_numerator;
//}
//
//int Fraction::get_first_denominator()
//{
//	return this->first_denominator;
//}
//
//// second fraction
//int Fraction::get_second_numerator()
//{
//	return this->second_numerator;
//}
//
//int Fraction::get_second_denominator()
//{
//	return this->second_denominator;
//}


// ARITHMETIC OPERATIONS
void Fraction::addition() // +
{
	std::cout << "Разность: " << this->first_numerator * this->second_denominator + this->second_numerator * this->first_denominator << "/" << this->first_denominator * this->second_denominator << std::endl; // +
}

void Fraction::substruction() // -
{
	std::cout << "Разность: " << this->first_numerator * this->second_denominator - this->second_numerator * this->first_denominator << "/" << this->first_denominator * this->second_denominator << std::endl; // -
}

void Fraction::multiplication() // *
{
	std::cout << "Произведение: " << this->first_numerator * this->second_numerator << "/" << this->first_denominator * this->second_denominator << std::endl; // *
}

void Fraction::division() // :
{
	std::cout << "Частное: " << this->first_numerator * this->second_denominator << "/" << this->first_denominator * this->second_numerator << std::endl; // /
}