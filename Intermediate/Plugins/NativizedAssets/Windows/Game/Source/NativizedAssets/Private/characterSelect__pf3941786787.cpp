#include "NativizedAssets.h"
#include "characterSelect__pf3941786787.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/Border.h"
#include "Runtime/UMG/Public/Components/BorderSlot.h"
#include "Runtime/UMG/Public/Components/VerticalBox.h"
#include "Runtime/UMG/Public/Components/VerticalBoxSlot.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/UMG/Public/Components/UniformGridPanel.h"
#include "Runtime/UMG/Public/Components/UniformGridSlot.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/UMG/Public/Components/ButtonSlot.h"
#include "Runtime/UMG/Public/Components/HorizontalBox.h"
#include "Runtime/UMG/Public/Components/HorizontalBoxSlot.h"
#include "Runtime/UMG/Public/Components/Spacer.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsSettingsEnums.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/Engine/Classes/Vehicles/TireType.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
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
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationData.h"
#include "Runtime/Engine/Classes/AI/Navigation/RecastNavMesh.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
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
#include "Runtime/Engine/Classes/AI/Navigation/NavAreas/NavArea.h"
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
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetupEnums.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
#include "Runtime/Engine/Classes/Engine/InterpCurveEdSetup.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
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
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
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
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreas/NavArea_Obstacle.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
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
#include "Runtime/Engine/Classes/Particles/ParticleSystemReplay.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
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
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
#include "Runtime/Engine/Classes/Engine/WorldComposition.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
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
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/Engine/AssetManager.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "gameInfoInstance__pf533497531.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"
#include "lobbyPlayerController__pf2687806415.h"
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
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
UcharacterSelect_C__pf3941786787::UcharacterSelect_C__pf3941786787(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (UcharacterSelect_C__pf3941786787::StaticClass() == GetClass()))
	{
		UcharacterSelect_C__pf3941786787::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__backButton__pf = nullptr;
	bpv__barbarous__pf = nullptr;
	bpv__emptyButton__pf = nullptr;
	bpv__forge__pf = nullptr;
	bpv__frosty__pf = nullptr;
	bpv__gameInstanceREF__pf = nullptr;
	bpv__charButtons__pf = TArray<UButton*> ();
	bpv__charSelectID__pf = 0;
	bpv__charImages__pf = TArray<UTexture2D*> ();
	bpv__charImages__pf.Reserve(4);
	bpv__charImages__pf.Add(CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UcharacterSelect_C__pf3941786787::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed));
	bpv__charImages__pf.Add(CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UcharacterSelect_C__pf3941786787::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
	bpv__charImages__pf.Add(CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UcharacterSelect_C__pf3941786787::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed));
	bpv__charImages__pf.Add(CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UcharacterSelect_C__pf3941786787::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed));
	bCanEverTick = false;
	bCanEverPaint = false;
}
void UcharacterSelect_C__pf3941786787::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
void UcharacterSelect_C__pf3941786787::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(UgameInfoInstance_C__pf533497531::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AlobbyPlayerController_C__pf2687806415::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_3"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__0);
	auto __Local__1 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	__Local__0->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__0->ComponentDelegateBindings.AddUninitialized(5);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 5);
	auto& __Local__2 = __Local__0->ComponentDelegateBindings[0];
	__Local__2.ComponentPropertyName = FName(TEXT("backButton"));
	__Local__2.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__2.FunctionNameToBind = FName(TEXT("BndEvt__backButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__3 = __Local__0->ComponentDelegateBindings[1];
	__Local__3.ComponentPropertyName = FName(TEXT("frosty"));
	__Local__3.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__3.FunctionNameToBind = FName(TEXT("BndEvt__frosty_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__4 = __Local__0->ComponentDelegateBindings[2];
	__Local__4.ComponentPropertyName = FName(TEXT("forge"));
	__Local__4.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__4.FunctionNameToBind = FName(TEXT("BndEvt__forge_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__5 = __Local__0->ComponentDelegateBindings[3];
	__Local__5.ComponentPropertyName = FName(TEXT("barbarous"));
	__Local__5.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__5.FunctionNameToBind = FName(TEXT("BndEvt__barbarous_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__6 = __Local__0->ComponentDelegateBindings[4];
	__Local__6.ComponentPropertyName = FName(TEXT("emptyButton"));
	__Local__6.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__6.FunctionNameToBind = FName(TEXT("BndEvt__emptyButton_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature"));
	auto __Local__7 = NewObject<UBorder>(__Local__1, UBorder::StaticClass(), TEXT("Border_82"));
	__Local__7->BrushColor = FLinearColor(0.000000, 0.000000, 0.000000, 0.500000);
	auto& __Local__8 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__7), UPanelWidget::__PPO__Slots() )));
	__Local__8 = TArray<UPanelSlot*> ();
	__Local__8.Reserve(1);
	auto __Local__9 = NewObject<UBorderSlot>(__Local__7, UBorderSlot::StaticClass(), TEXT("BorderSlot_0"));
	__Local__9->Parent = __Local__7;
	auto __Local__10 = NewObject<UVerticalBox>(__Local__1, UVerticalBox::StaticClass(), TEXT("VerticalBox_0"));
	auto& __Local__11 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__10), UPanelWidget::__PPO__Slots() )));
	__Local__11 = TArray<UPanelSlot*> ();
	__Local__11.Reserve(4);
	auto __Local__12 = NewObject<UVerticalBoxSlot>(__Local__10, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_0"));
	__Local__12->Parent = __Local__10;
	auto __Local__13 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_0"));
	__Local__13->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Select Character"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("8A0A8AA349339CCFBC4BC0AE992C9705") /* Key */
	);
	__Local__13->Font.Size = 64;
	auto& __Local__14 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__13), UTextLayoutWidget::__PPO__Justification() )));
	__Local__14 = ETextJustify::Type::Center;
	__Local__13->Slot = __Local__12;
	__Local__12->Content = __Local__13;
	__Local__11.Add(__Local__12);
	auto __Local__15 = NewObject<UVerticalBoxSlot>(__Local__10, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_2"));
	__Local__15->Padding.Left = 10.000000f;
	__Local__15->Padding.Top = 10.000000f;
	__Local__15->Padding.Right = 10.000000f;
	__Local__15->Padding.Bottom = 10.000000f;
	__Local__15->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__15->Parent = __Local__10;
	auto __Local__16 = NewObject<UUniformGridPanel>(__Local__1, UUniformGridPanel::StaticClass(), TEXT("UniformGridPanel_0"));
	__Local__16->SlotPadding.Top = 100.000000f;
	__Local__16->SlotPadding.Bottom = 100.000000f;
	auto& __Local__17 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__16), UPanelWidget::__PPO__Slots() )));
	__Local__17 = TArray<UPanelSlot*> ();
	__Local__17.Reserve(3);
	auto __Local__18 = NewObject<UUniformGridSlot>(__Local__16, UUniformGridSlot::StaticClass(), TEXT("UniformGridSlot_0"));
	__Local__18->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__18->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
	__Local__18->Parent = __Local__16;
	auto __Local__19 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("barbarous"));
	__Local__19->WidgetStyle.Normal.ImageSize = FVector2D(400.000000, 400.000000);
	auto& __Local__20 = (*(AccessPrivateProperty<UObject* >(&(__Local__19->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__20 = CastChecked<UObject>(CastChecked<UDynamicClass>(UcharacterSelect_C__pf3941786787::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__19->WidgetStyle.Hovered.ImageSize = FVector2D(400.000000, 400.000000);
	auto& __Local__21 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__19->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__21 = FLinearColor(1.000000, 0.908769, 0.324843, 1.000000);
	auto& __Local__22 = (*(AccessPrivateProperty<UObject* >(&(__Local__19->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__22 = CastChecked<UObject>(CastChecked<UDynamicClass>(UcharacterSelect_C__pf3941786787::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	auto& __Local__23 = (*(AccessPrivateProperty<FName >(&(__Local__19->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceName() )));
	__Local__23 = FName(TEXT("../../../Engine/Content/Slate/Common/Button.png"));
	__Local__19->WidgetStyle.Pressed.ImageSize = FVector2D(400.000000, 400.000000);
	auto& __Local__24 = (*(AccessPrivateProperty<UObject* >(&(__Local__19->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__24 = CastChecked<UObject>(CastChecked<UDynamicClass>(UcharacterSelect_C__pf3941786787::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	auto& __Local__25 = (*(AccessPrivateProperty<FName >(&(__Local__19->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceName() )));
	__Local__25 = FName(TEXT("../../../Engine/Content/Slate/Common/Button.png"));
	__Local__19->WidgetStyle.NormalPadding.Left = 1.000000f;
	__Local__19->WidgetStyle.NormalPadding.Top = 1.000000f;
	__Local__19->WidgetStyle.NormalPadding.Right = 1.000000f;
	__Local__19->WidgetStyle.NormalPadding.Bottom = 1.000000f;
	auto& __Local__26 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__19), UPanelWidget::__PPO__Slots() )));
	__Local__26 = TArray<UPanelSlot*> ();
	__Local__26.Reserve(1);
	auto __Local__27 = NewObject<UButtonSlot>(__Local__19, UButtonSlot::StaticClass(), TEXT("ButtonSlot_1"));
	__Local__27->VerticalAlignment = EVerticalAlignment::VAlign_Bottom;
	__Local__27->Parent = __Local__19;
	auto __Local__28 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_2"));
	__Local__28->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Barbarous"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("4F14C4714D7518F35FA719BF2A523934") /* Key */
	);
	__Local__28->Slot = __Local__27;
	__Local__27->Content = __Local__28;
	__Local__26.Add(__Local__27);
	__Local__19->Slot = __Local__18;
	__Local__18->Content = __Local__19;
	__Local__17.Add(__Local__18);
	auto __Local__29 = NewObject<UUniformGridSlot>(__Local__16, UUniformGridSlot::StaticClass(), TEXT("UniformGridSlot_2"));
	__Local__29->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__29->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
	__Local__29->Column = 1;
	__Local__29->Parent = __Local__16;
	auto __Local__30 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("frosty"));
	__Local__30->WidgetStyle.Normal.ImageSize = FVector2D(400.000000, 501.000000);
	auto& __Local__31 = (*(AccessPrivateProperty<UObject* >(&(__Local__30->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__31 = CastChecked<UObject>(CastChecked<UDynamicClass>(UcharacterSelect_C__pf3941786787::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__30->WidgetStyle.Hovered.ImageSize = FVector2D(400.000000, 501.000000);
	auto& __Local__32 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__30->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__32 = FLinearColor(1.000000, 0.908769, 0.324843, 1.000000);
	auto& __Local__33 = (*(AccessPrivateProperty<UObject* >(&(__Local__30->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__33 = CastChecked<UObject>(CastChecked<UDynamicClass>(UcharacterSelect_C__pf3941786787::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	auto& __Local__34 = (*(AccessPrivateProperty<FName >(&(__Local__30->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceName() )));
	__Local__34 = FName(TEXT("../../../Engine/Content/Slate/Common/Button.png"));
	__Local__30->WidgetStyle.Pressed.ImageSize = FVector2D(400.000000, 501.000000);
	auto& __Local__35 = (*(AccessPrivateProperty<UObject* >(&(__Local__30->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__35 = CastChecked<UObject>(CastChecked<UDynamicClass>(UcharacterSelect_C__pf3941786787::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	auto& __Local__36 = (*(AccessPrivateProperty<FName >(&(__Local__30->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceName() )));
	__Local__36 = FName(TEXT("../../../Engine/Content/Slate/Common/Button.png"));
	auto& __Local__37 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__30), UPanelWidget::__PPO__Slots() )));
	__Local__37 = TArray<UPanelSlot*> ();
	__Local__37.Reserve(1);
	auto __Local__38 = NewObject<UButtonSlot>(__Local__30, UButtonSlot::StaticClass(), TEXT("ButtonSlot_1"));
	__Local__38->VerticalAlignment = EVerticalAlignment::VAlign_Bottom;
	__Local__38->Parent = __Local__30;
	auto __Local__39 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_4"));
	__Local__39->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Frosty"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("64C7683B4393C504533192ABAF849928") /* Key */
	);
	__Local__39->Slot = __Local__38;
	__Local__38->Content = __Local__39;
	__Local__37.Add(__Local__38);
	__Local__30->Slot = __Local__29;
	__Local__29->Content = __Local__30;
	__Local__17.Add(__Local__29);
	auto __Local__40 = NewObject<UUniformGridSlot>(__Local__16, UUniformGridSlot::StaticClass(), TEXT("UniformGridSlot_3"));
	__Local__40->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__40->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
	__Local__40->Column = 2;
	__Local__40->Parent = __Local__16;
	auto __Local__41 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("forge"));
	__Local__41->WidgetStyle.Normal.ImageSize = FVector2D(400.000000, 501.000000);
	auto& __Local__42 = (*(AccessPrivateProperty<UObject* >(&(__Local__41->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__42 = CastChecked<UObject>(CastChecked<UDynamicClass>(UcharacterSelect_C__pf3941786787::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__41->WidgetStyle.Hovered.ImageSize = FVector2D(400.000000, 501.000000);
	auto& __Local__43 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__41->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__43 = FLinearColor(1.000000, 0.908769, 0.324843, 1.000000);
	auto& __Local__44 = (*(AccessPrivateProperty<UObject* >(&(__Local__41->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__44 = CastChecked<UObject>(CastChecked<UDynamicClass>(UcharacterSelect_C__pf3941786787::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	auto& __Local__45 = (*(AccessPrivateProperty<FName >(&(__Local__41->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceName() )));
	__Local__45 = FName(TEXT("../../../Engine/Content/Slate/Common/Button.png"));
	__Local__41->WidgetStyle.Pressed.ImageSize = FVector2D(400.000000, 501.000000);
	auto& __Local__46 = (*(AccessPrivateProperty<UObject* >(&(__Local__41->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__46 = CastChecked<UObject>(CastChecked<UDynamicClass>(UcharacterSelect_C__pf3941786787::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	auto& __Local__47 = (*(AccessPrivateProperty<FName >(&(__Local__41->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceName() )));
	__Local__47 = FName(TEXT("../../../Engine/Content/Slate/Common/Button.png"));
	auto& __Local__48 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__41), UPanelWidget::__PPO__Slots() )));
	__Local__48 = TArray<UPanelSlot*> ();
	__Local__48.Reserve(1);
	auto __Local__49 = NewObject<UButtonSlot>(__Local__41, UButtonSlot::StaticClass(), TEXT("ButtonSlot_1"));
	__Local__49->VerticalAlignment = EVerticalAlignment::VAlign_Bottom;
	__Local__49->Parent = __Local__41;
	auto __Local__50 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_5"));
	__Local__50->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Forge"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("D09A481E41D2AB560FEE89A2B5A6D06A") /* Key */
	);
	__Local__50->Slot = __Local__49;
	__Local__49->Content = __Local__50;
	__Local__48.Add(__Local__49);
	__Local__41->Slot = __Local__40;
	__Local__40->Content = __Local__41;
	__Local__17.Add(__Local__40);
	__Local__16->Slot = __Local__15;
	__Local__15->Content = __Local__16;
	__Local__11.Add(__Local__15);
	auto __Local__51 = NewObject<UVerticalBoxSlot>(__Local__10, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_7"));
	__Local__51->Parent = __Local__10;
	auto __Local__52 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("emptyButton"));
	auto& __Local__53 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__52), UPanelWidget::__PPO__Slots() )));
	__Local__53 = TArray<UPanelSlot*> ();
	__Local__53.Reserve(1);
	auto __Local__54 = NewObject<UButtonSlot>(__Local__52, UButtonSlot::StaticClass(), TEXT("ButtonSlot_2"));
	__Local__54->Parent = __Local__52;
	auto __Local__55 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_3"));
	__Local__55->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("None"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("8FD5F248430C671F698F52936A347B04") /* Key */
	);
	__Local__55->Slot = __Local__54;
	__Local__54->Content = __Local__55;
	__Local__53.Add(__Local__54);
	__Local__52->Slot = __Local__51;
	__Local__51->Content = __Local__52;
	__Local__11.Add(__Local__51);
	auto __Local__56 = NewObject<UVerticalBoxSlot>(__Local__10, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_16"));
	__Local__56->Parent = __Local__10;
	auto __Local__57 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("HorizontalBox_2"));
	auto& __Local__58 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__57), UPanelWidget::__PPO__Slots() )));
	__Local__58 = TArray<UPanelSlot*> ();
	__Local__58.Reserve(2);
	auto __Local__59 = NewObject<UHorizontalBoxSlot>(__Local__57, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_0"));
	__Local__59->Parent = __Local__57;
	auto __Local__60 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("backButton"));
	auto& __Local__61 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__60->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__61 = FLinearColor(1.000000, 0.544528, 0.118760, 1.000000);
	auto& __Local__62 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__60), UPanelWidget::__PPO__Slots() )));
	__Local__62 = TArray<UPanelSlot*> ();
	__Local__62.Reserve(1);
	auto __Local__63 = NewObject<UButtonSlot>(__Local__60, UButtonSlot::StaticClass(), TEXT("ButtonSlot_0"));
	__Local__63->Parent = __Local__60;
	auto __Local__64 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_86"));
	__Local__64->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Back"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("DE91D0A348242985F92041AF3DF34CA8") /* Key */
	);
	__Local__64->Slot = __Local__63;
	__Local__63->Content = __Local__64;
	__Local__62.Add(__Local__63);
	__Local__60->Slot = __Local__59;
	__Local__59->Content = __Local__60;
	__Local__58.Add(__Local__59);
	auto __Local__65 = NewObject<UHorizontalBoxSlot>(__Local__57, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_3"));
	__Local__65->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__65->Parent = __Local__57;
	auto __Local__66 = NewObject<USpacer>(__Local__1, USpacer::StaticClass(), TEXT("Spacer_0"));
	__Local__66->Slot = __Local__65;
	__Local__65->Content = __Local__66;
	__Local__58.Add(__Local__65);
	__Local__57->Slot = __Local__56;
	__Local__56->Content = __Local__57;
	__Local__11.Add(__Local__56);
	__Local__10->Slot = __Local__9;
	__Local__9->Content = __Local__10;
	__Local__8.Add(__Local__9);
	__Local__1->RootWidget = __Local__7;
}
void UcharacterSelect_C__pf3941786787::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__67;
	SlotNames.Append(__Local__67);
}
void UcharacterSelect_C__pf3941786787::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__68;
	TArray<FDelegateRuntimeBinding>  __Local__69;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), false, CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UcharacterSelect_C__pf3941786787::StaticClass())->MiscConvertedSubobjects[0]), __Local__68, __Local__69);
}
void UcharacterSelect_C__pf3941786787::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UcharacterSelect_C__pf3941786787::bpf__ExecuteUbergraph_characterSelect__pf_0(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 5:
			{
				__CurrentState = 6;
				break;
			}
		case 6:
			{
				bpv__charSelectID__pf = 0;
			}
		case 7:
			{
				bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf = UUserWidget::GetOwningPlayer();
				b0l__K2Node_DynamicCast_AsLobby_Player_Controller__pf = Cast<AlobbyPlayerController_C__pf2687806415>(bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess2__pf = (b0l__K2Node_DynamicCast_AsLobby_Player_Controller__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess2__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 8:
			{
				FCustomThunkTemplates::Array_Get(bpv__charImages__pf, bpv__charSelectID__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				if(IsValid(b0l__K2Node_DynamicCast_AsLobby_Player_Controller__pf))
				{
					b0l__K2Node_DynamicCast_AsLobby_Player_Controller__pf->bpf__assignSelecteddCharacter__pf(bpv__charSelectID__pf, b0l__CallFunc_Array_Get_Item__pf);
				}
			}
		case 9:
			{
				SetVisibility(ESlateVisibility::Hidden);
				__CurrentState = -1;
				break;
			}
		case 10:
			{
				__CurrentState = 11;
				break;
			}
		case 11:
			{
				bpv__charSelectID__pf = 1;
				__CurrentState = 7;
				break;
			}
		case 12:
			{
				__CurrentState = 13;
				break;
			}
		case 13:
			{
				bpv__charSelectID__pf = 3;
				__CurrentState = 7;
				break;
			}
		case 14:
			{
				__CurrentState = 15;
				break;
			}
		case 15:
			{
				bpv__charSelectID__pf = 2;
				__CurrentState = 7;
				break;
			}
		case 16:
			{
				__CurrentState = 9;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UcharacterSelect_C__pf3941786787::bpf__ExecuteUbergraph_characterSelect__pf_1(int32 bpp__EntryPoint__pf)
{
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 4);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetGameInstance_ReturnValue__pf = UGameplayStatics::GetGameInstance(this);
	b0l__K2Node_DynamicCast_AsGame_Info_Instance__pf = Cast<UgameInfoInstance_C__pf533497531>(bpfv__CallFunc_GetGameInstance_ReturnValue__pf);
	b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsGame_Info_Instance__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	bpv__gameInstanceREF__pf = b0l__K2Node_DynamicCast_AsGame_Info_Instance__pf;
	b0l__K2Node_MakeArray_Array__pf.SetNum(4, true);
	b0l__K2Node_MakeArray_Array__pf[0] = bpv__emptyButton__pf;
	b0l__K2Node_MakeArray_Array__pf[1] = bpv__barbarous__pf;
	b0l__K2Node_MakeArray_Array__pf[2] = bpv__frosty__pf;
	b0l__K2Node_MakeArray_Array__pf[3] = bpv__forge__pf;
	bpv__charButtons__pf = b0l__K2Node_MakeArray_Array__pf;
	return; // KCST_GotoReturn
}
void UcharacterSelect_C__pf3941786787::bpf__BndEvt__backButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_characterSelect__pf_0(16);
}
void UcharacterSelect_C__pf3941786787::bpf__BndEvt__frosty_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_characterSelect__pf_0(14);
}
void UcharacterSelect_C__pf3941786787::bpf__BndEvt__forge_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_characterSelect__pf_0(12);
}
void UcharacterSelect_C__pf3941786787::bpf__BndEvt__barbarous_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_characterSelect__pf_0(10);
}
void UcharacterSelect_C__pf3941786787::bpf__BndEvt__emptyButton_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_characterSelect__pf_0(5);
}
void UcharacterSelect_C__pf3941786787::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_characterSelect__pf_1(4);
}
void UcharacterSelect_C__pf3941786787::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{118, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Mannequin/Character/Textures/UE4_LOGO_CARD.UE4_LOGO_CARD 
		{119, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Textures/barbarous.barbarous 
		{120, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Textures/frosty.frosty 
		{121, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Textures/forge.forge 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
void UcharacterSelect_C__pf3941786787::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{77, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{10, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameInstance 
		{82, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Button 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{0, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Texture2D 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{42, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{79, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/allLevels/gameInfoInstance.gameInfoInstance_C 
		{113, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/lobby/lobbyPlayerController.lobbyPlayerController_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
struct FRegisterHelper__UcharacterSelect_C__pf3941786787
{
	FRegisterHelper__UcharacterSelect_C__pf3941786787()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/UI/Lobby/characterSelect"), &UcharacterSelect_C__pf3941786787::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UcharacterSelect_C__pf3941786787 Instance;
};
FRegisterHelper__UcharacterSelect_C__pf3941786787 FRegisterHelper__UcharacterSelect_C__pf3941786787::Instance;
void UcharacterSelect_C__pf3941786787::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME_DIFFNAMES(UcharacterSelect_C__pf3941786787, bpv__charSelectID__pf, FName(TEXT("charSelectID")));
	DOREPLIFETIME_DIFFNAMES(UcharacterSelect_C__pf3941786787, bpv__charImages__pf, FName(TEXT("charImages")));
}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
