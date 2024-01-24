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

// Class NetUI.ConnectionTimeoutWidget
// 0x0038 (0x0260 - 0x0228)
class UConnectionTimeoutWidget : public UUserWidget
{
public:
	uint32_t                                           BadPingThreshold;                                         // 0x0228(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              BadPacketLossThreshold;                                   // 0x022C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bStartTimerWhenConstructed;                               // 0x0230(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0231(0x0007) MISSED OFFSET
	class UHorizontalBox*                              TimeoutUI;                                                // 0x0238(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0240(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NetUI.ConnectionTimeoutWidget");
		return ptr;
	}


	void StopTimeoutUICheck();
	void StartTimeoutUICheck();
};


// Class NetUI.NetDebugWidget
// 0x0100 (0x0328 - 0x0228)
class UNetDebugWidget : public UUserWidget
{
public:
	class UCommonTextBlock*                            PingUI;                                                   // 0x0228(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonTextBlock*                            PacketInRateUI;                                           // 0x0230(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonTextBlock*                            PacketOutRateUI;                                          // 0x0238(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonTextBlock*                            PacketInLossUI;                                           // 0x0240(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonTextBlock*                            PacketOutLossUI;                                          // 0x0248(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonTextBlock*                            UpBandwidthUI;                                            // 0x0250(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonTextBlock*                            DownBandwidthUI;                                          // 0x0258(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0260(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NetUI.NetDebugWidget");
		return ptr;
	}


	void StopTimer();
	void StartTimer();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
