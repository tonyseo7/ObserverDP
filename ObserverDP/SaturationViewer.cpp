#include "SaturationViewer.h"

SaturationViewer::SaturationViewer(Picture *picture)
{
	this->picture = picture;
}

void SaturationViewer::Update()
{
	int saturation = picture->GetSaturation();
	cout << "이름:" << picture->GetName() << "채도:" << saturation << endl;
}