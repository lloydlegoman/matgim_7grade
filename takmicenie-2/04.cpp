#include <iostream>
#include <cmath>
#include <sstream>
#include <string>
#include <map>

using namespace std;

// https://arena.petlja.org/sr-Latn-RS/competition/os7-202324-kvalifikacije2#tab_135694
int main() {
    int rounds, participants;
    string match, winner; 
    map<string,int> table;

    cin >> rounds;

    participants = pow(2,rounds);

    for (int i=0; i<participants; i++) {
        cin >> match;
        istringstream iss(match);
        
        iss >> winner;

        cin.ignore();

        if (table.find(winner) != table.end()) {
            table[winner] += 1;
        } else {
            table[winner] = 1;
        }
    }

    for (int j=rounds-1; j>-1; j--) {
        for (const auto& key: table) {
            cout << key << " ";
        }
    }



    // vector<pair<string, int>> items;
    // for (const auto& pair : table) {
    //     items.push_back(pair);
    // }

    // sort(items.begin(), items.end(),
    //     [](const pair<string, int>& a, const pair<string, int>& b) {
    //               return a.second < b.second;
    //           });

    // cout << "Ключи в порядке возрастания значений:" << endl;
    // for (const auto& pair : items) {
    //     cout << pair.first << endl;
    // }

    // return 0;
}