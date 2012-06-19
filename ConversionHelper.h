/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2012 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

#ifndef CONVERSIONHELPER_H_
#define CONVERSIONHELPER_H_

#include <QDateTime>
#include <v8.h>


namespace ConversionHelper
{

namespace V8ToNative
{
//utility functions to convert V8 values into Native

   //retrieve QDateTime value from the v8::Value object
   void retrieveDate(v8::Handle<v8::Value>& value, QDateTime& dt);
}

namespace NativeToV8
{
//utility functions to convert Native values to V8
}

}

#endif /* CONVERSIONHELPER_H_ */
