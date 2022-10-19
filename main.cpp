#include<iostream>
using namespace std;
int main()
{
    bool j=20.31, g=41.76, c=1.5, m=15;//вартість одиниці товару
    int nj=80, ng=24, nc=54, nm=18;//початкова наявність 
    cout << "\t\t\t#>----------< Product >-----------<#" << endl;
    cout << "\t\t\t|    1 - jewelry set  - 20.31 $    |" << endl;
    cout << "\t\t\t|    2 - garland      - 41.76 $    |" << endl;
    cout << "\t\t\t|    3 - clapperboard -  1.50 $    |" << endl;
    cout << "\t\t\t|    4 - mask         - 15.00 $    |" << endl;
    cout << "\t\t\t#>--------------------------------<#" << endl;
    cout << "\t\t\t|    Exit - 0                      |" << endl;
    cout << "\t\t\t#>--------------------------------<#" << endl;
    cout << "\t\t\tEnter product =>";
    int number;
    cin >> number;
    system("cls");
    switch (number)
    {case 1:
        int n,zj;
       
     
        cout << "\tEnter quantity=>";
        cin >> n;
        while(n!=0||n<zj)
        {
        zj= nj - n;

        {if (zj >= n)
        {
            double sumj = n * 20.31;
            cout << "\tjewelry set   " << n << "x 20.31$\t" << sumj << "$";
        }
        else if (zj < n)
        {
            cout << "\tNOT AVAILABLE!!! REMAINDER => " << nj << endl;
            cout << "\tEnter quantity(Exit 0)=>";
            cin >> n;

        }
        }
     

    }break;

    }
	
	return 0;
}