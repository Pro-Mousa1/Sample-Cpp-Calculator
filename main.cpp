#include <iostream>
using namespace std;
int main() {
    int a,b,choice;
    char exit;
    do{
        cout<<"Enter the first number\n";
        cin>>a;
        cout<<"Enter the second number\n";
        cin>>b;
        cout<<"1.Addition 2.Subtraction 3.Multiplication 4.Division\n";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"The sum of the two numbers is: "<<(a+b)<< "\n";
                break;
            case 2:
                cout<<"The sum of the two numbers is: "<<(a-b)<< "\n";
                break;
            case 3:
                cout<<"The sum of the two numbers is: "<<(a*b)<< "\n";
                break;
            case 4:
                if (b!=0){
                    cout<<"The quotient of the numbers are: "<<((float)a/b)<< "\n";
                }else{
                    cout<<"Cannot be divided by zero";
                }
            default:
                cout<<"Invalid input.Please try again\n";
        }
        cout<<"Do you want to continue?(Y/n)\n";
        cin>>exit;
    }while(exit=='Y' || exit== 'y');
    return 0;
}