﻿// Name: SoT, Version: 2.2.0b

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function tls_wld_Orb_light_D.tls_wld_Orb_light_D_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void Atls_wld_Orb_light_D_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function tls_wld_Orb_light_D.tls_wld_Orb_light_D_C.UserConstructionScript");

	Atls_wld_Orb_light_D_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
