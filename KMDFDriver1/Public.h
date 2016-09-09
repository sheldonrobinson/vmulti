/*++

Module Name:

    public.h

Abstract:

    This module contains the common declarations shared by driver
    and user applications.

Environment:

    user and kernel

--*/

//
// Define an Interface Guid so that app can find the device and talk to it.
//

DEFINE_GUID (GUID_DEVINTERFACE_KMDFDriver1,
    0xd999fc55,0xa063,0x4e57,0x8b,0x17,0xc6,0x2d,0x8a,0x56,0xcc,0x24);
// {d999fc55-a063-4e57-8b17-c62d8a56cc24}
