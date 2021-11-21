#include <iostream>
#include <iomanip> 
#include <cctype>
using namespace std;


int s = 0;
// three function one to show usage
void ShowUsage(){
    cout<<"To show program usage 'S'"<<endl;
    cout<<"To purchase a surfboard 'P'"<<endl;
    cout<<"To display current purchase press 'C'"<<endl;
    cout<<"To display total amount due press 'T'"<<endl;
    cout<<"To quit the program press 'Q'"<<endl;
}
// make purchase function that take the quantity of the purchased surfboard 
void MakePurchase(int& iTotalSmall, int& iTotalMedium, int& iTotalLarge){
    int quantity;
    
    cout<<"Please enter the quantity surfboard you would like to purchase:";
    cin>>quantity;
   
            s+=quantity;
        
}
//display function that display the quantity of the purchased surfboards
void DisplayPurchase(const int iTotalSmall){
    if(s!=0){
        cout<<"The total number of surfboard is "<<s<<endl;
    }iif(s==0 ){
        cout<<"No purchase made yet.";
    }
}
//DisplayTotal functionthat display the quantity of surfboard purchased and ther total amount of money in dollar 
void DisplayTotal(const int iTotalSmall){
    int sum = 0 ;
     if(s!=0){
        cout<<"The total number of small surfboard is "<<s<<" at a total of $"<<(s*iTotalSmall)<<endl;
        sum+=(s*iTotalSmall);
    }
    if(s==0 ){
        cout<<"No purchase made yet.";
    }
    cout<<"Amount due $"<<(sum)<<endl;
}
int main()
{
 int iTotalSmall = 175 ;
int& small= iTotalSmall ; 
    cout<<setw(59)<<cout.fill('*')<<endl;
    cout<<setw(5)<<cout.fill('*')<<" Welome to my Johnny Utah's PoinBreak Surf Shop "<<setw(5)<<cout.fill('*')<<endl;
    cout<<setw(58)<<cout.fill('*')<<endl<<endl<<endl;
    ShowUsage();
    char choice;
    //do while loop to still take valuesw from the user till he get out or to exit and quit the program
    do{
        cout<<"Please enter selection:";
        cin>>choice;
        //swich statement to check the char entered to idenify the choice of the user from the driven menu
        switch(tolower(choice)){
            case 's':
                 ShowUsage();//call function
            break;
            case 'p':
                MakePurchase(small);//call function//call function//call function
            break;
            case 'c':
                DisplayPurchase(iTotalSmall );//call function//call function
            break;
            case 't':
                DisplayTotal(iTotalSmall );//call function
            break;
            
        }
    }while(tolower(choice)!='q');//the condition to get out of the loop
    cout<<"Thank you";
    return 0;
} 
