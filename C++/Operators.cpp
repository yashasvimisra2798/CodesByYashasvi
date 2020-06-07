// Given the meal price (base cost of a meal), tip percent (the percentage of the meal price being added as tip), and tax percent (the percentage of the meal price being added as tax) 
// for a meal, find and print the meal's total cost.
// Input Format

// There are 3 lines of numeric input:
// The first line has a double,mealCost  (the cost of the meal before tax and tip).
// The second line has an integer,tipPercent (the percentage of mealCost being added as tip).
// The third line has an integer,taxPercent  (the percentage of mealCost being added as tax).

// Output Format

// Print the total meal cost, where  is the rounded integer result of the entire bill ( with added tax and tip).
// Sample Input

// 12.00
// 20
// 8

// Sample Output

// 15

// CODE:-

#include <bits/stdc++.h>

using namespace std;
class geek
{
public:
// Complete the solve function below.
double solve(double meal_cost, int tip_percent, int tax_percent) {
   double tip,tax,totalCost;
   tip = meal_cost * (tip_percent*0.01) ;
   tax = meal_cost * (tax_percent*0.01);
   totalCost = meal_cost + tip + tax;
return totalCost;
}
};
int main()
{
    double meal_cost,g;
    cin >> meal_cost;
    
    int tip_percent;
    cin >> tip_percent;
    
    int tax_percent;
    cin >> tax_percent;

    geek obj;
    g= obj.solve(meal_cost,tip_percent,tax_percent);
    
    cout<<round(g)<<endl;

    return 0;
}
