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

// Class MeshNetwork.MeshBeaconClient
// 0x0038 (0x03E8 - 0x03B0)
class AMeshBeaconClient : public AOnlineBeaconClient
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x03B0(0x0020) MISSED OFFSET
	bool                                               bConnectedToRoot;                                         // 0x03D0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x17];                                      // 0x03D1(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshNetwork.MeshBeaconClient");
		return ptr;
	}


	void ServerUpdateMultipleLevelsVisibility(TArray<struct FUpdateLevelVisibilityLevelInfo> LevelVisibilities);
	void ServerUpdateLevelVisibility(struct FName PackageName, bool bIsVisible);
	void OnRep_ConnectedToRoot();
};


// Class MeshNetwork.MeshBeaconHost
// 0x0008 (0x0420 - 0x0418)
class AMeshBeaconHost : public AOnlineBeaconHost
{
public:
	int                                                MaxConnections;                                           // 0x0418(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x041C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshNetwork.MeshBeaconHost");
		return ptr;
	}

};


// Class MeshNetwork.MeshBeaconHostObject
// 0x0008 (0x0360 - 0x0358)
class AMeshBeaconHostObject : public AOnlineBeaconHostObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0358(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshNetwork.MeshBeaconHostObject");
		return ptr;
	}

};


// Class MeshNetwork.MeshConnection
// 0x0000 (0x1990 - 0x1990)
class UMeshConnection : public UIpConnection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshNetwork.MeshConnection");
		return ptr;
	}

};


// Class MeshNetwork.MeshNetDriver
// 0x0000 (0x0768 - 0x0768)
class UMeshNetDriver : public UIpNetDriver
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshNetwork.MeshNetDriver");
		return ptr;
	}

};


// Class MeshNetwork.MeshNetworkComponent
// 0x00A8 (0x01A0 - 0x00F8)
class UMeshNetworkComponent : public UActorComponent
{
public:
	EMeshNetworkRelevancy                              MeshRelevancy;                                            // 0x00F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET
	TMap<struct FName, double>                         AggregationTimeouts;                                      // 0x0100(0x0050) (Edit, ZeroConstructor)
	TMap<struct FName, struct FAggregatedFunction>     AggregatedFunctions;                                      // 0x0150(0x0050) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshNetwork.MeshNetworkComponent");
		return ptr;
	}


	EMeshNetworkNodeType GetMeshNetworkNodeType();
};


// Class MeshNetwork.MeshNetworkSubsystem
// 0x0070 (0x0098 - 0x0028)
class UMeshNetworkSubsystem : public UGameInstanceSubsystem
{
public:
	struct FScriptMulticastDelegate                    OnMeshNodeTypeChanged;                                    // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnConnectedToRootChanged;                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGameServerNodeTypeChanged;                              // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMeshMetaDataUpdated;                                    // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0068(0x0018) MISSED OFFSET
	EMeshNetworkNodeType                               NodeType;                                                 // 0x0080(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	EMeshNetworkNodeType                               GameServerNodeType;                                       // 0x0081(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bConnectedToRoot;                                         // 0x0082(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x15];                                      // 0x0083(0x0015) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshNetwork.MeshNetworkSubsystem");
		return ptr;
	}


	void SetMetaData(struct FMeshMetaDataStruct MetaData);
	void GetMetadata(struct FMeshMetaDataStruct* MetaData);
	EMeshNetworkNodeType GetMeshNetworkNodeType();
	EMeshNetworkNodeType GetGameServerNodeType();
	bool GetConnectedToRoot();
};


// Class MeshNetwork.MeshReplicationGraph
// 0x0000 (0x0460 - 0x0460)
class UMeshReplicationGraph : public UReplicationGraph
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshNetwork.MeshReplicationGraph");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
