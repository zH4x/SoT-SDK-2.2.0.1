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
// Classes
//---------------------------------------------------------------------------

// Class ShortRangeMarkerFramework.ShortRangeMarker
// 0x0058 (FullSize[0x0428] - InheritedSize[0x03D0])
class AShortRangeMarker : public AActor
{
public:
	unsigned char                                      UnknownData_9GBO[0x10];                                    // 0x03D0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMaterialInstanceDynamic*>            DynamicMaterials;                                          // 0x03E0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	float                                              LifetimerTimer;                                            // 0x03F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              FadeTimer;                                                 // 0x03F4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    TriggerFadeIn;                                             // 0x03F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected)
	struct FScriptMulticastDelegate                    TriggerFadeOut;                                            // 0x0408(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected)
	TArray<TWeakObjectPtr<class AActor>>               CachedActors;                                              // 0x0418(0x0010) (ZeroConstructor, Transient, Protected, UObjectWrapper)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShortRangeMarkerFramework.ShortRangeMarker");
		return ptr;
	}



	void Multicast_OnCleanUp();
};

// Class ShortRangeMarkerFramework.ShortRangeMarkerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UShortRangeMarkerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShortRangeMarkerFramework.ShortRangeMarkerInterface");
		return ptr;
	}



};

// Class ShortRangeMarkerFramework.ShortRangeMarkerBlueprintFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UShortRangeMarkerBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShortRangeMarkerFramework.ShortRangeMarkerBlueprintFunctionLibrary");
		return ptr;
	}



	void STATIC_RegisterActorsWithShortRangeMarker(class UObject* WorldContextObject, class AActor* InMarker, TArray<class AActor*>* InActors);
};

// Class ShortRangeMarkerFramework.ShortRangeMarkerDataAsset
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UShortRangeMarkerDataAsset : public UDataAsset
{
public:
	class UActorSpawnData*                             RewardMarker;                                              // 0x0028(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RewardMarkerHeight;                                        // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_HI3O[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShortRangeMarkerFramework.ShortRangeMarkerDataAsset");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
