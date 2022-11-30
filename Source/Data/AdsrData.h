/*
  ==============================================================================

    SourceCode.h
    Created: 30 Nov 2022 1:23:37pm
    Author:  Timur

  ==============================================================================
*/

#pragma once
#include <JuceHeader.h>

class AdsrData : public juce::ADSR
{
public:
    void updateADSR(const float attack, const float decay, const float release, const float sustain);
private:
    juce::ADSR::Parameters adsrParams;
    
};