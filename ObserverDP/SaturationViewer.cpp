#include "SaturationViewer.h"

SaturationViewer::SaturationViewer(Picture *picture)
{
	this->picture = picture;
}

void SaturationViewer::Update()
{
	int saturation = picture->GetSaturation();
	cout << "�̸�:" << picture->GetName() << "ä��:" << saturation << endl;
}