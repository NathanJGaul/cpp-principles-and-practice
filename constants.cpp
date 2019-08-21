// use constexpr to define constant values
// constants are useful for keeping code readable

int main()
{
    constexpr double pi = 3.14159;
    double r = 5;
    pi = 6; // ERROR: constexpr cannot be modified
    double c = 2*pi*r;
}