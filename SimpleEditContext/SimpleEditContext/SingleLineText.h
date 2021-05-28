#pragma once

#include "SingleLineText.g.h"

namespace winrt::SimpleEditContext::implementation
{
    struct SingleLineText : SingleLineTextT<SingleLineText>
    {
        SingleLineText() = default;

        int32_t MyProperty();
        void MyProperty(int32_t value);

        winrt::hstring GetSampleText();
    };
}

namespace winrt::SimpleEditContext::factory_implementation
{
    struct SingleLineText : SingleLineTextT<SingleLineText, implementation::SingleLineText>
    {
    };
}
