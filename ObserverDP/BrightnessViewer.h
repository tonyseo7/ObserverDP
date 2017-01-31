#pragma once

#include "Observer.h"
#include "picture.h"

class BrightnessViewer:public Observer
{
	Picture *picture;

public:
	BrightnessViewer(Picture *picture);
	virtual void Update();
};
