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

class SynthVoice : public juce::SynthesiserVoice
{
public:
    bool canPlaySound(juce::SynthesiserSound* sound) override;
    void startNote(int midiNoteNumber, float velocity, juce::SynthesiserSound* sound, int currentPitchWheelPosition) override;
    void stopNote(float velocity, bool allowTailOff) override;
    void controllerMoved(int controllerNumber, int newControllerValue) override;
    void pitchWheelMoved(int newPitchWheelValue) override;
    void prepareToPlay(double sampleRate, int samplesPerBlock, int ouputChannels);
    void renderNextBlock(juce::AudioBuffer< float >& outputBuffer, int startSample, int numSamples) override;
private:
    juce::ADSR adsr;
    juce::ADSR::Parameters adsrParams;

    juce::dsp::Oscillator<float> osc{ [](float x) { return std::sin(x); }, 200 };
    //juce::dsp::Oscillator<float> osc{ [](float x) { return x / juce::MathConstants<float>::pi; } }; //Saw wave
    juce::dsp::Gain<float> gain;

    bool isPrepared{ false };
    
};