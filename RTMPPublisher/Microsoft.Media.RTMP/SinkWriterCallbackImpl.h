/****************************************************************************************************************************

RTMP Live Publishing Library

Copyright (c) Microsoft Corporation

All rights reserved.

MIT License

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation
files (the ""Software""), to deal in the Software without restriction, including without limitation the rights to use, copy,
modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software
is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED *AS IS*, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF
OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.


*****************************************************************************************************************************/

#pragma once


#include <mfapi.h>
#include <mfidl.h>
#include <Mferror.h>
#include <mfreadwrite.h>
#include <wrl.h>

using namespace Microsoft::WRL;


namespace Microsoft
{
  namespace Media
  {
    namespace RTMP
    {
      class RTMPSinkWriterCallbackImpl : public RuntimeClass<RuntimeClassFlags<RuntimeClassType::ClassicCom>, IMFSinkWriterCallback, FtmBase>
      {
      public:
        IFACEMETHOD(OnFinalize)(HRESULT hrStatus);
        IFACEMETHOD(OnMarker)(DWORD dwStreamIndex, LPVOID pvContext);
      };
    }
  }
}