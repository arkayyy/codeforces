#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;

        if(n<10) cout<<n<<endl;

        //else if(n>45) cout<<-1<<endl; //since sum of all 9 digits can only go upto 45 //this is commented because we use a more generalised form of this condition after the loop, i.e. if(sum<n)

        else{
            string s = "";
           int sum = 0;
           for(int i = 9;i>0;i--) //greedy approach. Trying to subtract the largest digit from the target first, so that we are left with smaller digits. Every digit is only being considered once since the answer doesn;t support repititions
           {
               if(sum>=n) //if all digits that could possibly sum up to the given target have been processed
                break;
                
               int toBeAdded = min(n-sum,i); // if n-sum that is leftover sum to be obtained, that digit is less that the digit that is to be added next, then add the balance. 
              // If the balance is less than i, so when i is added to sum, it should always go beyond the given target (i.e. it will become greater than n), which will cause the loop to break in the next iteration
                
                //we are running from digit 9 to 1 just because we want the string to be lexigographically decreasing, so that later we can reverse it to make it lexicographically increasing.
                //this is because a lexicographically increasing number is the shortest form of itself. e.g. 123 < 231 or 321
                s+= to_string(toBeAdded);
               
               sum+=i;
               
           }
           if(sum<n) cout<<-1<<endl; //if the sum could not reach the target 
           else
           {
               reverse(s.begin(),s.end()); cout<<s<<endl;
           }

        }
    }
    return 0;
}