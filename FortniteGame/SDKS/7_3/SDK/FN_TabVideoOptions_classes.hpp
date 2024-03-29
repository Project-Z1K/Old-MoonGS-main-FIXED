#pragma once

// Fortnite (7.3) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TabVideoOptions.TabVideoOptions_C
// 0x0088 (0x0308 - 0x0280)
class UTabVideoOptions_C : public UFortVideoOptions
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                            TooltipDisplay;                                           // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    Enable_Overlay;                                           // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    Disable_Overlay;                                          // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UFortOptionsMenuSetting*                     DisplayResolutionSetting;                                 // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TMap<ESettingType, class UFortOptionsMenuSetting*> ForceUpdateSettings;                                      // 0x02B8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TabVideoOptions.TabVideoOptions_C");
		return ptr;
	}


	void Update_Qualities();
	void Construct();
	void UpdateOptionsTab();
	void CenterOnTab();
	void OnGameUserSettingsUINeedsUpdate();
	void Destruct();
	void BndEvt__OptionsListView_K2Node_ComponentBoundEvent(class UUserWidget* Widget);
	void Window_Mode_Changed(bool IsWindowedFullscreen);
	void Quality_Changed();
	void Setting_Value_Changed();
	void ExecuteUbergraph_TabVideoOptions(int EntryPoint);
	void Disable_Overlay__DelegateSignature();
	void Enable_Overlay__DelegateSignature(bool Accept_Input);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
