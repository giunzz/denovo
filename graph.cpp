#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define sz(a) (int)(a.size())
#define ll long long    

const int N = 100005;

int strnum, k;
string s[N];
ll MOD = 1e9 + 7, bs = 7, head[N], tail[N], bspow[N];

bool khop (int x, int y)
{
    return tail[x] == head[y];
}

int ideg[2*N], odeg[2*N];
bool ctEuler()
{
    for (int i = 0; i < strnum; ++i)
        if (ideg[i] != odeg[i]) return 0;
    return 1;
}

bool dgdiEuler()
{
    int st = -1, en = -1;
    for (int i = 0; i < strnum; ++i)
    {
        if (ideg[i] - odeg[i] == 1)
        {
            if (en == -1) en = i;
            else return 0;
        }
        if (odeg[i] - ideg[i] == 1)
        {
            if (st == -1) st = i;
            else return 0;
        }
        if (abs(ideg[i] - odeg[i]) > 1) return 0;
    }
    return 1;
}

int n, dau[2*N];
vector < vector <pair <int, int> > > adj;
stack <int> path;
bool dd[2*N];
vector <int> res;

string nu = "ATCG";
int change(char x)
{
    for (int i = 0; i < 4; ++i)
        if (x == nu[i]) return i + 1;
    return -1;
}

vector <int> nen;
pair <int, int> str[2*N];

int main()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    bspow[0] = 1; // Hash
    for (int i = 1; i < N; ++i)
        bspow[i] = bspow[i - 1] * bs % MOD;
	
    cin >> n >> k;
    strnum = n - k + 1;
	//cout << "haha" << '\n';
    for (int i = 0; i < strnum; ++i)
    {
        cin >> s[i];
    	//cout << i << '\n';
        for (int j = 0; j < k - 1; ++j)
        {
            head[i] = (head[i] + change(s[i][j]) * bspow[j] % MOD) % MOD;
            tail[i] = (tail[i] + change(s[i][j + 1]) * bspow[j] % MOD) % MOD;
        }
    }

    for (int i = 0; i < strnum; ++i)
    {
        nen.push_back(head[i]);
        nen.push_back(tail[i]);
    }
    sort (nen.begin(), nen.end());
    nen.resize(distance(nen.begin(), unique(nen.begin(), nen.end())));

    int id = 0;
    adj.resize (strnum + 5);
    for (int i = 0; i < strnum; ++i)
    {
        head[i] = lower_bound(nen.begin(), nen.end(), head[i]) - nen.begin();
        str[head[i]] = {i, 0}; // đánh dấu
        tail[i] = lower_bound(nen.begin(), nen.end(), tail[i]) - nen.begin();
        str[tail[i]] = {i, 1};

        adj[head[i]].push_back({tail[i], id++}); // Xây dựng đồ thị
        ideg[tail[i]]++;
        odeg[head[i]]++;
        //cerr << head[i] << " " << tail[i] << endl;

    }

    int st_vertex = 0;
    if (!(ctEuler() || dgdiEuler()))
    {
        cout << "Ko co duong di ahihi" << '\n';
        return 0;
    }
    for (int i = 0; i < strnum * 2; ++i)
    {
        if (odeg[i] - ideg[i] == 1)
        {
            st_vertex = i;
            break;
        }
    }

    path.push(st_vertex); //đỉnh bắt đầu
    while(!path.empty())
    {
        int u = path.top();
        bool k = 0;
        for (int i = dau[u]; i < adj[u].size(); i++)
            if (!dd[adj[u][i].se]) {   // Kiểm tra xem cạnh chưa được đi qua.
                dd[adj[u][i].se] = 1;   // Đánh dấu cạnh này đã đi qua.
                dau[u] = i + 1; k = 1;  // Cập nhật chỉ số cạnh chưa đi qua tiếp theo từ đỉnh `u`.
                path.push(adj[u][i].fi);  // Đẩy đỉnh đích của cạnh vào ngăn xếp để tiếp tục duyệt.
                break;
            }
        if (!k) {res.push_back(u); path.pop();}
    }

    int kiemtra = k - 1;
    if (str[res.back()].se == 0)
        for (int i = 0; i < k - 1; ++i) cout << s[str[res.back()].fi][i];
    else
        for (int i = 1; i < k; ++i) cout << s[str[res.back()].fi][i];

    for (int i = sz(res) - 2; i >= 0; --i)
    {
        int id = str[res[i]].fi;
        int pos = str[res[i]].se;
        cout << s[id][pos + k - 2];
        ++kiemtra;
    }

    if (kiemtra != n)
    {
        cout << "HUHU";
        return 1;
    }

    return 0;
}