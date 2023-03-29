// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheCardKingdom/TheCardKingdomGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTheCardKingdomGameModeBase() {}
// Cross Module References
	THECARDKINGDOM_API UClass* Z_Construct_UClass_ATheCardKingdomGameModeBase_NoRegister();
	THECARDKINGDOM_API UClass* Z_Construct_UClass_ATheCardKingdomGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TheCardKingdom();
// End Cross Module References
	void ATheCardKingdomGameModeBase::StaticRegisterNativesATheCardKingdomGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ATheCardKingdomGameModeBase_NoRegister()
	{
		return ATheCardKingdomGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATheCardKingdomGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATheCardKingdomGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TheCardKingdom,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATheCardKingdomGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TheCardKingdomGameModeBase.h" },
		{ "ModuleRelativePath", "TheCardKingdomGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATheCardKingdomGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATheCardKingdomGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATheCardKingdomGameModeBase_Statics::ClassParams = {
		&ATheCardKingdomGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATheCardKingdomGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATheCardKingdomGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATheCardKingdomGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATheCardKingdomGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATheCardKingdomGameModeBase, 3796336221);
	template<> THECARDKINGDOM_API UClass* StaticClass<ATheCardKingdomGameModeBase>()
	{
		return ATheCardKingdomGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATheCardKingdomGameModeBase(Z_Construct_UClass_ATheCardKingdomGameModeBase, &ATheCardKingdomGameModeBase::StaticClass, TEXT("/Script/TheCardKingdom"), TEXT("ATheCardKingdomGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATheCardKingdomGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
