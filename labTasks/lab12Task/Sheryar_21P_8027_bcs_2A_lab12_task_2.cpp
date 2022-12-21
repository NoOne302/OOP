#include <iostream>
#include <iomanip>

using namespace std;
class BankAccount
{
public:
BankAccount(double);
void credit(double);
bool debit(double); 
double getBalance();

protected:
double accounttBalance;
};

BankAccount::BankAccount(double openingDeposit)
{
if (openingDeposit < 0.0)
{
cout << " Invalid entry" << endl;
accounttBalance = 0.0;
}
else
accounttBalance = openingDeposit;
}

//-----------------------------------------------

void BankAccount::credit(double deposit)
{
accounttBalance += deposit;

cout << setw(10) << setw(23) << "credit to account" << right
<< setw(5) << deposit;
}

//-----------------------------------------------

bool BankAccount::debit(double withdrawal) // account withdrawals
{
if (withdrawal > accounttBalance)
{
cout << " Invalid entry. Amount exceeds limit." << endl;
return false;
}
else
{
accounttBalance -= withdrawal;

cout << setw(16) << setw(20) << "debit to account" << right
<< setw(15) << withdrawal;

return true;
}
}

//-----------------------------------------------

double BankAccount::getBalance()
{
cout << " Current Account Balance is " << accounttBalance << endl;

return accounttBalance;
}

//-----------------------------------------------
// class declaration SavingsACCOUNT_H
//-----------------------------------------------

class SavingsAccount : public BankAccount
{
public:
SavingsAccount(double = 0.0); // default constructor
~SavingsAccount(); // destructor
void modifyInterestRate(double); // set new interest rates
void calcInterest(); // add monthly interest to account
double getSavingsBalance(); // returns the current savingsBalance
void Print();

private:
double interestEarned;
double savingsBalance;
double annualInterestRate;
};

SavingsAccount::SavingsAccount(double saveDeposit)
:BankAccount(saveDeposit) { //call base class constructor{
if (saveDeposit >= 0) //check initial savingsBalance
{
savingsBalance = saveDeposit;
}
else
{
savingsBalance = 0;
cout << "Error: " << endl;
cout << "Initial savingsBalance is invalid. Must be greater "
<< "than or equal to $0.0." << endl;
}
}

SavingsAccount::~SavingsAccount() // destructor
{
}

void SavingsAccount::modifyInterestRate(double newRate)
{
annualInterestRate = newRate;
}

void SavingsAccount::calcInterest() // calc monthly interest earnings
{
interestEarned = (BankAccount::accounttBalance * annualInterestRate * 0.01) / 12;
credit(interestEarned);
}

double SavingsAccount::getSavingsBalance() // returns the current savingsBalance
{
return (savingsBalance = BankAccount::getBalance());
}

void SavingsAccount::Print()
{
cout << fixed << showpoint;
cout << setprecision(2);
getSavingsBalance();
}

class CheckingAccount : public BankAccount
{
public:
CheckingAccount(double = 0.0);
~CheckingAccount();
void deposits(double);
void drafts(double);
void transactionFee(double);
void set_transFee(double);
double getCheckingBalance();
void Print();

private:
double transFee;
double BalanceChecking;
};

CheckingAccount::CheckingAccount(double ChkDeposit)
:BankAccount(ChkDeposit) { //call base class constructor{
if (ChkDeposit >= 0) //check initial Balance
{
BalanceChecking = ChkDeposit;
}
else
{
BalanceChecking = 0;
cout << "Error: " << endl;
cout << "Initial Checking Balance is invalid. Must be greater "
<< "than or equal to $0.0." << endl;
}
}

CheckingAccount::~CheckingAccount() // destructor
{
}

void CheckingAccount::deposits(double moneyIn) // account deposits
{
BankAccount::credit(moneyIn);
}


void CheckingAccount::drafts(double moneyOut)
{
if (BankAccount::debit(moneyOut))
{
cout << endl << setw(14) << " ";
transactionFee(transFee); // add fees
}
}

void CheckingAccount::transactionFee(double transFee)
{
BankAccount::debit(transFee); // use debit() to deduct fees
}

void CheckingAccount::set_transFee(double cost)
{
transFee = cost;

}

double CheckingAccount::getCheckingBalance() // returns the current savingsBalance
{
return (BalanceChecking = BankAccount::getBalance());
}

void CheckingAccount::Print()
{
cout << fixed << showpoint;
cout << setprecision(2);
getCheckingBalance();
}
int main()
{
int beginBalance = 1500;
int chkingBal = 75000;
double intRate1 = 2.00;
double intRate2 = 4.0;
double intRate3 = 4.5;

BankAccount NewPerson0(beginBalance);

cout << fixed << showpoint;
cout << setprecision(2);
cout << endl;
cout << " Account Summary \n";
cout << endl;
cout << " JANUARY Interest Rate = " << intRate1 << "%" << endl;
cout << " NewPerson0 \n";
cout << " 01Jan06 ";
NewPerson0.getBalance();
cout << " 02Jan06 ";
NewPerson0.credit(150);

cout << "\n 04Jan06 ";
NewPerson0.debit(350);

cout << "\n 31Jan06 ";
NewPerson0.getBalance();

beginBalance = 3000;

SavingsAccount NewSaver1(beginBalance); // intialize object NewSaver1
NewSaver1.modifyInterestRate(3.0);

cout << endl;
cout << " NewSaver1 \n";
cout << " 01Jan06 ";
NewSaver1.Print();

cout << " 14Jan06 ";
NewSaver1.debit(420);
cout << endl;

cout << " 31Jan06 ";
NewSaver1.calcInterest(); // accumulate January interest
cout << endl;

cout << " 31Jan06 ";
NewSaver1.Print();
cout << endl;
cout << endl;

NewSaver1.modifyInterestRate(intRate2); // change interest rate to 4%


cout << " july interest rate = " << intRate2 << "%" << endl;
cout << " New1 \n";
cout << " 01july06 ";

NewSaver1.Print();

cout << " 28july06 ";
NewSaver1.calcInterest();
cout << endl;
cout << " 28july06 ";
NewSaver1.Print();
cout << endl;

SavingsAccount NewSaver2(beginBalance);

NewSaver2.modifyInterestRate(intRate2);


cout << " NewSaver2 \n";
cout << " 01Feb06 ";
NewSaver2.Print();
cout << " 20Feb06 ";
NewSaver2.credit(1650);
cout << endl;
cout << " 28Feb06 ";
NewSaver2.calcInterest();
cout << endl;
cout << " 28Feb06 ";
NewSaver2.Print();
cout << endl;

CheckingAccount ChkingGuy1(chkingBal);
ChkingGuy1.set_transFee(1.50);

cout << endl;
cout << " june interest Rate = " << intRate3 << "%" << endl;
cout << " checking1 \n";
cout << " 01june06 ";

ChkingGuy1.Print();
cout << " 05june06 ";
ChkingGuy1.drafts(125);
cout << endl;
cout << " 10june06 ";
ChkingGuy1.drafts(453.23);
cout << endl;
cout << " 12june06 ";
ChkingGuy1.drafts(1578.50);
cout << endl;
cout << " 1June06 ";
ChkingGuy1.drafts(100.00);
cout << endl;
cout << " 26june06 ";
ChkingGuy1.deposits(2700.00);
cout << endl;
cout << " 31june06 ";
ChkingGuy1.Print();
cout << endl;
cout << " 31june06 ";

cout << endl;

cout << endl;

system("pause");
return 0;
}
