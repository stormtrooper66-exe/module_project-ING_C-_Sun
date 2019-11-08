#include <algorithm> // sort
#include <cstdlib> // EXIT_FAILURE, EXIT_SUCCESS
#include <fstream> // ifstream
#include <iostream> // cin, cout
#include <string> // string
#include <unordered_map> // unordered_map
#include <utility> // pair
#include <vector> // vector

using namespace std;

int main()
{
    
    string filename;
    cin >> filename;

    ifstream file{filename};
    // Check that the file was opened successfully.
    if (!file) {
        return EXIT_FAILURE;
    }

    unordered_map<string, int> words;
    for (string word; file >> word;)
       
        ++words[word];

    vector<std::pair<string, int>> sorted_words{words.begin(), words.end()};
  
    sort(sorted_words.begin(), sorted_words.end(), [](const auto& a, const auto& b) {
        return a.second > b.second;
    });
   
    sort(sorted_words.begin(), sorted_words.begin() + 5, [](const auto& a, const auto& b) {
        return a.first < b.first;
    });

    for (auto i = 0; i < 5 && i < sorted_words.size(); ++i)
        cout << sorted_words[i].first << '\n';

    return EXIT_SUCCESS;
}
