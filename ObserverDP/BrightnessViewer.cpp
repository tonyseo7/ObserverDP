#include "BrightnessViewer.h"

BrightnessViewer::BrightnessViewer(Picture *picture)
{
	this->picture = picture;
}

void BrightnessViewer::Update()
{
	int brightness = picture->GetBrightness();

	cout << "�̸�:" << picture->GetName() << "��:" << brightness << endl;
}