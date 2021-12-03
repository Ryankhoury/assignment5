#include <iostream>

using namespace std;

void ShowUsage()
{
    cout<<"To show program usage 'S'"<<endl;
    cout<<"To purchase a surfboard 'P'"<<endl;
    cout<<"To display current purchase press 'C'"<<endl;
    cout<<"To display total amount due press 'T'"<<endl;
    cout<<"To quit the program press 'Q'"<<endl;
}

void MakePurchase(int &iTotalSmall, int &iTotalMedium, int &iTotalLarge, int &iTotalXXS)
{
    int quantity ;
    char selection ;

    cout<<"Please enter the quantity and type (S=small , M=medium , L=Large ,X = XXS) of the surfboard you would like to purchase : "<<endl ;
    cin>>quantity ;
    cin>>selection ;

    switch(tolower(selection))
    {
    case 's':
        iTotalSmall += quantity ;
        break ;
    case'm' :
        iTotalMedium += quantity ;
        break ;
    case'l' :
        iTotalLarge += quantity ;
        break ;
    case'x' :
        iTotalXXS += quantity ;
        break ;

    }
}

void DisplayPurchase(const int iTotalSmall, const int iTotalMedium, const int iTotalLarge, const int iTotalXXS)
{
    if((iTotalSmall== 0)&&(iTotalMedium==0)&&(iTotalLarge==0)&&(iTotalXXS==0))
    {
        cout<<"No purchases made yet."<<endl ;
    }
    if(iTotalSmall!=0)
    {
        cout<<"The total number of small surfboards is "<<iTotalSmall<<endl ;
    }
    if(iTotalMedium!=0)
    {
        cout<<"The total number of medium surfboards is "<<iTotalMedium<<endl ;
    }
    if(iTotalLarge!=0)
    {
        cout<<"The total number of large surfboards is "<<iTotalLarge<<endl ;
    }
    if(iTotalXXS!=0)
    {
        cout<<"The total number of XXS surfboards is "<<iTotalXXS<<endl ;
    }

}
void DisplayTotal(const int iTotalSmall, const int iTotalMedium, const int iTotalLarge, const int iTotalXXS)
{
    float sum = 0 ;

    sum = iTotalSmall*175.00 + iTotalMedium*190.00 + iTotalLarge*200.00 + iTotalXXS*300;


    if(iTotalSmall!=0)
    {
        cout<<"The total number of small surfboards is "<<iTotalSmall<<" at a total of $"<<iTotalSmall*175.00<<endl ;
    }
    if(iTotalMedium!=0)
    {
        cout<<"The total number of medium surfboards is "<<iTotalMedium<<" at a total of $"<<iTotalMedium*190.00<<endl ;
    }
    if(iTotalLarge!=0)
    {
        cout<<"The total number of large surfboards is "<<iTotalLarge<<" at a total of $"<<iTotalLarge*200.00<<endl ;
    }
    if(iTotalXXS!=0)
    {
        cout<<"The total number of XXS surfboards is "<<iTotalXXS<<" at a total of $"<<iTotalLarge*200.00<<endl ;
    }
    if((iTotalSmall== 0)&&(iTotalMedium==0)&&(iTotalLarge==0)&&(iTotalXXS==0))
    {
        cout<<"No purchases made yet."<<endl ;
    }
    else
    {
        cout<<"Amount due : $"<<sum<<endl ;
    }
}




int main()
{
    cout<<"*******************"<<endl ;
    cout<<"**Welcome to my Jhonny Utah's PointBreak SurfShop**"<<endl ;
    cout<<"*******************"<<endl ;

    int iTotalSmall = 0, iTotalMedium = 0, iTotalLarge = 0, iTotalXXS = 0 ;

    char selection ;

    ShowUsage() ;
    do
    {
        cin>>selection ;

        switch(tolower(selection))
        {
        case 's':
            ShowUsage();//call function
            break;
        case 'p':
            MakePurchase(iTotalSmall,iTotalMedium, iTotalLarge, iTotalXXS);  //call function//call function//call function
            break;
        case 'c':
            DisplayPurchase(iTotalSmall, iTotalMedium, iTotalLarge, iTotalXXS);  //call function//call function
            break;
        case 't':
            DisplayTotal(iTotalSmall, iTotalMedium, iTotalLarge, iTotalXXS);   //call function
            break;
        }
    }
    while(tolower(selection)!='q') ;
    return 0;
}
