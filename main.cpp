#include<iostream>
using namespace std;
int main()
{
    bool j=20.31, g=41.76, c=1.5, m=15;
    int nj=80, ng=24, nc=54, nm=18;
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
    {case 1://zj=nj-n
        int n,zj;
        while (zj != 0||n>0)
     { 
        cout << "\tEnter quantity=>";
        cin >> n;
        zj= nj - n;

    {if(zj>=n)
        {
        cout << "\tjewelry set" << n << "* 20.31$\t" << n * j;
        }
    else if (zj < n)
        {
        cout << "\TNOT AVAILABLE!!! REMAINDER => " << zj << endl;
        cin >> n;
        }
     }

    }break;

    }
	
	return 0;
}