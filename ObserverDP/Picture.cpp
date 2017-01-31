#include "picture.h"

Picture::Picture(string name, int tone, int brightness, int saturation)
{
	this->name = name;
	this->tone = tone;
	this->brightness = brightness;
	this->saturation = saturation;
}

void Picture::Change(int tone, int brightness, int saturation)
{
	this->tone += tone;
	this->brightness += brightness;
	this->saturation += saturation;
	
	Notify();
}

void Picture::View()const
{
	cout << "사진 파일명:" << name << endl;
	cout << "색조:" << tone << "명도:" << brightness << "채도:" << saturation << endl;
}


int Picture::GetTone()const
{
	return tone;
}



int Picture::GetBrightness()const
{
	return brightness;
}

int Picture::GetSaturation()const
{
	return saturation;
}


string Picture::GetName()const
{
	return name;
}