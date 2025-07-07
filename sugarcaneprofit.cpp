#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        // Calculate the total income
        int total_income = 50 * n;

        // Calculate expenses
        int sugarcane_cost = total_income * 0.2;
        int salt_mint_cost = total_income * 0.2;
        int rent_cost = total_income * 0.3;

        // Calculate total expenses
        int total_expenses = sugarcane_cost + salt_mint_cost + rent_cost;

        // Calculate profit
        int profit = total_income - total_expenses;

        // Output the profit
        cout << profit << endl;
    }
    return 0;
}
