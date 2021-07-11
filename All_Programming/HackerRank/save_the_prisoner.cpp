#include<iostream>
using namespace std;

void saveThePrisoner(long long int prisoners,long long int chocolates,long long int start_at);

int main()
{
    long long int prisoners,chocolates,start_at;
    int test_case;
    cin >>test_case;

    int i;

    for(i=0;i<test_case;i++)
    {
        cin >>prisoners >>chocolates >>start_at;
        saveThePrisoner(prisoners,chocolates,start_at);
    }

return 0;
}

void saveThePrisoner(long long int prisoners,long long int chocolates,long long int start_at)
{
   //cout<<(start_at+chocolates-2)%prisoners+1<<"\n";
    
    int a=(start_at+chocolates)-2;
    cout << a % prisoners +1;
} 



/*
 int i;

    long long int warn=0;
    for(i=1;i<=prisoners;i++)
    {
        if(start_at == i)
        {
            if(chocolates < prisoners)
            {
                warn=(start_at+chocolates)-1;

            }
            if(chocolates >= prisoners)
            {
                if(start_at == 1)
                {
                    warn=prisoners;
                }
                if(start_at!=1)
                {
                    warn=(prisoners-start_at)+1;
                }
                if(start_at==prisoners)
                {
                    warn=prisoners;
                }

            }
        }
        
    }
    cout << warn << "\n";
*/