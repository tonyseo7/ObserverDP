#include "ToneViewer.h"

ToneViewer::ToneViewer(Picture *picture)
{
	this->picture = picture;
}

void ToneViewer::Update()
{
	int tone = picture->GetTone();
	cout << "�̸�:" << picture->GetName() << "����:" << tone << endl;
}