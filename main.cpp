#include <bits/stdc++.h>
using namespace std;
double getCommission(int sales, int rate)
{
	return double(sales * rate) / (double)100;
}
double calculateEndOfMonthComission(int &SalesPerMonth)
{
	double comission;
    if (SalesPerMonth < 10000)
        commission = getCommission(SalesPerMonth, 5);
    else if (SalesPerMonth >= 10000 and SalesPerMonth <= 14999)
        commission = getCommission(SalesPerMonth, 10);
    else if (SalesPerMonth >= 15000 and SalesPerMonth <= 17999)
        commission = getCommission(SalesPerMonth, 12);
    else if (SalesPerMonth >= 18000 and SalesPerMonth <= 21999)
        commission = getCommission(SalesPerMonth, 14);
    else
        commission = getCommission(SalesPerMonth, 16);

    double eomCommision = commission - 1500;
    return eomCommision;
}
int main()
{
    int SalesPerMonth;
    cout << "Enter the monthly sales of person (in $): " << endl;
    cin >> SalesPerMonth;
    double EndOfMonthCommission = calculateEndOfMonthCommission(SalesPerMonth);
    if (EndOfMonthCommission < 0)
        cout << "Must pay $" << EndOfMonthCommission * -1 << " back to Crazy AI" << endl;
    else
        cout << "Gets a check of $" << EndOfMonthCommission << endl;
    return 0;
}