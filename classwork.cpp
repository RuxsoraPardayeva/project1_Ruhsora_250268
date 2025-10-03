#include <iostream>
using namespace std;
int product(float a, float b){
    return a*b;
};

int acc(float v1, float v2, float t) {
    return (v2-v1)/t;
};
void fun(float radius, float &c, float &a) {
    c=2.0*3.14159*radius;
    a=3.14159*radius*radius;
};
void swapVariables(int &a, int &b) {
    a = a + b;
    b = a - b;
    a = a - b;
};

int factorial(int n, int &result) {
    result=1;
    for (int i=1; i<=n; i++) {
        result = result*i;
    }
    return result;
};


int gcd(int num1,int num2) {
    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    return num1;
}

int maxx(int num1, int num2,int num3) {
    if (num1 > num2 & num1 > num3) {
        return num1;
    }
    else if(num3 > num2 and num3 > num1) {
        return num3;
    }
    else {
        return num2;
    }
}
int minn(int num1, int num2,int num3) {
    if (num1 < num2 & num1 < num3) {
        return num1;
    }
    else if (num3 < num2 and num3 < num1) {
        return num3;
    }
    else {
        return num2;
    }
};
int sum(float num1, float num2) {
    return num1 + num2;
};
int subtract(float num1, float num2) {
    return num1 - num2;

};
int divide(float num1, float num2) {
    return num1 / num2;
};
int getTriangularNumber(int n) {
    return n*(n+1)/2;
};
void displayEven(int number) {
    int d;

    while (number > 0) {
        d=number%10;
        if (d%2==0) {
            cout << d << " ";
        }

        number=number/10;
    }
};
int cubeOfDigits(int number) {
    int d;
    int result=0;
    while (number > 0) {
        d=number%10;
        result+=d*d*d;
        number=number/10;
    }
    return result;
};
void isArmstrong(int sum, int number) {
    if (sum == number) {
        cout << number << " is an armstrong number." << endl;
    }
    else {
        cout << number << " is not an armstrong number." << endl;
    }
};

int numberOfDaysInFebruary(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 29;
    }
    else {
        return 28;
    }
};
void printMatrix(int n) {
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout <<0;
            cout<<endl;
        }

    }
    cout << endl;
}
int main() {
    // Problem 1
    // float a, b;
    // cout<<"Enter two numbers: "<<endl;
    // cin>>a>>b;
    // cout << product(a,b) << endl;




    // Problem 2
    // float v1, v2 , t;
    // cout<<"Enter v1 , v2 and t : "<<endl;
    // cin>>v1 >>v2>>t;
    // cout<<acc(v1,v2,t)<<endl;



    // Problem 3
    // float radius,c,a;
    // cout<<"Enter radius : "<<endl;
    // cin>>radius;
    // fun(radius,c,a);
    // cout<<'circumference: '<<c<<"  Area: "<<a<<endl;



    // Problem 4
    // float n, m;
    // cin>>n>>m;
    // cout<<"Area: "<<product(n,m)<<"   Perimeter: "<<product(2,n)+product(2,m)<<endl;



    // Problem 5
    // int a, b;
    // cout<<"Enter two numbers: "<<endl;
    // cin>>a>>b;
    // swapVariables(a,b);
    // cout<<"here is swapped integers  "<<a<<"  "<<b<<endl;



    // Problem 6
    // int n,result;
    // cin>>n;
    // cout<<factorial(n,result)<<endl;


    // Problem 7
    // int a,b;
    // cin>>a>>b;
    // cout<<gcd(a,b)<<endl;


    // Problem 8
    //  int a,b,c;
    // cin>>a>>b>>c;
    // cout<<"maximum: "<<maxx(a,b,c)<<"  minimum: "<<minn(a,b,c)<<endl;



    // Problem 9
    // float num1, num2;
    // int oper;
    // cout << "Enter two numbers: ";
    // cin >> num1 >> num2;
    // cout<<"1. +"<<endl;
    // cout<<"2. -"<<endl;
    // cout<<"3. *"<<endl;
    // cout<<"4. /"<<endl;
    // cout<<"choose one operator ";
    // cin>>oper;
    // cout<<endl;
    // switch (oper) {
    //     case 1:
    //         cout << sum(num1, num2) << endl;
    //     case 2:
    //         cout << subtract(num1, num2) << endl;
    //     case 3:
    //         cout << product(num1, num2) << endl;
    //     case 4:
    //         cout << divide(num1, num2) << endl;
    // }


    // Problem 10

    // for (int i=1; i<76; i++) {
    //     if (i%5==0) {
    //         cout << getTriangularNumber(i)<<endl ;
    //     }
    //     else {
    //         cout << getTriangularNumber(i)<<" " ;
    //     }
    // }


    // Problem 11
    // int number;
    // cin >> number;
    // displayEven(number);


    // Problem 12
    // int number;
    // cin >> number;
    // isArmstrong(cubeOfDigits(number),number);


    // Problem 13
    // int year;
    // cout << "Enter year: ";
    // cin >> year;
    // cout <<numberOfDaysInFebruary(year)<< endl;


    // Problem 16
    // int number;
    // printMatrix(number);






    return 0;
}
}
