#include "phone_number.h"

#include <algorithm>

using namespace std;

const vector<char> KEYPAD[] = {
    {},                       // 0 (no letters)
    {},                       // 1 (no letters)
    { 'a', 'b', 'c' },        // 2
    { 'd', 'e', 'f' },        // 3
    { 'g', 'h', 'i' },        // 4
    { 'j', 'k', 'l' },        // 5
    { 'm', 'n', 'o' },        // 6
    { 'p', 'q', 'r', 's' },   // 7
    { 't', 'u', 'v' },        // 8
    { 'w', 'x', 'y', 'z' }    // 9
};

void findPhoneWords(const vector<int>& number, string word, int digitIndex, vector<string>& words)
{
    // TODO
}

void findPhoneWords(const vector<int>& number, vector<string>& words)
{
    if ((find(number.begin(), number.end(), 0) != number.end()) ||
        (find(number.begin(), number.end(), 1) != number.end())) {
        throw runtime_error("Number cannot contain 0 or 1");
    }

    findPhoneWords(number, "", 0, words);
}
