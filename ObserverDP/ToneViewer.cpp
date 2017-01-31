#include "ToneViewer.h"

ToneViewer::ToneViewer(Picture *picture)
{
	this->picture = picture;
}

void ToneViewer::Update()
{
	int tone = picture->GetTone();
	cout << "이름:" << picture->GetName() << "색조:" << tone << endl;
}