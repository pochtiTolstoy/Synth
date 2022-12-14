/*
  ==============================================================================

    SynthVoice.h
    Created: 26 Nov 2022 12:16:49pm
    Author:  Timur

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "SynthSound.h"
#include "Data/AdsrData.h"
#include "Data/OscData.h"

class SynthVoice : public juce::SynthesiserVoice
{
public:
    bool canPlaySound(juce::SynthesiserSound* sound) override;
    void startNote(int midiNoteNumber, float velocity, juce::SynthesiserSound* sound, int currentPitchWheelPosition) override;
    void stopNote(float velocity, bool allowTailOff) override;
    void controllerMoved(int controllerNumber, int newControllerValue) override;
    void pitchWheelMoved(int newPitchWheelValue) override;
    void prepareToPlay(double sampleRate, int samplesPerBlock, int ouputChannels);
    void update(const float attack, const float decay, const float release, const float sustain);
    void renderNextBlock(juce::AudioBuffer< float >& outputBuffer, int startSample, int numSamples) override;
    OscData& getOscillator() { return osc; }
private:
    AdsrData adsr;
    juce::AudioBuffer<float> synthBuffer;
    OscData osc;
    juce::dsp::Gain<float> gain;
    bool isPrepared{ false };
};