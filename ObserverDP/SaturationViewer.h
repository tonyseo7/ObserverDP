#pragma once
#include "Observer.h"
#include "picture.h"

class SaturationViewer: public Observer
{
	Picture *picture;
public:
	SaturationViewer(Picture *picture);
	virtual void Update();

};
