#include<iostream>
using namespace std;
int main()
{
    double j = 20.31, g = 41.76, c = 1.5, m = 15;//вартість одиниці товару
    int nj = 80, ng = 24, nc = 54, nm = 18;//початкова наявність 
    
    bool f1 = false, f2 = false, f3 = false, f4 = false;
    int n1 =0, n2 =0, n3=0, n4=0;
    double sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, daySum = 0, checkSum = 0, discount = 0;
    int number = 1, countPeople = 0;
    do
    {
        sum1 = sum2 = sum3 = sum4 = 0;
        n1 = n2 = n3 = n4 = 0;
        countPeople+=1;
        discount = 0;
        do
        {
            system("cls");
            cout << "\t\t\t#>----------< Person >------------<#" << endl;
            cout << "\t\t\t|\t\t"<< countPeople << endl;
            cout << "\t\t\t#>----------< Product >-----------<#" << endl;
            cout << "\t\t\t|    1 - jewelry set  - 20.31 $    |" << endl;
            cout << "\t\t\t|    2 - garland      - 41.76 $    |" << endl;
            cout << "\t\t\t|    3 - clapperboard -  1.50 $    |" << endl;
            cout << "\t\t\t|    4 - mask         - 15.00 $    |" << endl;
            cout << "\t\t\t#>--------------------------------<#" << endl;
            cout << "\t\t\t|    Exit - 0                      |" << endl;
            cout << "\t\t\t#>--------------------------------<#" << endl;
            cout << "\t\t\tEnter product =>";
            cin >> number;
            switch (number)
            {
            case 0:
            {
                if (n1 == 0 && n2 == 0 && n3 == 0 && n4 == 0)
                {
                    exit(0);
                }
                else
                {
                    cout << "\t\t\tExit..." << endl;
                }
            }break;
            case 1:
            {   int n;
            do
            {

                cout << "\t\t\tEnter quantity=>";
                cin >> n;
                if (nj >= n)
                {
                    sum1 += n * j;
                    n1 += n;
                    nj -= n;
                    break;
                }
                else if (nj < n)
                {
                    cout << "\tNOT AVAILABLE!!! REMAINDER => " << nj << endl;


                }


            } while (n != 0 || n <= nj);
            //cout << "\tEnter quantity(Exit 0)=>";
            //cin >> n;
            }break;
            case 2:
            {
                int n;

                do
                {

                    cout << "\t\t\tEnter quantity=>";
                    cin >> n;
                    if (ng >= n)
                    {
                        sum2 += n * j;
                        n2 += n;
                        ng -= n;
                        break;
                    }
                    else if (ng < n)
                    {
                        cout << "\tNOT AVAILABLE!!! REMAINDER => " << ng << endl;


                    }


                } while (n != 0 || n < ng);
            }break;
            case 3:
            {
                int n;

                do
                {

                    cout << "\t\t\tEnter quantity=>";
                    cin >> n;
                    if (nc >= n)
                    {
                        sum3 += n * j;
                        n3 += n;
                        nc -= n;
                        break;
                    }
                    else if (nc < n)
                    {
                        cout << "\tNOT AVAILABLE!!! REMAINDER => " << nc << endl;


                    }


                } while (n != 0 || n < nc);
            }break;
            case 4:
            {
                int n;

                do
                {

                    cout << "\t\t\tEnter quantity=>";
                    cin >> n;
                    if (nm >= n)
                    {
                        sum4 += n * j;
                        n4 += n;
                        nm -= n;
                        break;
                    }
                    else if (nm < n)
                    {
                        cout << "\t\t\tNOT AVAILABLE!!! REMAINDER => " << nm << endl;


                    }


                } while (n != 0 || n < nm);
            }break;

            }
            if (number != 0)
            {
                if (n1 == 0 && n2 == 0 && n3 == 0 && n4 == 0)
                {
                    cout << "Empty..." << endl;
                }
                else
                {
                    cout << "\t\t\t#-------------------------------------------------------#" << endl;
                    if (n1 != 0)
                        cout << "\t\t\t|\tjewelry set   " << n1 << "x 20.31$\t" << sum1 << "$" << endl;
                    if (n2 != 0)
                        cout << "\t\t\t|\tgarland   " << n2 << "x 41.76$\t" << sum2 << "$" << endl;
                    if (n3 != 0)
                        cout << "\t\t\t|\tclapperboard   " << n3 << "x 1.5$\t" << sum3 << "$" << endl;
                    if (n4 != 0)
                        cout << "\t\t\t|\tmask   " << n4 << "x 1.5$\t" << sum4 << "$" << endl;;
                    cout << "\t\t\t#-------------------------------------------------------#" << endl;
                    checkSum += sum1 + sum2 + sum3 + sum4;
                    cout << "\t\t\t|\tTotal price:   " << checkSum << "$\t" << endl;
                    if (checkSum > 100)
                    {
                        discount = 0.15;
                    }
                    if (checkSum > 500)
                    {
                        discount = 0.25;
                    }
            
                    cout << "\t\t\t|\tDiscount:   " << discount*100 << "%\t" << endl;
                    cout << "\t\t\t|\tTotal price with discount:   " << checkSum-(checkSum*discount) << "$\t" << endl;
                    cout << "\t\t\t#-------------------------------------------------------#" << endl;
                }
            }
            else
            {
                break;
            }
           
            system("pause");
        } while (true);
        system("cls");
        cout << "\t\t\t#-------------------------------------------------------#" << endl;
        daySum += checkSum;
        cout << "\t\t\t|\tAmount of people:   " << countPeople << endl;
        cout << "\t\t\t|\tTotal price:   " << daySum << "$\t" << endl;
        cout << "\t\t\t#-------------------------------------------------------#" << endl;
        system("pause");
    } while (true);
    
    
    return 0;
}

	
	