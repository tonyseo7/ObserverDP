#include "ToneViewer.h"
#include "BrightnessViewer.h"
#include "SaturationViewer.h"


void main()
{
	Picture *picture = new Picture("¼­¿ïÀÇ ¹ã", 100, 100, 100);
	Observer *observer[3];

	observer[0] = new ToneViewer(picture);
	observer[1] = new BrightnessViewer(picture);
	observer[2] = new SaturationViewer(picture);

	picture->AddObserver(observer[0]);
	picture->AddObserver(observer[1]);
	picture->AddObserver(observer[2]);

	picture->Change(3, 10, 5);

	delete picture;
	delete observer[0];
	delete observer[1];
	delete observer[2];
}