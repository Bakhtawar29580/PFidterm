#include <iostream>
using namespace std;

int main(){
	
	int choice,deposit, withdraw;
	int balance = 1000;
	
	do{
		cout<<"   Menu: \n";
		cout<<"1. Check balance \n";
	    cout<<"2. Deposit money \n";
	    cout<<"3. Withdraw money \n";
	    cout<<"4. Exit \n";
	    cout<<"Enter an option: ";
	    cin>>choice;
	    
	    switch(choice){
	    	
	    	case 1:
	    		cout<<"Current balance is : "<<balance<<"\n"<<endl;
	    		break;
	    	case 2:
	    		cout<<"Enter the amount to deposit: ";
	    		cin>>deposit;
	    		cout<<"\n";
	    		if(deposit>0){
	    		balance = balance + deposit;
	    		cout<<"Amount deposited is: "<<balance<<"\n";
				}else{
					cout<<"Negative input. Try again.";
				}
	    		break;	
	    	case 3:
	    		cout<<"Enter the amount to withdraw: ";
				cin>>withdraw;
				cout<<"\n";
			
				if(withdraw <= balance && withdraw>0){
					balance = balance - withdraw;
					cout<<"Amount withdrawed is: "<<withdraw<<"\n";
				} else{
					cout<<"Withdrawl amount exceeded. Re-enter your amount: ";
					cin>>withdraw;
					continue;
				}
			case 4:
				cout<<"Exited";
				break;
			
			default:
			cout<<"Incorrect option. Choose a valid option";
			break;
	    }
	} while(choice != 4);
	return 0;
}
