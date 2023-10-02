#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark_all.hpp>

#include "phone_number.h"

using namespace std;

TEST_CASE("All possible word combinations of a phone number can be found")
{
    vector<int> number = {2, 3, 4};
    vector<string> words;
    findPhoneWords(number, words);
    vector<string> expectedWords = {
        "adg",
        "adh",
        "adi",
        "aeg",
        "aeh",
        "aei",
        "afg",
        "afh",
        "afi",
        "bdg",
        "bdh",
        "bdi",
        "beg",
        "beh",
        "bei",
        "bfg",
        "bfh",
        "bfi",
        "cdg",
        "cdh",
        "cdi",
        "ceg",
        "ceh",
        "cei",
        "cfg",
        "cfh",
        "cfi",
    };
    REQUIRE(words == expectedWords);
}

TEST_CASE("A phone number with 0 or 1 throws an exception")
{
    vector<int> number = {2, 0, 3};
    vector<string> words;
    REQUIRE_THROWS(findPhoneWords(number, words));
    number = {2, 1, 3};
    REQUIRE_THROWS(findPhoneWords(number, words));
}
