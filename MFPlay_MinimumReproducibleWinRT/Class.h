#pragma once
#include "Class.g.h"
#include <mfplay.h>
#include <Shlwapi.h>
#define WINVER _WIN32_WINNT_WIN10
#define WINAPI_FAMILY WINAPI_FAMILY_DESKTOP_APP

namespace winrt::MFPlay_MinimumReproducibleWinRT::implementation
{
#pragma once


#pragma comment(lib,"Mfplay.lib") 
#pragma comment(lib,"Shlwapi.lib")
    class MediaPlayerCallback //: public IMFPMediaPlayerCallback
    {
        long m_cRef; 
        void STDMETHODCALLTYPE OnMediaPlayerEvent(MFP_EVENT_HEADER* pEventHeader);
    };


    struct Class : ClassT<Class>
    {
        Class() = default;

        int32_t MyProperty();
        void MyProperty(int32_t value);
    };
}

namespace winrt::MFPlay_MinimumReproducibleWinRT::factory_implementation
{
    struct Class : ClassT<Class, implementation::Class>
    {
    };
}
