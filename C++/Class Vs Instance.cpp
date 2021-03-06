// Write a Person class with an instance variable,age , and a constructor that takes an integer, initialAge , as a parameter. The constructor must assign InitialAge to age after confirming the argument passed as initialAge is not negative; 
// if a negative argument is passed as initialAge, the constructor should set age to 0 and print Age is not valid, setting age to 0.. In addition, you must write the following instance methods:

// yearPasses() should increase the age instance variable by 1.
// amIOld() should perform the following conditional actions:
// If age <13 , print You are young..
// If age>=13 and age<18, print You are a teenager..
// Otherwise, print You are old..
// To help you learn by example and complete this challenge, much of the code is provided for you, but you'll be writing everything in the future. The code that creates each instance of your Person class is in the main method. Don't worry if you don't understand it all quite yet!

// Input Format

// Input is handled for you by the stub code in the editor.

// The first line contains an integer, T (the number of test cases), and the T subsequent lines each contain an integer denoting the age of a Person instance.

// Constraints
// 1<= T <=4
// -5<= age <=30

// Output Format

// Complete the method definitions provided in the editor so they meet the specifications outlined above; the code to test your work is already in the editor. If your methods are implemented correctly, each test case will print 2 or 3 lines (depending on whether or not a valid initialAge was passed to the constructor).

// Sample Input

// 4
// -1
// 10
// 16
// 18

// Sample Output

// Age is not valid, setting age to 0.
// You are young.
// You are young.

// You are young.
// You are a teenager.

// You are a teenager.
// You are old.

// You are old.
// You are old.


// CODE:-

using namespace std;
#include <iostream>

class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };

    Person::Person(int initialAge){
        // Add some more code to run some checks on initialAge
     if(initialAge>0)
     {
     age = initialAge;
     }
     else {
       age = 0;
       cout<<"Age is not valid, setting age to 0."<<endl;
     }    
    }

    void Person::amIOld(){
     
         if(age<13){
             cout<<"You are young."<<endl;
         }

         else if(age>=13 && age<18){
             cout<<"You are a teenager."<<endl;
             
         }
        else if(age>=18)
        {
            cout<<"You are old."<<endl;
            
        }
        else
        {
            cout<<"You are young."<<endl;
            
        } 
    }

    void Person::yearPasses(){
        
         age=age+1;
    }

int main(){
    int t;
	int age;
    cin >> t;
    for(int i=0; i < t; i++) {
    	cin >> age;
        Person p(age);
        p.amIOld();
        for(int j=0; j < 3; j++) {
        	p.yearPasses(); 
        }
        p.amIOld();
      
		cout << '\n';
    }

    return 0;
}
