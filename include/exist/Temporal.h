#pragma once
#include <string>
#include <chrono>

namespace exist
{

    template <typename T>
    class Temporal
    {
    public:
        Temporal(T value, const std::string &timestamp);
        T value() const;
        std::chrono::system_clock::time_point timestamp() const;

        template <typename U>
        friend Temporal<U> operator+(const Temporal<U> &lhs, const Temporal<U> &rhs);

    private:
        T value_;
        std::chrono::system_clock::time_point timestamp_;
    };

} // namespace exist
