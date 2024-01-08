
#include "Rational.h"

Rational::Rational(int numerator, int denominator){
    this->setRational(numerator,denominator);
}
Rational::Rational(const Rational & rational){
    this->setRational(rational._numerator,rational._denominator);
}
void Rational::add(){
    int numerator,denominator;
    cout <<"Enter your Numerator"<<endl;
    cin >> numerator;
    cout<< "Enter your Denominator "<<endl;
    cin >> denominator;
    this-> setRational(numerator,denominator);
}
int Rational::getNumerator() const{
    return this->_numerator;
}
int Rational::getDenominator() const{
    return this->_denominator;
}

void Rational::setNumerator(int numerator){
    this->_numerator =numerator;
}
void Rational::setDenominator(int denominator){
    this->_denominator = denominator;
}
void Rational::setRational(int numerator,int denominator){
    this->setNumerator(numerator);
    this->setDenominator(denominator);
}
void Rational::printRational(){
    reducingFractures();
    cout<<"The Rational is: "<< this->getNumerator() <<"/"<< this->getDenominator()<<endl;
}
void Rational::reducingFractures(){
    int numerator = this->getNumerator();
    int denominator = this->getDenominator();
    int max = ::max(numerator, denominator);
    for (int i = max; i > 1 ; --i) {
        if(numerator % i == 0 && denominator % i ==0){
            this->setRational(numerator / i, denominator/ i);
        }
    }
}
float Rational::realNumber()const{
    int num = this->getNumerator();
    int den = this->getDenominator();
    float real =(float) num/den;
    cout<<real<<endl;
    return real;
}
float Rational::min(const Rational  rational [], int n)const{
    float currentMin = rational[0].realNumber();
    for (int i = 0; i < n; i++) {
        if(rational[i].realNumber() < currentMin){
            currentMin = rational[i].realNumber();
        }
    }
    return currentMin;
}
float Rational::max(const Rational rational[] ,int n)const{
    float currentMax = rational[0].realNumber();
    for (int i = 0; i < n; i++) {
        if(rational[i].realNumber() > currentMax){
            currentMax = rational[i].realNumber();
        }
    }
    return currentMax;
}
