#include <iostream>
using namespace std;
#include <math.h>

int main() {




    //problem 12

    // int a,b,c;
    // cin >> a;
    // cin >> b;
    // cin >> c;
    // if (a+b+c==180) {
    //     cout << "this triangle is valid"<< endl;
    // }
    //
    // else {
    //     cout << "this triangle is not valid"<< endl;
    // }

    //problem 13
    // float a,b,c;
    // cin >> a;
    // cin >> b;
    // cin >> c;
    //
    // if (b*b-4*a*c>0) {
    //     cout << "x1 = " <<(-b+sqrt(b*b-4*a*c))/(2*a)<< endl;
    //     cout << "x2 = " <<(-b-sqrt(b*b-4*a*c))/(2*a)<< endl;
    // }
    //
    // else if (b*b-4*a*c==0){
    //     cout << "x1 = " <<(-b+sqrt(b*b-4*a*c))/(2*a)<< endl;
    // }
    // else {
    //     cout<<"root does not exist"<<endl;
    // }



    //problem 14
    // char a;
    // cin >> a;
    //
    // if (a>65 && a<90) {
    //     cout <<" Uppercase alphabet"<< endl;
    // }
    // else if (a>97 && a<122) {
    //     cout << "Lowercase alphabet"<< endl;
    //
    // }
    // else {
    //     cout << "It is not an alphabet"<< endl;
    // }


    //problem 15

    // float weight1;
    // cout << "Enter weight and price for package 1 " << endl;
    // cin >> weight1;
    // float price1;
    // cin >> price1;
    //cout << "Enter weight and price for package 2 " << endl;
    // float weight2;
    // cin >> weight2;
    // float price2;
    // cin >> price2;
    //
    // if (price1/weight1<price2/weight2) {
    //     cout << "Package 1 has a better price"<< endl;
    // }
    // else if (price2/weight2<price1/weight1) {
    //     cout << "Package 2 has a better price"<< endl;
    //
    // }
    // else {
    //     cout <<" They have equal price"<< endl;
    // }


    //problem 16
    // cout << "enter three digit number " << endl;
    // int n;
    // cin >> n;
    // if (n/100==n%10) {
    //
    //     cout << n<< " is polindrome" << endl;
    // }
    //
    // else  {
    //     cout << n<< "  is not polindrome" << endl;
    // }



    //problem 17
    // cout << "u - Uzbek " << endl;
    // cout << "e - English " << endl;
    // cout << "r - Russian " << endl;
    // cout << "g - German " << endl;
    //
    // char a;
    // cin >> a;
    // if (a == 'u') {
    //     cout << "Assalomu alykum" << endl;
    // }
    // else if (a == 'e') {
    //     cout << "Hello " << endl;
    //
    // }
    // else if (a == 'r') {
    //     cout << "привет" << endl;
    // }
    // else if (a == 'g') {
    //     cout<<"Hallo"<<endl;
    //
    // }
    // else {
    //     cout << "i don't know this language" << endl;
    // }

    //problem 18
    // float x,y;
    // cin>>x>>y;
    // if (sqrt(x*x+y*y) <= 10) {
    //     cout<<"Point ("<<x<<","<<y<<") is in  the circle"<<endl;
    // }
    // else {
    //     cout<<"Point ("<<x<<","<<y<<") is not in  the circle"<<endl;
    // }


    //problem 19
    // float n;
    // cin >> n;
    // int b;
    // b=n*10;
    // switch(b/5){
    //
    //         case  9:
    //             cout << "You got 80% scholarship";
    //             break;
    //         case 8:
    //             cout << "You got 80% scholarship";
    //             break;
    //         case  7:
    //             cout << "You got 60% scholarship";
    //             break;
    //         case  6:
    //             cout << "You got 50% scholarship";
    //             break;
    //         case 5:
    //             cout << "You got 0% scholarship";
    //             break;
    //         case 4:
    //             cout << "You got 0% scholarship";
    //             break;
    //         case 3:
    //           cout << "You got 0% scholarship";
    //              break;
    //         case 2:
    //             cout << "You got 0% scholarship";
    //             break;
    //
    //         case 1:
    //             cout << "You got 0% scholarship";
    //            break;
    //         case 0:
    //            cout << "You got 0% scholarship";
    //            break;
    //
    //     }

    //problem 20
    int a;
    cin >> a;


    if (a<0) {
        cout <<"Invalid input"<< endl;
    }
    else if (a>0 && a<=1) {
        cout<<"3500"<<endl;

    }
    else if (a>1 && a<=3) {
        cout<<"5500"<<endl;
    }
    else if (a>3 && a<=10) {
        cout<<"8500"<<endl;
    }
    else if (a>10 && a<=20) {
        cout<<"10500"<<endl;
    }
    else {
        cout << "The package can not be shifted"<< endl;
    }





    //problem 21
    int b;
    cin >> b;
    switch(b){

            case  1:
            cout << "1-yanvar – Yangi yil (global bayram, ammo O'zbekistonda ham keng nishonlanadi) 14-yanvar – Vatan himoyachilari kuni";
                break;
            case 2:
            cout << "14-fevral – Sevgililar kuni (bu bayram jahonda keng tarqalgan bo'lsa-da, O'zbekistonda ham nishonlanadi) 21-fevral – Xalqaro ona tili kuni";
                break;
            case  3:
            cout << "8-mart – Xalqaro ayollar kuni 21-23 mart – Navro'z (O'zbekistondagi eng katta milliy bayramlardan biri)";
                break;
            case  4:
            cout << "9-aprel – O'zbekiston Respublikasi davlat ramzlari kuni 23-aprel – Xalqaro kitob va mualliflar kuni (bu bayram O'zbekistonda keng nishonlanadi)";
                break;
            case 5:
            cout << "9-may – Xotira va qadrlash kuni 1-may – Mehnat kuni";
                break;
            case 6:
            cout << "1-iyun – Xalqaro bolalar kuni 20-iyun – O'zbekiston Respublikasining davlat mustaqilligi kuni (O'zbekistonda maxsus nishonlanadi) ";
                break;
            case 7:
              cout << "20-iyul – O'zbekiston Respublikasining do'stlik va hamkorlik bayrami";
                 break;
            case 8:
                cout << "31-avgust – O'zbekiston Mustaqilligi kuni (O'zbekistonda eng yirik va eng muhim bayramlardan biri)";
                break;

            case 9:
            cout << "1-sentabr – Bilimlar kuni";
               break;
            case 10:
            cout << "1-oktyabr – Xalqaro qariyalar kuni 14-oktyabr – O'zbekiston Respublikasining davlat mustaqilligi kuni";
               break;
            case 11:
            cout << "9-noyabr – O'zbekiston Respublikasi Milliy bayrog'i kuni 4-noyabr – Mustaqillik bayrami";
                break;
            case 12:
            cout << "8-dekabr – O'zbekiston Respublikasining Konstitutsiyasi kuni 31-dekabr – Yangi yil kechasi";
                break;

        }


    return 0;
}