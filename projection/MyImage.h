#pragma once

//////////////////////////////////////////////////////////////////////////
// define the image smart ptr
//////////////////////////////////////////////////////////////////////////

#ifndef MyImage_h__
#define MyImage_h__

#include <cv.h>
#include <boost/smart_ptr.hpp>

//////////////////////////////////////////////////////////////////////////
// define the smart ptr with IplImage
//////////////////////////////////////////////////////////////////////////

namespace BasicCvApi
{
	typedef boost::shared_ptr<IplImage> ImageSmartPtr;
	void my_delete(IplImage * p);

	class MyImagePtr:public ImageSmartPtr
	{
	public:		
		MyImagePtr(IplImage* image);
		virtual ~MyImagePtr(void);
	};
}

#endif // MyImage_h__
