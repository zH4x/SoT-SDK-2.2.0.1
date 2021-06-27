// Name: SoT, Version: 2.2.0b

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

// Function BP_Anim_TT_QuestBook.BP_Anim_TT_QuestBook_C.OnUseStarted
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UClass*                  InputID                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWieldableItemActionVisuals ActionVisuals                  (ConstParm, Parm, OutParm, ReferenceParm)
void UBP_Anim_TT_QuestBook_C::OnUseStarted(class UClass* InputID, const struct FWieldableItemActionVisuals& ActionVisuals)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Anim_TT_QuestBook.BP_Anim_TT_QuestBook_C.OnUseStarted");

	UBP_Anim_TT_QuestBook_C_OnUseStarted_Params params;
	params.InputID = InputID;
	params.ActionVisuals = ActionVisuals;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Anim_TT_QuestBook.BP_Anim_TT_QuestBook_C.OnUseStopped
// (Event, Public, BlueprintEvent)
// Parameters:
// class UClass*                  InputID                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Anim_TT_QuestBook_C::OnUseStopped(class UClass* InputID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Anim_TT_QuestBook.BP_Anim_TT_QuestBook_C.OnUseStopped");

	UBP_Anim_TT_QuestBook_C_OnUseStopped_Params params;
	params.InputID = InputID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Anim_TT_QuestBook.BP_Anim_TT_QuestBook_C.ExecuteUbergraph_BP_Anim_TT_QuestBook
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Anim_TT_QuestBook_C::ExecuteUbergraph_BP_Anim_TT_QuestBook(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Anim_TT_QuestBook.BP_Anim_TT_QuestBook_C.ExecuteUbergraph_BP_Anim_TT_QuestBook");

	UBP_Anim_TT_QuestBook_C_ExecuteUbergraph_BP_Anim_TT_QuestBook_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
