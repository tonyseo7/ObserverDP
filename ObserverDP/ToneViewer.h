#pragma once
#include "Observer.h"
#include "picture.h"

class ToneViewer : public Observer
{
	Picture *picture;

public:
	ToneViewer(Picture *picture);
	virtual void Update();
};
