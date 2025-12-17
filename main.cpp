#include <iostream>
#include <iomanip>
#include "budget.h"
using namespace std;

int main() {
    const int N_DIVISIONS=4;

    cout<<"Enter main office's budget request";
    double amount;
    cin>>amount;
    Budget::mainOffice(amount);
    Budget divisions[N_DIVISIONS];
    Aux auxOffices[N_DIVISIONS];
    cout<<"\n Enter the budget request for the divisions and ";
    cout<<"\n their auxiliary offices as promoted"<<endl;

    for(int i=0;i<N_DIVISIONS;i++) {
        double bud;
        cout<<"Divison"<<i+1<<": ";
        cin>>bud;
        divisions[i].addBudget(bud);
        cout<<"Division"<<i+1<<"'s auxiliary oddice:  ";
        cin>>bud;
        auxOffices[i].addBudget(bud);
    }
    cout<<setprecision(2);
    cout<<showpoint<<fixed;
    for (int i=0;i<N_DIVISIONS;i++) {
     cout<<"\t DIvision: "<<i+1<<"\t\t\t$ ";
     cout<<setw(7);
     cout << divisions[i].getDivBudget()<<endl;
        cout<<"\t Auxiliary Office of Division "<<endl;
     cout<<"\t $";
     cout<<auxOffices[i].getDivBudget()<<endl;
    }
    cout<<"\t Total budget (including main office)";
    cout<<Budget::getCorpBudget()<<endl;
    return 0;
}
