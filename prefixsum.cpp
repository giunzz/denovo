
#include<bits/stdc++.h>
using namespace std;

string common_prefix_suffix(string s1, string s2)
{
    int n1 = s1.length(), n2 = s2.length();
    string t = "";
    if (n1 > n2)
        return t;
    for (int i = 0; i < n1; i++)
        if (s1[n1 - i - 1] == s2[n2 - i - 1]) t += s1[n1 - i - 1];
    return t;
}
string s[10];
int main() {
    
    for (int i = 0 ; i < 8; i++) cin >> s[i];
    for (int i = 0 ; i < 8 ; i++) 
    {
        for (int j = 0 ; j < 8 ; j++)
        {
            if (i == j) continue;
            string n = s[i], m = s[j];
            //cout << n << " " <<m <<  " " << n[n.size() - 1]  << " " << m[0] << endl;
            if (n[n.size() - 1] == m[0]) 
            cout << n << " " <<m <<  " " << endl;
        }
    } 
}

/*
AAA AAT 
AAA ATA 
AAA ATT 
AAT TAA 
AAT TAT
AAT TTA 
AAT TTT
ATA AAA 
ATA AAT 
ATA ATT 
ATT TAA
ATT TAT 
ATT TTA 
ATT TTT
TAA AAA 
TAA AAT
TAA ATA
TAA ATT
TAT TAA
TAT TTA
TAT TTT
TTA AAA
TTA AAT 
TTA ATA
TTA ATT
TTT TAA 
TTT TAT
TTT TTA
*/