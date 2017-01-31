#include "BrightnessViewer.h"

BrightnessViewer::BrightnessViewer(Picture *picture)
{
	this->picture = picture;
}

void BrightnessViewer::Update()
{
	int brightness = picture->GetBrightness();

	cout << "이름:" << picture->GetName() << "명도:" << brightness << endl;
}