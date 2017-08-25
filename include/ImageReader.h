#ifndef _IMAGEREADER_H
#define _IMAGEREADER_H


class ImageReader
{
public:
	virtual bool readImage(const char* fileName) const = 0;
};

#endif