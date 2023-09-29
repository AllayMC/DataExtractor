#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonValidator.h"

class FormJsonValidator {
public:
    // prevent constructor by default
    FormJsonValidator& operator=(FormJsonValidator const &) = delete;
    FormJsonValidator(FormJsonValidator const &) = delete;
    FormJsonValidator() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?getContentItemProperty@FormJsonValidator@@SA?AVProperty@JsonValidator@@AEBV23@00000@Z
    MCAPI static class JsonValidator::Property getContentItemProperty(class JsonValidator::Property const &, class JsonValidator::Property const &, class JsonValidator::Property const &, class JsonValidator::Property const &, class JsonValidator::Property const &, class JsonValidator::Property const &);

    // symbol: ?getControlLockedProperty@FormJsonValidator@@SA?AVProperty@JsonValidator@@XZ
    MCAPI static class JsonValidator::Property getControlLockedProperty();

    // symbol: ?getDropdownProperty@FormJsonValidator@@SA?AVProperty@JsonValidator@@_N@Z
    MCAPI static class JsonValidator::Property getDropdownProperty(bool);

    // symbol: ?getSliderProperty@FormJsonValidator@@SA?AVProperty@JsonValidator@@_N@Z
    MCAPI static class JsonValidator::Property getSliderProperty(bool);

    // symbol: ?getStepSliderProperty@FormJsonValidator@@SA?AVProperty@JsonValidator@@_N@Z
    MCAPI static class JsonValidator::Property getStepSliderProperty(bool);

    // symbol: ?getTextInputProperty@FormJsonValidator@@SA?AVProperty@JsonValidator@@_N@Z
    MCAPI static class JsonValidator::Property getTextInputProperty(bool);

    // symbol: ?getToggleProperty@FormJsonValidator@@SA?AVProperty@JsonValidator@@_N@Z
    MCAPI static class JsonValidator::Property getToggleProperty(bool);

    // NOLINTEND

};

