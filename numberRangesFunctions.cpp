// Author: Abigayle McVaney
//
// Program Description: Outputs range of numbers for various math functions.
//

#include <iostream>
using namespace std;



int main()
{
    int firstNum; //first number that gets entered
    int secondNum; //second number that gets entered
    int oddNums = 0; //odd total
    int evenNums = 0; //even total
    long int factorial= 1; //gets factorial of second number
    bool firstCheck = true; //makes sure commas go in appropriate places
    bool primeNums; //checks if numbers are prime
    int tracker; //tracking variable for prime loop
    
    // instructions/header
    cout << "Practice with iterations" << endl;
    cout << endl;
    cout << "The function of this program is, given 2 positive " ;
    cout<< "numbers, the program will display the following" << endl;
    cout << endl;
    cout << "\t1.  All even numbers between firstNum and secondNum.\n";
    cout << "\t2.  All odd numbers bewtween firstNum and seconNum. \n";
    cout << "\t3.  Sum of all even numbers between firstNum and secondNum.\n";
    cout << "\t4.  Sum of all odd numbers between firstNum and secondNum.\n";
    cout << "\t5.  All prime numbers firstNum and secondNum.\n";
    cout << "\t6.  Factorial of the secondNum.\n";
    cout << "\t7.  The numbers and their squares between firstNum and secondNum\n";
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Enter The First Number : "; cin >> firstNum;
    //checks if first number is integer
    if(!cin)
    {
        while(!(cin>>firstNum))
        {
            cin.clear();
            cin.ignore(999, '\n');
            cout << "Enter The Second Number : "; cin >> secondNum;
            cout << endl;
            cout << "Error - Invalid Number : Numbers must be Positive integer";
            cout << "\n\nAbigayle McVaney\n";
            cout << "October 2018";
            
        }
    }
    cout << "Enter The Second Number : "; cin >> secondNum;
    cout << endl;
    cout << "You Entered : " << firstNum << " and " << secondNum << endl;
    cout << endl;
    
    //checks if second number is integer
    if(!cin)
        cout << "Error - Invalid Number: Numbers must be Positive integer.\n";
   
    //checks if numbers are positive
    else if(secondNum<0 || firstNum<0)
        cout << "Error - Invalid Number: Numbers must be Positive" << endl;
    
    //checks if numbers are appropriate size
    else if(secondNum<firstNum)
        cout << "Error : First Number Must Be < Second Number." << endl;
    
    //if no errors proceed
    else
    {
        cout << "           1.  All Even Numbers: ";
        
        //prints even numbers;  calculates even numbers total
        for(int i = 0; i <= secondNum; i++)
        {
            if ( i % 2 == 0 && i > firstNum && i < secondNum)
            {
                if (firstCheck)
                    firstCheck = false;
                else
                    cout << ",";
                
                cout << i;
                evenNums += i;
            }
            
            
            
            
        }
        cout << endl;
        firstCheck = true;
        
        
        
        
        
        cout << "           2.  All Odd Numbers: ";
        //prints odd numbers;  calculates odd numbers total
        for (int i = 0; i <= secondNum; i++) //odd
        {
            if (!(i %2 == 0) && i > firstNum && i < secondNum)
            {
                if (firstCheck)
                    firstCheck = false;
                else
                    cout << ",";
                
                cout << i;
                oddNums += i;
            }
        }
        
        
        firstCheck=true;
        
        //Displays even and odd totals
        cout << endl;
        cout << "           3.  Sum Of All Even Numbers: "  << evenNums << endl;
        cout << "           4.  Sum Of All Odd Numbers: "  << oddNums << endl;
        
        cout << "           5.  All Prime Numbers: ";
        
        tracker = firstNum;
        
        //checks for prime numbers
        while(tracker < secondNum)
        {
            primeNums = true;
            for(int i = 2; i <= tracker/2; ++i)
            {  if (tracker % i == 0)
                {
                    primeNums = false;
                    break;
                }
                
            }
        if (primeNums && tracker!=1)
        {
            if (firstCheck)
                firstCheck = false;
            else
                cout << ",";
            
            cout << tracker;
        }
            ++tracker;
            
        }
        cout << endl;
        
        cout << "           6.  Factorial of "<< secondNum << ": ";
        
        
        //calculates the factorial
        for (int i = 1; i <= secondNum; i++)
        {
            factorial *= i;
            
            
        }
        cout << factorial<< endl;
        
        //squares numbers in range of the inputted numbers
        cout << "           7.  Number          Square" << endl;
        for (int i =0; i <= secondNum; i++)
        {
            if (i > firstNum && i < secondNum)
            {
                cout << "\t\t" << i;
                cout <<  "\t\t" << i*i << endl;
            }
        }
        cout << endl;
    }
    
        cout << "Abigayle McVaney" << endl;
        cout << "October 2018" << endl;
        return 0;
}
