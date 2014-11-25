// This program will input American money and convert it to foreign currency
// Walter B. Vaughan

#include <iostream>
#include <iomanip>
using namespace std;

// Prototypes of the functions
void  convertMulti(float dollars, float& euros, float& pesos);
void  convertMulti(float dollars, float& euros, float& pesos, float& yen);
float convertToYen(float dollars);
float convertToEuros(float dollars);
float convertToPesos(float dollars);

// Exchange rates
const float USD_TO_EUR = 1.06;
const float USD_TO_MXN = 9.73;
const float USD_TO_JPY = 124.35;

int main ()
{
	float dollars;
	float euros;
	float pesos;
	float yen;

	cout << fixed << showpoint << setprecision(2);

	cout << "Please input the amount of American Dollars you want converted "
	     << endl;
	cout << "to euros and pesos" << endl;
	cin >> dollars;

	// Fill in the code to call convertMulti with parameters dollars, euros and
	// pesos
	convertMulti(dollars, euros, pesos);
	// Fill in the code to output the value of those dollars converted to both
	// euros and pesos
	cout << "Euros: " << euros << " | Pesos: " << pesos << endl << endl;


	cout << "Please input the amount of American Dollars you want converted\n";
	cout << "to euros, pesos and yen" << endl;
	cin >> dollars;

	// Fill in the code to call convertMulti with parameters dollars, euros,
	// pesos and yen
	convertMulti(dollars, euros, pesos, yen);
	// Fill in the code to output the value of those dollars converted to
	// euros, pesos and yen
	cout << "Euros: " << euros << " | Pesos: " << pesos << " | Yen: "
	     << yen << endl << endl;

	cout << "Please input the amount of American Dollars you want converted\n";
	cout << "to yen" <<endl;
	cin >> dollars;

	// Fill in the code to call convertToYen
	yen = convertToYen(dollars);
	// Fill in the code to output the value of those dollars converted to yen
	cout << "Yen: " << yen << endl << endl;

	cout << "Please input the amount of American Dollars you want converted\n";
	cout << " to euros" << endl;
	cin >> dollars;

	// Fill in the code to call convertToEuros
	euros = convertToEuros(dollars);
	// Fill in the code to output the value of those dollars converted to euros
	cout << "Euros: " << euros << endl << endl;

	cout << "Please input the amount of American Dollars you want converted\n";
	cout << " to pesos " << endl;
	cin >> dollars;

	// Fill in the code to call convertToPesos
	pesos = convertToPesos(dollars);
	// Fill in the code to output the value of those dollars converted to pesos
	cout << "Pesos: " << pesos << endl << endl;

	return 0;
}

// All of the functions are stubs that just serve to test the functions
// Replace with code that will cause the functions to execute properly

//******************************************************************************
//                           convertMult
//
//   task:     This function takes a dollar value and converts it to euros
//             and pesos
//   data in:  dollars
//   data out: euros and pesos
//
//******************************************************************************
void convertMulti(float dollars, float& euros, float& pesos)
{
	euros = convertToEuros(dollars);
	pesos = convertToPesos(dollars);
}

//******************************************************************************
//                           convertMult
//
//   task:     This function takes a dollar value and converts it to euros
//             pesos and yen
//   data in:  dollars
//   data out: euros pesos yen
//
//******************************************************************************
void convertMulti(float dollars, float& euros, float& pesos, float& yen)
{
	euros = convertToEuros(dollars);
	pesos = convertToPesos(dollars);
	yen = convertToYen(dollars);
}

//******************************************************************************
//                           convertToYen
//
//   task:          This function takes a dollar value and converts it to yen
//   data in:       dollars
//   data returned: yen
//
//******************************************************************************
float convertToYen(float dollars)
{
	return USD_TO_JPY * dollars;
}

//******************************************************************************
//                           convertToEuros
//
//   task:          This function takes a dollar value and converts it to euros
//   data in:       dollars
//   data returned: euros
//
//******************************************************************************
float convertToEuros(float dollars)
{
	return USD_TO_EUR * dollars;
}

//******************************************************************************
//                           convertToPesos
//
//   task:          This function takes a dollar value and converts it to pesos
//   data in:       dollars
//   data returned: pesos
//
//******************************************************************************
float convertToPesos(float dollars)
{
	return USD_TO_MXN * dollars;
}
