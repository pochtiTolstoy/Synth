/*
  ==============================================================================

    SourceCode.cpp
    Created: 30 Nov 2022 1:23:37pm
    Author:  Timur

  ==============================================================================
*/

#include "AdsrData.h"
void AdsrData::updateADSR(const float attack, const float decay, const float release, const float sustain)
{
    adsrParams.attack = attack;
    adsrParams.decay = decay;
    adsrParams.sustain = sustain;
    adsrParams.release = release;

    setParameters(adsrParams);
}