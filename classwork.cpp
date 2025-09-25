#include <iostream>
using namespace std;
#include <math.h>

int main() {




    //problem 11
    // int total=0;
    // int pos=0;
    // int neg=0;
    //
    //
    // while (true) {
    //     int number;
    //     cin>>number;
    //     if (number<0) {
    //         neg++;
    //        total++;
    //     }
    //     else if (number>0) {
    //         pos++;
    //         total++;
    //     }
    //     else {
    //         total++;
    //         break;
    //     };
    // }
    // cout<<"Total: "<<total<<endl;
    // cout<<"Positive numbers: "<<pos<<endl;
    // cout<<"Negative numbers: "<<neg<<endl;


    //problem 12
    // int a;
    // cin >> a;
    // for (int i = 0; i < a; i++) {
    //     for (int j = 0; j < a; j++) {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }


    //problem 13

    // int n;
    // cin>>n;
    // for (int i = 1; i < n+1; i++) {
    //     for (int j = 0; j < i; j++) {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }


    //problem 14
    // int n;
    // cin>>n;
    // if (n==0) {
    //     cout<<"The debth is 0";
    // }
    // else{
    // for (int i = 1; i < n+1; i++) {
    //     for (int j = 0; j < i; j++) {
    //         cout<<i;
    //     }
    //     cout<<endl;
    // }}

    //problem 15
    // cout << "Hello World!" <<1/5<< endl;
    // float n;
    // cin>>n;
    // float b=1;
    // float total=0;
    // for (int i = 1; i < n+1; i++) {
    //     if (i==n) {
    //         total += (b/i);
    //         cout<<"1/"<<i<<"=";
    //     }
    //     else {
    //         total += (b/i);
    //         cout<<"1/"<<i<<"+";
    //     }
    //
    //
    //
    // };
    // cout<<total<<endl;
    //
    // cout<<"the sum is "<<total<<endl;

    //problem 16

    // int year;
    // cin>>year;
    // float total=0;
    // float rent=1000;
    // for (int i = 1; i <= year; i++) {
    //     if (i==1) {
    //         total+=(rent*12);
    //         cout<<"For year number "<<i<<" rent is "<<rent*12<<endl;
    //         cout<<"Total for year "<<i<<" is "<<total<<endl;
    //     }
    //     else {
    //         rent=(rent*1.03);
    //         total+=(rent*12);
    //         cout<<"For year number "<<i<<" rent is "<<rent*12<<endl;
    //         cout<<"Total for year "<<i<<" is "<<total<<endl;
    //     }
    // }

    //problem 17

    // int num;
    // cin >> num;
    // int total=0;
    // int o=0;
    // int b=1;
    // int i=1;
    // while(i!=num) {
    //     int t = pow(10,o);
    //     i=num%t;
    //     b=num/t;
    //     total+=b%10;
    //
    //     o++;
    // }
    // cout << "Sum of the digits is "<< total << endl;

   //problem 18

    // string bString;
    // cout << "Enter a binary number: ";
    // cin >> bString;
    // cout << "The decimal equivalent is: " << stoi(bString, nullptr, 2)<< endl;

    //problem 19
    // int num;
    // cout << "Enter a positive integer: ";
    // cin >> num;
    // cout << "Factors of " << num << " are: ";
    //
    //
    // for (int i = 1; i <= num; ++i) {
    //
    //     if (num % i == 0) {
    //      cout << i << " ";
    //     }
    // }
    //  cout << std::endl;


    //  problem 24
    // int even =0;
    // int odd = 0;
    // for (int i = 1; i <= 100000; i++) {
    //     int b;
    //     b=rand();
    //     if (b%2==0) {
    //         even++;
    //     }
    //     else {
    //         odd++;
    //     }
    // }
    // cout <<"number of even numbers" <<even << endl;
    // cout << "numbers of odd numbers"<<odd << endl;
    //
    // return 0;


    return 0;
}
