/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class NewProjectAudioProcessorEditor  : public AudioProcessorEditor
{
    
public:
    NewProjectAudioProcessorEditor (NewProjectAudioProcessor&);
    ~NewProjectAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;    

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    NewProjectAudioProcessor& processor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (NewProjectAudioProcessorEditor)
    
    

};

class NewProjectAlertWindow : public AlertWindow
{
public:
    NewProjectAlertWindow (NewProjectAlertWindow&);
    ~NewProjectAlertWindow();
    
//==============================================================================
    void setMessage(const String &message);
    void addButton (const String &name, int returnValue, const KeyPress &shortcutKey1=KeyPress(),const KeyPress & shortcutKey2=KeyPress());
private:
    NewProjectAlertWindow& alertwindow;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (NewProjectAlertWindow)

};
