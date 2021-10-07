#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
#define SZ(x) ((int)((x).size()))

// Returns the time elapsed in nanoseconds from 1 January 1970, at 00:00:00.
LL get_time() {
    return chrono::duration_cast<chrono::nanoseconds>(
        chrono::steady_clock::now().time_since_epoch())
        .count();
}

template <typename T1, typename T2>
string print_iterable(T1 begin_iter, T2 end_iter, int counter) {
    bool done_something = false;
    stringstream res;
    res << "[";
    for (; begin_iter != end_iter and counter; ++begin_iter) {
        done_something = true;
        counter--;
        res << *begin_iter << ", ";
    }
    string str = res.str();
    if (done_something) {
        str.pop_back();
        str.pop_back();
    }
    str += "]";
    return str;
}

template <typename S, typename T>
ostream& operator <<(ostream& out, const pair<S, T>& p) {
    out << "{" << p.first << ", " << p.second << "}";
    return out;
}

template <typename T>
ostream& operator <<(ostream& out, const vector<T>& v) {
    out << "[";
    for (int i = 0; i < (int)v.size(); i++) {
        out << v[i];
        if (i != (int)v.size()-1) out << ", ";
    }
    out << "]";
    return out;
}

template<class TH>
void _dbg(const char* name, TH val){
    clog << name << ": " << val << endl;
}
template<class TH, class... TA>
void _dbg(const char* names, TH curr_val, TA... vals) {
    while(*names != ',') clog << *names++;
    clog << ": " << curr_val << ", ";
    _dbg(names+1, vals...);
}

#if DEBUG && !ONLINE_JUDGE
    ifstream input_from_file("input.txt");
    #define cin input_from_file

    #define dbg(...) _dbg(#__VA_ARGS__, __VA_ARGS__)
    #define dbg_arr(x, len) clog << #x << ": " << print_iterable(x, x+len, -1) << endl;
#else
    #define dbg(...)
    #define dbg_arr(x, len)
#endif

///////////////////////////////////////////////////////////////////////////
//////////////////// DO NOT TOUCH BEFORE THIS LINE ////////////////////////
///////////////////////////////////////////////////////////////////////////

const int M = 5;

struct Rank {
    int r[M];
};

bool operator<(const Rank& A, const Rank& B) {
    int cnt = 0;
    for (int i = 0; i < M; i++) cnt += A.r[i] < B.r[i];
    return cnt >= 3;
}

void solve() {
    int n;
    cin >> n;

    vector<Rank> ath(n);
    for (int i = 0; i < n; i++) for (int j = 0; j < M; j++) cin >> ath[i].r[j];
    
    int gold = 0;
    for (int i = 1; i < n; i++) {
        if (ath[i] < ath[gold]) gold = i;
    }

    for (int i = 0; i < n; i++) {
        if (i == gold) continue;
        if (ath[i] < ath[gold]) {
            cout << -1 << "\n";
            return;
        }
    }
    cout << gold+1 << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); // Remove in problems with online queries!
    
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) solve();
}
