# Simple VST synthesizer plugin with JUCE framework
This synthesizer contains one oscillator, three wave types and ADSR parametres (attack, decay, sustain, release).

Build:
1. Clone JUCE framework from: https://github.com/juce-framework/JUCE
2. Build projucer for your visual studio version: JUCE\extras\Projucer\Builds\VisualStudio2022\Projucer.sln
3. Run Projucer.exe: JUCE\extras\Projucer\Builds\VisualStudio2022\x64\Debug\App\Projucer.exe
4. Set JUCE folder in settings
5. Clone this project
6. Open .jucer in Projucer and run visual studio from app
7. Build project for VST3 and set plugin path for your DAW: Synth\Builds\VisualStudio2022\x64\Debug\VST3
