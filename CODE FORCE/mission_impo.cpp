#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, m, i, j, row, clm, count = 0, max, min, sum = 0,c_max=0;;
    cout << "\n\nEnter Box rows and colums: ";
    cin >> n;
    cin >> m;
    int a[n][m];

    for (row = 0; row < n; row++)
    {
        for (clm = 0; clm < m; clm++)
        {
            cout << "A[" << row << "][" << clm << "] :";
            cin >> a[row][clm];
        }
    }

    cout << "\nA[" << row << "][" << clm << "] Before heist: \n"; // printing array
    for (row = 0; row < n; row++)
    {
        cout << "\t";
        for (clm = 0; clm < m; clm++)
        {
            cout << a[row][clm] << " ";
        }
        cout << "\n";
    }

    for (row = 0; row < n; row++)
    {
        for (clm = 0; clm < m; clm++)
        {
            if (a[row][clm] > 1)
            {
                c_max=0;
                max = a[row][clm];
                for (i = row; i <= row; i++) // finding max in row
                {
                    for (j = 0; j < m; j++)
                    {
                        if(clm!=j && a[i][j] >= max)
                        {
                            c_max++;
                            max = a[i][j];
                            // cout<<"Max in row: "<<max<<endl;
                        }
                    }
                }

                if (max >= a[row][clm] && c_max>0)
                {
                    c_max=0;
                    max = a[row][clm];
                    // cout<<"going to column: "<<max<<endl;
                    for (i = 0; i < n; i++) // finding max in column
                    {
                        for (j = clm; j <= clm; j++)
                        {
    
                            if (row!=i && a[i][j] >= max){
                                c_max++;
                                max = a[i][j];
                                // cout<<"Max in clm: "<<max<<endl;

                            }

                        }
                    }

                    if(max >= a[row][clm] && c_max>0)
                    {
                        int ele = a[row][clm];
                        // cout<<"Row: "<<row<<' '<<"Ele: "<<ele<<endl;
                        for(int k=ele; k>1; k--)
                        {
                            count++;
                        }
                        sum = sum + count;
                        a[row][clm] = 1;
                        count = 0;
                    }
                }
            }
        }
    }


    cout << "\nA[" << row << "][" << clm << "] After heist: \n"; // printing array
    for (row = 0; row < n; row++)
    {
        cout << "\t";
        for (clm = 0; clm < m; clm++)
        {
            cout << a[row][clm] << " ";
        }
        cout << "\n";
    }




    cout<<"\nNumber of Box can Heist: "<<sum;

    return 0;
}