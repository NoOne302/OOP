#inluce <iostream>
using namespace std;
//base class
//bank account class
class BankAccount{
	protected:
		string name; //data members of abstract class
		long accountNum;
		double balance;
		
	public:
		void deposit() = 0;
		void withDraw() = 0;
		void monthlyInst() = 0;
};
//================================================
//derive from base class
//checking Account class
class checkingAccount :public BackAccount{
	public:
		
};
//savings Account class
class savingsAccount:public BankAccount{
	
};
//certificate of deposit class
class certificateOfDeposit :public BankAccount{
	
};
//service chargee checking class
class seviceChargeChecking :public checkingAccount{
	
};

//no service charge checking class
class noServiceChargeChecking :public checkingAccount{
	
};

//high interest checking class
class highInterestChecking :public noServiceChargeChecking{
	
};
