#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "FogType__pf1242490746.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class APlayerController;
class UPostProcessComponent;
class UBillboardComponent;
class UCustomMeshComponent;
class USceneComponent;
class UMaterialInstanceDynamic;
class AController;
class APawn;
class UFOWComponent_C__pf1242490746;
class UPhysicalMaterial;
class AActor;
class UPrimitiveComponent;
#include "FogDrawingActor__pf1242490746.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/FogOfWar/Blueprints/FogDrawingActor.FogDrawingActor_C", OverrideNativeName="FogDrawingActor_C"))
class AFogDrawingActor_C__pf1242490746 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="PostProcess"))
	UPostProcessComponent* bpv__PostProcess__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="FogIcon"))
	UBillboardComponent* bpv__FogIcon__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ShadowMesh"))
	UCustomMeshComponent* bpv__ShadowMesh__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Draw FOW", Category="Fog Settings", ExposeOnSpawn="true", tooltip="Toggles drawing of the fog.", OverrideNativeName="DrawFOW"))
	bool bpv__DrawFOW__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Vision Circle", Category="Fog Settings", tooltip="Toggles circle of vision around the character (even with cone of vision on)", ExposeOnSpawn="true", OverrideNativeName="VisionCircle"))
	bool bpv__VisionCircle__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Use Cone Of Vision", Category="Fog Settings", ExposeOnSpawn="true", tooltip="Should cone of vision be used.", OverrideNativeName="UseConeOfVision"))
	bool bpv__UseConeOfVision__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Circle Radius", Category="Fog Settings", ExposeOnSpawn="true", tooltip="Radius of a vision circle.", OverrideNativeName="CircleRadius"))
	float bpv__CircleRadius__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Vision Range", Category="Fog Settings", ExposeOnSpawn="true", UIMin="100", UIMax="2000", tooltip="Maximum vision range.", ClampMin="100", ClampMax="2000", OverrideNativeName="VisionRange"))
	float bpv__VisionRange__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Cone Size", Category="Fog Settings", tooltip="Angle of the vision cone.", ExposeOnSpawn="true", UIMin="0", UIMax="180", ClampMin="0", ClampMax="180", OverrideNativeName="ConeSize"))
	float bpv__ConeSize__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Facing", Category="Default", OverrideNativeName="Facing"))
	FRotator bpv__Facing__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Shadow Material", Category="Default", tooltip, OverrideNativeName="ShadowMaterial"))
	UMaterialInstanceDynamic* bpv__ShadowMaterial__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="My Controller", Category="Default", OverrideNativeName="MyController"))
	AController* bpv__MyController__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="My Pawn", Category="Fog Settings", ExposeOnSpawn="true", tooltip="Source of vision (Player Character).", OverrideNativeName="MyPawn"))
	APawn* bpv__MyPawn__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Shadow Height", Category="Fog Settings", tooltip="Z location of the fog. ", OverrideNativeName="ShadowHeight"))
	float bpv__ShadowHeight__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Fog Casting Objects", Category="Default", OverrideNativeName="FogCastingObjects"))
	bool bpv__FogCastingObjects__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Actors Casting FOW", Category="Default", OverrideNativeName="ActorsCastingFOW"))
	TArray<UFOWComponent_C__pf1242490746*> bpv__ActorsCastingFOW__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Actors Visible in FOW", Category="Default", OverrideNativeName="ActorsVisibleInFOW"))
	TArray<UFOWComponent_C__pf1242490746*> bpv__ActorsVisibleInFOW__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Discovered Actors", Category="Default", OverrideNativeName="DiscoveredActors"))
	TArray<UFOWComponent_C__pf1242490746*> bpv__DiscoveredActors__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(DisplayName="Debug Mode", Category="Default", ExposeOnSpawn="true", tooltip="While true debug data will be displayed.", OverrideNativeName="DebugMode"))
	bool bpv__DebugMode__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Fog Type", Category="Fog Settings", ExposeOnSpawn="true", OverrideNativeName="FogType"))
	E__FogType__pf bpv__FogType__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Use Line Of Sight", Category="Fog Settings", ExposeOnSpawn="true", OverrideNativeName="UseLineOfSight"))
	bool bpv__UseLineOfSight__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsPlayer_Controller"))
	APlayerController* b0l__K2Node_DynamicCast_AsPlayer_Controller__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetHitResultUnderCursorByChannel_HitResult"))
	FHitResult b0l__CallFunc_GetHitResultUnderCursorByChannel_HitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bBlockingHit"))
	bool b0l__CallFunc_BreakHitResult_bBlockingHit__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bInitialOverlap"))
	bool b0l__CallFunc_BreakHitResult_bInitialOverlap__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Time"))
	float b0l__CallFunc_BreakHitResult_Time__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Distance"))
	float b0l__CallFunc_BreakHitResult_Distance__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Location"))
	FVector b0l__CallFunc_BreakHitResult_Location__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactPoint"))
	FVector b0l__CallFunc_BreakHitResult_ImpactPoint__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Normal"))
	FVector b0l__CallFunc_BreakHitResult_Normal__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactNormal"))
	FVector b0l__CallFunc_BreakHitResult_ImpactNormal__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_PhysMat"))
	UPhysicalMaterial* b0l__CallFunc_BreakHitResult_PhysMat__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitActor"))
	AActor* b0l__CallFunc_BreakHitResult_HitActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitComponent"))
	UPrimitiveComponent* b0l__CallFunc_BreakHitResult_HitComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitBoneName"))
	FName b0l__CallFunc_BreakHitResult_HitBoneName__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitItem"))
	int32 b0l__CallFunc_BreakHitResult_HitItem__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_FaceIndex"))
	int32 b0l__CallFunc_BreakHitResult_FaceIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceStart"))
	FVector b0l__CallFunc_BreakHitResult_TraceStart__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceEnd"))
	FVector b0l__CallFunc_BreakHitResult_TraceEnd__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X"))
	float b0l__CallFunc_BreakVector_X__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y"))
	float b0l__CallFunc_BreakVector_Y__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z"))
	float b0l__CallFunc_BreakVector_Z__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetActorTransform_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetActorTransform_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Roll"))
	float b0l__CallFunc_BreakRotator_Roll__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Pitch"))
	float b0l__CallFunc_BreakRotator_Pitch__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Yaw"))
	float b0l__CallFunc_BreakRotator_Yaw__pf;
	AFogDrawingActor_C__pf1242490746(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_FogDrawingActor__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_FogDrawingActor__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_FogDrawingActor__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(Client, BlueprintCallable, Unreliable, meta=(Category, OverrideNativeName="InitializeFog"))
	virtual void bpf__InitializeFog__pf();
	UFUNCTION(meta=(DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(DisplayName="Tick", ToolTip="Event called every frame", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="DrawFog"))
	virtual void bpf__DrawFog__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Show/Hide Actors"))
	virtual void bpf__ShowxHidexActors__pfET();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AngleToPlayer"))
	virtual void bpf__AngleToPlayer__pf(FVector bpp__Location__pf, /*out*/ float& bpp__Angle__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="FindValidPawn"))
	virtual void bpf__FindValidPawn__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="FindActorsWithFOWComponent"))
	virtual void bpf__FindActorsWithFOWComponent__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Modify_FogDrawing"))
	virtual void bpf__Modify_FogDrawing__pf(bool bpp__DrawFog__pf, bool bpp__UseLineOfSight__pf, E__FogType__pf bpp__FogType__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Modify_VisionRange"))
	virtual void bpf__Modify_VisionRange__pf(float bpp__VisionRange__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Modify_VisionCircle"))
	virtual void bpf__Modify_VisionCircle__pf(bool bpp__UseCircle__pf, float bpp__Radius__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Modify_VisionCone"))
	virtual void bpf__Modify_VisionCone__pf(bool bpp__UseVisionCone__pf, float bpp__ConeSize__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ConfigureFog"))
	virtual void bpf__ConfigureFog__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ShowAll"))
	virtual void bpf__ShowAll__pf();
public:
};
