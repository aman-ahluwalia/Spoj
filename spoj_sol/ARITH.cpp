#include<iostream>
#include<string>
#include<cstring>
#include<bits/stdc++.h>

using namespace std;

int main()

{
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        long int i, len=str.length();
        for(i=0; str[i]!='+' && str[i]!='-' && str[i]!='*'; i++);
        string left(str, 0, i);
        string right(str, i+1);
        const char* left1 = left.c_str();
        const char* right1 = right.c_str();
        long int left2 = atoi(left1);
        long int right2 = atoi(right1);
        if(str[i] == '-' || str[i] == '+')
        {
            long int ans;
            if(str[i] == '-')
                ans = left2 - right2;
            else
                ans = left2 + right2;
            long int ans2 = ans, ans_len=0,dif;
            while(ans2 > 0)
            {
                ans2 /= 10;
                ans_len++;
            }
            if(ans == 0)
                ans_len++;
            if(left.length() > (right.length()+1))
            {
                if(left.length() >= ans_len)
                    cout << left << endl;
                else if(left.length() < ans_len)
                    cout << " " << left << endl;
            }
            else
            {
                dif = right.length() - left.length() + 1;
                while(dif>0)
                {
                   cout << " ";
                   dif--;
                }
                cout << left << endl;
            }
            if((right.length()+1) > left.length())
                cout << str[i] << right << endl;
            else
            {   if(ans_len > left.length())
                    dif = ans_len - right.length() - 1;
                else
                    dif = left.length() - right.length() - 1;
                while(dif > 0)
                {
                    cout<< " ";
                    dif--;
                }
                cout << str[i] << right << endl;
            }
            if((right.length()+1) > left.length())
                dif = right.length() + 1;
            else
            {   if(ans_len > left.length())
                    dif = ans_len;
                else
                    dif = left.length();
            }
            long int dif1 = dif;
            while(dif1--)
                cout << "-";
            cout << endl;
            
           
            while(ans_len < dif)
            {
                cout << " ";
                dif--;
            }
            cout << ans << endl << endl;
        }
        if(str[i] == '*')
        {
            long int i,temp_right=right2,arr[600];
            i = 0;
            long int ans = left2 * right2;
            long int anshi = ans;
            long int tot_len=0;
            while(anshi > 0)
            {
                anshi /= 10;
                tot_len++;
            }
            long int temp;
            if(tot_len > (right.length()+1)) 
                temp = tot_len - left.length();
            else
                temp = right.length() - left.length() + 1;
            while(temp > 0)
            {
                cout << " ";
                temp--;
            }
            cout << left << endl;
            temp = tot_len - right.length() - 1;
            while(temp > 0)
            {
                cout << " ";
                temp--;
            }
            cout << "*" << right << endl;
            long int anshi3 = (right2%10) * left2;
            long int aman3 = 0;
            while(anshi3>0)
            {
                anshi3 /= 10;
                aman3++;
            }
            long int aman4;
            if((right.length()+1) > left.length())
            {
            if((right.length()+1) > aman3)
                aman4 = right.length()+1;
            else
                aman4 = aman3;
            temp = tot_len - aman4;
            while(temp > 0)
            {
                cout << " ";
                temp--;
            }
            long int k;
            for(k=0; k<aman4; k++)
                cout << "-";
            cout << endl;
            }
            else
            {
                if(left.length() > aman3)
                    aman4 = left.length();
                else
                    aman4 = aman3;
                temp = tot_len - aman4;
                while(temp > 0)
                {
                    cout << " ";
                    temp--;
                }
            long int k;
            for(k=0; k<aman4; k++)
                cout << "-";
            cout << endl;
            }
            if(right.length() > 1)
            {
            for(i=0; i<right.length(); i++)
            {
                long int aman = (temp_right%10) * left2;
                long int temp = aman;
                temp_right /= 10;
                long int j=0;
                while(temp > 0)
                {
                    temp /= 10;
                    j++;
                }
                temp = tot_len - j - i;
                if(aman == 0)
                    temp--;
                while(temp > 0)
                {
                    cout << " ";
                    temp--;
                }
                cout << aman  << endl;
            }
            long int aman1;
            if(tot_len > right.length()+1)
                aman1 = tot_len;
            else
                aman1 = right.length()+1;
            while(aman1--)
                cout << "-";
            cout << endl;
            }
            if(tot_len < (right.length()+1))
                cout << " ";
            cout << ans << endl << endl;
        }
 
    }
    return 0;
}
