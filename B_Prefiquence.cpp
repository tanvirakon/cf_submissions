#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>

using namespace std;

string decode_secret(string filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Error: Could not open the file " << filename << endl;
        return "";
    }

    map<int, string> data_map;
    int num;
    string word;

    // Read the file and store the pairs in the map
    while (file >> num >> word) {
        data_map[num] = word;
    }
    file.close();

    // Construct the pyramid structure and collect the indices
    int level = 1;
    int index = 1;
    stringstream secret_message;
    bool first_word = true;

    while (index <= data_map.size()) {
        int start_index = index;
        int end_index = index + level - 1;

        if (end_index > data_map.size()) {
            break;
        }

        if (first_word) {
            first_word = false;
        } else {
            secret_message << " ";
        }

        secret_message << data_map[end_index];
        index = end_index + 1;
        level++;
    }

    return secret_message.str();
}

int main() {
    string filename = "input_dataset.txt";
    string secret_message = decode_secret(filename);
    cout << secret_message << endl;
    return 0;
}
