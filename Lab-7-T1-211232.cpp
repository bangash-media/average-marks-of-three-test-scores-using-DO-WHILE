#include <iostream>

using namespace std;

int main() 
{
	double test1,test2,test3,sum; // variables declaration
	char option;  //variable declaration                       
	cout<<"\n\t\t\tAVERAGE THREE TEST SCORE CALCULATOR\n";
	do
	{
	    cout<<"\n\n\t\tEnter marks in Test 1: "; cin>>test1; //first input from user
	    cout<<"\n\t\tEnter marks in Test 2: "; cin>>test2;  //second input from user
	    cout<<"\n\t\tEnter marks in Test 3: "; cin>>test3;  //third input from user
	    cout<<"\n\n******************************************************************";
	    sum=(test1+test2+test3)/3;  //average formula
	    cout<<"\n\n\t\tAverage of the Entered marks= "<<sum<<endl; //dispaly the output
	    cout<<"\n*********************************************************************\n";
	    cout<<"\n\t\tPress Y to repeat the Calculation: "; cin>>option; 
    }while(option=='Y' || option=='y'); //condition for repeatition of "Do while loop
    cout<<"\n\n\t\tTurning Off..."; //if condition unsatisfied .program will turn off
	return 0;
}
