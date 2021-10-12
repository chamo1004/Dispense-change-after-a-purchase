/*Student Number-IM/2019/105
Student Name-Sandeepani DMC
Assignment Number-01
Due Date-23rd August 2021*/

#include<iostream>
using namespace std;



int main()
{ 
    
    int purchaseAmount , tenderAmount,Change;
    int q1,q2,q3,q4,q5,q6,q7,q8,q9,q10,q11; // variebles for quatients
    int r1,r2,r3,r4,r5,r6,r7,r8,r9,r10,r11; //variables for remainders
    
    cout << "Enter The Amount Of Purchase (Rs.): " ;
    cin >> purchaseAmount; //user input for the purchaseAmount
    
    cout << "Enter the Amount You Have Given (Rs.): " ;
    cin >> tenderAmount; //user input for the tenderAmount
    
    Change = tenderAmount - purchaseAmount;
    
    cout << "Your Change (Rs.) :  "<< Change << endl;
    
    q1 = (Change/5000);
    r1 = (Change % 5000);
    
    q2 = r1 / 2000;
    r2 = r1  % 2000;
    
    q3 = r2 / 1000;
    r3 = r2 % 1000;

    q4 = r3 / 500;
    r4 = r3 % 500;
    
    q5 = r4 / 100;
    r5 = r4 % 100;
    
    q6 = r5 / 50;
    r6 = r5 % 50;
    
    q7 = r6 / 20;
    r7 = r6 % 20;
    
    q8 = r7 / 10;
    r8 = r7 % 10;
    
    q9 = r8 / 5;
    r9 = r8 % 5;
    
    q10 = r9 / 2;
    r10 = r9 % 2;
    
    q11 = r10 / 1;
    r11 = r10 % 1;
    
    cout << endl;
    
    cout << "number of Rs.5000 notes= " << q1 << endl;
    cout << "number of Rs.2000 notes= " << q2 << endl;
    cout << "number of Rs.1000 notes= " << q3 << endl;
    cout << "number of Rs.500  notes= " << q4 << endl;
    cout << "number of Rs.100  notes= " << q5 << endl;
    cout << "number of Rs.50   notes= " << q6 << endl;
    cout << "number of Rs.20   notes= " << q7 << endl;
    cout << "number of Rs.10   coins= " << q8 << endl;
    cout << "number of Rs.5    coins= " << q9 << endl;
    cout << "number of Rs.2    coins= " << q10 << endl;
    cout << "number of Rs.1    coins= " << q11 << endl;
    
  return 0;  
   	
}

