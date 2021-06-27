﻿#pragma once

// Name: SoT, Version: 2.2.0b


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct BumperZone.BumperZoneData
// 0x0028
struct FBumperZoneData
{
	class AShipBumperZone*                             BumperZone;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4CY1[0x20];                                    // 0x0008(0x0020) MISSED OFFSET (PADDING)

};

// ScriptStruct BumperZone.CachedShip
// 0x0018
struct FCachedShip
{
	unsigned char                                      UnknownData_FGGI[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
