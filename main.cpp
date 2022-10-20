#include<iostream>
using namespace std;
int main()
{
    double j=20.31, g=41.76, c=1.5, m=15;//вартість одиниці товару
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
    {
    case 1:
    {   int n;
    do
    {

        cout << "\tEnter quantity=>";
        cin >> n;
        if (nj >= n)
        {
            double sumj = n *j;
            cout << "\tjewelry set   " << n << "x 20.31$\t" << sumj << "$";

            nj -= n;
            break;
        }
        else if (nj < n)
        {
            cout << "\tNOT AVAILABLE!!! REMAINDER => " << nj << endl;

            
        }


    }
        while (n!= 0 || n <= nj);
        //cout << "\tEnter quantity(Exit 0)=>";
        //cin >> n;
    }break;
    case 2:
    { 
        int n;
        
        do
        {

            cout << "\tEnter quantity=>";
            cin >> n;
            if (ng >= n)
            {
                double sumg = n * g;
                cout << "\tgarland   " << n << "x 41.76$\t" << sumg << "$";
                ng -= n;
                break;
            }
            else if (ng < n)
            {
                cout << "\tNOT AVAILABLE!!! REMAINDER => " << ng << endl;

                
            }


        } while (n != 0 || n < ng);
    }break;

    }return 0;
	
}
	