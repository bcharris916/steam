#include "NativizedAssets.h"
#include "FogDrawingActor__pf1242490746.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsSettingsEnums.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/Engine/Classes/Vehicles/TireType.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunction.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollection.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Public/Components.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Classes/Animation/AnimEnums.h"
#include "Runtime/Engine/Classes/Animation/TimeStretchCurve.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetupEnums.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicalAnimationComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintTemplate.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintDrives.h"
#include "Runtime/Engine/Classes/EditorFramework/ThumbnailInfo.h"
#include "Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "Runtime/Engine/Classes/Animation/MorphTarget.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingAssetInterface.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
#include "Runtime/Engine/Classes/Animation/AnimStateMachineTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimClassInterface.h"
#include "Runtime/Engine/Public/SingleAnimationPlayData.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationFactoryInterface.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationData.h"
#include "Runtime/Engine/Classes/AI/Navigation/RecastNavMesh.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreas/NavArea.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreas/NavArea_Obstacle.h"
#include "Runtime/AIModule/Classes/AIController.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Runtime/AIModule/Classes/AIResourceInterface.h"
#include "Runtime/AIModule/Classes/BrainComponent.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardData.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionComponent.h"
#include "Runtime/AIModule/Classes/Perception/AISenseConfig.h"
#include "Runtime/AIModule/Classes/Perception/AISense.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionSystem.h"
#include "Runtime/AIModule/Classes/Perception/AISenseEvent.h"
#include "Runtime/AIModule/Classes/Actions/PawnActionsComponent.h"
#include "Runtime/AIModule/Classes/Actions/PawnAction.h"
#include "Runtime/AIModule/Classes/AITypes.h"
#include "Runtime/GameplayTasks/Classes/GameplayTasksComponent.h"
#include "Runtime/GameplayTasks/Classes/GameplayTask.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskOwnerInterface.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskResource.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavFilters/NavigationQueryFilter.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTree.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTCompositeNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTTaskNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTService.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTAuxiliaryNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTDecorator.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionListenerInterface.h"
#include "Runtime/AIModule/Classes/GenericTeamAgentInterface.h"
#include "Runtime/Engine/Public/VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Debug/ReporterGraph.h"
#include "Runtime/Engine/Classes/Debug/ReporterBase.h"
#include "Runtime/Engine/Classes/GameFramework/DebugTextInfo.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Runtime/Engine/Classes/Engine/TextureCube.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
#include "Runtime/Engine/Classes/Particles/Emitter.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "Runtime/Engine/Classes/Particles/ParticleEmitter.h"
#include "Runtime/Engine/Classes/Particles/ParticleLODLevel.h"
#include "Runtime/Engine/Classes/Particles/ParticleModuleRequired.h"
#include "Runtime/Engine/Classes/Particles/ParticleModule.h"
#include "Runtime/Engine/Classes/Particles/ParticleSpriteEmitter.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Distributions/Distribution.h"
#include "Runtime/Engine/Classes/Particles/SubUVAnimation.h"
#include "Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataBase.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawn.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawnBase.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventGenerator.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventBase.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventSendToGame.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbit.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbitBase.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventReceiverBase.h"
#include "Runtime/Engine/Public/ParticleHelper.h"
#include "Runtime/Engine/Classes/Engine/InterpCurveEdSetup.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemReplay.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstMove.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraController.h"
#include "Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/Engine/NetConnection.h"
#include "Runtime/Engine/Classes/Engine/ChildConnection.h"
#include "Runtime/Engine/Classes/Engine/PackageMapClient.h"
#include "Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelActorContainer.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptActor.h"
#include "Runtime/Engine/Classes/Engine/NavigationObjectBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
#include "Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
#include "Runtime/Engine/Classes/Sound/SoundBase.h"
#include "Runtime/Engine/Classes/Sound/SoundClass.h"
#include "Runtime/Engine/Classes/Sound/SoundMix.h"
#include "Runtime/Engine/Classes/Sound/SoundConcurrency.h"
#include "Runtime/Engine/Classes/Sound/SoundAttenuation.h"
#include "Runtime/Engine/Classes/Engine/Attenuation.h"
#include "Runtime/Engine/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectPreset.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "Runtime/Engine/Classes/Engine/CurveTable.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshSocket.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavCollision.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Engine/BookMark.h"
#include "Runtime/Engine/Classes/Components/LineBatchComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Engine/DemoNetDriver.h"
#include "Runtime/Engine/Classes/Particles/ParticleEventManager.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationSystem.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/AI/Navigation/CrowdManagerBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavMeshBoundsVolume.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationPath.h"
#include "Runtime/AIModule/Classes/Navigation/CrowdManager.h"
#include "Runtime/Engine/Classes/AI/AISystemBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/Engine/AssetManager.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
#include "Runtime/Engine/Classes/Engine/WorldComposition.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/UMG/Public/Binding/PropertyBinding.h"
#include "Runtime/UMG/Public/Binding/DynamicPropertyPath.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieSceneSequence.h"
#include "Runtime/MovieScene/Public/MovieSceneSignedObject.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTrack.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSegment.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvalTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackImplementation.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationField.h"
#include "Runtime/MovieScene/Public/MovieSceneSequenceID.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackIdentifier.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationKey.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceHierarchy.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceTransform.h"
#include "Runtime/MovieScene/Public/MovieSceneTrack.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/MovieScene/Public/MovieSceneSpawnable.h"
#include "Runtime/MovieScene/Public/MovieScenePossessable.h"
#include "Runtime/MovieScene/Public/MovieSceneBinding.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimationBinding.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "CustomMeshComponent.h"
#include "Runtime/Engine/Classes/Components/PostProcessComponent.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_PostProcessVolume.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackAttenuation.h"
#include "Runtime/Engine/Classes/Components/ForceFeedbackComponent.h"
#include "Runtime/Engine/Classes/Sound/DialogueWave.h"
#include "Runtime/Engine/Classes/Sound/DialogueTypes.h"
#include "Runtime/Engine/Classes/Sound/DialogueVoice.h"
#include "Runtime/Engine/Classes/Sound/DialogueSoundWaveProxy.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "FOWComponent__pf1242490746.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
AFogDrawingActor_C__pf1242490746::AFogDrawingActor_C__pf1242490746(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (AFogDrawingActor_C__pf1242490746::StaticClass() == GetClass()))
	{
		AFogDrawingActor_C__pf1242490746::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__DefaultSceneRoot__pf = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	bpv__ShadowMesh__pf = CreateDefaultSubobject<UCustomMeshComponent>(TEXT("ShadowMesh"));
	bpv__FogIcon__pf = CreateDefaultSubobject<UBillboardComponent>(TEXT("FogIcon"));
	bpv__PostProcess__pf = CreateDefaultSubobject<UPostProcessComponent>(TEXT("PostProcess"));
	RootComponent = bpv__DefaultSceneRoot__pf;
	bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__ShadowMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__ShadowMesh__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__ShadowMesh__pf->bRenderInMainPass = false;
	bpv__ShadowMesh__pf->bRenderCustomDepth = true;
	if(!bpv__ShadowMesh__pf->IsTemplate())
	{
		bpv__ShadowMesh__pf->BodyInstance.FixupData(bpv__ShadowMesh__pf);
	}
	bpv__FogIcon__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__FogIcon__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__FogIcon__pf->RelativeLocation = FVector(0.000000, 0.000000, 100.000000);
	if(!bpv__FogIcon__pf->IsTemplate())
	{
		bpv__FogIcon__pf->BodyInstance.FixupData(bpv__FogIcon__pf);
	}
	bpv__PostProcess__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__PostProcess__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__PostProcess__pf->Settings.WeightedBlendables.Array = TArray<FWeightedBlendable> ();
	bpv__PostProcess__pf->Settings.WeightedBlendables.Array.AddUninitialized(1);
	FWeightedBlendable::StaticStruct()->InitializeStruct(bpv__PostProcess__pf->Settings.WeightedBlendables.Array.GetData(), 1);
	auto& __Local__0 = bpv__PostProcess__pf->Settings.WeightedBlendables.Array[0];
	__Local__0.Weight = 1.000000f;
	__Local__0.Object = CastChecked<UObject>(CastChecked<UDynamicClass>(AFogDrawingActor_C__pf1242490746::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__DrawFOW__pf = true;
	bpv__VisionCircle__pf = true;
	bpv__UseConeOfVision__pf = true;
	bpv__CircleRadius__pf = 80.000000f;
	bpv__VisionRange__pf = 800.000000f;
	bpv__ConeSize__pf = 120.000000f;
	bpv__Facing__pf = FRotator(0.000000, 0.000000, 0.000000);
	bpv__ShadowMaterial__pf = nullptr;
	bpv__MyController__pf = nullptr;
	bpv__MyPawn__pf = nullptr;
	bpv__ShadowHeight__pf = 1.000000f;
	bpv__FogCastingObjects__pf = false;
	bpv__ActorsCastingFOW__pf = TArray<UFOWComponent_C__pf1242490746*> ();
	bpv__ActorsVisibleInFOW__pf = TArray<UFOWComponent_C__pf1242490746*> ();
	bpv__DiscoveredActors__pf = TArray<UFOWComponent_C__pf1242490746*> ();
	bpv__DebugMode__pf = false;
	bpv__FogType__pf = E__FogType__pf::NewEnumerator1;
	bpv__UseLineOfSight__pf = true;
	PrimaryActorTick.bCanEverTick = true;
}
void AFogDrawingActor_C__pf1242490746::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__DefaultSceneRoot__pf)
	{
		bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__ShadowMesh__pf)
	{
		bpv__ShadowMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__FogIcon__pf)
	{
		bpv__FogIcon__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__PostProcess__pf)
	{
		bpv__PostProcess__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
void AFogDrawingActor_C__pf1242490746::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted enums
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/FogOfWar/Blueprints/FogType.FogType")));
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(UFOWComponent_C__pf1242490746::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
}
void AFogDrawingActor_C__pf1242490746::bpf__ExecuteUbergraph_FogDrawingActor__pf_0(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	bool bpfv__CallFunc_GetHitResultUnderCursorByChannel_ReturnValue__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FLinearColor bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue2__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_IsValid_ReturnValue2__pf{};
	FRotator bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				AActor::FlushNetDormancy();
			}
		case 2:
			{
				bpv__Facing__pf = FRotator(0.000000,0.000000,0.000000);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 3:
			{
				b0l__K2Node_DynamicCast_AsPlayer_Controller__pf = Cast<APlayerController>(bpv__MyController__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsPlayer_Controller__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 4:
			{
				bpfv__CallFunc_IsValid_ReturnValue2__pf = UKismetSystemLibrary::IsValid(bpv__MyPawn__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue2__pf)
				{
					__CurrentState = 1;
					break;
				}
			}
		case 5:
			{
				AActor::FlushNetDormancy();
			}
		case 6:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsPlayer_Controller__pf))
				{
					bpfv__CallFunc_GetHitResultUnderCursorByChannel_ReturnValue__pf = b0l__K2Node_DynamicCast_AsPlayer_Controller__pf->APlayerController::GetHitResultUnderCursorByChannel(ETraceTypeQuery::TraceTypeQuery1, true, /*out*/ b0l__CallFunc_GetHitResultUnderCursorByChannel_HitResult__pf);
				}
				UGameplayStatics::BreakHitResult(b0l__CallFunc_GetHitResultUnderCursorByChannel_HitResult__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time__pf, /*out*/ b0l__CallFunc_BreakHitResult_Distance__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd__pf);
				if(IsValid(bpv__MyPawn__pf))
				{
					bpfv__CallFunc_K2_GetActorLocation_ReturnValue2__pf = bpv__MyPawn__pf->AActor::K2_GetActorLocation();
				}
				bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf = UKismetMathLibrary::FindLookAtRotation(bpfv__CallFunc_K2_GetActorLocation_ReturnValue2__pf, b0l__CallFunc_BreakHitResult_Location__pf);
				UKismetMathLibrary::BreakRotator(bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf, /*out*/ b0l__CallFunc_BreakRotator_Roll__pf, /*out*/ b0l__CallFunc_BreakRotator_Pitch__pf, /*out*/ b0l__CallFunc_BreakRotator_Yaw__pf);
				bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, b0l__CallFunc_BreakRotator_Yaw__pf);
				bpv__Facing__pf = bpfv__CallFunc_MakeRotator_ReturnValue__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 7:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__MyController__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = 1;
					break;
				}
				__CurrentState = 3;
				break;
			}
		case 8:
			{
				__CurrentState = 9;
				break;
			}
		case 9:
			{
				if (!bpv__DrawFOW__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 10:
			{
				__StateStack.Push(14);
				__StateStack.Push(12);
				__StateStack.Push(11);
				__CurrentState = 7;
				break;
			}
		case 11:
			{
				bpf__DrawFog__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 12:
			{
				if (!bpv__UseLineOfSight__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 13:
			{
				bpf__ShowxHidexActors__pfET();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 14:
			{
				if (!bpv__VisionCircle__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 15:
			{
				if(IsValid(bpv__MyPawn__pf))
				{
					bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = bpv__MyPawn__pf->AActor::K2_GetActorLocation();
				}
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf, /*out*/ b0l__CallFunc_BreakVector_X__pf, /*out*/ b0l__CallFunc_BreakVector_Y__pf, /*out*/ b0l__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(b0l__CallFunc_BreakVector_X__pf, b0l__CallFunc_BreakVector_Y__pf, 0.000000);
				bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue__pf = UKismetMathLibrary::Conv_VectorToLinearColor(bpfv__CallFunc_MakeVector_ReturnValue__pf);
				if(IsValid(bpv__ShadowMaterial__pf))
				{
					bpv__ShadowMaterial__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("PlayerPosition")), bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void AFogDrawingActor_C__pf1242490746::bpf__ExecuteUbergraph_FogDrawingActor__pf_1(int32 bpp__EntryPoint__pf)
{
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue__pf{};
	bool bpfv__CallFunc_K2_SetActorTransform_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 16);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
	bpfv__CallFunc_K2_SetActorTransform_ReturnValue__pf = AActor::K2_SetActorTransform(bpfv__CallFunc_MakeTransform_ReturnValue__pf, false, /*out*/ b0l__CallFunc_K2_SetActorTransform_SweepHitResult__pf, false);
	bpf__InitializeFog__pf();
	return; //KCST_EndOfThread
}
void AFogDrawingActor_C__pf1242490746::bpf__ExecuteUbergraph_FogDrawingActor__pf_2(int32 bpp__EntryPoint__pf)
{
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 19:
			{
				__StateStack.Push(21);
				__StateStack.Push(22);
			}
		case 20:
			{
				bpf__FindValidPawn__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 21:
			{
				bpf__FindActorsWithFOWComponent__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 22:
			{
				bpf__ConfigureFog__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 23:
			{
				__CurrentState = 19;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void AFogDrawingActor_C__pf1242490746::bpf__InitializeFog__pf_Implementation()
{
	bpf__ExecuteUbergraph_FogDrawingActor__pf_2(23);
}
void AFogDrawingActor_C__pf1242490746::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_FogDrawingActor__pf_1(16);
}
void AFogDrawingActor_C__pf1242490746::bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
{
	b0l__K2Node_Event_DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	bpf__ExecuteUbergraph_FogDrawingActor__pf_0(8);
}
void AFogDrawingActor_C__pf1242490746::bpf__UserConstructionScript__pf()
{
}
void AFogDrawingActor_C__pf1242490746::bpf__DrawFog__pf()
{
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__Temp_int_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue2__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue2__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue3__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue3__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Divide_IntInt_ReturnValue__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue4__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Multiply_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Multiply_IntInt_ReturnValue2__pf{};
	float bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Conv_IntToFloat_ReturnValue2__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue2__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Conv_IntToFloat_ReturnValue3__pf{};
	float bpfv__CallFunc_Conv_IntToFloat_ReturnValue4__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue3__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue4__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue5__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue6__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue2__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X2__pf{};
	float bpfv__CallFunc_BreakVector_Y2__pf{};
	float bpfv__CallFunc_BreakVector_Z2__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue7__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue8__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue2__pf(EForceInit::ForceInit);
	int32 bpfv__Temp_int_Variable2__pf{};
	UFOWComponent_C__pf1242490746* bpfv__K2Node_DynamicCast_AsFOWComponent__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue4__pf{};
	AActor* bpfv__CallFunc_GetOwner_ReturnValue__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue3__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue2__pf{};
	float bpfv__CallFunc_BreakVector_X3__pf{};
	float bpfv__CallFunc_BreakVector_Y3__pf{};
	float bpfv__CallFunc_BreakVector_Z3__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue9__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue5__pf{};
	int32 bpfv__CallFunc_Divide_IntInt_ReturnValue2__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue10__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Multiply_IntInt_ReturnValue3__pf{};
	int32 bpfv__CallFunc_Multiply_IntInt_ReturnValue4__pf{};
	float bpfv__CallFunc_Conv_IntToFloat_ReturnValue5__pf{};
	float bpfv__CallFunc_Conv_IntToFloat_ReturnValue6__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue5__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue6__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue3__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue4__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue3__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue4__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Conv_IntToFloat_ReturnValue7__pf{};
	float bpfv__CallFunc_Conv_IntToFloat_ReturnValue8__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue7__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue8__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue5__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue11__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue5__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue6__pf(EForceInit::ForceInit);
	FCustomMeshTriangle bpfv__K2Node_MakeStruct_CustomMeshTriangle__pf{};
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue6__pf(EForceInit::ForceInit);
	FCustomMeshTriangle bpfv__K2Node_MakeStruct_CustomMeshTriangle2__pf{};
	float bpfv__CallFunc_BreakVector_X4__pf{};
	float bpfv__CallFunc_BreakVector_Y4__pf{};
	float bpfv__CallFunc_BreakVector_Z4__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue12__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X5__pf{};
	float bpfv__CallFunc_BreakVector_Y5__pf{};
	float bpfv__CallFunc_BreakVector_Z5__pf{};
	float bpfv__CallFunc_BreakVector_X6__pf{};
	float bpfv__CallFunc_BreakVector_Y6__pf{};
	float bpfv__CallFunc_BreakVector_Z6__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue13__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue14__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X7__pf{};
	float bpfv__CallFunc_BreakVector_Y7__pf{};
	float bpfv__CallFunc_BreakVector_Z7__pf{};
	float bpfv__CallFunc_BreakVector_X8__pf{};
	float bpfv__CallFunc_BreakVector_Y8__pf{};
	float bpfv__CallFunc_BreakVector_Z8__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue15__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue16__pf(EForceInit::ForceInit);
	FCustomMeshTriangle bpfv__K2Node_MakeStruct_CustomMeshTriangle3__pf{};
	float bpfv__CallFunc_BreakVector_X9__pf{};
	float bpfv__CallFunc_BreakVector_Y9__pf{};
	float bpfv__CallFunc_BreakVector_Z9__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue17__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue4__pf(EForceInit::ForceInit);
	FCustomMeshTriangle bpfv__K2Node_MakeStruct_CustomMeshTriangle4__pf{};
	float bpfv__CallFunc_BreakVector_X10__pf{};
	float bpfv__CallFunc_BreakVector_Y10__pf{};
	float bpfv__CallFunc_BreakVector_Z10__pf{};
	TArray<FCustomMeshTriangle> bpfv__K2Node_MakeArray_Array__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue18__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue9__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue19__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue20__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue7__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue7__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_ComposeRotators_ReturnValue__pf(EForceInit::ForceInit);
	FCustomMeshTriangle bpfv__K2Node_MakeStruct_CustomMeshTriangle5__pf{};
	FVector bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue8__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X11__pf{};
	float bpfv__CallFunc_BreakVector_Y11__pf{};
	float bpfv__CallFunc_BreakVector_Z11__pf{};
	float bpfv__CallFunc_BreakVector_X12__pf{};
	float bpfv__CallFunc_BreakVector_Y12__pf{};
	float bpfv__CallFunc_BreakVector_Z12__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue21__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue22__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X13__pf{};
	float bpfv__CallFunc_BreakVector_Y13__pf{};
	float bpfv__CallFunc_BreakVector_Z13__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue23__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue5__pf(EForceInit::ForceInit);
	FCustomMeshTriangle bpfv__K2Node_MakeStruct_CustomMeshTriangle6__pf{};
	float bpfv__CallFunc_BreakVector_X14__pf{};
	float bpfv__CallFunc_BreakVector_Y14__pf{};
	float bpfv__CallFunc_BreakVector_Z14__pf{};
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue8__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue24__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue10__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	FRotator bpfv__CallFunc_ComposeRotators_ReturnValue2__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue11__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue9__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_ComposeRotators_ReturnValue3__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue9__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue10__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X15__pf{};
	float bpfv__CallFunc_BreakVector_Y15__pf{};
	float bpfv__CallFunc_BreakVector_Z15__pf{};
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue10__pf(EForceInit::ForceInit);
	FCustomMeshTriangle bpfv__K2Node_MakeStruct_CustomMeshTriangle7__pf{};
	float bpfv__CallFunc_BreakVector_X16__pf{};
	float bpfv__CallFunc_BreakVector_Y16__pf{};
	float bpfv__CallFunc_BreakVector_Z16__pf{};
	FCustomMeshTriangle bpfv__K2Node_MakeStruct_CustomMeshTriangle8__pf{};
	float bpfv__CallFunc_BreakVector_X17__pf{};
	float bpfv__CallFunc_BreakVector_Y17__pf{};
	float bpfv__CallFunc_BreakVector_Z17__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue25__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X18__pf{};
	float bpfv__CallFunc_BreakVector_Y18__pf{};
	float bpfv__CallFunc_BreakVector_Z18__pf{};
	float bpfv__CallFunc_BreakVector_X19__pf{};
	float bpfv__CallFunc_BreakVector_Y19__pf{};
	float bpfv__CallFunc_BreakVector_Z19__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue26__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue27__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X20__pf{};
	float bpfv__CallFunc_BreakVector_Y20__pf{};
	float bpfv__CallFunc_BreakVector_Z20__pf{};
	float bpfv__CallFunc_BreakVector_X21__pf{};
	float bpfv__CallFunc_BreakVector_Y21__pf{};
	float bpfv__CallFunc_BreakVector_Z21__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue28__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue29__pf(EForceInit::ForceInit);
	FCustomMeshTriangle bpfv__K2Node_MakeStruct_CustomMeshTriangle9__pf{};
	float bpfv__CallFunc_BreakVector_X22__pf{};
	float bpfv__CallFunc_BreakVector_Y22__pf{};
	float bpfv__CallFunc_BreakVector_Z22__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue30__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue31__pf(EForceInit::ForceInit);
	FCustomMeshTriangle bpfv__K2Node_MakeStruct_CustomMeshTriangle10__pf{};
	TArray<FCustomMeshTriangle> bpfv__K2Node_MakeArray_Array2__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue32__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue33__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue11__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue11__pf(EForceInit::ForceInit);
	FCustomMeshTriangle bpfv__K2Node_MakeStruct_CustomMeshTriangle11__pf{};
	float bpfv__CallFunc_BreakVector_X23__pf{};
	float bpfv__CallFunc_BreakVector_Y23__pf{};
	float bpfv__CallFunc_BreakVector_Z23__pf{};
	UFOWComponent_C__pf1242490746* bpfv__CallFunc_Array_Get_Item__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue34__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Array_Get_Item2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue12__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Array_Get_Item3__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Array_Get_Item4__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue13__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue14__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Array_Get_Item5__pf(EForceInit::ForceInit);
	FCustomMeshTriangle bpfv__K2Node_MakeStruct_CustomMeshTriangle12__pf{};
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue15__pf(EForceInit::ForceInit);
	FCustomMeshTriangle bpfv__K2Node_MakeStruct_CustomMeshTriangle13__pf{};
	AActor* bpfv__CallFunc_GetOwner_ReturnValue2__pf{};
	TArray<FCustomMeshTriangle> bpfv__K2Node_MakeArray_Array3__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue6__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X24__pf{};
	float bpfv__CallFunc_BreakVector_Y24__pf{};
	float bpfv__CallFunc_BreakVector_Z24__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue35__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Array_Get_Item6__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Normal_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Normal_ReturnValue2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_RotateAngleAxis_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_RotateAngleAxis_ReturnValue2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue16__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue17__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue18__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue19__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue3__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue4__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Normal_ReturnValue3__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Normal_ReturnValue4__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue3__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue4__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue20__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue21__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue22__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue23__pf(EForceInit::ForceInit);
	FCustomMeshTriangle bpfv__K2Node_MakeStruct_CustomMeshTriangle14__pf{};
	FCustomMeshTriangle bpfv__K2Node_MakeStruct_CustomMeshTriangle15__pf{};
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue24__pf(EForceInit::ForceInit);
	TArray<FCustomMeshTriangle> bpfv__K2Node_MakeArray_Array4__pf{};
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue25__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Array_Get_Item7__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Array_Get_Item8__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue5__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue26__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Normal_ReturnValue5__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue6__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue5__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Normal_ReturnValue6__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue27__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue6__pf(EForceInit::ForceInit);
	FCustomMeshTriangle bpfv__K2Node_MakeStruct_CustomMeshTriangle16__pf{};
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue28__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue29__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Array_Get_Item9__pf(EForceInit::ForceInit);
	FCustomMeshTriangle bpfv__K2Node_MakeStruct_CustomMeshTriangle17__pf{};
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue30__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue7__pf(EForceInit::ForceInit);
	FCustomMeshTriangle bpfv__K2Node_MakeStruct_CustomMeshTriangle18__pf{};
	FVector bpfv__CallFunc_Normal_ReturnValue7__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue7__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue31__pf(EForceInit::ForceInit);
	FCustomMeshTriangle bpfv__K2Node_MakeStruct_CustomMeshTriangle19__pf{};
	TArray<FCustomMeshTriangle> bpfv__K2Node_MakeArray_Array5__pf{};
	AActor* bpfv__CallFunc_GetOwner_ReturnValue3__pf{};
	float bpfv__CallFunc_GetDistanceTo_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	float bpfv__CallFunc_BreakVector_X25__pf{};
	float bpfv__CallFunc_BreakVector_Y25__pf{};
	float bpfv__CallFunc_BreakVector_Z25__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue36__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X26__pf{};
	float bpfv__CallFunc_BreakVector_Y26__pf{};
	float bpfv__CallFunc_BreakVector_Z26__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue37__pf(EForceInit::ForceInit);
	FCustomMeshTriangle bpfv__K2Node_MakeStruct_CustomMeshTriangle20__pf{};
	TArray<FCustomMeshTriangle> bpfv__K2Node_MakeArray_Array6__pf{};
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(IsValid(bpv__ShadowMesh__pf))
				{
					bpv__ShadowMesh__pf->UCustomMeshComponent::ClearCustomMeshTriangles();
				}
			}
		case 2:
			{
				__StateStack.Push(22);
				__StateStack.Push(17);
			}
		case 3:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 4:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 5:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__ActorsCastingFOW__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 6:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 7:
			{
				__StateStack.Push(27);
			}
		case 8:
			{
				FCustomThunkTemplates::Array_Get(bpv__ActorsCastingFOW__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bool  __Local__1 = false;
				if (!((IsValid(bpfv__CallFunc_Array_Get_Item__pf)) ? (bpfv__CallFunc_Array_Get_Item__pf->bpv__CastFOW__pf) : (__Local__1)))
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 9:
			{
				FCustomThunkTemplates::Array_Get(bpv__ActorsCastingFOW__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_GetOwner_ReturnValue3__pf = bpfv__CallFunc_Array_Get_Item__pf->UActorComponent::GetOwner();
				}
				if(IsValid(bpfv__CallFunc_GetOwner_ReturnValue3__pf))
				{
					bpfv__CallFunc_GetDistanceTo_ReturnValue__pf = bpfv__CallFunc_GetOwner_ReturnValue3__pf->AActor::GetDistanceTo(bpv__MyPawn__pf);
				}
				bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Less_FloatFloat(bpfv__CallFunc_GetDistanceTo_ReturnValue__pf, bpv__VisionRange__pf);
				if (!bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 28;
					break;
				}
			}
		case 10:
			{
				FCustomThunkTemplates::Array_Get(bpv__ActorsCastingFOW__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bool  __Local__2 = false;
				if (!((IsValid(bpfv__CallFunc_Array_Get_Item__pf)) ? (bpfv__CallFunc_Array_Get_Item__pf->bpv__isRound__pf) : (__Local__2)))
				{
					__CurrentState = 29;
					break;
				}
			}
		case 11:
			{
				if(IsValid(bpv__MyPawn__pf))
				{
					bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = bpv__MyPawn__pf->AActor::K2_GetActorLocation();
				}
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X__pf, bpfv__CallFunc_BreakVector_Y__pf, 0.000000);
				bpfv__CallFunc_MakeVector_ReturnValue2__pf = UKismetMathLibrary::MakeVector(0.000000, 0.000000, bpv__ShadowHeight__pf);
				FCustomThunkTemplates::Array_Get(bpv__ActorsCastingFOW__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_GetOwner_ReturnValue2__pf = bpfv__CallFunc_Array_Get_Item__pf->UActorComponent::GetOwner();
				}
				if(IsValid(bpfv__CallFunc_GetOwner_ReturnValue2__pf))
				{
					bpfv__CallFunc_K2_GetActorLocation_ReturnValue6__pf = bpfv__CallFunc_GetOwner_ReturnValue2__pf->AActor::K2_GetActorLocation();
				}
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue6__pf, /*out*/ bpfv__CallFunc_BreakVector_X24__pf, /*out*/ bpfv__CallFunc_BreakVector_Y24__pf, /*out*/ bpfv__CallFunc_BreakVector_Z24__pf);
				bpfv__CallFunc_MakeVector_ReturnValue35__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X24__pf, bpfv__CallFunc_BreakVector_Y24__pf, 0.000000);
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(bpfv__CallFunc_MakeVector_ReturnValue35__pf, bpfv__CallFunc_MakeVector_ReturnValue__pf);
				bpfv__CallFunc_Normal_ReturnValue__pf = UKismetMathLibrary::Normal(bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf);
				float  __Local__3 = 0.000000;
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_Normal_ReturnValue__pf, ((IsValid(bpfv__CallFunc_Array_Get_Item__pf)) ? (bpfv__CallFunc_Array_Get_Item__pf->bpv__Size_Radius__pf) : (__Local__3)));
				bpfv__CallFunc_RotateAngleAxis_ReturnValue__pf = UKismetMathLibrary::RotateAngleAxis(bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf, -90.000000, FVector(0.000000,0.000000,1.000000));
				bpfv__CallFunc_RotateAngleAxis_ReturnValue2__pf = UKismetMathLibrary::RotateAngleAxis(bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf, 90.000000, FVector(0.000000,0.000000,1.000000));
				bpfv__CallFunc_Add_VectorVector_ReturnValue16__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_MakeVector_ReturnValue35__pf, bpfv__CallFunc_RotateAngleAxis_ReturnValue__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue17__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_RotateAngleAxis_ReturnValue2__pf, bpfv__CallFunc_MakeVector_ReturnValue35__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue18__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Add_VectorVector_ReturnValue16__pf, bpfv__CallFunc_MakeVector_ReturnValue2__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue19__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Add_VectorVector_ReturnValue17__pf, bpfv__CallFunc_MakeVector_ReturnValue2__pf);
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue3__pf = UKismetMathLibrary::Subtract_VectorVector(bpfv__CallFunc_Add_VectorVector_ReturnValue17__pf, bpfv__CallFunc_MakeVector_ReturnValue__pf);
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue4__pf = UKismetMathLibrary::Subtract_VectorVector(bpfv__CallFunc_Add_VectorVector_ReturnValue16__pf, bpfv__CallFunc_MakeVector_ReturnValue__pf);
				bpfv__CallFunc_Normal_ReturnValue3__pf = UKismetMathLibrary::Normal(bpfv__CallFunc_Subtract_VectorVector_ReturnValue3__pf);
				bpfv__CallFunc_Normal_ReturnValue4__pf = UKismetMathLibrary::Normal(bpfv__CallFunc_Subtract_VectorVector_ReturnValue4__pf);
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue3__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_Normal_ReturnValue3__pf, 8000.000000);
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue4__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_Normal_ReturnValue4__pf, 8000.000000);
				bpfv__CallFunc_Add_VectorVector_ReturnValue20__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Multiply_VectorFloat_ReturnValue3__pf, bpfv__CallFunc_Add_VectorVector_ReturnValue17__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue21__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Multiply_VectorFloat_ReturnValue4__pf, bpfv__CallFunc_Add_VectorVector_ReturnValue16__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue22__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Add_VectorVector_ReturnValue20__pf, bpfv__CallFunc_MakeVector_ReturnValue2__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue23__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Add_VectorVector_ReturnValue21__pf, bpfv__CallFunc_MakeVector_ReturnValue2__pf);
				bpfv__K2Node_MakeStruct_CustomMeshTriangle14__pf.Vertex0 = bpfv__CallFunc_Add_VectorVector_ReturnValue19__pf;
				bpfv__K2Node_MakeStruct_CustomMeshTriangle14__pf.Vertex1 = bpfv__CallFunc_Add_VectorVector_ReturnValue18__pf;
				bpfv__K2Node_MakeStruct_CustomMeshTriangle14__pf.Vertex2 = bpfv__CallFunc_Add_VectorVector_ReturnValue22__pf;
				bpfv__K2Node_MakeStruct_CustomMeshTriangle15__pf.Vertex0 = bpfv__CallFunc_Add_VectorVector_ReturnValue22__pf;
				bpfv__K2Node_MakeStruct_CustomMeshTriangle15__pf.Vertex1 = bpfv__CallFunc_Add_VectorVector_ReturnValue18__pf;
				bpfv__K2Node_MakeStruct_CustomMeshTriangle15__pf.Vertex2 = bpfv__CallFunc_Add_VectorVector_ReturnValue23__pf;
				bpfv__K2Node_MakeArray_Array4__pf.SetNum(2, true);
				bpfv__K2Node_MakeArray_Array4__pf[0] = bpfv__K2Node_MakeStruct_CustomMeshTriangle14__pf;
				bpfv__K2Node_MakeArray_Array4__pf[1] = bpfv__K2Node_MakeStruct_CustomMeshTriangle15__pf;
				if(IsValid(bpv__ShadowMesh__pf))
				{
					bpv__ShadowMesh__pf->UCustomMeshComponent::AddCustomMeshTriangles(bpfv__K2Node_MakeArray_Array4__pf);
				}
			}
		case 12:
			{
				FCustomThunkTemplates::Array_Get(bpv__ActorsCastingFOW__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bool  __Local__4 = false;
				if (!((IsValid(bpfv__CallFunc_Array_Get_Item__pf)) ? (bpfv__CallFunc_Array_Get_Item__pf->bpv__DrawFogOfShape__pf) : (__Local__4)))
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 13:
			{
				bpfv__Temp_int_Variable2__pf = 0;
			}
		case 14:
			{
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue2__pf = UKismetMathLibrary::LessEqual_IntInt(bpfv__Temp_int_Variable2__pf, 20);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 15:
			{
				__StateStack.Push(32);
			}
		case 16:
			{
				bpfv__CallFunc_MakeVector_ReturnValue3__pf = UKismetMathLibrary::MakeVector(8000.000000, 0.000000, 0.000000);
				bpfv__CallFunc_MakeVector_ReturnValue5__pf = UKismetMathLibrary::MakeVector(8000.000000, 0.000000, 0.000000);
				bpfv__K2Node_DynamicCast_AsFOWComponent__pf = Cast<UFOWComponent_C__pf1242490746>(((UObject*)nullptr));
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsFOWComponent__pf != nullptr);;
				bpfv__CallFunc_Add_IntInt_ReturnValue4__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Variable2__pf, 1);
				if(IsValid(bpfv__K2Node_DynamicCast_AsFOWComponent__pf))
				{
					bpfv__CallFunc_GetOwner_ReturnValue__pf = bpfv__K2Node_DynamicCast_AsFOWComponent__pf->UActorComponent::GetOwner();
				}
				if(IsValid(bpfv__CallFunc_GetOwner_ReturnValue__pf))
				{
					bpfv__CallFunc_K2_GetActorLocation_ReturnValue3__pf = bpfv__CallFunc_GetOwner_ReturnValue__pf->AActor::K2_GetActorLocation();
				}
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue3__pf, /*out*/ bpfv__CallFunc_BreakVector_X3__pf, /*out*/ bpfv__CallFunc_BreakVector_Y3__pf, /*out*/ bpfv__CallFunc_BreakVector_Z3__pf);
				bpfv__CallFunc_MakeVector_ReturnValue9__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X3__pf, bpfv__CallFunc_BreakVector_Y3__pf, 0.000000);
				bpfv__CallFunc_Divide_IntInt_ReturnValue2__pf = UKismetMathLibrary::Divide_IntInt(360, 0);
				bpfv__CallFunc_MakeVector_ReturnValue10__pf = UKismetMathLibrary::MakeVector(bpv__VisionRange__pf, 0.000000, 0.000000);
				bpfv__CallFunc_Multiply_IntInt_ReturnValue3__pf = UKismetMathLibrary::Multiply_IntInt(bpfv__CallFunc_Divide_IntInt_ReturnValue2__pf, bpfv__CallFunc_Add_IntInt_ReturnValue4__pf);
				bpfv__CallFunc_Multiply_IntInt_ReturnValue4__pf = UKismetMathLibrary::Multiply_IntInt(bpfv__CallFunc_Divide_IntInt_ReturnValue2__pf, bpfv__Temp_int_Variable2__pf);
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue5__pf = UKismetMathLibrary::Conv_IntToFloat(bpfv__CallFunc_Multiply_IntInt_ReturnValue3__pf);
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue6__pf = UKismetMathLibrary::Conv_IntToFloat(bpfv__CallFunc_Multiply_IntInt_ReturnValue4__pf);
				bpfv__CallFunc_MakeRotator_ReturnValue5__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpfv__CallFunc_Conv_IntToFloat_ReturnValue5__pf);
				bpfv__CallFunc_MakeRotator_ReturnValue6__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpfv__CallFunc_Conv_IntToFloat_ReturnValue6__pf);
				bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue3__pf = UKismetMathLibrary::GreaterGreater_VectorRotator(bpfv__CallFunc_MakeVector_ReturnValue5__pf, bpfv__CallFunc_MakeRotator_ReturnValue5__pf);
				bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue4__pf = UKismetMathLibrary::GreaterGreater_VectorRotator(bpfv__CallFunc_MakeVector_ReturnValue3__pf, bpfv__CallFunc_MakeRotator_ReturnValue6__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue3__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_MakeVector_ReturnValue9__pf, bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue3__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue4__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_MakeVector_ReturnValue9__pf, bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue4__pf);
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue7__pf = UKismetMathLibrary::Conv_IntToFloat(bpfv__CallFunc_Multiply_IntInt_ReturnValue4__pf);
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue8__pf = UKismetMathLibrary::Conv_IntToFloat(bpfv__CallFunc_Multiply_IntInt_ReturnValue3__pf);
				bpfv__CallFunc_MakeRotator_ReturnValue7__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpfv__CallFunc_Conv_IntToFloat_ReturnValue7__pf);
				bpfv__CallFunc_MakeRotator_ReturnValue8__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpfv__CallFunc_Conv_IntToFloat_ReturnValue8__pf);
				bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue5__pf = UKismetMathLibrary::GreaterGreater_VectorRotator(bpfv__CallFunc_MakeVector_ReturnValue10__pf, bpfv__CallFunc_MakeRotator_ReturnValue8__pf);
				bpfv__CallFunc_MakeVector_ReturnValue11__pf = UKismetMathLibrary::MakeVector(bpv__VisionRange__pf, 0.000000, 0.000000);
				bpfv__CallFunc_Add_VectorVector_ReturnValue5__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_MakeVector_ReturnValue9__pf, bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue5__pf);
				bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue6__pf = UKismetMathLibrary::GreaterGreater_VectorRotator(bpfv__CallFunc_MakeVector_ReturnValue11__pf, bpfv__CallFunc_MakeRotator_ReturnValue7__pf);
				bpfv__K2Node_MakeStruct_CustomMeshTriangle__pf.Vertex0 = bpfv__CallFunc_Add_VectorVector_ReturnValue5__pf;
				bpfv__K2Node_MakeStruct_CustomMeshTriangle__pf.Vertex1 = bpfv__CallFunc_Add_VectorVector_ReturnValue4__pf;
				bpfv__K2Node_MakeStruct_CustomMeshTriangle__pf.Vertex2 = bpfv__CallFunc_Add_VectorVector_ReturnValue3__pf;
				bpfv__CallFunc_Add_VectorVector_ReturnValue6__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_MakeVector_ReturnValue9__pf, bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue6__pf);
				bpfv__K2Node_MakeStruct_CustomMeshTriangle2__pf.Vertex0 = bpfv__CallFunc_Add_VectorVector_ReturnValue6__pf;
				bpfv__K2Node_MakeStruct_CustomMeshTriangle2__pf.Vertex1 = bpfv__CallFunc_Add_VectorVector_ReturnValue5__pf;
				bpfv__K2Node_MakeStruct_CustomMeshTriangle2__pf.Vertex2 = bpfv__CallFunc_Add_VectorVector_ReturnValue4__pf;
				UKismetMathLibrary::BreakVector(bpfv__K2Node_MakeStruct_CustomMeshTriangle__pf.Vertex2, /*out*/ bpfv__CallFunc_BreakVector_X4__pf, /*out*/ bpfv__CallFunc_BreakVector_Y4__pf, /*out*/ bpfv__CallFunc_BreakVector_Z4__pf);
				bpfv__CallFunc_MakeVector_ReturnValue12__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X4__pf, bpfv__CallFunc_BreakVector_Y4__pf, bpv__ShadowHeight__pf);
				UKismetMathLibrary::BreakVector(bpfv__K2Node_MakeStruct_CustomMeshTriangle2__pf.Vertex2, /*out*/ bpfv__CallFunc_BreakVector_X5__pf, /*out*/ bpfv__CallFunc_BreakVector_Y5__pf, /*out*/ bpfv__CallFunc_BreakVector_Z5__pf);
				UKismetMathLibrary::BreakVector(bpfv__K2Node_MakeStruct_CustomMeshTriangle2__pf.Vertex1, /*out*/ bpfv__CallFunc_BreakVector_X6__pf, /*out*/ bpfv__CallFunc_BreakVector_Y6__pf, /*out*/ bpfv__CallFunc_BreakVector_Z6__pf);
				bpfv__CallFunc_MakeVector_ReturnValue13__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X5__pf, bpfv__CallFunc_BreakVector_Y5__pf, bpv__ShadowHeight__pf);
				bpfv__CallFunc_MakeVector_ReturnValue14__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X6__pf, bpfv__CallFunc_BreakVector_Y6__pf, bpv__ShadowHeight__pf);
				UKismetMathLibrary::BreakVector(bpfv__K2Node_MakeStruct_CustomMeshTriangle2__pf.Vertex0, /*out*/ bpfv__CallFunc_BreakVector_X7__pf, /*out*/ bpfv__CallFunc_BreakVector_Y7__pf, /*out*/ bpfv__CallFunc_BreakVector_Z7__pf);
				UKismetMathLibrary::BreakVector(bpfv__K2Node_MakeStruct_CustomMeshTriangle__pf.Vertex1, /*out*/ bpfv__CallFunc_BreakVector_X8__pf, /*out*/ bpfv__CallFunc_BreakVector_Y8__pf, /*out*/ bpfv__CallFunc_BreakVector_Z8__pf);
				bpfv__CallFunc_MakeVector_ReturnValue15__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X7__pf, bpfv__CallFunc_BreakVector_Y7__pf, bpv__ShadowHeight__pf);
				bpfv__CallFunc_MakeVector_ReturnValue16__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X8__pf, bpfv__CallFunc_BreakVector_Y8__pf, bpv__ShadowHeight__pf);
				bpfv__K2Node_MakeStruct_CustomMeshTriangle3__pf.Vertex0 = bpfv__CallFunc_MakeVector_ReturnValue15__pf;
				bpfv__K2Node_MakeStruct_CustomMeshTriangle3__pf.Vertex1 = bpfv__CallFunc_MakeVector_ReturnValue14__pf;
				bpfv__K2Node_MakeStruct_CustomMeshTriangle3__pf.Vertex2 = bpfv__CallFunc_MakeVector_ReturnValue13__pf;
				UKismetMathLibrary::BreakVector(bpfv__K2Node_MakeStruct_CustomMeshTriangle__pf.Vertex0, /*out*/ bpfv__CallFunc_BreakVector_X9__pf, /*out*/ bpfv__CallFunc_BreakVector_Y9__pf, /*out*/ bpfv__CallFunc_BreakVector_Z9__pf);
				bpfv__CallFunc_MakeVector_ReturnValue17__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X9__pf, bpfv__CallFunc_BreakVector_Y9__pf, bpv__ShadowHeight__pf);
				bpfv__K2Node_MakeStruct_CustomMeshTriangle4__pf.Vertex0 = bpfv__CallFunc_MakeVector_ReturnValue17__pf;
				bpfv__K2Node_MakeStruct_CustomMeshTriangle4__pf.Vertex1 = bpfv__CallFunc_MakeVector_ReturnValue16__pf;
				bpfv__K2Node_MakeStruct_CustomMeshTriangle4__pf.Vertex2 = bpfv__CallFunc_MakeVector_ReturnValue12__pf;
				bpfv__K2Node_MakeArray_Array__pf.SetNum(2, true);
				bpfv__K2Node_MakeArray_Array__pf[0] = bpfv__K2Node_MakeStruct_CustomMeshTriangle3__pf;
				bpfv__K2Node_MakeArray_Array__pf[1] = bpfv__K2Node_MakeStruct_CustomMeshTriangle4__pf;
				if(IsValid(bpv__ShadowMesh__pf))
				{
					bpv__ShadowMesh__pf->UCustomMeshComponent::AddCustomMeshTriangles(bpfv__K2Node_MakeArray_Array__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 17:
			{
				if (!bpv__UseConeOfVision__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 18:
			{
				if (!bpv__DebugMode__pf)
				{
					__CurrentState = 21;
					break;
				}
			}
		case 19:
			{
				if(IsValid(bpv__MyPawn__pf))
				{
					bpfv__CallFunc_K2_GetActorLocation_ReturnValue5__pf = bpv__MyPawn__pf->AActor::K2_GetActorLocation();
				}
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue5__pf, /*out*/ bpfv__CallFunc_BreakVector_X14__pf, /*out*/ bpfv__CallFunc_BreakVector_Y14__pf, /*out*/ bpfv__CallFunc_BreakVector_Z14__pf);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpv__ConeSize__pf, 2.000000);
				bpfv__CallFunc_MakeVector_ReturnValue24__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X14__pf, bpfv__CallFunc_BreakVector_Y14__pf, bpv__ShadowHeight__pf);
				bpfv__CallFunc_MakeRotator_ReturnValue10__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_ComposeRotators_ReturnValue2__pf = UKismetMathLibrary::ComposeRotators(bpv__Facing__pf, bpfv__CallFunc_MakeRotator_ReturnValue10__pf);
				bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue9__pf = UKismetMathLibrary::GreaterGreater_VectorRotator(FVector(12000.000000,0.000000,0.000000), bpfv__CallFunc_ComposeRotators_ReturnValue2__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue9__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue5__pf, bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue9__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_Add_VectorVector_ReturnValue9__pf, /*out*/ bpfv__CallFunc_BreakVector_X15__pf, /*out*/ bpfv__CallFunc_BreakVector_Y15__pf, /*out*/ bpfv__CallFunc_BreakVector_Z15__pf);
				bpfv__CallFunc_MakeVector_ReturnValue31__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X15__pf, bpfv__CallFunc_BreakVector_Y15__pf, bpv__ShadowHeight__pf);
				UKismetSystemLibrary::DrawDebugLine(this, bpfv__CallFunc_MakeVector_ReturnValue24__pf, bpfv__CallFunc_MakeVector_ReturnValue31__pf, FLinearColor(1.000000,0.000000,0.098858,1.000000), 0.000000, 8.000000);
			}
		case 20:
			{
				if(IsValid(bpv__MyPawn__pf))
				{
					bpfv__CallFunc_K2_GetActorLocation_ReturnValue5__pf = bpv__MyPawn__pf->AActor::K2_GetActorLocation();
				}
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue5__pf, /*out*/ bpfv__CallFunc_BreakVector_X14__pf, /*out*/ bpfv__CallFunc_BreakVector_Y14__pf, /*out*/ bpfv__CallFunc_BreakVector_Z14__pf);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpv__ConeSize__pf, 2.000000);
				bpfv__CallFunc_MakeVector_ReturnValue24__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X14__pf, bpfv__CallFunc_BreakVector_Y14__pf, bpv__ShadowHeight__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf, -1.000000);
				bpfv__CallFunc_MakeRotator_ReturnValue11__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_ComposeRotators_ReturnValue3__pf = UKismetMathLibrary::ComposeRotators(bpv__Facing__pf, bpfv__CallFunc_MakeRotator_ReturnValue11__pf);
				bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue10__pf = UKismetMathLibrary::GreaterGreater_VectorRotator(FVector(12000.000000,0.000000,0.000000), bpfv__CallFunc_ComposeRotators_ReturnValue3__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue10__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue5__pf, bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue10__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_Add_VectorVector_ReturnValue10__pf, /*out*/ bpfv__CallFunc_BreakVector_X16__pf, /*out*/ bpfv__CallFunc_BreakVector_Y16__pf, /*out*/ bpfv__CallFunc_BreakVector_Z16__pf);
				bpfv__CallFunc_MakeVector_ReturnValue32__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X16__pf, bpfv__CallFunc_BreakVector_Y16__pf, bpv__ShadowHeight__pf);
				UKismetSystemLibrary::DrawDebugLine(this, bpfv__CallFunc_MakeVector_ReturnValue24__pf, bpfv__CallFunc_MakeVector_ReturnValue32__pf, FLinearColor(0.029520,1.000000,0.000000,1.000000), 0.000000, 8.000000);
			}
		case 21:
			{
				bpfv__CallFunc_MakeRotator_ReturnValue9__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, 180.000000);
				bpfv__CallFunc_ComposeRotators_ReturnValue__pf = UKismetMathLibrary::ComposeRotators(bpv__Facing__pf, bpfv__CallFunc_MakeRotator_ReturnValue9__pf);
				bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue8__pf = UKismetMathLibrary::GreaterGreater_VectorRotator(FVector(12000.000000,0.000000,0.000000), bpfv__CallFunc_ComposeRotators_ReturnValue__pf);
				if(IsValid(bpv__MyPawn__pf))
				{
					bpfv__CallFunc_K2_GetActorLocation_ReturnValue5__pf = bpv__MyPawn__pf->AActor::K2_GetActorLocation();
				}
				bpfv__CallFunc_Add_VectorVector_ReturnValue8__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue5__pf, bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue8__pf);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpv__ConeSize__pf, 2.000000);
				bpfv__CallFunc_MakeRotator_ReturnValue10__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf, -1.000000);
				bpfv__CallFunc_ComposeRotators_ReturnValue2__pf = UKismetMathLibrary::ComposeRotators(bpv__Facing__pf, bpfv__CallFunc_MakeRotator_ReturnValue10__pf);
				bpfv__CallFunc_MakeRotator_ReturnValue11__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue9__pf = UKismetMathLibrary::GreaterGreater_VectorRotator(FVector(12000.000000,0.000000,0.000000), bpfv__CallFunc_ComposeRotators_ReturnValue2__pf);
				bpfv__CallFunc_ComposeRotators_ReturnValue3__pf = UKismetMathLibrary::ComposeRotators(bpv__Facing__pf, bpfv__CallFunc_MakeRotator_ReturnValue11__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue9__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue5__pf, bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue9__pf);
				bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue10__pf = UKismetMathLibrary::GreaterGreater_VectorRotator(FVector(12000.000000,0.000000,0.000000), bpfv__CallFunc_ComposeRotators_ReturnValue3__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue10__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue5__pf, bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue10__pf);
				bpfv__K2Node_MakeStruct_CustomMeshTriangle7__pf.Vertex0 = bpfv__CallFunc_K2_GetActorLocation_ReturnValue5__pf;
				bpfv__K2Node_MakeStruct_CustomMeshTriangle7__pf.Vertex1 = bpfv__CallFunc_Add_VectorVector_ReturnValue9__pf;
				bpfv__K2Node_MakeStruct_CustomMeshTriangle7__pf.Vertex2 = bpfv__CallFunc_Add_VectorVector_ReturnValue8__pf;
				bpfv__K2Node_MakeStruct_CustomMeshTriangle8__pf.Vertex0 = bpfv__CallFunc_K2_GetActorLocation_ReturnValue5__pf;
				bpfv__K2Node_MakeStruct_CustomMeshTriangle8__pf.Vertex1 = bpfv__CallFunc_Add_VectorVector_ReturnValue10__pf;
				bpfv__K2Node_MakeStruct_CustomMeshTriangle8__pf.Vertex2 = bpfv__CallFunc_Add_VectorVector_ReturnValue8__pf;
				UKismetMathLibrary::BreakVector(bpfv__K2Node_MakeStruct_CustomMeshTriangle7__pf.Vertex2, /*out*/ bpfv__CallFunc_BreakVector_X17__pf, /*out*/ bpfv__CallFunc_BreakVector_Y17__pf, /*out*/ bpfv__CallFunc_BreakVector_Z17__pf);
				bpfv__CallFunc_MakeVector_ReturnValue25__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X17__pf, bpfv__CallFunc_BreakVector_Y17__pf, bpv__ShadowHeight__pf);
				UKismetMathLibrary::BreakVector(bpfv__K2Node_MakeStruct_CustomMeshTriangle8__pf.Vertex2, /*out*/ bpfv__CallFunc_BreakVector_X18__pf, /*out*/ bpfv__CallFunc_BreakVector_Y18__pf, /*out*/ bpfv__CallFunc_BreakVector_Z18__pf);
				UKismetMathLibrary::BreakVector(bpfv__K2Node_MakeStruct_CustomMeshTriangle8__pf.Vertex1, /*out*/ bpfv__CallFunc_BreakVector_X19__pf, /*out*/ bpfv__CallFunc_BreakVector_Y19__pf, /*out*/ bpfv__CallFunc_BreakVector_Z19__pf);
				bpfv__CallFunc_MakeVector_ReturnValue26__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X18__pf, bpfv__CallFunc_BreakVector_Y18__pf, bpv__ShadowHeight__pf);
				bpfv__CallFunc_MakeVector_ReturnValue27__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X19__pf, bpfv__CallFunc_BreakVector_Y19__pf, bpv__ShadowHeight__pf);
				UKismetMathLibrary::BreakVector(bpfv__K2Node_MakeStruct_CustomMeshTriangle8__pf.Vertex0, /*out*/ bpfv__CallFunc_BreakVector_X20__pf, /*out*/ bpfv__CallFunc_BreakVector_Y20__pf, /*out*/ bpfv__CallFunc_BreakVector_Z20__pf);
				UKismetMathLibrary::BreakVector(bpfv__K2Node_MakeStruct_CustomMeshTriangle7__pf.Vertex1, /*out*/ bpfv__CallFunc_BreakVector_X21__pf, /*out*/ bpfv__CallFunc_BreakVector_Y21__pf, /*out*/ bpfv__CallFunc_BreakVector_Z21__pf);
				bpfv__CallFunc_MakeVector_ReturnValue28__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X20__pf, bpfv__CallFunc_BreakVector_Y20__pf, bpv__ShadowHeight__pf);
				bpfv__CallFunc_MakeVector_ReturnValue29__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X21__pf, bpfv__CallFunc_BreakVector_Y21__pf, bpv__ShadowHeight__pf);
				bpfv__K2Node_MakeStruct_CustomMeshTriangle9__pf.Vertex0 = bpfv__CallFunc_MakeVector_ReturnValue28__pf;
				bpfv__K2Node_MakeStruct_CustomMeshTriangle9__pf.Vertex1 = bpfv__CallFunc_MakeVector_ReturnValue27__pf;
				bpfv__K2Node_MakeStruct_CustomMeshTriangle9__pf.Vertex2 = bpfv__CallFunc_MakeVector_ReturnValue26__pf;
				UKismetMathLibrary::BreakVector(bpfv__K2Node_MakeStruct_CustomMeshTriangle7__pf.Vertex0, /*out*/ bpfv__CallFunc_BreakVector_X22__pf, /*out*/ bpfv__CallFunc_BreakVector_Y22__pf, /*out*/ bpfv__CallFunc_BreakVector_Z22__pf);
				bpfv__CallFunc_MakeVector_ReturnValue30__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X22__pf, bpfv__CallFunc_BreakVector_Y22__pf, bpv__ShadowHeight__pf);
				bpfv__K2Node_MakeStruct_CustomMeshTriangle10__pf.Vertex0 = bpfv__CallFunc_MakeVector_ReturnValue30__pf;
				bpfv__K2Node_MakeStruct_CustomMeshTriangle10__pf.Vertex1 = bpfv__CallFunc_MakeVector_ReturnValue29__pf;
				bpfv__K2Node_MakeStruct_CustomMeshTriangle10__pf.Vertex2 = bpfv__CallFunc_MakeVector_ReturnValue25__pf;
				bpfv__K2Node_MakeArray_Array2__pf.SetNum(2, true);
				bpfv__K2Node_MakeArray_Array2__pf[0] = bpfv__K2Node_MakeStruct_CustomMeshTriangle10__pf;
				bpfv__K2Node_MakeArray_Array2__pf[1] = bpfv__K2Node_MakeStruct_CustomMeshTriangle9__pf;
				if(IsValid(bpv__ShadowMesh__pf))
				{
					bpv__ShadowMesh__pf->UCustomMeshComponent::AddCustomMeshTriangles(bpfv__K2Node_MakeArray_Array2__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 22:
			{
				bpfv__Temp_int_Variable__pf = 0;
			}
		case 23:
			{
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::LessEqual_IntInt(bpfv__Temp_int_Variable__pf, 60);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 24:
			{
				__StateStack.Push(26);
			}
		case 25:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue2__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Variable__pf, 1);
				bpfv__CallFunc_Divide_IntInt_ReturnValue__pf = UKismetMathLibrary::Divide_IntInt(360, 60);
				bpfv__CallFunc_MakeVector_ReturnValue4__pf = UKismetMathLibrary::MakeVector(bpv__VisionRange__pf, 0.000000, 0.000000);
				bpfv__CallFunc_Multiply_IntInt_ReturnValue__pf = UKismetMathLibrary::Multiply_IntInt(bpfv__CallFunc_Divide_IntInt_ReturnValue__pf, bpfv__CallFunc_Add_IntInt_ReturnValue2__pf);
				bpfv__CallFunc_Multiply_IntInt_ReturnValue2__pf = UKismetMathLibrary::Multiply_IntInt(bpfv__CallFunc_Divide_IntInt_ReturnValue__pf, bpfv__Temp_int_Variable__pf);
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_IntToFloat(bpfv__CallFunc_Multiply_IntInt_ReturnValue__pf);
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue2__pf = UKismetMathLibrary::Conv_IntToFloat(bpfv__CallFunc_Multiply_IntInt_ReturnValue2__pf);
				bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf);
				bpfv__CallFunc_MakeRotator_ReturnValue2__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpfv__CallFunc_Conv_IntToFloat_ReturnValue2__pf);
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue3__pf = UKismetMathLibrary::Conv_IntToFloat(bpfv__CallFunc_Multiply_IntInt_ReturnValue2__pf);
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue4__pf = UKismetMathLibrary::Conv_IntToFloat(bpfv__CallFunc_Multiply_IntInt_ReturnValue__pf);
				bpfv__CallFunc_MakeRotator_ReturnValue3__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpfv__CallFunc_Conv_IntToFloat_ReturnValue3__pf);
				bpfv__CallFunc_MakeRotator_ReturnValue4__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpfv__CallFunc_Conv_IntToFloat_ReturnValue4__pf);
				bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue__pf = UKismetMathLibrary::GreaterGreater_VectorRotator(bpfv__CallFunc_MakeVector_ReturnValue4__pf, bpfv__CallFunc_MakeRotator_ReturnValue4__pf);
				if(IsValid(bpv__MyPawn__pf))
				{
					bpfv__CallFunc_K2_GetActorLocation_ReturnValue2__pf = bpv__MyPawn__pf->AActor::K2_GetActorLocation();
				}
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue2__pf, /*out*/ bpfv__CallFunc_BreakVector_X2__pf, /*out*/ bpfv__CallFunc_BreakVector_Y2__pf, /*out*/ bpfv__CallFunc_BreakVector_Z2__pf);
				bpfv__CallFunc_MakeVector_ReturnValue7__pf = UKismetMathLibrary::MakeVector(bpv__VisionRange__pf, 0.000000, 0.000000);
				bpfv__CallFunc_MakeVector_ReturnValue8__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X2__pf, bpfv__CallFunc_BreakVector_Y2__pf, 0.000000);
				bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue2__pf = UKismetMathLibrary::GreaterGreater_VectorRotator(bpfv__CallFunc_MakeVector_ReturnValue7__pf, bpfv__CallFunc_MakeRotator_ReturnValue3__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_MakeVector_ReturnValue8__pf, bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue2__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_MakeVector_ReturnValue8__pf, bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue2__pf);
				bpfv__CallFunc_MakeVector_ReturnValue20__pf = UKismetMathLibrary::MakeVector(8000.000000, 0.000000, 0.000000);
				bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue7__pf = UKismetMathLibrary::GreaterGreater_VectorRotator(bpfv__CallFunc_MakeVector_ReturnValue20__pf, bpfv__CallFunc_MakeRotator_ReturnValue2__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue7__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_MakeVector_ReturnValue8__pf, bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue7__pf);
				bpfv__K2Node_MakeStruct_CustomMeshTriangle5__pf.Vertex0 = bpfv__CallFunc_Add_VectorVector_ReturnValue2__pf;
				bpfv__K2Node_MakeStruct_CustomMeshTriangle5__pf.Vertex1 = bpfv__CallFunc_Add_VectorVector_ReturnValue__pf;
				bpfv__K2Node_MakeStruct_CustomMeshTriangle5__pf.Vertex2 = bpfv__CallFunc_Add_VectorVector_ReturnValue7__pf;
				UKismetMathLibrary::BreakVector(bpfv__K2Node_MakeStruct_CustomMeshTriangle5__pf.Vertex2, /*out*/ bpfv__CallFunc_BreakVector_X11__pf, /*out*/ bpfv__CallFunc_BreakVector_Y11__pf, /*out*/ bpfv__CallFunc_BreakVector_Z11__pf);
				UKismetMathLibrary::BreakVector(bpfv__K2Node_MakeStruct_CustomMeshTriangle5__pf.Vertex1, /*out*/ bpfv__CallFunc_BreakVector_X12__pf, /*out*/ bpfv__CallFunc_BreakVector_Y12__pf, /*out*/ bpfv__CallFunc_BreakVector_Z12__pf);
				bpfv__CallFunc_MakeVector_ReturnValue21__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X11__pf, bpfv__CallFunc_BreakVector_Y11__pf, bpv__ShadowHeight__pf);
				bpfv__CallFunc_MakeVector_ReturnValue22__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X12__pf, bpfv__CallFunc_BreakVector_Y12__pf, bpv__ShadowHeight__pf);
				UKismetMathLibrary::BreakVector(bpfv__K2Node_MakeStruct_CustomMeshTriangle5__pf.Vertex0, /*out*/ bpfv__CallFunc_BreakVector_X13__pf, /*out*/ bpfv__CallFunc_BreakVector_Y13__pf, /*out*/ bpfv__CallFunc_BreakVector_Z13__pf);
				bpfv__CallFunc_MakeVector_ReturnValue23__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X13__pf, bpfv__CallFunc_BreakVector_Y13__pf, bpv__ShadowHeight__pf);
				bpfv__K2Node_MakeStruct_CustomMeshTriangle6__pf.Vertex0 = bpfv__CallFunc_MakeVector_ReturnValue23__pf;
				bpfv__K2Node_MakeStruct_CustomMeshTriangle6__pf.Vertex1 = bpfv__CallFunc_MakeVector_ReturnValue22__pf;
				bpfv__K2Node_MakeStruct_CustomMeshTriangle6__pf.Vertex2 = bpfv__CallFunc_MakeVector_ReturnValue21__pf;
				bpfv__CallFunc_MakeVector_ReturnValue33__pf = UKismetMathLibrary::MakeVector(8000.000000, 0.000000, 0.000000);
				bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue11__pf = UKismetMathLibrary::GreaterGreater_VectorRotator(bpfv__CallFunc_MakeVector_ReturnValue33__pf, bpfv__CallFunc_MakeRotator_ReturnValue__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue11__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_MakeVector_ReturnValue8__pf, bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue11__pf);
				bpfv__K2Node_MakeStruct_CustomMeshTriangle11__pf.Vertex0 = bpfv__CallFunc_Add_VectorVector_ReturnValue__pf;
				bpfv__K2Node_MakeStruct_CustomMeshTriangle11__pf.Vertex1 = bpfv__CallFunc_Add_VectorVector_ReturnValue7__pf;
				bpfv__K2Node_MakeStruct_CustomMeshTriangle11__pf.Vertex2 = bpfv__CallFunc_Add_VectorVector_ReturnValue11__pf;
				UKismetMathLibrary::BreakVector(bpfv__K2Node_MakeStruct_CustomMeshTriangle11__pf.Vertex2, /*out*/ bpfv__CallFunc_BreakVector_X23__pf, /*out*/ bpfv__CallFunc_BreakVector_Y23__pf, /*out*/ bpfv__CallFunc_BreakVector_Z23__pf);
				bpfv__CallFunc_MakeVector_ReturnValue34__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X23__pf, bpfv__CallFunc_BreakVector_Y23__pf, bpv__ShadowHeight__pf);
				UKismetMathLibrary::BreakVector(bpfv__K2Node_MakeStruct_CustomMeshTriangle11__pf.Vertex1, /*out*/ bpfv__CallFunc_BreakVector_X25__pf, /*out*/ bpfv__CallFunc_BreakVector_Y25__pf, /*out*/ bpfv__CallFunc_BreakVector_Z25__pf);
				bpfv__CallFunc_MakeVector_ReturnValue36__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X25__pf, bpfv__CallFunc_BreakVector_Y25__pf, bpv__ShadowHeight__pf);
				UKismetMathLibrary::BreakVector(bpfv__K2Node_MakeStruct_CustomMeshTriangle11__pf.Vertex0, /*out*/ bpfv__CallFunc_BreakVector_X26__pf, /*out*/ bpfv__CallFunc_BreakVector_Y26__pf, /*out*/ bpfv__CallFunc_BreakVector_Z26__pf);
				bpfv__CallFunc_MakeVector_ReturnValue37__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X26__pf, bpfv__CallFunc_BreakVector_Y26__pf, bpv__ShadowHeight__pf);
				bpfv__K2Node_MakeStruct_CustomMeshTriangle20__pf.Vertex0 = bpfv__CallFunc_MakeVector_ReturnValue37__pf;
				bpfv__K2Node_MakeStruct_CustomMeshTriangle20__pf.Vertex1 = bpfv__CallFunc_MakeVector_ReturnValue36__pf;
				bpfv__K2Node_MakeStruct_CustomMeshTriangle20__pf.Vertex2 = bpfv__CallFunc_MakeVector_ReturnValue34__pf;
				bpfv__K2Node_MakeArray_Array6__pf.SetNum(2, true);
				bpfv__K2Node_MakeArray_Array6__pf[0] = bpfv__K2Node_MakeStruct_CustomMeshTriangle6__pf;
				bpfv__K2Node_MakeArray_Array6__pf[1] = bpfv__K2Node_MakeStruct_CustomMeshTriangle20__pf;
				if(IsValid(bpv__ShadowMesh__pf))
				{
					bpv__ShadowMesh__pf->UCustomMeshComponent::AddCustomMeshTriangles(bpfv__K2Node_MakeArray_Array6__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 26:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue3__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Variable__pf, 1);
				bpfv__Temp_int_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue3__pf;
				__CurrentState = 23;
				break;
			}
		case 27:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 5;
				break;
			}
		case 28:
			{
				FCustomThunkTemplates::Array_Get(bpv__ActorsCastingFOW__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_GetOwner_ReturnValue3__pf = bpfv__CallFunc_Array_Get_Item__pf->UActorComponent::GetOwner();
				}
				if(IsValid(bpfv__CallFunc_GetOwner_ReturnValue3__pf))
				{
					bpfv__CallFunc_GetDistanceTo_ReturnValue__pf = bpfv__CallFunc_GetOwner_ReturnValue3__pf->AActor::GetDistanceTo(bpv__MyPawn__pf);
				}
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(bpfv__CallFunc_GetDistanceTo_ReturnValue__pf, bpv__VisionRange__pf);
				if (!bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 10;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 29:
			{
				if(IsValid(bpv__MyPawn__pf))
				{
					bpfv__CallFunc_K2_GetActorLocation_ReturnValue4__pf = bpv__MyPawn__pf->AActor::K2_GetActorLocation();
				}
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue4__pf, /*out*/ bpfv__CallFunc_BreakVector_X10__pf, /*out*/ bpfv__CallFunc_BreakVector_Y10__pf, /*out*/ bpfv__CallFunc_BreakVector_Z10__pf);
				bpfv__CallFunc_MakeVector_ReturnValue18__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X10__pf, bpfv__CallFunc_BreakVector_Y10__pf, 0.000000);
				bpfv__CallFunc_MakeVector_ReturnValue19__pf = UKismetMathLibrary::MakeVector(0.000000, 0.000000, bpv__ShadowHeight__pf);
				FCustomThunkTemplates::Array_Get(bpv__ActorsCastingFOW__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				TArray<FVector>  __Local__5 = TArray<FVector> {};
				FCustomThunkTemplates::Array_Get(((IsValid(bpfv__CallFunc_Array_Get_Item__pf)) ? (bpfv__CallFunc_Array_Get_Item__pf->bpv__Edges__pf) : (__Local__5)), 0, /*out*/ bpfv__CallFunc_Array_Get_Item6__pf);
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue2__pf = UKismetMathLibrary::Subtract_VectorVector(bpfv__CallFunc_Array_Get_Item6__pf, bpfv__CallFunc_MakeVector_ReturnValue18__pf);
				bpfv__CallFunc_Normal_ReturnValue2__pf = UKismetMathLibrary::Normal(bpfv__CallFunc_Subtract_VectorVector_ReturnValue2__pf);
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue2__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_Normal_ReturnValue2__pf, 8000.000000);
				bpfv__CallFunc_Add_VectorVector_ReturnValue24__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Array_Get_Item6__pf, bpfv__CallFunc_MakeVector_ReturnValue19__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue25__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Multiply_VectorFloat_ReturnValue2__pf, bpfv__CallFunc_Add_VectorVector_ReturnValue24__pf);
				TArray<FVector>  __Local__6 = TArray<FVector> {};
				FCustomThunkTemplates::Array_Get(((IsValid(bpfv__CallFunc_Array_Get_Item__pf)) ? (bpfv__CallFunc_Array_Get_Item__pf->bpv__Edges__pf) : (__Local__6)), 2, /*out*/ bpfv__CallFunc_Array_Get_Item7__pf);
				TArray<FVector>  __Local__7 = TArray<FVector> {};
				FCustomThunkTemplates::Array_Get(((IsValid(bpfv__CallFunc_Array_Get_Item__pf)) ? (bpfv__CallFunc_Array_Get_Item__pf->bpv__Edges__pf) : (__Local__7)), 1, /*out*/ bpfv__CallFunc_Array_Get_Item8__pf);
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue5__pf = UKismetMathLibrary::Subtract_VectorVector(bpfv__CallFunc_Array_Get_Item7__pf, bpfv__CallFunc_MakeVector_ReturnValue18__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue26__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Array_Get_Item8__pf, bpfv__CallFunc_MakeVector_ReturnValue19__pf);
				bpfv__CallFunc_Normal_ReturnValue5__pf = UKismetMathLibrary::Normal(bpfv__CallFunc_Subtract_VectorVector_ReturnValue5__pf);
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue6__pf = UKismetMathLibrary::Subtract_VectorVector(bpfv__CallFunc_Array_Get_Item8__pf, bpfv__CallFunc_MakeVector_ReturnValue18__pf);
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue5__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_Normal_ReturnValue5__pf, 8000.000000);
				bpfv__CallFunc_Normal_ReturnValue6__pf = UKismetMathLibrary::Normal(bpfv__CallFunc_Subtract_VectorVector_ReturnValue6__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue27__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Array_Get_Item7__pf, bpfv__CallFunc_MakeVector_ReturnValue19__pf);
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue6__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_Normal_ReturnValue6__pf, 8000.000000);
				bpfv__K2Node_MakeStruct_CustomMeshTriangle16__pf.Vertex0 = bpfv__CallFunc_Add_VectorVector_ReturnValue24__pf;
				bpfv__K2Node_MakeStruct_CustomMeshTriangle16__pf.Vertex1 = bpfv__CallFunc_Add_VectorVector_ReturnValue27__pf;
				bpfv__K2Node_MakeStruct_CustomMeshTriangle16__pf.Vertex2 = bpfv__CallFunc_Add_VectorVector_ReturnValue25__pf;
				bpfv__CallFunc_Add_VectorVector_ReturnValue28__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Multiply_VectorFloat_ReturnValue6__pf, bpfv__CallFunc_Add_VectorVector_ReturnValue26__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue29__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Multiply_VectorFloat_ReturnValue5__pf, bpfv__CallFunc_Add_VectorVector_ReturnValue27__pf);
				TArray<FVector>  __Local__8 = TArray<FVector> {};
				FCustomThunkTemplates::Array_Get(((IsValid(bpfv__CallFunc_Array_Get_Item__pf)) ? (bpfv__CallFunc_Array_Get_Item__pf->bpv__Edges__pf) : (__Local__8)), 3, /*out*/ bpfv__CallFunc_Array_Get_Item9__pf);
				bpfv__K2Node_MakeStruct_CustomMeshTriangle17__pf.Vertex0 = bpfv__CallFunc_Add_VectorVector_ReturnValue27__pf;
				bpfv__K2Node_MakeStruct_CustomMeshTriangle17__pf.Vertex1 = bpfv__CallFunc_Add_VectorVector_ReturnValue25__pf;
				bpfv__K2Node_MakeStruct_CustomMeshTriangle17__pf.Vertex2 = bpfv__CallFunc_Add_VectorVector_ReturnValue29__pf;
				bpfv__CallFunc_Add_VectorVector_ReturnValue30__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Array_Get_Item9__pf, bpfv__CallFunc_MakeVector_ReturnValue19__pf);
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue7__pf = UKismetMathLibrary::Subtract_VectorVector(bpfv__CallFunc_Array_Get_Item9__pf, bpfv__CallFunc_MakeVector_ReturnValue18__pf);
				bpfv__K2Node_MakeStruct_CustomMeshTriangle18__pf.Vertex0 = bpfv__CallFunc_Add_VectorVector_ReturnValue26__pf;
				bpfv__K2Node_MakeStruct_CustomMeshTriangle18__pf.Vertex1 = bpfv__CallFunc_Add_VectorVector_ReturnValue30__pf;
				bpfv__K2Node_MakeStruct_CustomMeshTriangle18__pf.Vertex2 = bpfv__CallFunc_Add_VectorVector_ReturnValue28__pf;
				bpfv__CallFunc_Normal_ReturnValue7__pf = UKismetMathLibrary::Normal(bpfv__CallFunc_Subtract_VectorVector_ReturnValue7__pf);
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue7__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_Normal_ReturnValue7__pf, 8000.000000);
				bpfv__CallFunc_Add_VectorVector_ReturnValue31__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Multiply_VectorFloat_ReturnValue7__pf, bpfv__CallFunc_Add_VectorVector_ReturnValue30__pf);
				bpfv__K2Node_MakeStruct_CustomMeshTriangle19__pf.Vertex0 = bpfv__CallFunc_Add_VectorVector_ReturnValue30__pf;
				bpfv__K2Node_MakeStruct_CustomMeshTriangle19__pf.Vertex1 = bpfv__CallFunc_Add_VectorVector_ReturnValue28__pf;
				bpfv__K2Node_MakeStruct_CustomMeshTriangle19__pf.Vertex2 = bpfv__CallFunc_Add_VectorVector_ReturnValue31__pf;
				bpfv__K2Node_MakeArray_Array5__pf.SetNum(4, true);
				bpfv__K2Node_MakeArray_Array5__pf[0] = bpfv__K2Node_MakeStruct_CustomMeshTriangle16__pf;
				bpfv__K2Node_MakeArray_Array5__pf[1] = bpfv__K2Node_MakeStruct_CustomMeshTriangle17__pf;
				bpfv__K2Node_MakeArray_Array5__pf[2] = bpfv__K2Node_MakeStruct_CustomMeshTriangle18__pf;
				bpfv__K2Node_MakeArray_Array5__pf[3] = bpfv__K2Node_MakeStruct_CustomMeshTriangle19__pf;
				if(IsValid(bpv__ShadowMesh__pf))
				{
					bpv__ShadowMesh__pf->UCustomMeshComponent::AddCustomMeshTriangles(bpfv__K2Node_MakeArray_Array5__pf);
				}
			}
		case 30:
			{
				FCustomThunkTemplates::Array_Get(bpv__ActorsCastingFOW__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bool  __Local__9 = false;
				if (!((IsValid(bpfv__CallFunc_Array_Get_Item__pf)) ? (bpfv__CallFunc_Array_Get_Item__pf->bpv__DrawFogOfShape__pf) : (__Local__9)))
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 31:
			{
				bpfv__CallFunc_MakeVector_ReturnValue6__pf = UKismetMathLibrary::MakeVector(0.000000, 0.000000, bpv__ShadowHeight__pf);
				FCustomThunkTemplates::Array_Get(bpv__ActorsCastingFOW__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				TArray<FVector>  __Local__10 = TArray<FVector> {};
				FCustomThunkTemplates::Array_Get(((IsValid(bpfv__CallFunc_Array_Get_Item__pf)) ? (bpfv__CallFunc_Array_Get_Item__pf->bpv__Edges__pf) : (__Local__10)), 0, /*out*/ bpfv__CallFunc_Array_Get_Item2__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue12__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Array_Get_Item2__pf, bpfv__CallFunc_MakeVector_ReturnValue6__pf);
				TArray<FVector>  __Local__11 = TArray<FVector> {};
				FCustomThunkTemplates::Array_Get(((IsValid(bpfv__CallFunc_Array_Get_Item__pf)) ? (bpfv__CallFunc_Array_Get_Item__pf->bpv__Edges__pf) : (__Local__11)), 2, /*out*/ bpfv__CallFunc_Array_Get_Item3__pf);
				TArray<FVector>  __Local__12 = TArray<FVector> {};
				FCustomThunkTemplates::Array_Get(((IsValid(bpfv__CallFunc_Array_Get_Item__pf)) ? (bpfv__CallFunc_Array_Get_Item__pf->bpv__Edges__pf) : (__Local__12)), 1, /*out*/ bpfv__CallFunc_Array_Get_Item4__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue13__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Array_Get_Item3__pf, bpfv__CallFunc_MakeVector_ReturnValue6__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue14__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Array_Get_Item4__pf, bpfv__CallFunc_MakeVector_ReturnValue6__pf);
				TArray<FVector>  __Local__13 = TArray<FVector> {};
				FCustomThunkTemplates::Array_Get(((IsValid(bpfv__CallFunc_Array_Get_Item__pf)) ? (bpfv__CallFunc_Array_Get_Item__pf->bpv__Edges__pf) : (__Local__13)), 3, /*out*/ bpfv__CallFunc_Array_Get_Item5__pf);
				bpfv__K2Node_MakeStruct_CustomMeshTriangle12__pf.Vertex0 = bpfv__CallFunc_Add_VectorVector_ReturnValue12__pf;
				bpfv__K2Node_MakeStruct_CustomMeshTriangle12__pf.Vertex1 = bpfv__CallFunc_Add_VectorVector_ReturnValue13__pf;
				bpfv__K2Node_MakeStruct_CustomMeshTriangle12__pf.Vertex2 = bpfv__CallFunc_Add_VectorVector_ReturnValue14__pf;
				bpfv__CallFunc_Add_VectorVector_ReturnValue15__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Array_Get_Item5__pf, bpfv__CallFunc_MakeVector_ReturnValue6__pf);
				bpfv__K2Node_MakeStruct_CustomMeshTriangle13__pf.Vertex0 = bpfv__CallFunc_Add_VectorVector_ReturnValue12__pf;
				bpfv__K2Node_MakeStruct_CustomMeshTriangle13__pf.Vertex1 = bpfv__CallFunc_Add_VectorVector_ReturnValue13__pf;
				bpfv__K2Node_MakeStruct_CustomMeshTriangle13__pf.Vertex2 = bpfv__CallFunc_Add_VectorVector_ReturnValue15__pf;
				bpfv__K2Node_MakeArray_Array3__pf.SetNum(2, true);
				bpfv__K2Node_MakeArray_Array3__pf[0] = bpfv__K2Node_MakeStruct_CustomMeshTriangle12__pf;
				bpfv__K2Node_MakeArray_Array3__pf[1] = bpfv__K2Node_MakeStruct_CustomMeshTriangle13__pf;
				if(IsValid(bpv__ShadowMesh__pf))
				{
					bpv__ShadowMesh__pf->UCustomMeshComponent::AddCustomMeshTriangles(bpfv__K2Node_MakeArray_Array3__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 32:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue5__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Variable2__pf, 1);
				bpfv__Temp_int_Variable2__pf = bpfv__CallFunc_Add_IntInt_ReturnValue5__pf;
				__CurrentState = 14;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void AFogDrawingActor_C__pf1242490746::bpf__ShowxHidexActors__pfET()
{
	AActor* bpfv__HitWall1__pf{};
	AActor* bpfv__HitWall__pf{};
	TArray<FVector> bpfv__Points__pf{};
	bool bpfv__InSight__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable2__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue2__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	TEnumAsByte<EDrawDebugTrace::Type> bpfv__Temp_byte_Variable__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue2__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X2__pf{};
	float bpfv__CallFunc_BreakVector_Y2__pf{};
	float bpfv__CallFunc_BreakVector_Z2__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue2__pf(EForceInit::ForceInit);
	TEnumAsByte<EDrawDebugTrace::Type> bpfv__Temp_byte_Variable2__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue3__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X3__pf{};
	float bpfv__CallFunc_BreakVector_Y3__pf{};
	float bpfv__CallFunc_BreakVector_Z3__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable2__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue3__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue2__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue2__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue3__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue3__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue4__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue4__pf{};
	bool bpfv__Temp_bool_Variable__pf{};
	TEnumAsByte<EDrawDebugTrace::Type> bpfv__K2Node_Select_Default__pf{};
	int32 bpfv__Temp_int_Variable__pf{};
	bool bpfv__Temp_bool_True_if_break_was_hit_Variable__pf{};
	float bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue3__pf{};
	FVector bpfv__CallFunc_Array_Get_Item__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	float bpfv__CallFunc_AngleToPlayer_Angle__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue5__pf{};
	FString bpfv__CallFunc_Conv_FloatToString_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_InRange_FloatFloat_ReturnValue__pf{};
	UFOWComponent_C__pf1242490746* bpfv__CallFunc_Array_Get_Item2__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue2__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue6__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue4__pf{};
	float bpfv__CallFunc_Conv_IntToFloat_ReturnValue2__pf{};
	AActor* bpfv__CallFunc_GetOwner_ReturnValue__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue2__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue4__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_BreakVector_X4__pf{};
	float bpfv__CallFunc_BreakVector_Y4__pf{};
	float bpfv__CallFunc_BreakVector_Z4__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue4__pf(EForceInit::ForceInit);
	AActor* bpfv__CallFunc_GetOwner_ReturnValue2__pf{};
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue5__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_RotateAngleAxis_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X5__pf{};
	float bpfv__CallFunc_BreakVector_Y5__pf{};
	float bpfv__CallFunc_BreakVector_Z5__pf{};
	FVector bpfv__CallFunc_Normal_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue5__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_RotateAngleAxis_ReturnValue2__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Array_Add_ReturnValue__pf{};
	FVector bpfv__CallFunc_Normal_ReturnValue2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_RotateAngleAxis_ReturnValue3__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Normal_ReturnValue3__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue3__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_RotateAngleAxis_ReturnValue4__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue3__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Normal_ReturnValue4__pf(EForceInit::ForceInit);
	TArray<FVector> bpfv__K2Node_MakeArray_Array__pf{};
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue4__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue4__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Array_Add_ReturnValue2__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue5__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue7__pf{};
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue3__pf{};
	AActor* bpfv__CallFunc_GetOwner_ReturnValue3__pf{};
	AActor* bpfv__CallFunc_GetOwner_ReturnValue4__pf{};
	AActor* bpfv__CallFunc_GetOwner_ReturnValue5__pf{};
	TArray<AActor*> bpfv__K2Node_MakeArray_Array2__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue6__pf(EForceInit::ForceInit);
	FHitResult bpfv__CallFunc_LineTraceSingle_OutHit__pf{};
	bool bpfv__CallFunc_LineTraceSingle_ReturnValue__pf{};
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue5__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_BreakHitResult_bBlockingHit__pf{};
	bool bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf{};
	float bpfv__CallFunc_BreakHitResult_Time__pf{};
	float bpfv__CallFunc_BreakHitResult_Distance__pf{};
	FVector bpfv__CallFunc_BreakHitResult_Location__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_ImpactPoint__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_Normal__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_ImpactNormal__pf(EForceInit::ForceInit);
	UPhysicalMaterial* bpfv__CallFunc_BreakHitResult_PhysMat__pf{};
	AActor* bpfv__CallFunc_BreakHitResult_HitActor__pf{};
	UPrimitiveComponent* bpfv__CallFunc_BreakHitResult_HitComponent__pf{};
	FName bpfv__CallFunc_BreakHitResult_HitBoneName__pf{};
	int32 bpfv__CallFunc_BreakHitResult_HitItem__pf{};
	int32 bpfv__CallFunc_BreakHitResult_FaceIndex__pf{};
	FVector bpfv__CallFunc_BreakHitResult_TraceStart__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_TraceEnd__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue2__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue2__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue2__pf{};
	AActor* bpfv__CallFunc_GetOwner_ReturnValue6__pf{};
	bool bpfv__CallFunc_Array_Contains_ReturnValue__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue7__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X6__pf{};
	float bpfv__CallFunc_BreakVector_Y6__pf{};
	float bpfv__CallFunc_BreakVector_Z6__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue6__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue8__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X7__pf{};
	float bpfv__CallFunc_BreakVector_Y7__pf{};
	float bpfv__CallFunc_BreakVector_Z7__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue7__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue3__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_VSize_ReturnValue__pf{};
	bool bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 2:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 3:
			{
				bpfv__CallFunc_Array_Length_ReturnValue2__pf = FCustomThunkTemplates::Array_Length(bpv__ActorsVisibleInFOW__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue6__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue2__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue6__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 4:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 5:
			{
				__StateStack.Push(7);
			}
		case 6:
			{
				FCustomThunkTemplates::Array_Get(bpv__ActorsVisibleInFOW__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item2__pf);
				bpfv__CallFunc_Array_Contains_ReturnValue__pf = FCustomThunkTemplates::Array_Contains(bpv__DiscoveredActors__pf, bpfv__CallFunc_Array_Get_Item2__pf);
				if (!bpfv__CallFunc_Array_Contains_ReturnValue__pf)
				{
					__CurrentState = 8;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 7:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 3;
				break;
			}
		case 8:
			{
				FCustomThunkTemplates::Array_Get(bpv__ActorsVisibleInFOW__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item2__pf);
				float  __Local__14 = 0.000000;
				bpfv__CallFunc_Add_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Add_FloatFloat(bpv__CircleRadius__pf, ((IsValid(bpfv__CallFunc_Array_Get_Item2__pf)) ? (bpfv__CallFunc_Array_Get_Item2__pf->bpv__Radius__pf) : (__Local__14)));
				if(IsValid(bpfv__CallFunc_Array_Get_Item2__pf))
				{
					bpfv__CallFunc_GetOwner_ReturnValue6__pf = bpfv__CallFunc_Array_Get_Item2__pf->UActorComponent::GetOwner();
				}
				if(IsValid(bpfv__CallFunc_GetOwner_ReturnValue6__pf))
				{
					bpfv__CallFunc_K2_GetActorLocation_ReturnValue7__pf = bpfv__CallFunc_GetOwner_ReturnValue6__pf->AActor::K2_GetActorLocation();
				}
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue7__pf, /*out*/ bpfv__CallFunc_BreakVector_X6__pf, /*out*/ bpfv__CallFunc_BreakVector_Y6__pf, /*out*/ bpfv__CallFunc_BreakVector_Z6__pf);
				bpfv__CallFunc_MakeVector_ReturnValue6__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X6__pf, bpfv__CallFunc_BreakVector_Y6__pf, 0.000000);
				if(IsValid(bpv__MyPawn__pf))
				{
					bpfv__CallFunc_K2_GetActorLocation_ReturnValue8__pf = bpv__MyPawn__pf->AActor::K2_GetActorLocation();
				}
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue8__pf, /*out*/ bpfv__CallFunc_BreakVector_X7__pf, /*out*/ bpfv__CallFunc_BreakVector_Y7__pf, /*out*/ bpfv__CallFunc_BreakVector_Z7__pf);
				bpfv__CallFunc_MakeVector_ReturnValue7__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X7__pf, bpfv__CallFunc_BreakVector_Y7__pf, 0.000000);
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue3__pf = UKismetMathLibrary::Subtract_VectorVector(bpfv__CallFunc_MakeVector_ReturnValue7__pf, bpfv__CallFunc_MakeVector_ReturnValue6__pf);
				bpfv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_Subtract_VectorVector_ReturnValue3__pf);
				bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpfv__CallFunc_VSize_ReturnValue__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue2__pf);
				if (!bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 12;
					break;
				}
			}
		case 9:
			{
				FCustomThunkTemplates::Array_Get(bpv__ActorsVisibleInFOW__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item2__pf);
				if(IsValid(bpfv__CallFunc_Array_Get_Item2__pf))
				{
					bpfv__CallFunc_GetOwner_ReturnValue3__pf = bpfv__CallFunc_Array_Get_Item2__pf->UActorComponent::GetOwner();
				}
				if(IsValid(bpfv__CallFunc_GetOwner_ReturnValue3__pf))
				{
					bpfv__CallFunc_GetOwner_ReturnValue3__pf->SetActorHiddenInGame(false);
				}
			}
		case 10:
			{
				FCustomThunkTemplates::Array_Get(bpv__ActorsVisibleInFOW__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item2__pf);
				bool  __Local__15 = false;
				if (!((IsValid(bpfv__CallFunc_Array_Get_Item2__pf)) ? (bpfv__CallFunc_Array_Get_Item2__pf->bpv__RememberLocation__pf) : (__Local__15)))
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 11:
			{
				FCustomThunkTemplates::Array_Get(bpv__ActorsVisibleInFOW__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item2__pf);
				bpfv__CallFunc_Array_Add_ReturnValue3__pf = FCustomThunkTemplates::Array_Add(bpv__DiscoveredActors__pf, bpfv__CallFunc_Array_Get_Item2__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 12:
			{
				FCustomThunkTemplates::Array_Get(bpv__ActorsVisibleInFOW__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item2__pf);
				float  __Local__16 = 0.000000;
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpv__VisionRange__pf, ((IsValid(bpfv__CallFunc_Array_Get_Item2__pf)) ? (bpfv__CallFunc_Array_Get_Item2__pf->bpv__Radius__pf) : (__Local__16)));
				if(IsValid(bpfv__CallFunc_Array_Get_Item2__pf))
				{
					bpfv__CallFunc_GetOwner_ReturnValue6__pf = bpfv__CallFunc_Array_Get_Item2__pf->UActorComponent::GetOwner();
				}
				if(IsValid(bpfv__CallFunc_GetOwner_ReturnValue6__pf))
				{
					bpfv__CallFunc_K2_GetActorLocation_ReturnValue7__pf = bpfv__CallFunc_GetOwner_ReturnValue6__pf->AActor::K2_GetActorLocation();
				}
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue7__pf, /*out*/ bpfv__CallFunc_BreakVector_X6__pf, /*out*/ bpfv__CallFunc_BreakVector_Y6__pf, /*out*/ bpfv__CallFunc_BreakVector_Z6__pf);
				bpfv__CallFunc_MakeVector_ReturnValue6__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X6__pf, bpfv__CallFunc_BreakVector_Y6__pf, 0.000000);
				if(IsValid(bpv__MyPawn__pf))
				{
					bpfv__CallFunc_K2_GetActorLocation_ReturnValue8__pf = bpv__MyPawn__pf->AActor::K2_GetActorLocation();
				}
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue8__pf, /*out*/ bpfv__CallFunc_BreakVector_X7__pf, /*out*/ bpfv__CallFunc_BreakVector_Y7__pf, /*out*/ bpfv__CallFunc_BreakVector_Z7__pf);
				bpfv__CallFunc_MakeVector_ReturnValue7__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X7__pf, bpfv__CallFunc_BreakVector_Y7__pf, 0.000000);
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue3__pf = UKismetMathLibrary::Subtract_VectorVector(bpfv__CallFunc_MakeVector_ReturnValue7__pf, bpfv__CallFunc_MakeVector_ReturnValue6__pf);
				bpfv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_Subtract_VectorVector_ReturnValue3__pf);
				bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(bpfv__CallFunc_VSize_ReturnValue__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf);
				if (!bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 14;
					break;
				}
			}
		case 13:
			{
				FCustomThunkTemplates::Array_Get(bpv__ActorsVisibleInFOW__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item2__pf);
				if(IsValid(bpfv__CallFunc_Array_Get_Item2__pf))
				{
					bpfv__CallFunc_GetOwner_ReturnValue3__pf = bpfv__CallFunc_Array_Get_Item2__pf->UActorComponent::GetOwner();
				}
				if(IsValid(bpfv__CallFunc_GetOwner_ReturnValue3__pf))
				{
					bpfv__CallFunc_GetOwner_ReturnValue3__pf->SetActorHiddenInGame(true);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 14:
			{
				FCustomThunkTemplates::Array_Clear(bpfv__Points__pf);
			}
		case 15:
			{
				if(IsValid(bpv__MyPawn__pf))
				{
					bpfv__CallFunc_K2_GetActorLocation_ReturnValue3__pf = bpv__MyPawn__pf->AActor::K2_GetActorLocation();
				}
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue3__pf, /*out*/ bpfv__CallFunc_BreakVector_X3__pf, /*out*/ bpfv__CallFunc_BreakVector_Y3__pf, /*out*/ bpfv__CallFunc_BreakVector_Z3__pf);
				bpfv__CallFunc_MakeVector_ReturnValue3__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X3__pf, bpfv__CallFunc_BreakVector_Y3__pf, bpv__ShadowHeight__pf);
				FCustomThunkTemplates::Array_Get(bpv__ActorsVisibleInFOW__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item2__pf);
				if(IsValid(bpfv__CallFunc_Array_Get_Item2__pf))
				{
					bpfv__CallFunc_GetOwner_ReturnValue2__pf = bpfv__CallFunc_Array_Get_Item2__pf->UActorComponent::GetOwner();
				}
				if(IsValid(bpfv__CallFunc_GetOwner_ReturnValue2__pf))
				{
					bpfv__CallFunc_K2_GetActorLocation_ReturnValue5__pf = bpfv__CallFunc_GetOwner_ReturnValue2__pf->AActor::K2_GetActorLocation();
				}
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue5__pf, /*out*/ bpfv__CallFunc_BreakVector_X5__pf, /*out*/ bpfv__CallFunc_BreakVector_Y5__pf, /*out*/ bpfv__CallFunc_BreakVector_Z5__pf);
				bpfv__CallFunc_MakeVector_ReturnValue5__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X5__pf, bpfv__CallFunc_BreakVector_Y5__pf, bpv__ShadowHeight__pf);
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue2__pf = UKismetMathLibrary::Subtract_VectorVector(bpfv__CallFunc_MakeVector_ReturnValue3__pf, bpfv__CallFunc_MakeVector_ReturnValue5__pf);
				bpfv__CallFunc_RotateAngleAxis_ReturnValue2__pf = UKismetMathLibrary::RotateAngleAxis(bpfv__CallFunc_Subtract_VectorVector_ReturnValue2__pf, 90.000000, FVector(0.000000,0.000000,1.000000));
				bpfv__CallFunc_Normal_ReturnValue2__pf = UKismetMathLibrary::Normal(bpfv__CallFunc_RotateAngleAxis_ReturnValue2__pf);
				bpfv__CallFunc_RotateAngleAxis_ReturnValue3__pf = UKismetMathLibrary::RotateAngleAxis(bpfv__CallFunc_Subtract_VectorVector_ReturnValue2__pf, -90.000000, FVector(0.000000,0.000000,1.000000));
				float  __Local__17 = 0.000000;
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue2__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_Normal_ReturnValue2__pf, ((IsValid(bpfv__CallFunc_Array_Get_Item2__pf)) ? (bpfv__CallFunc_Array_Get_Item2__pf->bpv__Radius__pf) : (__Local__17)));
				bpfv__CallFunc_Normal_ReturnValue3__pf = UKismetMathLibrary::Normal(bpfv__CallFunc_RotateAngleAxis_ReturnValue3__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue2__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_MakeVector_ReturnValue5__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue2__pf);
				float  __Local__18 = 0.000000;
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue3__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_Normal_ReturnValue3__pf, ((IsValid(bpfv__CallFunc_Array_Get_Item2__pf)) ? (bpfv__CallFunc_Array_Get_Item2__pf->bpv__Radius__pf) : (__Local__18)));
				bpfv__CallFunc_Add_VectorVector_ReturnValue3__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_MakeVector_ReturnValue5__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue3__pf);
				bpfv__K2Node_MakeArray_Array__pf.SetNum(3, true);
				bpfv__K2Node_MakeArray_Array__pf[0] = bpfv__CallFunc_MakeVector_ReturnValue5__pf;
				bpfv__K2Node_MakeArray_Array__pf[1] = bpfv__CallFunc_Add_VectorVector_ReturnValue3__pf;
				bpfv__K2Node_MakeArray_Array__pf[2] = bpfv__CallFunc_Add_VectorVector_ReturnValue2__pf;
				FCustomThunkTemplates::Array_Append(bpfv__Points__pf, bpfv__K2Node_MakeArray_Array__pf);
			}
		case 16:
			{
				FCustomThunkTemplates::Array_Get(bpv__ActorsVisibleInFOW__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item2__pf);
				int32  __Local__19 = 0;
				bpfv__CallFunc_Less_IntInt_ReturnValue7__pf = UKismetMathLibrary::Less_IntInt(((IsValid(bpfv__CallFunc_Array_Get_Item2__pf)) ? (bpfv__CallFunc_Array_Get_Item2__pf->bpv__Tests__pf) : (__Local__19)), 0);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue7__pf)
				{
					__CurrentState = 27;
					break;
				}
			}
		case 17:
			{
				bpfv__Temp_bool_True_if_break_was_hit_Variable__pf = false;
			}
		case 18:
			{
				bpfv__Temp_int_Loop_Counter_Variable2__pf = 0;
			}
		case 19:
			{
				bpfv__Temp_int_Array_Index_Variable2__pf = 0;
			}
		case 20:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpfv__Temp_bool_True_if_break_was_hit_Variable__pf);
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpfv__Points__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue5__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable2__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue__pf, bpfv__CallFunc_Less_IntInt_ReturnValue5__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = 26;
					break;
				}
			}
		case 21:
			{
				bpfv__Temp_int_Array_Index_Variable2__pf = bpfv__Temp_int_Loop_Counter_Variable2__pf;
			}
		case 22:
			{
				__StateStack.Push(34);
			}
		case 23:
			{
				if (!bpv__UseConeOfVision__pf)
				{
					__CurrentState = 35;
					break;
				}
			}
		case 24:
			{
				FCustomThunkTemplates::Array_Get(bpfv__Points__pf, bpfv__Temp_int_Array_Index_Variable2__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpf__AngleToPlayer__pf(bpfv__CallFunc_Array_Get_Item__pf, /*out*/ bpfv__CallFunc_AngleToPlayer_Angle__pf);
			}
		case 25:
			{
				bpfv__CallFunc_Less_IntInt_ReturnValue4__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Array_Index_Variable2__pf, 0);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue4__pf)
				{
					__CurrentState = 49;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 26:
			{
				if (!bpfv__InSight__pf)
				{
					__CurrentState = 13;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 27:
			{
				FCustomThunkTemplates::Array_Get(bpv__ActorsVisibleInFOW__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item2__pf);
				int32  __Local__20 = 0;
				bpfv__CallFunc_Greater_IntInt_ReturnValue5__pf = UKismetMathLibrary::Greater_IntInt(((IsValid(bpfv__CallFunc_Array_Get_Item2__pf)) ? (bpfv__CallFunc_Array_Get_Item2__pf->bpv__Tests__pf) : (__Local__20)), 0);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue5__pf)
				{
					__CurrentState = 17;
					break;
				}
			}
		case 28:
			{
				bpfv__Temp_int_Variable__pf = 1;
			}
		case 29:
			{
				FCustomThunkTemplates::Array_Get(bpv__ActorsVisibleInFOW__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item2__pf);
				int32  __Local__21 = 0;
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::LessEqual_IntInt(bpfv__Temp_int_Variable__pf, ((IsValid(bpfv__CallFunc_Array_Get_Item2__pf)) ? (bpfv__CallFunc_Array_Get_Item2__pf->bpv__Tests__pf) : (__Local__21)));
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 17;
					break;
				}
			}
		case 30:
			{
				__StateStack.Push(33);
			}
		case 31:
			{
				if(IsValid(bpv__MyPawn__pf))
				{
					bpfv__CallFunc_K2_GetActorLocation_ReturnValue2__pf = bpv__MyPawn__pf->AActor::K2_GetActorLocation();
				}
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue2__pf, /*out*/ bpfv__CallFunc_BreakVector_X2__pf, /*out*/ bpfv__CallFunc_BreakVector_Y2__pf, /*out*/ bpfv__CallFunc_BreakVector_Z2__pf);
				bpfv__CallFunc_MakeVector_ReturnValue2__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X2__pf, bpfv__CallFunc_BreakVector_Y2__pf, bpv__ShadowHeight__pf);
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_IntToFloat(bpfv__Temp_int_Variable__pf);
				FCustomThunkTemplates::Array_Get(bpv__ActorsVisibleInFOW__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item2__pf);
				int32  __Local__22 = 0;
				bpfv__CallFunc_Add_IntInt_ReturnValue4__pf = UKismetMathLibrary::Add_IntInt(((IsValid(bpfv__CallFunc_Array_Get_Item2__pf)) ? (bpfv__CallFunc_Array_Get_Item2__pf->bpv__Tests__pf) : (__Local__22)), 1);
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue2__pf = UKismetMathLibrary::Conv_IntToFloat(bpfv__CallFunc_Add_IntInt_ReturnValue4__pf);
				if(IsValid(bpfv__CallFunc_Array_Get_Item2__pf))
				{
					bpfv__CallFunc_GetOwner_ReturnValue__pf = bpfv__CallFunc_Array_Get_Item2__pf->UActorComponent::GetOwner();
				}
				float  __Local__23 = 0.000000;
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue2__pf = FCustomThunkTemplates::Divide_FloatFloat(((IsValid(bpfv__CallFunc_Array_Get_Item2__pf)) ? (bpfv__CallFunc_Array_Get_Item2__pf->bpv__Radius__pf) : (__Local__23)), bpfv__CallFunc_Conv_IntToFloat_ReturnValue2__pf);
				if(IsValid(bpfv__CallFunc_GetOwner_ReturnValue__pf))
				{
					bpfv__CallFunc_K2_GetActorLocation_ReturnValue4__pf = bpfv__CallFunc_GetOwner_ReturnValue__pf->AActor::K2_GetActorLocation();
				}
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Divide_FloatFloat_ReturnValue2__pf, bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue4__pf, /*out*/ bpfv__CallFunc_BreakVector_X4__pf, /*out*/ bpfv__CallFunc_BreakVector_Y4__pf, /*out*/ bpfv__CallFunc_BreakVector_Z4__pf);
				bpfv__CallFunc_MakeVector_ReturnValue4__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X4__pf, bpfv__CallFunc_BreakVector_Y4__pf, bpv__ShadowHeight__pf);
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(bpfv__CallFunc_MakeVector_ReturnValue2__pf, bpfv__CallFunc_MakeVector_ReturnValue4__pf);
				bpfv__CallFunc_RotateAngleAxis_ReturnValue4__pf = UKismetMathLibrary::RotateAngleAxis(bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf, -90.000000, FVector(0.000000,0.000000,1.000000));
				bpfv__CallFunc_Normal_ReturnValue4__pf = UKismetMathLibrary::Normal(bpfv__CallFunc_RotateAngleAxis_ReturnValue4__pf);
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue4__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_Normal_ReturnValue4__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue4__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_MakeVector_ReturnValue4__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue4__pf);
				bpfv__CallFunc_Array_Add_ReturnValue2__pf = FCustomThunkTemplates::Array_Add(bpfv__Points__pf, bpfv__CallFunc_Add_VectorVector_ReturnValue4__pf);
			}
		case 32:
			{
				if(IsValid(bpv__MyPawn__pf))
				{
					bpfv__CallFunc_K2_GetActorLocation_ReturnValue2__pf = bpv__MyPawn__pf->AActor::K2_GetActorLocation();
				}
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue2__pf, /*out*/ bpfv__CallFunc_BreakVector_X2__pf, /*out*/ bpfv__CallFunc_BreakVector_Y2__pf, /*out*/ bpfv__CallFunc_BreakVector_Z2__pf);
				bpfv__CallFunc_MakeVector_ReturnValue2__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X2__pf, bpfv__CallFunc_BreakVector_Y2__pf, bpv__ShadowHeight__pf);
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_IntToFloat(bpfv__Temp_int_Variable__pf);
				FCustomThunkTemplates::Array_Get(bpv__ActorsVisibleInFOW__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item2__pf);
				int32  __Local__24 = 0;
				bpfv__CallFunc_Add_IntInt_ReturnValue4__pf = UKismetMathLibrary::Add_IntInt(((IsValid(bpfv__CallFunc_Array_Get_Item2__pf)) ? (bpfv__CallFunc_Array_Get_Item2__pf->bpv__Tests__pf) : (__Local__24)), 1);
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue2__pf = UKismetMathLibrary::Conv_IntToFloat(bpfv__CallFunc_Add_IntInt_ReturnValue4__pf);
				if(IsValid(bpfv__CallFunc_Array_Get_Item2__pf))
				{
					bpfv__CallFunc_GetOwner_ReturnValue__pf = bpfv__CallFunc_Array_Get_Item2__pf->UActorComponent::GetOwner();
				}
				float  __Local__25 = 0.000000;
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue2__pf = FCustomThunkTemplates::Divide_FloatFloat(((IsValid(bpfv__CallFunc_Array_Get_Item2__pf)) ? (bpfv__CallFunc_Array_Get_Item2__pf->bpv__Radius__pf) : (__Local__25)), bpfv__CallFunc_Conv_IntToFloat_ReturnValue2__pf);
				if(IsValid(bpfv__CallFunc_GetOwner_ReturnValue__pf))
				{
					bpfv__CallFunc_K2_GetActorLocation_ReturnValue4__pf = bpfv__CallFunc_GetOwner_ReturnValue__pf->AActor::K2_GetActorLocation();
				}
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Divide_FloatFloat_ReturnValue2__pf, bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue4__pf, /*out*/ bpfv__CallFunc_BreakVector_X4__pf, /*out*/ bpfv__CallFunc_BreakVector_Y4__pf, /*out*/ bpfv__CallFunc_BreakVector_Z4__pf);
				bpfv__CallFunc_MakeVector_ReturnValue4__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X4__pf, bpfv__CallFunc_BreakVector_Y4__pf, bpv__ShadowHeight__pf);
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(bpfv__CallFunc_MakeVector_ReturnValue2__pf, bpfv__CallFunc_MakeVector_ReturnValue4__pf);
				bpfv__CallFunc_RotateAngleAxis_ReturnValue__pf = UKismetMathLibrary::RotateAngleAxis(bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf, 90.000000, FVector(0.000000,0.000000,1.000000));
				bpfv__CallFunc_Normal_ReturnValue__pf = UKismetMathLibrary::Normal(bpfv__CallFunc_RotateAngleAxis_ReturnValue__pf);
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_Normal_ReturnValue__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_MakeVector_ReturnValue4__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf);
				bpfv__CallFunc_Array_Add_ReturnValue__pf = FCustomThunkTemplates::Array_Add(bpfv__Points__pf, bpfv__CallFunc_Add_VectorVector_ReturnValue__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 33:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue3__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Variable__pf, 1);
				bpfv__Temp_int_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue3__pf;
				__CurrentState = 29;
				break;
			}
		case 34:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue2__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable2__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable2__pf = bpfv__CallFunc_Add_IntInt_ReturnValue2__pf;
				__CurrentState = 20;
				break;
			}
		case 35:
			{
				if(IsValid(bpv__MyPawn__pf))
				{
					bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = bpv__MyPawn__pf->AActor::K2_GetActorLocation();
				}
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X__pf, bpfv__CallFunc_BreakVector_Y__pf, bpv__ShadowHeight__pf);
				bpfv__Temp_byte_Variable__pf = EDrawDebugTrace::None;
				bpfv__Temp_byte_Variable2__pf = EDrawDebugTrace::ForOneFrame;
				bpfv__Temp_bool_Variable__pf = bpv__DebugMode__pf;
				FCustomThunkTemplates::Array_Get(bpfv__Points__pf, bpfv__Temp_int_Array_Index_Variable2__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				FCustomThunkTemplates::Array_Get(bpv__ActorsVisibleInFOW__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item2__pf);
				if(IsValid(bpfv__CallFunc_Array_Get_Item2__pf))
				{
					bpfv__CallFunc_GetOwner_ReturnValue4__pf = bpfv__CallFunc_Array_Get_Item2__pf->UActorComponent::GetOwner();
				}
				bpfv__K2Node_MakeArray_Array2__pf.SetNum(2, true);
				bpfv__K2Node_MakeArray_Array2__pf[0] = bpfv__CallFunc_GetOwner_ReturnValue4__pf;
				bpfv__K2Node_MakeArray_Array2__pf[1] = bpv__MyPawn__pf;
				bpfv__CallFunc_LineTraceSingle_ReturnValue__pf = UKismetSystemLibrary::LineTraceSingle(this, bpfv__CallFunc_MakeVector_ReturnValue__pf, bpfv__CallFunc_Array_Get_Item__pf, ETraceTypeQuery::TraceTypeQuery3, false, bpfv__K2Node_MakeArray_Array2__pf, TSwitchValue<bool , TEnumAsByte<EDrawDebugTrace::Type> >(bpfv__Temp_bool_Variable__pf, bpfv__K2Node_Select_Default__pf, 2, TSwitchPair<bool , TEnumAsByte<EDrawDebugTrace::Type> >(false, bpfv__Temp_byte_Variable__pf), TSwitchPair<bool , TEnumAsByte<EDrawDebugTrace::Type> >(true, bpfv__Temp_byte_Variable2__pf)), /*out*/ bpfv__CallFunc_LineTraceSingle_OutHit__pf, true, FLinearColor(1.000000,0.000000,0.000000,1.000000), FLinearColor(0.000000,1.000000,0.000000,1.000000), 5.000000);
			}
		case 36:
			{
				if (!bpfv__CallFunc_LineTraceSingle_ReturnValue__pf)
				{
					__CurrentState = 47;
					break;
				}
			}
		case 37:
			{
				bpfv__CallFunc_Less_IntInt_ReturnValue2__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Array_Index_Variable2__pf, 0);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue2__pf)
				{
					__CurrentState = 38;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 38:
			{
				bpfv__CallFunc_Greater_IntInt_ReturnValue2__pf = UKismetMathLibrary::Greater_IntInt(bpfv__Temp_int_Array_Index_Variable2__pf, 0);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue2__pf)
				{
					__CurrentState = 46;
					break;
				}
			}
		case 39:
			{
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Array_Index_Variable2__pf, 1);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 40;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 40:
			{
				bpfv__CallFunc_Greater_IntInt_ReturnValue__pf = UKismetMathLibrary::Greater_IntInt(bpfv__Temp_int_Array_Index_Variable2__pf, 1);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue__pf)
				{
					__CurrentState = 45;
					break;
				}
			}
		case 41:
			{
				bpfv__CallFunc_Less_IntInt_ReturnValue3__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Array_Index_Variable2__pf, 2);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue3__pf)
				{
					__CurrentState = 42;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 42:
			{
				bpfv__CallFunc_Greater_IntInt_ReturnValue3__pf = UKismetMathLibrary::Greater_IntInt(bpfv__Temp_int_Array_Index_Variable2__pf, 2);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue3__pf)
				{
					__CurrentState = 43;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 43:
			{
				UGameplayStatics::BreakHitResult(bpfv__CallFunc_LineTraceSingle_OutHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Time__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Distance__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Normal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitItem__pf, /*out*/ bpfv__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceEnd__pf);
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ObjectObject(bpfv__CallFunc_BreakHitResult_HitActor__pf, bpfv__HitWall1__pf);
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue2__pf = UKismetMathLibrary::EqualEqual_ObjectObject(bpfv__CallFunc_BreakHitResult_HitActor__pf, bpfv__HitWall__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue2__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue2__pf, bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 44:
			{
				bpfv__Temp_bool_True_if_break_was_hit_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 45:
			{
				UGameplayStatics::BreakHitResult(bpfv__CallFunc_LineTraceSingle_OutHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Time__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Distance__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Normal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitItem__pf, /*out*/ bpfv__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceEnd__pf);
				bpfv__HitWall1__pf = bpfv__CallFunc_BreakHitResult_HitActor__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 46:
			{
				UGameplayStatics::BreakHitResult(bpfv__CallFunc_LineTraceSingle_OutHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Time__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Distance__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Normal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitItem__pf, /*out*/ bpfv__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceEnd__pf);
				bpfv__HitWall__pf = bpfv__CallFunc_BreakHitResult_HitActor__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 47:
			{
				__StateStack.Push(48);
				__CurrentState = 9;
				break;
			}
		case 48:
			{
				bpfv__InSight__pf = true;
				__CurrentState = 44;
				break;
			}
		case 49:
			{
				bpfv__CallFunc_Greater_IntInt_ReturnValue4__pf = UKismetMathLibrary::Greater_IntInt(bpfv__Temp_int_Array_Index_Variable2__pf, 0);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue4__pf)
				{
					__CurrentState = 51;
					break;
				}
			}
		case 50:
			{
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpv__ConeSize__pf, 2.000000);
				bpfv__CallFunc_InRange_FloatFloat_ReturnValue__pf = UKismetMathLibrary::InRange_FloatFloat(bpfv__CallFunc_AngleToPlayer_Angle__pf, 0.000000, bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf, true, true);
				if (!bpfv__CallFunc_InRange_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				__CurrentState = 35;
				break;
			}
		case 51:
			{
				if (!bpv__DebugMode__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 52:
			{
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpv__ConeSize__pf, 2.000000);
				bpfv__CallFunc_InRange_FloatFloat_ReturnValue__pf = UKismetMathLibrary::InRange_FloatFloat(bpfv__CallFunc_AngleToPlayer_Angle__pf, 0.000000, bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf, true, true);
				if (!bpfv__CallFunc_InRange_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 54;
					break;
				}
			}
		case 53:
			{
				bpfv__CallFunc_Conv_FloatToString_ReturnValue__pf = UKismetStringLibrary::Conv_FloatToString(bpfv__CallFunc_AngleToPlayer_Angle__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue__pf = UKismetStringLibrary::Concat_StrStr(FString(TEXT("angle: ")), bpfv__CallFunc_Conv_FloatToString_ReturnValue__pf);
				FCustomThunkTemplates::Array_Get(bpv__ActorsVisibleInFOW__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item2__pf);
				if(IsValid(bpfv__CallFunc_Array_Get_Item2__pf))
				{
					bpfv__CallFunc_GetOwner_ReturnValue5__pf = bpfv__CallFunc_Array_Get_Item2__pf->UActorComponent::GetOwner();
				}
				if(IsValid(bpfv__CallFunc_GetOwner_ReturnValue5__pf))
				{
					bpfv__CallFunc_K2_GetActorLocation_ReturnValue6__pf = bpfv__CallFunc_GetOwner_ReturnValue5__pf->AActor::K2_GetActorLocation();
				}
				bpfv__CallFunc_Add_VectorVector_ReturnValue5__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue6__pf, FVector(0.000000,0.000000,100.000000));
				UKismetSystemLibrary::DrawDebugString(this, bpfv__CallFunc_Add_VectorVector_ReturnValue5__pf, bpfv__CallFunc_Concat_StrStr_ReturnValue__pf, ((AActor*)nullptr), FLinearColor(0.000000,1.000000,0.000000,1.000000), 0.000000);
				__CurrentState = 35;
				break;
			}
		case 54:
			{
				bpfv__CallFunc_Conv_FloatToString_ReturnValue__pf = UKismetStringLibrary::Conv_FloatToString(bpfv__CallFunc_AngleToPlayer_Angle__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue__pf = UKismetStringLibrary::Concat_StrStr(FString(TEXT("angle: ")), bpfv__CallFunc_Conv_FloatToString_ReturnValue__pf);
				FCustomThunkTemplates::Array_Get(bpv__ActorsVisibleInFOW__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item2__pf);
				if(IsValid(bpfv__CallFunc_Array_Get_Item2__pf))
				{
					bpfv__CallFunc_GetOwner_ReturnValue5__pf = bpfv__CallFunc_Array_Get_Item2__pf->UActorComponent::GetOwner();
				}
				if(IsValid(bpfv__CallFunc_GetOwner_ReturnValue5__pf))
				{
					bpfv__CallFunc_K2_GetActorLocation_ReturnValue6__pf = bpfv__CallFunc_GetOwner_ReturnValue5__pf->AActor::K2_GetActorLocation();
				}
				bpfv__CallFunc_Add_VectorVector_ReturnValue5__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue6__pf, FVector(0.000000,0.000000,100.000000));
				UKismetSystemLibrary::DrawDebugString(this, bpfv__CallFunc_Add_VectorVector_ReturnValue5__pf, bpfv__CallFunc_Concat_StrStr_ReturnValue__pf, ((AActor*)nullptr), FLinearColor(1.000000,0.000000,0.000000,1.000000), 0.000000);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void AFogDrawingActor_C__pf1242490746::bpf__AngleToPlayer__pf(FVector bpp__Location__pf, /*out*/ float& bpp__Angle__pf)
{
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X2__pf{};
	float bpfv__CallFunc_BreakVector_Y2__pf{};
	float bpfv__CallFunc_BreakVector_Z2__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Normal_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Normal_ReturnValue2__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Dot_VectorVector_ReturnValue__pf{};
	float bpfv__CallFunc_DegAcos_ReturnValue__pf{};
	UKismetMathLibrary::BreakVector(bpp__Location__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
	if(IsValid(bpv__MyPawn__pf))
	{
		bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = bpv__MyPawn__pf->AActor::K2_GetActorLocation();
	}
	bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X__pf, bpfv__CallFunc_BreakVector_Y__pf, 0.000000);
	UKismetMathLibrary::BreakVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakVector_X2__pf, /*out*/ bpfv__CallFunc_BreakVector_Y2__pf, /*out*/ bpfv__CallFunc_BreakVector_Z2__pf);
	bpfv__CallFunc_MakeVector_ReturnValue2__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X2__pf, bpfv__CallFunc_BreakVector_Y2__pf, 0.000000);
	bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue__pf = UKismetMathLibrary::GreaterGreater_VectorRotator(FVector(100.000000,0.000000,0.000000), bpv__Facing__pf);
	bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(bpfv__CallFunc_MakeVector_ReturnValue2__pf, bpfv__CallFunc_MakeVector_ReturnValue__pf);
	bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue__pf, -1.000000);
	bpfv__CallFunc_Normal_ReturnValue__pf = UKismetMathLibrary::Normal(bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf);
	bpfv__CallFunc_Normal_ReturnValue2__pf = UKismetMathLibrary::Normal(bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf);
	bpfv__CallFunc_Dot_VectorVector_ReturnValue__pf = UKismetMathLibrary::Dot_VectorVector(bpfv__CallFunc_Normal_ReturnValue__pf, bpfv__CallFunc_Normal_ReturnValue2__pf);
	bpfv__CallFunc_DegAcos_ReturnValue__pf = UKismetMathLibrary::DegAcos(bpfv__CallFunc_Dot_VectorVector_ReturnValue__pf);
	bpp__Angle__pf = bpfv__CallFunc_DegAcos_ReturnValue__pf;
}
void AFogDrawingActor_C__pf1242490746::bpf__FindValidPawn__pf()
{
	APawn* bpfv__CallFunc_GetPlayerPawn_ReturnValue__pf{};
	AController* bpfv__CallFunc_GetController_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ObjectObject(bpv__MyPawn__pf, ((UObject*)nullptr));
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				bpfv__CallFunc_GetPlayerPawn_ReturnValue__pf = UGameplayStatics::GetPlayerPawn(this, 0);
				bpv__MyPawn__pf = bpfv__CallFunc_GetPlayerPawn_ReturnValue__pf;
			}
		case 3:
			{
				AActor::FlushNetDormancy();
			}
		case 4:
			{
				if(IsValid(bpv__MyPawn__pf))
				{
					bpfv__CallFunc_GetController_ReturnValue__pf = bpv__MyPawn__pf->APawn::GetController();
				}
				bpv__MyController__pf = bpfv__CallFunc_GetController_ReturnValue__pf;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AFogDrawingActor_C__pf1242490746::bpf__FindActorsWithFOWComponent__pf()
{
	int32 bpfv__TempCount__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable2__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue2__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable2__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue2__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue2__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue2__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue3__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue3__pf{};
	TArray<AActor*> bpfv__CallFunc_GetAllActorsOfClass_OutActors__pf{};
	AActor* bpfv__CallFunc_Array_Get_Item__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue3__pf{};
	TArray<UFOWComponent_C__pf1242490746*> bpfv__CallFunc_GetComponentsByClass_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	UFOWComponent_C__pf1242490746* bpfv__CallFunc_Array_Get_Item2__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue2__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue4__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue5__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue2__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue3__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				(bpfv__CallFunc_GetAllActorsOfClass_OutActors__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, AActor::StaticClass(), /*out*/ bpfv__CallFunc_GetAllActorsOfClass_OutActors__pf);
			}
		case 2:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 3:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 4:
			{
				bpfv__CallFunc_Array_Length_ReturnValue3__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_GetAllActorsOfClass_OutActors__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue3__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 5:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 6:
			{
				__StateStack.Push(10);
			}
		case 7:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetAllActorsOfClass_OutActors__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_GetComponentsByClass_ReturnValue__pf = TArrayCaster< UActorComponent* >(bpfv__CallFunc_Array_Get_Item__pf->AActor::GetComponentsByClass(UFOWComponent_C__pf1242490746::StaticClass())).Get< UFOWComponent_C__pf1242490746* >();
				}
				bpfv__CallFunc_Array_Length_ReturnValue5__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_GetComponentsByClass_ReturnValue__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue3__pf = UKismetMathLibrary::Less_IntInt(bpfv__CallFunc_Array_Length_ReturnValue5__pf, 0);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue3__pf)
				{
					__CurrentState = 11;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 8:
			{
				if (!bpv__DebugMode__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 9:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__ActorsVisibleInFOW__pf);
				bpfv__CallFunc_Array_Length_ReturnValue2__pf = FCustomThunkTemplates::Array_Length(bpv__ActorsCastingFOW__pf);
				bpfv__CallFunc_Conv_IntToString_ReturnValue__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_Array_Length_ReturnValue__pf);
				bpfv__CallFunc_Conv_IntToString_ReturnValue2__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_Array_Length_ReturnValue2__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue__pf = UKismetStringLibrary::Concat_StrStr(FString(TEXT("Actors casting FOW: ")), bpfv__CallFunc_Conv_IntToString_ReturnValue2__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue2__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue__pf, FString(TEXT("  Actors hidden in FOW: ")));
				bpfv__CallFunc_Concat_StrStr_ReturnValue3__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue2__pf, bpfv__CallFunc_Conv_IntToString_ReturnValue__pf);
				UKismetSystemLibrary::PrintString(this, bpfv__CallFunc_Concat_StrStr_ReturnValue3__pf, true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 10:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 4;
				break;
			}
		case 11:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetAllActorsOfClass_OutActors__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_GetComponentsByClass_ReturnValue__pf = TArrayCaster< UActorComponent* >(bpfv__CallFunc_Array_Get_Item__pf->AActor::GetComponentsByClass(UFOWComponent_C__pf1242490746::StaticClass())).Get< UFOWComponent_C__pf1242490746* >();
				}
				bpfv__CallFunc_Array_Length_ReturnValue5__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_GetComponentsByClass_ReturnValue__pf);
				bpfv__CallFunc_Greater_IntInt_ReturnValue__pf = UKismetMathLibrary::Greater_IntInt(bpfv__CallFunc_Array_Length_ReturnValue5__pf, 0);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 12:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue3__pf = UKismetMathLibrary::Add_IntInt(bpfv__TempCount__pf, 1);
				bpfv__TempCount__pf = bpfv__CallFunc_Add_IntInt_ReturnValue3__pf;
			}
		case 13:
			{
				bpfv__Temp_int_Loop_Counter_Variable2__pf = 0;
			}
		case 14:
			{
				bpfv__Temp_int_Array_Index_Variable2__pf = 0;
			}
		case 15:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetAllActorsOfClass_OutActors__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_GetComponentsByClass_ReturnValue__pf = TArrayCaster< UActorComponent* >(bpfv__CallFunc_Array_Get_Item__pf->AActor::GetComponentsByClass(UFOWComponent_C__pf1242490746::StaticClass())).Get< UFOWComponent_C__pf1242490746* >();
				}
				bpfv__CallFunc_Array_Length_ReturnValue4__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_GetComponentsByClass_ReturnValue__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue2__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable2__pf, bpfv__CallFunc_Array_Length_ReturnValue4__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 16:
			{
				bpfv__Temp_int_Array_Index_Variable2__pf = bpfv__Temp_int_Loop_Counter_Variable2__pf;
			}
		case 17:
			{
				__StateStack.Push(23);
			}
		case 18:
			{
				__StateStack.Push(21);
			}
		case 19:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetAllActorsOfClass_OutActors__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_GetComponentsByClass_ReturnValue__pf = TArrayCaster< UActorComponent* >(bpfv__CallFunc_Array_Get_Item__pf->AActor::GetComponentsByClass(UFOWComponent_C__pf1242490746::StaticClass())).Get< UFOWComponent_C__pf1242490746* >();
				}
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetComponentsByClass_ReturnValue__pf, bpfv__Temp_int_Array_Index_Variable2__pf, /*out*/ bpfv__CallFunc_Array_Get_Item2__pf);
				bool  __Local__26 = false;
				if (!((IsValid(bpfv__CallFunc_Array_Get_Item2__pf)) ? (bpfv__CallFunc_Array_Get_Item2__pf->bpv__CastFOW__pf) : (__Local__26)))
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 20:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetAllActorsOfClass_OutActors__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_GetComponentsByClass_ReturnValue__pf = TArrayCaster< UActorComponent* >(bpfv__CallFunc_Array_Get_Item__pf->AActor::GetComponentsByClass(UFOWComponent_C__pf1242490746::StaticClass())).Get< UFOWComponent_C__pf1242490746* >();
				}
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetComponentsByClass_ReturnValue__pf, bpfv__Temp_int_Array_Index_Variable2__pf, /*out*/ bpfv__CallFunc_Array_Get_Item2__pf);
				bpfv__CallFunc_Array_Add_ReturnValue2__pf = FCustomThunkTemplates::Array_Add(bpv__ActorsCastingFOW__pf, bpfv__CallFunc_Array_Get_Item2__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 21:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetAllActorsOfClass_OutActors__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_GetComponentsByClass_ReturnValue__pf = TArrayCaster< UActorComponent* >(bpfv__CallFunc_Array_Get_Item__pf->AActor::GetComponentsByClass(UFOWComponent_C__pf1242490746::StaticClass())).Get< UFOWComponent_C__pf1242490746* >();
				}
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetComponentsByClass_ReturnValue__pf, bpfv__Temp_int_Array_Index_Variable2__pf, /*out*/ bpfv__CallFunc_Array_Get_Item2__pf);
				bool  __Local__27 = false;
				if (!((IsValid(bpfv__CallFunc_Array_Get_Item2__pf)) ? (bpfv__CallFunc_Array_Get_Item2__pf->bpv__HideInFOW__pf) : (__Local__27)))
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 22:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetAllActorsOfClass_OutActors__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_GetComponentsByClass_ReturnValue__pf = TArrayCaster< UActorComponent* >(bpfv__CallFunc_Array_Get_Item__pf->AActor::GetComponentsByClass(UFOWComponent_C__pf1242490746::StaticClass())).Get< UFOWComponent_C__pf1242490746* >();
				}
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetComponentsByClass_ReturnValue__pf, bpfv__Temp_int_Array_Index_Variable2__pf, /*out*/ bpfv__CallFunc_Array_Get_Item2__pf);
				bpfv__CallFunc_Array_Add_ReturnValue__pf = FCustomThunkTemplates::Array_Add(bpv__ActorsVisibleInFOW__pf, bpfv__CallFunc_Array_Get_Item2__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 23:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue2__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable2__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable2__pf = bpfv__CallFunc_Add_IntInt_ReturnValue2__pf;
				__CurrentState = 15;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void AFogDrawingActor_C__pf1242490746::bpf__Modify_FogDrawing__pf(bool bpp__DrawFog__pf, bool bpp__UseLineOfSight__pf, E__FogType__pf bpp__FogType__pf)
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpv__UseLineOfSight__pf = bpp__UseLineOfSight__pf;
			}
		case 2:
			{
				if (!bpv__UseLineOfSight__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 3:
			{
				bpv__FogType__pf = bpp__FogType__pf;
			}
		case 4:
			{
				bpv__DrawFOW__pf = bpp__DrawFog__pf;
			}
		case 5:
			{
				if (!bpv__DrawFOW__pf)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 6:
			{
				bpf__ConfigureFog__pf();
				__CurrentState = -1;
				break;
			}
		case 7:
			{
				bpf__ShowAll__pf();
				__CurrentState = 3;
				break;
			}
		case 8:
			{
				if(IsValid(bpv__ShadowMesh__pf))
				{
					bpv__ShadowMesh__pf->UCustomMeshComponent::ClearCustomMeshTriangles();
				}
				__CurrentState = 6;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AFogDrawingActor_C__pf1242490746::bpf__Modify_VisionRange__pf(float bpp__VisionRange__pf)
{
	bpv__VisionRange__pf = bpp__VisionRange__pf;
}
void AFogDrawingActor_C__pf1242490746::bpf__Modify_VisionCircle__pf(bool bpp__UseCircle__pf, float bpp__Radius__pf)
{
	bpv__VisionCircle__pf = bpp__UseCircle__pf;
	bpv__CircleRadius__pf = bpp__Radius__pf;
	bpf__ConfigureFog__pf();
}
void AFogDrawingActor_C__pf1242490746::bpf__Modify_VisionCone__pf(bool bpp__UseVisionCone__pf, float bpp__ConeSize__pf)
{
	bpv__UseConeOfVision__pf = bpp__UseVisionCone__pf;
	bpv__ConeSize__pf = bpp__ConeSize__pf;
}
void AFogDrawingActor_C__pf1242490746::bpf__ConfigureFog__pf()
{
	bool bpfv__K2Node_SwitchEnum_CmpSuccess__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue2__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__FogType__pf), static_cast<uint8>(E__FogType__pf::NewEnumerator0));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 2;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__FogType__pf), static_cast<uint8>(E__FogType__pf::NewEnumerator1));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 13;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 2:
			{
				if(IsValid(bpv__ShadowMesh__pf))
				{
					bpv__ShadowMesh__pf->UPrimitiveComponent::SetRenderCustomDepth(false);
				}
			}
		case 3:
			{
				if(IsValid(bpv__ShadowMesh__pf))
				{
					bpv__ShadowMesh__pf->UPrimitiveComponent::SetRenderInMainPass(true);
				}
			}
		case 4:
			{
				if(IsValid(bpv__ShadowMesh__pf))
				{
					bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf = bpv__ShadowMesh__pf->CreateDynamicMaterialInstance(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AFogDrawingActor_C__pf1242490746::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
				}
			}
		case 5:
			{
				AActor::FlushNetDormancy();
			}
		case 6:
			{
				bpv__ShadowMaterial__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf;
			}
		case 7:
			{
				if(IsValid(bpv__ShadowMesh__pf))
				{
					bpv__ShadowMesh__pf->SetMaterial(0, bpv__ShadowMaterial__pf);
				}
			}
		case 8:
			{
				if (!bpv__VisionCircle__pf)
				{
					__CurrentState = 12;
					break;
				}
			}
		case 9:
			{
				if(IsValid(bpv__ShadowMaterial__pf))
				{
					bpv__ShadowMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("CircleRadius")), bpv__CircleRadius__pf);
				}
			}
		case 10:
			{
				if(IsValid(bpv__ShadowMaterial__pf))
				{
					bpv__ShadowMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("UseCircle")), 1.000000);
				}
			}
		case 11:
			{
				__CurrentState = -1;
				break;
			}
		case 12:
			{
				if(IsValid(bpv__ShadowMaterial__pf))
				{
					bpv__ShadowMaterial__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("UseCircle")), 0.000000);
				}
				__CurrentState = 11;
				break;
			}
		case 13:
			{
				if(IsValid(bpv__ShadowMesh__pf))
				{
					bpv__ShadowMesh__pf->UPrimitiveComponent::SetRenderCustomDepth(true);
				}
			}
		case 14:
			{
				if(IsValid(bpv__ShadowMesh__pf))
				{
					bpv__ShadowMesh__pf->UPrimitiveComponent::SetRenderInMainPass(false);
				}
			}
		case 15:
			{
				if(IsValid(bpv__ShadowMesh__pf))
				{
					bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue2__pf = bpv__ShadowMesh__pf->CreateDynamicMaterialInstance(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AFogDrawingActor_C__pf1242490746::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
				}
			}
		case 16:
			{
				AActor::FlushNetDormancy();
			}
		case 17:
			{
				bpv__ShadowMaterial__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue2__pf;
			}
		case 18:
			{
				if(IsValid(bpv__ShadowMesh__pf))
				{
					bpv__ShadowMesh__pf->SetMaterial(0, bpv__ShadowMaterial__pf);
				}
				__CurrentState = 8;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AFogDrawingActor_C__pf1242490746::bpf__ShowAll__pf()
{
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	UFOWComponent_C__pf1242490746* bpfv__CallFunc_Array_Get_Item__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	AActor* bpfv__CallFunc_GetOwner_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 2:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 3:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__ActorsVisibleInFOW__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 4:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 5:
			{
				__StateStack.Push(7);
			}
		case 6:
			{
				FCustomThunkTemplates::Array_Get(bpv__ActorsVisibleInFOW__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_GetOwner_ReturnValue__pf = bpfv__CallFunc_Array_Get_Item__pf->UActorComponent::GetOwner();
				}
				if(IsValid(bpfv__CallFunc_GetOwner_ReturnValue__pf))
				{
					bpfv__CallFunc_GetOwner_ReturnValue__pf->SetActorHiddenInGame(false);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 7:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 3;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void AFogDrawingActor_C__pf1242490746::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{197, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/FogOfWar/Materials/M_FogPostProcess.M_FogPostProcess 
		{198, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/FogOfWar/Materials/M_Fog_Gray.M_Fog_Gray 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
void AFogDrawingActor_C__pf1242490746::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SceneComponent 
		{199, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/CustomMeshComponent.CustomMeshComponent 
		{200, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.BillboardComponent 
		{201, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Engine/EditorResources/S_Actor.S_Actor 
		{202, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.PostProcessComponent 
		{10, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{53, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PhysicalMaterial 
		{13, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Controller 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{148, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{79, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{51, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ActorComponent 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{203, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EDrawDebugTrace 
		{204, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/CustomMeshComponent.CustomMeshTriangle 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/FogOfWar/Blueprints/FOWComponent.FOWComponent_C 
		{205, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/FogOfWar/Blueprints/FogType.FogType 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
struct FRegisterHelper__AFogDrawingActor_C__pf1242490746
{
	FRegisterHelper__AFogDrawingActor_C__pf1242490746()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/FogOfWar/Blueprints/FogDrawingActor"), &AFogDrawingActor_C__pf1242490746::__StaticDependenciesAssets);
	}
	static FRegisterHelper__AFogDrawingActor_C__pf1242490746 Instance;
};
FRegisterHelper__AFogDrawingActor_C__pf1242490746 FRegisterHelper__AFogDrawingActor_C__pf1242490746::Instance;
void AFogDrawingActor_C__pf1242490746::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME_DIFFNAMES(AFogDrawingActor_C__pf1242490746, bpv__Facing__pf, FName(TEXT("Facing")));
	DOREPLIFETIME_DIFFNAMES(AFogDrawingActor_C__pf1242490746, bpv__ShadowMaterial__pf, FName(TEXT("ShadowMaterial")));
	DOREPLIFETIME_DIFFNAMES(AFogDrawingActor_C__pf1242490746, bpv__MyController__pf, FName(TEXT("MyController")));
	DOREPLIFETIME_DIFFNAMES(AFogDrawingActor_C__pf1242490746, bpv__FogCastingObjects__pf, FName(TEXT("FogCastingObjects")));
	DOREPLIFETIME_DIFFNAMES(AFogDrawingActor_C__pf1242490746, bpv__ActorsCastingFOW__pf, FName(TEXT("ActorsCastingFOW")));
	DOREPLIFETIME_DIFFNAMES(AFogDrawingActor_C__pf1242490746, bpv__ActorsVisibleInFOW__pf, FName(TEXT("ActorsVisibleInFOW")));
	DOREPLIFETIME_DIFFNAMES(AFogDrawingActor_C__pf1242490746, bpv__DiscoveredActors__pf, FName(TEXT("DiscoveredActors")));
	DOREPLIFETIME_DIFFNAMES(AFogDrawingActor_C__pf1242490746, bpv__DebugMode__pf, FName(TEXT("DebugMode")));
}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
