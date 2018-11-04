#include<bits/stdc++.h>
using namespace std;
string encrypt(string s,string key)
{
    long long int s1=s.size();
    long long int s2=key.size();
    string res;
    for(long long int i=0;i<s1;i++)
    {
      int p=s[i];
      int k=key[j%s2];
      j=j+1;
      long long r=(p+k)%26;
      res[i]=(char)r;
    }
    return res;
}
int main()
{
	string s,k;
    cout<<"Please enter the text to be encrypted:-"<<endl;
    cin>>s;
    cout<<"Please enter the KEY:-"<<endl;
    cin>>k;
    string cipher=encrypt(s,k);
    cout<<"The encrypted cipher is:- "<<cipher<<endl;
    // cout<<"The decrypted message is:- "<<decrypt(cipher,k);
	return 0;
}
