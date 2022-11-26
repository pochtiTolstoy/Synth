/*
  ==============================================================================

    SynthVoice.cpp
    Created: 26 Nov 2022 12:16:49pm
    Author:  Timur

  ==============================================================================
*/

#include "SynthVoice.h"

bool SynthVoice::canPlaySound(juce::SynthesiserSound* sound)
{
    return dynamic_cast<juce::SynthesiserSound*>(sound) != nullptr;
}
void SynthVoice::startNote(int midiNoteNumber, float velocity, juce::SynthesiserSound* sound, int currentPitchWheelPosition)
{

}
void SynthVoice::stopNote(float velocity, bool allowTailOff)
{

}
void SynthVoice::controllerMoved(int controllerNumber, int newControllerValue)
{

}
void SynthVoice::pitchWheelMoved(int newPitchWheelValue)
{

}
void SynthVoice::renderNextBlock(juce::AudioBuffer< float >& outputBuffer, int startSample, int numSamples)
{

}