#pragma once
#include "subject.h"

class Picture : public Subject
{
	string name;
	int tone;
	int brightness;
	int saturation;

public:
	Picture(string name, int tone, int brightness, int saturation);
	void Change(int tone, int brightness, int saturation);
	void View()const;
	int GetTone()const;
	int GetBrightness()const;
	int GetSaturation()const;
	string GetName()const;
};
