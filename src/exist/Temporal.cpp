#include "exist/Temporal.h"
#include <chrono>
#include <iomanip>
#include <sstream>

namespace exist
{

    template <typename T>
    Temporal<T>::Temporal(T value, const std::string &timestamp)
        : value_(value)
    {
        std::istringstream ss(timestamp);
        std::tm tm = {};
        ss >> std::get_time(&tm, "%Y-%m-%dT%H:%M:%S");
        timestamp_ = std::chrono::system_clock::from_time_t(std::mktime(&tm));
    }

    template <typename T>
    T Temporal<T>::value() const
    {
        return value_;
    }

    // Explicit instantiation for common types
    template class Temporal<double>;
    template class Temporal<float>;
    template class Temporal<int>;

} // namespace exist
