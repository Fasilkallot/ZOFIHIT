// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZOFIHIT/Core/Character/MCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ZOFIHIT();
	ZOFIHIT_API UClass* Z_Construct_UClass_AMCharacter();
	ZOFIHIT_API UClass* Z_Construct_UClass_AMCharacter_NoRegister();
// End Cross Module References
	void AMCharacter::StaticRegisterNativesAMCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMCharacter);
	UClass* Z_Construct_UClass_AMCharacter_NoRegister()
	{
		return AMCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharecterMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharecterMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SM_CharecterMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SM_CharecterMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IMC_Locomotion_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IMC_Locomotion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IA_Move_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Move;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IA_Look_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Look;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ZOFIHIT,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Core/Character/MCharacter.h" },
		{ "ModuleRelativePath", "Core/Character/MCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMCharacter_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "Category", "MCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Core/Character/MCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMCharacter_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMCharacter, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::NewProp_CameraComponent_MetaData), Z_Construct_UClass_AMCharacter_Statics::NewProp_CameraComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMCharacter_Statics::NewProp_CharecterMesh_MetaData[] = {
		{ "Category", "MCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Core/Character/MCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMCharacter_Statics::NewProp_CharecterMesh = { "CharecterMesh", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMCharacter, CharecterMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::NewProp_CharecterMesh_MetaData), Z_Construct_UClass_AMCharacter_Statics::NewProp_CharecterMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMCharacter_Statics::NewProp_SM_CharecterMesh_MetaData[] = {
		{ "Category", "MCharacter" },
		{ "ModuleRelativePath", "Core/Character/MCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMCharacter_Statics::NewProp_SM_CharecterMesh = { "SM_CharecterMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMCharacter, SM_CharecterMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::NewProp_SM_CharecterMesh_MetaData), Z_Construct_UClass_AMCharacter_Statics::NewProp_SM_CharecterMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMCharacter_Statics::NewProp_IMC_Locomotion_MetaData[] = {
		{ "Category", "MCharacter" },
		{ "ModuleRelativePath", "Core/Character/MCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMCharacter_Statics::NewProp_IMC_Locomotion = { "IMC_Locomotion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMCharacter, IMC_Locomotion), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::NewProp_IMC_Locomotion_MetaData), Z_Construct_UClass_AMCharacter_Statics::NewProp_IMC_Locomotion_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMCharacter_Statics::NewProp_IA_Move_MetaData[] = {
		{ "Category", "MCharacter" },
		{ "ModuleRelativePath", "Core/Character/MCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMCharacter_Statics::NewProp_IA_Move = { "IA_Move", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMCharacter, IA_Move), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::NewProp_IA_Move_MetaData), Z_Construct_UClass_AMCharacter_Statics::NewProp_IA_Move_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMCharacter_Statics::NewProp_IA_Look_MetaData[] = {
		{ "Category", "MCharacter" },
		{ "ModuleRelativePath", "Core/Character/MCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMCharacter_Statics::NewProp_IA_Look = { "IA_Look", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMCharacter, IA_Look), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::NewProp_IA_Look_MetaData), Z_Construct_UClass_AMCharacter_Statics::NewProp_IA_Look_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMCharacter_Statics::NewProp_CameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMCharacter_Statics::NewProp_CharecterMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMCharacter_Statics::NewProp_SM_CharecterMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMCharacter_Statics::NewProp_IMC_Locomotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMCharacter_Statics::NewProp_IA_Move,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMCharacter_Statics::NewProp_IA_Look,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMCharacter_Statics::ClassParams = {
		&AMCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMCharacter()
	{
		if (!Z_Registration_Info_UClass_AMCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMCharacter.OuterSingleton, Z_Construct_UClass_AMCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMCharacter.OuterSingleton;
	}
	template<> ZOFIHIT_API UClass* StaticClass<AMCharacter>()
	{
		return AMCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMCharacter);
	AMCharacter::~AMCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_KTS_WS_2312U_Documents_Unreal_Projects_ZOFIHITrep_ZOFIHIT_Source_ZOFIHIT_Core_Character_MCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KTS_WS_2312U_Documents_Unreal_Projects_ZOFIHITrep_ZOFIHIT_Source_ZOFIHIT_Core_Character_MCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMCharacter, AMCharacter::StaticClass, TEXT("AMCharacter"), &Z_Registration_Info_UClass_AMCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMCharacter), 14531566U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KTS_WS_2312U_Documents_Unreal_Projects_ZOFIHITrep_ZOFIHIT_Source_ZOFIHIT_Core_Character_MCharacter_h_3835701705(TEXT("/Script/ZOFIHIT"),
		Z_CompiledInDeferFile_FID_Users_KTS_WS_2312U_Documents_Unreal_Projects_ZOFIHITrep_ZOFIHIT_Source_ZOFIHIT_Core_Character_MCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KTS_WS_2312U_Documents_Unreal_Projects_ZOFIHITrep_ZOFIHIT_Source_ZOFIHIT_Core_Character_MCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
