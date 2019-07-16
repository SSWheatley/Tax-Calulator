#include <iostream>
using namespace std;
int main()
{
	double Annual_Salary;
	double Personnel_Tax_allowance = 11509;
	double New_personnel_Tax_Allowance;
	double sum;
	double sum2;
	double sum3;
	double sum_part2;
	double sum2_part2;
	double sum4;
	double sum5;
	double Basic_Rate = 0.20;			//dictating what the Basic rate is
	double Higher_Rate = 0.40;			//dictating what the Higher rate is
	double Additional_Rate = 0.45;		//dictating what the Additional rate is
	
	
	cout << "What is your Annual Salary" << endl;
	cin >> Annual_Salary;
	
	

	if (Annual_Salary <= 11499.99) //if your income is lower than £11500
	{
		cout << "You Pay £0 in Income Tax" << endl;
		cout << "You earn \x9C" << Annual_Salary << endl;
	}

	else if ((Annual_Salary >= 11500 )&& (Annual_Salary <= 44999.99)) //This will print if your income if higher than £11501 but lower than £45000
	{ 
		
		sum = Annual_Salary - Personnel_Tax_allowance;		//Working out how much is taxable
		sum2 = sum * Basic_Rate;								//How much tax do you have to pay
		
		cout << "You pay \x9C" << sum2 << " in tax." << endl;
		cout << "You earn \x9C" << Annual_Salary - sum2 << " after tax." << endl;
	}
	else if ((Annual_Salary >= 45000) && (Annual_Salary <= 99999.99)) //This will print if your income if higher than £45000 but lower than £99999.99
	{
		
		sum = 33500 * Basic_Rate; // 6700
		sum2 = Annual_Salary - Personnel_Tax_allowance;
		sum3 = sum2 - 33500;
		sum4 = sum3 * Higher_Rate;
		sum5 = sum + sum4;
		
		cout << "You pay \x9C" << sum5 << " in tax." << endl;
		cout << "You earn \x9C" << Annual_Salary - sum5 << " after tax." << endl;

	}
	else if ((Annual_Salary >= 100000) && (Annual_Salary <= 122999.99)) //This will print if your income if higher than £100000 but lower than £122999.99
	{
		New_personnel_Tax_Allowance = Personnel_Tax_allowance - ((Annual_Salary - 100000) / 2);
		cout << "Your new personnel allowance is \x9c" << New_personnel_Tax_Allowance << endl;

		sum = Annual_Salary - New_personnel_Tax_Allowance;	//working out how much the tax allowance has degraded
	
		sum_part2 = sum - 33500; //How much is taxable in the 40% band

		sum2 = sum_part2 * Higher_Rate; //working how much is 40% tax
		cout << "40% tax: " << sum2 << endl;

		sum3 = 33500 * Basic_Rate; // working out how much is 20% tax
		cout << "20% tax: " << sum3 << endl;

		sum4 = sum2 + sum3; //adding them together
		cout << "You pay \x9C" << sum4 << " in tax." << endl;
		cout << "You earn \x9C" << Annual_Salary - sum4 << " after tax." << endl;
	}
	else if ((Annual_Salary >= 123000) && (Annual_Salary <= 149999.99)) //This will print if your income if higher than £123000 but lower than £149999.99
	{
		sum = Annual_Salary - 33500;
		sum2 = sum * Higher_Rate;
		cout << "40% tax: " << sum2 << endl; // how much is taxed on the 40%

		sum3 = 33500 * Basic_Rate; // working out how much is 20% tax
		cout << "20% tax: " << sum3 << endl;

		sum4 = sum2 + sum3; //adding them together
		cout << "You pay \x9C" << sum4 << " in tax." << endl;
		cout << "You earn \x9C" << Annual_Salary - sum4 << " after tax." << endl;
	}
	else if (Annual_Salary >= 150000)
	{
		sum = 33500 * Basic_Rate; //Working out 20% tax
		cout << "20% Tax: " << sum << endl;

		sum2 = 116500 * Higher_Rate; //Working out 40% tax
		cout << "40% Tax: " << sum2 << endl;

		sum3 = Annual_Salary - 150000; //Working out 45% tax
		sum_part2 = sum3 * Additional_Rate;
		cout << "before: " << sum3 << endl;
		cout << "45% Tax: " << sum_part2 << endl;

		sum4 = sum + sum2 + sum_part2;	//Working out the total Tax
		cout << "You pay \x9c" << sum4 << " in tax." << endl;
		cout << "You earn \x9c" << Annual_Salary - sum4 << " after tax" << endl;
		
	}
	system("pause");
	return 0;
}

