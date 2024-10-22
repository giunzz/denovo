#include <bits/stdc++.h>
using namespace std;
#define ll long long
mt19937 rng(11111);

#define NAME_PROB "DNA"

ll randint( ll a, ll b) 
{
	return uniform_int_distribution<ll>(a, b)(rng);
}


void gen_st(const string &fileid, ll n , ll k)
{
	std::ofstream inp("tests/input." + fileid);
	std::ofstream out("tests/output." + fileid);
	inp << n << " " << k << endl;
	string g = "";
    for (int i = 1 ; i <= n ; i++)
	{
		ll tmp = randint(0, 3);
		string kkk = "ATGC";
		g += kkk[tmp];
	}
	vector<string> gstring;
	out<<g;
	ll d[n + 9] = {0};
    for (int i = 0 ; i < n-k+1 ; i++)
    {
		gstring.push_back(g.substr (i,k));
        // inp << g.substr (i,k) << endl;
    }
	
	for (int i = 0 ; i < n-k+1 ; i++)
	{
        while(1)
        {
            ll tmp = randint(0, n - k) ;
            if (!d[tmp]) 
            {
                inp << gstring[tmp] << endl, d[tmp] = 1;
                break;
            }
        }
		
	}
	// std::ofstream.close();

}
void gen_stlap(const string &fileid, ll n , ll k, ll tl_lap)
{
	std::ofstream inp("tests/input." + fileid);
	std::ofstream out("tests/output." + fileid);
	inp << n << " " << k << endl;
	string g = "";
	cerr << n << " " << k << " " <<  tl_lap << endl;
    for (int i = 1 ; i <= n ; i++)
	{
		ll tmp = randint(0, 3);
		string kkk = "ATGC";
		g += kkk[tmp];
	}
	vector<string> gstring;
	out<<g;
	ll d[n + 9] = {0};
    for (int i = 0 ; i < n-k+1 ; i++)
    {
		gstring.push_back(g.substr (i,k));
        // inp << g.substr (i,k) << endl;
    }
	
	for (int i = 0 ; i < n-k+1 ; i++)
	{
        while(1)
        {
            ll tmp = randint(0, n - k) ;
            if (!d[tmp]) 
            {
                inp << gstring[tmp] << endl, d[tmp] = 1;
                break;
            }
        }
		
	}
	// std::ofstream.close();

}

int main() 
{
	system("mkdir tests"); // tao folder tests
	
	// for (int i=0; i<800; i++) 
    // {
	// 	ll n = 5000;
	// 	ll k = 3;
	// 	ll tl_lap = randint(0,100);
	// 	char filename[128];
	// 	sprintf(filename, "%03d", i);
	// 	string fileid(filename);
	// 	cout << "tests/input." << filename << endl;
		
	// 	int thg = i / 50;
	// 	gen_st(fileid, n, (thg + 1) * 3), tl_lap;

		
	// }
	for (int i=0; i<800; i++) 
    {
		ll n = 10;
		ll k = randint(2,5);
		ll tl_lap = randint(0,100);
		char filename[128];
		sprintf(filename, "%03d", i);
		string fileid(filename);
		cout << "tests/input." << filename << endl;
		
		int thg = i / 10;
		gen_stlap(fileid, n, (thg + 1) + k , tl_lap);
		//gen_st(fileid, n , k);

		
	}
	// cout << "building file cpp...\n";
	// system("g++ " NAME_PROB ".cpp -o " NAME_PROB); // build file cpp
	for (int i = 0; i <800; ++i){
		char command[128];
		//sprintf(command, "./" NAME_PROB " < ./tests/input.%03d > ./tests/output.%03d", i, i);
		sprintf(command, "./tests/input.%03d", i);
		sprintf(command, "./tests/output.%03d", i);

		
	}
}