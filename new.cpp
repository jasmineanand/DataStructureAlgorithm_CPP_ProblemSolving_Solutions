#include <bits/stdc++.h>
using namespace std;

int settleDebts(map<pair<int, string>, int> &debts)
{
    int trans = 0;
    cout << debts.size() << endl;
    while (debts.size() != 0)
    {
        auto start = debts.begin();
        auto endi = debts.end();
        endi--;
        for (auto x : debts)
        {
            cout << x.first.second << " " << x.second << endl;
        }
        cout << (*start).second << endl;
        cout << (*endi).second << endl;
        if (abs((*start).second) > (*endi).second)
        {
            (*start).second += (*endi).second;
            int findebt = (*start).second;
            string name = (*start).first.second;
            debts.erase(start);
            debts[{findebt, name}] = findebt;
            debts.erase(endi);
            trans++;
            // cout << 1 << endl;
        }
        else if (abs((*start).second) < (*endi).second)
        {
            (*endi).second -= (abs((*start).second));
            int findebt = (*endi).second;
            string name = (*endi).first.second;
            debts.erase(endi);
            debts[{findebt, name}] = findebt;
            debts.erase(start);
            trans++;
            // cout << 2 << endl;
        }
        else
        {
            debts.erase(start);
            debts.erase(endi);
            trans++;
            // cout << 3 << endl;
        }
    }
    return trans;
}

int main()
{
    int n;
    cout << "Enter the number of people: ";
    cin >> n;
    map<pair<int, string>, int> debts;
    cout << "Enter the debts of each person:\n";
    int sum = 0;
    vector<pair<int, string>> temp;
    for (int i = 0; i < n; i++)
    {
        string name;
        int debt;
        cout << "Person " << i + 1 << " name: ";
        cin >> name;
        cout << "Person " << i + 1 << " debt: ";
        cin >> debt;
        sum += debt;
        temp.push_back({debt, name});
    }
    for (auto x : temp)
    {
        int d = x.first - (sum / n);
        string t = x.second;
        debts[{d, t}] = d;
    }

    cout << settleDebts(debts) << endl;
    return 0;
}