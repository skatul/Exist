#include <exist/Temporal.h>
#include <exist/Math.h>
#include <iostream>

int main()
{
    // Create time-dependent variables
    exist::Temporal<double> price(100.0, "2025-08-20T14:30:00");
    exist::Temporal<double> rate(0.05, "2025-08-20T14:30:00");

    // Calculate derivative
    auto priceChange = exist::Math::differentiate(price);

    std::cout << "Price: " << price.value() << std::endl;
    std::cout << "Rate of change: " << priceChange.value() << std::endl;

    return 0;
}
