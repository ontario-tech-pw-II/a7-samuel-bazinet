#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include <iostream>
#include "Account.h"

using namespace std;
   
class SavingsAccount : public Account {
	private:
		double interestRate; // data member that stores the balance

		public:
        SavingsAccount(double, double);
		double calculateInterest(); 
		void display( ostream & ) const; 
	

};

#endif
