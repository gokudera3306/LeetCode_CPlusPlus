#include "Q412_FizzBuzz.h"

vector<string> Q412_FizzBuzz::fizzBuzz(int n)
{
    vector<string> result;

    for (auto num = 1; num <= n; num++)
    {
        if (num % 15 == 0)
            result.push_back("FizzBuzz");
        else if (num % 5 == 0)
            result.push_back("Buzz");
        else if (num % 3 == 0)
            result.push_back("Fizz");
        else
            result.push_back(to_string(num));
    }

    return result;
}
