#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int n; double db; string s1;
    // Read and save an integer, double, and String to your variables.
    cin>>n;
    cin>>db;
    cin.ignore();
    getline(cin,s1);
    // Print the sum of both integer variables on a new line.
    cout<<i+n<<endl;
    // Print the sum of the double variables on a new line.
   cout<<fixed<<setprecision(1)<<d+db;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    string a=s+s1;
    cout<<endl<<a;
    return 0;
}