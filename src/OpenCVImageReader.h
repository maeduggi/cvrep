#ifndef _OPENCVIMAGEREADER_H
#define _OPENCVIMAGEREADER_H

#include "ImageReader.h"

class OpenCVImageReader : public ImageReader
{
public:
	bool readImage(const char* fileName) const;
};

#endif