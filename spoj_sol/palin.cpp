    #include<iostream>
    #include<string>
     
    using namespace std;
     
    int increment(string &s, int n)
    {
    if(s[n] != '9')
    s[n]++;
    else
    {
    while(s[n] == '9')
    {
    s[n] = '0';
    n--;
    if(s[n] != '9')
    {
      s[n]++;
      break;
    }
    }
    }
    return 0;
    }
     
    int main()
    {
    int t;
    cin >> t;
    while(t--)
    {
    string str;
    cin >> str;
    int i,len = str.length();
    // when lenght is 1.
    if(len == 1)
    {
    if(str == "9")
    cout << "11" << endl;
    else
    cout << ++str[0] << endl;
    continue;
    }
    // when all the digits are 9, we have to include one more digit.
    for(i=0; i<len; i++)
    {
    if(str[i] != '9')
    break;
    }
    if(i == len)
    {
    cout << "1";
    for(i=0; i<len-1; i++)
    cout << "0";
    cout << "1" << endl;
    continue;
    }
    // other than above corner cases, when number of digits is even.
    if(len%2 == 0)
    {
    for(i=len/2; i<len; i++)
    {
    if(str[len-i-1] == str[i])
    continue;
    if(str[len-i-1] < str[i])
    {
    if(i == len/2)
    str[len-i-1]++;
    else
    {
    increment(str, len/2-1);
    i = len/2;
    }
    }
    break;
    }
    if(i == len)
    {
    increment(str, len/2-1);
    i = len/2;
    }
    }
    else
    {
    for(i=len/2+1; i<len; i++)
    {
    if(str[len-i-1] == str[i])
    continue;
    if(str[len-i-1] < str[i])
    {
    increment(str,len/2);
    i = len/2+1;
    }
    break;
    }
    if(i == len)
    {
    increment(str, len/2);
    i = len/2+1;
    }
     
    }
    while(i < len)
    {
    str[i] = str[len-i-1];
    i++;
    }
    cout << str << endl;
    }
    return 0;
    } 


