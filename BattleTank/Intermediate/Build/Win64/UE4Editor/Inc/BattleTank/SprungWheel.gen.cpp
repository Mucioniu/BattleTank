// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleTank/Public/SprungWheel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSprungWheel() {}
// Cross Module References
	BATTLETANK_API UClass* Z_Construct_UClass_ASprungWheel_NoRegister();
	BATTLETANK_API UClass* Z_Construct_UClass_ASprungWheel();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BattleTank();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	void ASprungWheel::StaticRegisterNativesASprungWheel()
	{
	}
	UClass* Z_Construct_UClass_ASprungWheel_NoRegister()
	{
		return ASprungWheel::StaticClass();
	}
	struct Z_Construct_UClass_ASprungWheel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxleWheelConstraint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AxleWheelConstraint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MassWheelConstraint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MassWheelConstraint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Axle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Axle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wheel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Wheel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASprungWheel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BattleTank,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASprungWheel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SprungWheel.h" },
		{ "ModuleRelativePath", "Public/SprungWheel.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASprungWheel_Statics::NewProp_AxleWheelConstraint_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SprungWheel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASprungWheel_Statics::NewProp_AxleWheelConstraint = { "AxleWheelConstraint", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASprungWheel, AxleWheelConstraint), Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASprungWheel_Statics::NewProp_AxleWheelConstraint_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASprungWheel_Statics::NewProp_AxleWheelConstraint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASprungWheel_Statics::NewProp_MassWheelConstraint_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SprungWheel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASprungWheel_Statics::NewProp_MassWheelConstraint = { "MassWheelConstraint", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASprungWheel, MassWheelConstraint), Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASprungWheel_Statics::NewProp_MassWheelConstraint_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASprungWheel_Statics::NewProp_MassWheelConstraint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASprungWheel_Statics::NewProp_Axle_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SprungWheel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASprungWheel_Statics::NewProp_Axle = { "Axle", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASprungWheel, Axle), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASprungWheel_Statics::NewProp_Axle_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASprungWheel_Statics::NewProp_Axle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASprungWheel_Statics::NewProp_Wheel_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SprungWheel.h" },
		{ "ToolTip", "Components" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASprungWheel_Statics::NewProp_Wheel = { "Wheel", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASprungWheel, Wheel), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASprungWheel_Statics::NewProp_Wheel_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASprungWheel_Statics::NewProp_Wheel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASprungWheel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASprungWheel_Statics::NewProp_AxleWheelConstraint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASprungWheel_Statics::NewProp_MassWheelConstraint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASprungWheel_Statics::NewProp_Axle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASprungWheel_Statics::NewProp_Wheel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASprungWheel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASprungWheel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASprungWheel_Statics::ClassParams = {
		&ASprungWheel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASprungWheel_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ASprungWheel_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ASprungWheel_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASprungWheel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASprungWheel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASprungWheel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASprungWheel, 2452590771);
	template<> BATTLETANK_API UClass* StaticClass<ASprungWheel>()
	{
		return ASprungWheel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASprungWheel(Z_Construct_UClass_ASprungWheel, &ASprungWheel::StaticClass, TEXT("/Script/BattleTank"), TEXT("ASprungWheel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASprungWheel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
