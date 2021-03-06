/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

void Mask_pluginAudioProcessorEditor::timerCallback()
{
    this->repaint();
}

//==============================================================================
Mask_pluginAudioProcessorEditor::Mask_pluginAudioProcessorEditor (Mask_pluginAudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (800, 600);

    this->startTimerHz(60);
}

Mask_pluginAudioProcessorEditor::~Mask_pluginAudioProcessorEditor()
{
}

//==============================================================================
void Mask_pluginAudioProcessorEditor::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

    g.setColour (juce::Colours::white);
    g.setFont (15.0f);
}

void Mask_pluginAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
}
