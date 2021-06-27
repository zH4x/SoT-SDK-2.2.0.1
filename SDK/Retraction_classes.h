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

// Class Retraction.RetractableComponent
// 0x0038 (FullSize[0x0100] - InheritedSize[0x00C8])
class URetractableComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_Q0VU[0x28];                                    // 0x00C8(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       FeatureToggle;                                             // 0x00F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRetractorOrientationAdjustmentFlags        OrientationAdjustmentOnRetractFlags;                       // 0x00F8(0x0003) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<CoreUObject_EAxis>                     RetractorBoxAxis;                                          // 0x00FB(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShouldAutoReleaseOnSuccessfulRetract;                      // 0x00FC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               MigrateAttachedWithRetractor;                              // 0x00FD(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               WasSimulatingPhysicsBeforeRetract;                         // 0x00FE(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HSYW[0x1];                                     // 0x00FF(0x0001) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Retraction.RetractableComponent");
		return ptr;
	}



};

// Class Retraction.RetractorInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class URetractorInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Retraction.RetractorInterface");
		return ptr;
	}



};

// Class Retraction.RetractableInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class URetractableInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Retraction.RetractableInterface");
		return ptr;
	}



};

// Class Retraction.RetractableProviderInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class URetractableProviderInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Retraction.RetractableProviderInterface");
		return ptr;
	}



};

// Class Retraction.RetractableFloatingBarrelComponent
// 0x0010 (FullSize[0x0110] - InheritedSize[0x0100])
class URetractableFloatingBarrelComponent : public URetractableComponent
{
public:
	TScriptInterface<class UBuoyancyInterface>         OwnerBuoyancyInterface;                                    // 0x0100(0x0010) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Retraction.RetractableFloatingBarrelComponent");
		return ptr;
	}



};

// Class Retraction.RetractorComponent
// 0x0060 (FullSize[0x0128] - InheritedSize[0x00C8])
class URetractorComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_1ON9[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TScriptInterface<class URetractableInterface>      AttachedRetractable;                                       // 0x00D0(0x0010) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper)
	unsigned char                                      UnknownData_8210[0x30];                                    // 0x00E0(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USceneComponent*                             RetractDestinationComponent;                               // 0x0110(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             RetractingComponent;                                       // 0x0118(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0QYA[0x8];                                     // 0x0120(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Retraction.RetractorComponent");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
