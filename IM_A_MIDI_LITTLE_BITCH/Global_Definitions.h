#pragma once

#include "arduino.h"
#include <vector>
#include <string>
#include <FastLED.h>
#include <MIDI.h>

#define NUM_LEDS 2304
#define NUM_MIDI_CHANNELS 16

#define NUM_OCTAVES 12

extern CRGBArray<NUM_LEDS> gleds;

class Universe;
class Tweener;
class Midi_Controller;
class Midi_Channel;
class Animation_Controller;
class Animation;

extern std::vector<Midi_Channel*> gchannels;
extern std::vector<Animation_Controller*> gcontrollers;

enum Ease { LINEAR, SINE, QUAD, CUBIC, QUART, QUINT };
enum Ease_Type { IN, OUT, INOUT };

enum Animation_Name {
	NONE,
	COLOR,
	WIPE,
	STROBE
};

enum Event {
	OFF,
	ON,
	POLY,
	CC,
	PC,
	ATC,
	PITCH
};

typedef void(*Animation_Func)(Event,byte,byte);

#include "Universe.h"

#include "Tweener.h"
#include "Midi_Controller.h"

#include "Midi_Channel.h"
#include "Animation_Controller.h"
#include "Animation.h"