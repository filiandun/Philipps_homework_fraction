#include <iostream>
#include "fraction.h"

int main()
{
    setlocale(LC_ALL, "rus");

    Fraction* fraction = new Fraction;
    int first_numerator = 0;
    int first_denominator = 0;
    int second_numerator = 0;
    int second_denominator = 0;

    std::cout << "Введите числитель первой дроби (_/_): "; std::cin >> first_numerator;
    fraction->set_first_numerator(first_numerator);
    //std::cout << std::endl << std::endl << fraction->get_first_numerator() << std::endl << std::endl;

    std::cout << "Введите знаменатель первой дроби (" << first_numerator << "/_): "; std::cin >> first_denominator;
    fraction->set_first_denominator(first_denominator);
    //std::cout << std::endl << std::endl << fraction->get_first_denominator() << std::endl << std::endl;


    std::cout << "Введите числитель второй дроби (_/_): "; std::cin >> second_numerator;
    fraction->set_second_numerator(second_numerator);
    //std::cout << std::endl << std::endl << fraction->get_second_numerator() << std::endl << std::endl;

    std::cout << "Введите знаменатель второй дроби (" << second_numerator << "/_): "; std::cin >> second_denominator;
    fraction->set_second_denominator(second_denominator);
    //std::cout << std::endl << std::endl << fraction->get_second_denominator() << std::endl << std::endl;

    fraction->addition(); // +
    fraction->substruction(); // -
    fraction->multiplication(); // *
    fraction->division(); // :
}
