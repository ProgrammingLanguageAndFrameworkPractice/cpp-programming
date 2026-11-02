// Ex1_01.cpp

import std;

int main()
{
    int answer {42};
    std::println("The answer to life, the universe, and everything is {}.", answer);

    std::println("The answer to {} is {:!^12b}", "the ultimate question", answer);

    return 0;
}