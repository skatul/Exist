#pragma once
#include "Temporal.h"

namespace exist
{
    namespace Math
    {

        template <typename T>
        Temporal<T> differentiate(const Temporal<T> &temporal);

        template <typename T>
        Temporal<T> integrate(const Temporal<T> &temporal, double startTime, double endTime);

    } // namespace Math
} // namespace exist
