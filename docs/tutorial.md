# Exist Library Tutorial

## Introduction

Exist is a C++ library for handling time-dependent variables in your applications. This tutorial will guide you through the basic concepts and usage.

## Installation

### Prerequisites:

- C++ Compiler (GCC, Clang, etc.)
- CMake (version 3.15 or higher)
- Git for cloning the repository

### Build Steps:

```bash
git clone https://github.com/skatul/Exist.git
cd Exist
cmake -B build -S .
cmake --build build
```

## Basic Usage

Here's a complete example showing basic usage of the Exist library:

```cpp
#include <exist/Temporal.h>
#include <exist/Math.h>
#include <iostream>

int main() {
    // Create a time-bound variable with a value that evolves over time
    exist::Temporal<double> price(100, "2025-08-20T14:30:00");

    // Add two time-aware variables
    auto futurePrice = price + price;

    // Output the future price (which will depend on time evolution)
    std::cout << futurePrice.value() << std::endl;

    return 0;
}
```

## Common Operations

### Time-bound Operations

- **Addition/Subtraction**: Adding two time-aware variables will return a result dependent on their time evolution.
- **Differentiation**: Differentiating a time-aware variable with respect to time will give the rate of change at that point in time.
- **Integration**: Integrating a time-aware variable will provide the accumulated value over a given time span.

Example of differentiation:

```cpp
// Differentiate the variable price with respect to time
auto dPrice = exist::Math::differentiate(price);
```

## Advanced Topics

### Working with Multiple Timelines

...more detailed content to be added...

---

## License

This documentation and the Exist library are licensed under the Apache License 2.0 - see the [LICENSE](../LICENSE) file for details.
