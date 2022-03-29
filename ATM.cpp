#include<Iostream>
using namespace std;
void Menu(){
    cout<<"------Menu---------"<<endl;
    cout<<"1.Check Balance"<<endl;
    cout<<"2.Deposit"<<endl;
    cout<<"3.Withdraw"<<endl;
}
int main(){
    int option;
    double  Balance;
    Balance=50000;
    Menu();
    cout<<"Option:\n"<<endl;
    cin>> option;
    switch (option){
        case 1: cout<<"Balance is "<<Balance;
          break;
        case 2: cout<<"Deposite amout is ";
            double DpAmount;
            cin>>DpAmount;
            Balance+= DpAmount;
            cout<< "Balance is "<<Balance;
            break;
        case 3: cout<<"Withdraw amount is ";
            double Withdrawamount;
            cin>>Withdrawamount;
        if(Withdrawamount<=Balance){
		
            Balance-=Withdrawamount;
            cout<< "Balance is "<<Balance;
        }
        else{
		
           cout<<"Not Enough Money";
           break;
       }
    }
   

    return 0;
} 

