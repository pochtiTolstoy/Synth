/*
  ==============================================================================

    OscData.h
    Created: 30 Nov 2022 2:37:21pm
    Author:  Timur

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

class OscData : public juce::dsp::Oscillator<float>
{
public:
    void setWaveType(const int oscSelection);
private:

};