#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, float> mp;
    mp["BM"] = 10.5;
    mp["HT"] = 18;
    mp["Hindu"] = 20.5;
    mp["TOI"] = 26;
    mp["ET"] = 34;

    int n;
    cin >> n;
    vector<string> ans;
    if (mp["BM"] + mp["HT"] <= n)
        ans.push_back("BM, HT");
    if (mp["BM"] + mp["HT"] + mp["Hindu"] <= n)
        ans.push_back("BM, HT, Hindu");
    if (mp["BM"] + mp["HT"] + mp["Hindu"] + mp["TOI"] <= n)
        ans.push_back("BM, HT, Hindu, TOI");
    if (mp["BM"] + mp["HT"] + mp["Hindu"] + mp["ET"] <= n)
        ans.push_back("BM, HT, Hindu, ET");
    if (mp["TOI"] + mp["HT"] + mp["Hindu"] + mp["ET"] <= n)
        ans.push_back("TOI, HT, Hindu, ET");
    if (mp["TOI"] + mp["HT"] + mp["Hindu"] + mp["ET"] + mp["BM"] <= n)
        ans.push_back("TOI, HT, Hindu, ET, BM");
    if (mp["BM"] + mp["TOI"] + mp["Hindu"] <= n)
        ans.push_back("BM, TOI, Hindu");
    if (mp["BM"] + mp["ET"] + mp["Hindu"] <= n)
        ans.push_back("BM, ET, Hindu");
    if (mp["BM"] + mp["ET"] + mp["TOI"] <= n)
        ans.push_back("BM, ET, TOI");
    if (mp["BM"] + mp["HT"] + mp["TOI"] <= n)
        ans.push_back("BM, HT, TOI");
    if (mp["BM"] + mp["HT"] + mp["ET"] <= n)
        ans.push_back("BM, HT, ET");
    if (mp["BM"] + mp["Hindu"] <= n)
        ans.push_back("BM, Hindu");
    if (mp["BM"] + mp["TOI"] <= n)
        ans.push_back("BM, TOI");
    if (mp["BM"] + mp["ET"] <= n)
        ans.push_back("BM, ET");
    if (mp["HT"] + mp["Hindu"] <= n)
        ans.push_back("HT, Hindu");
    if (mp["HT"] + mp["Hindu"] + mp["TOI"] <= n)
        ans.push_back("HT, Hindu, TOI");
    if (mp["HT"] + mp["Hindu"] + mp["ET"] <= n)
        ans.push_back("HT, Hindu, ET");
    if (mp["TOI"] + mp["Hindu"] + mp["ET"] <= n)
        ans.push_back("TOI, Hindu, ET");
    if (mp["HT"] + mp["TOI"] <= n)
        ans.push_back("HT, TOI");
    if (mp["HT"] + mp["ET"] <= n)
        ans.push_back("HT, ET");
    if (mp["Hindu"] + mp["TOI"] <= n)
        ans.push_back("Hindu, TOI");
    if (mp["Hindu"] + mp["ET"] <= n)
        ans.push_back("Hindu, ET");
    if (mp["TOI"] + mp["ET"] <= n)
        ans.push_back("TOI, ET");

    for (auto it : ans)
    {
        cout << "{" << it << "}" << endl;
    }
}