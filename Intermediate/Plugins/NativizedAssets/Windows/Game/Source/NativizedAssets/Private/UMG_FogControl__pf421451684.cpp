#include "NativizedAssets.h"
#include "UMG_FogControl__pf421451684.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/UniformGridPanel.h"
#include "Runtime/UMG/Public/Components/UniformGridSlot.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/UMG/Public/Components/CheckBox.h"
#include "Runtime/UMG/Public/Components/Slider.h"
#include "Runtime/UMG/Public/Components/ComboBoxString.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "FogDrawingActor__pf1242490746.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/Sound/SoundBase.h"
#include "Runtime/Engine/Classes/Sound/SoundClass.h"
#include "Runtime/Engine/Classes/Sound/SoundMix.h"
#include "Runtime/Engine/Classes/Sound/SoundConcurrency.h"
#include "Runtime/Engine/Classes/Sound/SoundAttenuation.h"
#include "Runtime/Engine/Classes/Engine/Attenuation.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/Engine/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectPreset.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "Runtime/Engine/Classes/Engine/CurveTable.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
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
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
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
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "FOWComponent__pf1242490746.h"
#include "CustomMeshComponent.h"
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "Runtime/Engine/Classes/Components/PostProcessComponent.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_PostProcessVolume.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
UUMG_FogControl_C__pf421451684::UUMG_FogControl_C__pf421451684(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (UUMG_FogControl_C__pf421451684::StaticClass() == GetClass()))
	{
		UUMG_FogControl_C__pf421451684::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__ConeOfVisionCheck__pf = nullptr;
	bpv__DrawFogCheck__pf = nullptr;
	bpv__FogTypeSelect__pf = nullptr;
	bpv__LineOfSightCheck__pf = nullptr;
	bpv__RadiusSlider__pf = nullptr;
	bpv__RangeSlider__pf = nullptr;
	bpv__SizeSlider__pf = nullptr;
	bpv__VisionCircleCheck__pf = nullptr;
	bpv__FogDrawingActor__pf = nullptr;
	bpv__ModType__pf = 0;
	bCanEverTick = false;
	bCanEverPaint = false;
}
void UUMG_FogControl_C__pf421451684::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
void UUMG_FogControl_C__pf421451684::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	InDynamicClass->ReferencedConvertedFields.Add(AFogDrawingActor_C__pf1242490746::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_3"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__0);
	auto __Local__1 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	__Local__0->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__0->ComponentDelegateBindings.AddUninitialized(8);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 8);
	auto& __Local__2 = __Local__0->ComponentDelegateBindings[0];
	__Local__2.ComponentPropertyName = FName(TEXT("LineOfSightCheck"));
	__Local__2.DelegatePropertyName = FName(TEXT("OnCheckStateChanged"));
	__Local__2.FunctionNameToBind = FName(TEXT("BndEvt__LineOfSightCheck_K2Node_ComponentBoundEvent_160_OnCheckBoxComponentStateChanged__DelegateSignature"));
	auto& __Local__3 = __Local__0->ComponentDelegateBindings[1];
	__Local__3.ComponentPropertyName = FName(TEXT("FogTypeSelect"));
	__Local__3.DelegatePropertyName = FName(TEXT("OnSelectionChanged"));
	__Local__3.FunctionNameToBind = FName(TEXT("BndEvt__FogTypeSelect_K2Node_ComponentBoundEvent_151_OnSelectionChangedEvent__DelegateSignature"));
	auto& __Local__4 = __Local__0->ComponentDelegateBindings[2];
	__Local__4.ComponentPropertyName = FName(TEXT("SizeSlider"));
	__Local__4.DelegatePropertyName = FName(TEXT("OnValueChanged"));
	__Local__4.FunctionNameToBind = FName(TEXT("BndEvt__SizeSlider_K2Node_ComponentBoundEvent_131_OnFloatValueChangedEvent__DelegateSignature"));
	auto& __Local__5 = __Local__0->ComponentDelegateBindings[3];
	__Local__5.ComponentPropertyName = FName(TEXT("ConeOfVisionCheck"));
	__Local__5.DelegatePropertyName = FName(TEXT("OnCheckStateChanged"));
	__Local__5.FunctionNameToBind = FName(TEXT("BndEvt__ConeOfVisionCheck_K2Node_ComponentBoundEvent_124_OnCheckBoxComponentStateChanged__DelegateSignature"));
	auto& __Local__6 = __Local__0->ComponentDelegateBindings[4];
	__Local__6.ComponentPropertyName = FName(TEXT("RadiusSlider"));
	__Local__6.DelegatePropertyName = FName(TEXT("OnValueChanged"));
	__Local__6.FunctionNameToBind = FName(TEXT("BndEvt__RadiusSlider_K2Node_ComponentBoundEvent_118_OnFloatValueChangedEvent__DelegateSignature"));
	auto& __Local__7 = __Local__0->ComponentDelegateBindings[5];
	__Local__7.ComponentPropertyName = FName(TEXT("VisionCircleCheck"));
	__Local__7.DelegatePropertyName = FName(TEXT("OnCheckStateChanged"));
	__Local__7.FunctionNameToBind = FName(TEXT("BndEvt__VisionCircleCheck_K2Node_ComponentBoundEvent_113_OnCheckBoxComponentStateChanged__DelegateSignature"));
	auto& __Local__8 = __Local__0->ComponentDelegateBindings[6];
	__Local__8.ComponentPropertyName = FName(TEXT("RangeSlider"));
	__Local__8.DelegatePropertyName = FName(TEXT("OnValueChanged"));
	__Local__8.FunctionNameToBind = FName(TEXT("BndEvt__RangeSlider_K2Node_ComponentBoundEvent_109_OnFloatValueChangedEvent__DelegateSignature"));
	auto& __Local__9 = __Local__0->ComponentDelegateBindings[7];
	__Local__9.ComponentPropertyName = FName(TEXT("DrawFogCheck"));
	__Local__9.DelegatePropertyName = FName(TEXT("OnCheckStateChanged"));
	__Local__9.FunctionNameToBind = FName(TEXT("BndEvt__DrawFogCheck_K2Node_ComponentBoundEvent_106_OnCheckBoxComponentStateChanged__DelegateSignature"));
	auto __Local__10 = NewObject<UCanvasPanel>(__Local__1, UCanvasPanel::StaticClass(), TEXT("FogControlCanvasPanel"));
	auto& __Local__11 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__10), UPanelWidget::__PPO__Slots() )));
	__Local__11 = TArray<UPanelSlot*> ();
	__Local__11.Reserve(2);
	auto __Local__12 = NewObject<UCanvasPanelSlot>(__Local__10, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_152"));
	__Local__12->LayoutData.Offsets.Left = 10.000000f;
	__Local__12->LayoutData.Offsets.Top = -150.000000f;
	__Local__12->LayoutData.Offsets.Right = 440.040039f;
	__Local__12->LayoutData.Offsets.Bottom = 349.249237f;
	__Local__12->LayoutData.Anchors.Minimum = FVector2D(0.000000, 0.500000);
	__Local__12->LayoutData.Anchors.Maximum = FVector2D(0.000000, 0.500000);
	__Local__12->Parent = __Local__10;
	auto __Local__13 = NewObject<UUniformGridPanel>(__Local__1, UUniformGridPanel::StaticClass(), TEXT("UniformGridPanel_56"));
	auto& __Local__14 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__13), UPanelWidget::__PPO__Slots() )));
	__Local__14 = TArray<UPanelSlot*> ();
	__Local__14.Reserve(16);
	auto __Local__15 = NewObject<UUniformGridSlot>(__Local__13, UUniformGridSlot::StaticClass(), TEXT("UniformGridSlot_23"));
	__Local__15->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__15->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__15->Parent = __Local__13;
	auto __Local__16 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_28"));
	__Local__16->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Draw Fog"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("1A0365E84AB41D202036E5AB4FDC49B6") /* Key */
	);
	__Local__16->Slot = __Local__15;
	__Local__15->Content = __Local__16;
	__Local__14.Add(__Local__15);
	auto __Local__17 = NewObject<UUniformGridSlot>(__Local__13, UUniformGridSlot::StaticClass(), TEXT("UniformGridSlot_138"));
	__Local__17->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__17->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
	__Local__17->Row = 4;
	__Local__17->Column = 1;
	__Local__17->Parent = __Local__13;
	auto __Local__18 = NewObject<UCheckBox>(__Local__1, UCheckBox::StaticClass(), TEXT("VisionCircleCheck"));
	__Local__18->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__18->Slot = __Local__17;
	__Local__17->Content = __Local__18;
	__Local__14.Add(__Local__17);
	auto __Local__19 = NewObject<UUniformGridSlot>(__Local__13, UUniformGridSlot::StaticClass(), TEXT("UniformGridSlot_167"));
	__Local__19->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__19->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__19->Row = 4;
	__Local__19->Parent = __Local__13;
	auto __Local__20 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_63"));
	__Local__20->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Vision Circle"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("D6E8A88049E7837699178AB0F09AA5ED") /* Key */
	);
	__Local__20->Slot = __Local__19;
	__Local__19->Content = __Local__20;
	__Local__14.Add(__Local__19);
	auto __Local__21 = NewObject<UUniformGridSlot>(__Local__13, UUniformGridSlot::StaticClass(), TEXT("UniformGridSlot_217"));
	__Local__21->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__21->Row = 5;
	__Local__21->Parent = __Local__13;
	auto __Local__22 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_115"));
	__Local__22->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Circle Radius"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("B56FBEE14A470DA570A9448420DDF64E") /* Key */
	);
	__Local__22->Slot = __Local__21;
	__Local__21->Content = __Local__22;
	__Local__14.Add(__Local__21);
	auto __Local__23 = NewObject<UUniformGridSlot>(__Local__13, UUniformGridSlot::StaticClass(), TEXT("UniformGridSlot_295"));
	__Local__23->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__23->Row = 6;
	__Local__23->Parent = __Local__13;
	auto __Local__24 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_195"));
	__Local__24->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Cone of Vision"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("A040C4D64510862112E0A8ABAFC17A63") /* Key */
	);
	__Local__24->Slot = __Local__23;
	__Local__23->Content = __Local__24;
	__Local__14.Add(__Local__23);
	auto __Local__25 = NewObject<UUniformGridSlot>(__Local__13, UUniformGridSlot::StaticClass(), TEXT("UniformGridSlot_334"));
	__Local__25->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__25->Row = 7;
	__Local__25->Parent = __Local__13;
	auto __Local__26 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_239"));
	__Local__26->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Cone Size"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("7C098FA94A975FE28F591DBB02685690") /* Key */
	);
	__Local__26->Slot = __Local__25;
	__Local__25->Content = __Local__26;
	__Local__14.Add(__Local__25);
	auto __Local__27 = NewObject<UUniformGridSlot>(__Local__13, UUniformGridSlot::StaticClass(), TEXT("UniformGridSlot_361"));
	__Local__27->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__27->Row = 3;
	__Local__27->Parent = __Local__13;
	auto __Local__28 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_272"));
	__Local__28->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Vision Range"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("20D5049B4142BF69DF4E5F908AE712C2") /* Key */
	);
	__Local__28->Slot = __Local__27;
	__Local__27->Content = __Local__28;
	__Local__14.Add(__Local__27);
	auto __Local__29 = NewObject<UUniformGridSlot>(__Local__13, UUniformGridSlot::StaticClass(), TEXT("UniformGridSlot_391"));
	__Local__29->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__29->Row = 1;
	__Local__29->Parent = __Local__13;
	auto __Local__30 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_317"));
	__Local__30->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Fog Type"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("7BFD4D924298DF055E546BB0DB396268") /* Key */
	);
	__Local__30->Slot = __Local__29;
	__Local__29->Content = __Local__30;
	__Local__14.Add(__Local__29);
	auto __Local__31 = NewObject<UUniformGridSlot>(__Local__13, UUniformGridSlot::StaticClass(), TEXT("UniformGridSlot_392"));
	__Local__31->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__31->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
	__Local__31->Column = 1;
	__Local__31->Parent = __Local__13;
	auto __Local__32 = NewObject<UCheckBox>(__Local__1, UCheckBox::StaticClass(), TEXT("DrawFogCheck"));
	__Local__32->CheckedState = ECheckBoxState::Checked;
	__Local__32->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__32->Slot = __Local__31;
	__Local__31->Content = __Local__32;
	__Local__14.Add(__Local__31);
	auto __Local__33 = NewObject<UUniformGridSlot>(__Local__13, UUniformGridSlot::StaticClass(), TEXT("UniformGridSlot_393"));
	__Local__33->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__33->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
	__Local__33->Row = 3;
	__Local__33->Column = 1;
	__Local__33->Parent = __Local__13;
	auto __Local__34 = NewObject<USlider>(__Local__1, USlider::StaticClass(), TEXT("RangeSlider"));
	__Local__34->Slot = __Local__33;
	__Local__33->Content = __Local__34;
	__Local__14.Add(__Local__33);
	auto __Local__35 = NewObject<UUniformGridSlot>(__Local__13, UUniformGridSlot::StaticClass(), TEXT("UniformGridSlot_395"));
	__Local__35->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__35->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
	__Local__35->Row = 6;
	__Local__35->Column = 1;
	__Local__35->Parent = __Local__13;
	auto __Local__36 = NewObject<UCheckBox>(__Local__1, UCheckBox::StaticClass(), TEXT("ConeOfVisionCheck"));
	__Local__36->Slot = __Local__35;
	__Local__35->Content = __Local__36;
	__Local__14.Add(__Local__35);
	auto __Local__37 = NewObject<UUniformGridSlot>(__Local__13, UUniformGridSlot::StaticClass(), TEXT("UniformGridSlot_644"));
	__Local__37->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__37->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
	__Local__37->Row = 5;
	__Local__37->Column = 1;
	__Local__37->Parent = __Local__13;
	auto __Local__38 = NewObject<USlider>(__Local__1, USlider::StaticClass(), TEXT("RadiusSlider"));
	__Local__38->Slot = __Local__37;
	__Local__37->Content = __Local__38;
	__Local__14.Add(__Local__37);
	auto __Local__39 = NewObject<UUniformGridSlot>(__Local__13, UUniformGridSlot::StaticClass(), TEXT("UniformGridSlot_645"));
	__Local__39->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__39->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
	__Local__39->Row = 7;
	__Local__39->Column = 1;
	__Local__39->Parent = __Local__13;
	auto __Local__40 = NewObject<USlider>(__Local__1, USlider::StaticClass(), TEXT("SizeSlider"));
	__Local__40->Slot = __Local__39;
	__Local__39->Content = __Local__40;
	__Local__14.Add(__Local__39);
	auto __Local__41 = NewObject<UUniformGridSlot>(__Local__13, UUniformGridSlot::StaticClass(), TEXT("UniformGridSlot_717"));
	__Local__41->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__41->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__41->Row = 1;
	__Local__41->Column = 1;
	__Local__41->Parent = __Local__13;
	auto __Local__42 = NewObject<UComboBoxString>(__Local__1, UComboBoxString::StaticClass(), TEXT("FogTypeSelect"));
	auto& __Local__43 = (*(AccessPrivateProperty<TArray<FString> >((__Local__42), UComboBoxString::__PPO__DefaultOptions() )));
	__Local__43 = TArray<FString> ();
	__Local__43.Reserve(2);
	__Local__43.Add(FString(TEXT("Opaque")));
	__Local__43.Add(FString(TEXT("Transparent")));
	auto& __Local__44 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__42->ItemStyle.SelectorFocusedBrush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__44 = FLinearColor(0.000000, 0.000000, 0.000000, 0.000000);
	__Local__42->EnableGamepadNavigationMode = false;
	__Local__42->Slot = __Local__41;
	__Local__41->Content = __Local__42;
	__Local__14.Add(__Local__41);
	auto __Local__45 = NewObject<UUniformGridSlot>(__Local__13, UUniformGridSlot::StaticClass(), TEXT("UniformGridSlot_169"));
	__Local__45->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__45->Row = 2;
	__Local__45->Parent = __Local__13;
	auto __Local__46 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_112"));
	__Local__46->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Line of Sight"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("6160488A4CC074F539824BBB12090FF7") /* Key */
	);
	__Local__46->Slot = __Local__45;
	__Local__45->Content = __Local__46;
	__Local__14.Add(__Local__45);
	auto __Local__47 = NewObject<UUniformGridSlot>(__Local__13, UUniformGridSlot::StaticClass(), TEXT("UniformGridSlot_226"));
	__Local__47->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__47->Row = 2;
	__Local__47->Column = 1;
	__Local__47->Parent = __Local__13;
	auto __Local__48 = NewObject<UCheckBox>(__Local__1, UCheckBox::StaticClass(), TEXT("LineOfSightCheck"));
	__Local__48->Slot = __Local__47;
	__Local__47->Content = __Local__48;
	__Local__14.Add(__Local__47);
	__Local__13->Slot = __Local__12;
	__Local__12->Content = __Local__13;
	__Local__11.Add(__Local__12);
	auto __Local__49 = NewObject<UCanvasPanelSlot>(__Local__10, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_31"));
	__Local__49->LayoutData.Offsets.Left = 12.000000f;
	__Local__49->LayoutData.Offsets.Top = 358.018036f;
	__Local__49->LayoutData.Offsets.Right = 435.335327f;
	__Local__49->LayoutData.Offsets.Bottom = 21.981983f;
	__Local__49->Parent = __Local__10;
	auto __Local__50 = NewObject<UCanvasPanel>(__Local__1, UCanvasPanel::StaticClass(), TEXT("CanvasPanel_31"));
	auto& __Local__51 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__50), UPanelWidget::__PPO__Slots() )));
	__Local__51 = TArray<UPanelSlot*> ();
	__Local__51.Reserve(1);
	auto __Local__52 = NewObject<UCanvasPanelSlot>(__Local__50, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_168"));
	__Local__52->LayoutData.Offsets.Top = -20.020020f;
	__Local__52->LayoutData.Offsets.Right = -0.100098f;
	__Local__52->LayoutData.Offsets.Bottom = 18.008011f;
	__Local__52->LayoutData.Anchors.Minimum = FVector2D(0.000000, 1.000000);
	__Local__52->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__52->Parent = __Local__50;
	auto __Local__53 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_33"));
	__Local__53->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Press TAB to toggle this menu."), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("AF5D50EB40FE650916C6C7BF29BD179F") /* Key */
	);
	__Local__53->Font.Size = 12;
	__Local__53->Slot = __Local__52;
	__Local__52->Content = __Local__53;
	__Local__51.Add(__Local__52);
	__Local__50->Slot = __Local__49;
	__Local__49->Content = __Local__50;
	__Local__11.Add(__Local__49);
	__Local__1->RootWidget = __Local__10;
}
void UUMG_FogControl_C__pf421451684::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__54;
	SlotNames.Append(__Local__54);
}
void UUMG_FogControl_C__pf421451684::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__55;
	TArray<FDelegateRuntimeBinding>  __Local__56;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), false, CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UUMG_FogControl_C__pf421451684::StaticClass())->MiscConvertedSubobjects[0]), __Local__55, __Local__56);
}
void UUMG_FogControl_C__pf421451684::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UUMG_FogControl_C__pf421451684::bpf__ExecuteUbergraph_UMG_FogControl__pf_0(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsChecked_ReturnValue4__pf{};
	float bpfv__CallFunc_GetValue_ReturnValue2__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue3__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 20:
			{
				__CurrentState = 21;
				break;
			}
		case 21:
			{
				if(IsValid(bpv__ConeOfVisionCheck__pf))
				{
					bpfv__CallFunc_IsChecked_ReturnValue4__pf = bpv__ConeOfVisionCheck__pf->UCheckBox::IsChecked();
				}
				if(IsValid(bpv__SizeSlider__pf))
				{
					bpfv__CallFunc_GetValue_ReturnValue2__pf = bpv__SizeSlider__pf->USlider::GetValue();
				}
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue3__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_GetValue_ReturnValue2__pf, 360.000000);
				if(IsValid(bpv__FogDrawingActor__pf))
				{
					bpv__FogDrawingActor__pf->bpf__Modify_VisionCone__pf(bpfv__CallFunc_IsChecked_ReturnValue4__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue3__pf);
				}
				__CurrentState = -1;
				break;
			}
		case 22:
			{
				__CurrentState = 21;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UUMG_FogControl_C__pf421451684::bpf__ExecuteUbergraph_UMG_FogControl__pf_1(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Conv_ByteToInt_ReturnValue__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue2__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue3__pf{};
	FString bpfv__CallFunc_GetOptionAtIndex_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				__CurrentState = 2;
				break;
			}
		case 2:
			{
				__StateStack.Push(12);
				__StateStack.Push(9);
				__StateStack.Push(5);
			}
		case 3:
			{
				(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, AFogDrawingActor_C__pf1242490746::StaticClass(), /*out*/ TArrayCaster< AFogDrawingActor_C__pf1242490746* >(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf).Get< AActor* >());
			}
		case 4:
			{
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				bpv__FogDrawingActor__pf = b0l__CallFunc_Array_Get_Item__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 5:
			{
				if(IsValid(bpv__DrawFogCheck__pf))
				{
					bool  __Local__57 = false;
					bpv__DrawFogCheck__pf->UCheckBox::SetIsChecked(((IsValid(bpv__FogDrawingActor__pf)) ? (bpv__FogDrawingActor__pf->bpv__DrawFOW__pf) : (__Local__57)));
				}
			}
		case 6:
			{
				if(IsValid(bpv__LineOfSightCheck__pf))
				{
					bool  __Local__58 = false;
					bpv__LineOfSightCheck__pf->UCheckBox::SetIsChecked(((IsValid(bpv__FogDrawingActor__pf)) ? (bpv__FogDrawingActor__pf->bpv__UseLineOfSight__pf) : (__Local__58)));
				}
			}
		case 7:
			{
				if(IsValid(bpv__ConeOfVisionCheck__pf))
				{
					bool  __Local__59 = false;
					bpv__ConeOfVisionCheck__pf->UCheckBox::SetIsChecked(((IsValid(bpv__FogDrawingActor__pf)) ? (bpv__FogDrawingActor__pf->bpv__UseConeOfVision__pf) : (__Local__59)));
				}
			}
		case 8:
			{
				if(IsValid(bpv__VisionCircleCheck__pf))
				{
					bool  __Local__60 = false;
					bpv__VisionCircleCheck__pf->UCheckBox::SetIsChecked(((IsValid(bpv__FogDrawingActor__pf)) ? (bpv__FogDrawingActor__pf->bpv__VisionCircle__pf) : (__Local__60)));
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 9:
			{
				float  __Local__61 = 0.000000;
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue3__pf = FCustomThunkTemplates::Divide_FloatFloat(((IsValid(bpv__FogDrawingActor__pf)) ? (bpv__FogDrawingActor__pf->bpv__VisionRange__pf) : (__Local__61)), 1000.000000);
				if(IsValid(bpv__RangeSlider__pf))
				{
					bpv__RangeSlider__pf->USlider::SetValue(bpfv__CallFunc_Divide_FloatFloat_ReturnValue3__pf);
				}
			}
		case 10:
			{
				float  __Local__62 = 0.000000;
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue2__pf = FCustomThunkTemplates::Divide_FloatFloat(((IsValid(bpv__FogDrawingActor__pf)) ? (bpv__FogDrawingActor__pf->bpv__CircleRadius__pf) : (__Local__62)), 360.000000);
				if(IsValid(bpv__RadiusSlider__pf))
				{
					bpv__RadiusSlider__pf->USlider::SetValue(bpfv__CallFunc_Divide_FloatFloat_ReturnValue2__pf);
				}
			}
		case 11:
			{
				float  __Local__63 = 0.000000;
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(((IsValid(bpv__FogDrawingActor__pf)) ? (bpv__FogDrawingActor__pf->bpv__ConeSize__pf) : (__Local__63)), 800.000000);
				if(IsValid(bpv__SizeSlider__pf))
				{
					bpv__SizeSlider__pf->USlider::SetValue(bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 12:
			{
				E__FogType__pf  __Local__64 = E__FogType__pf::NewEnumerator0;
				bpfv__CallFunc_Conv_ByteToInt_ReturnValue__pf = UKismetMathLibrary::Conv_ByteToInt(static_cast<uint8>(((IsValid(bpv__FogDrawingActor__pf)) ? (bpv__FogDrawingActor__pf->bpv__FogType__pf) : (__Local__64))));
				if(IsValid(bpv__FogTypeSelect__pf))
				{
					bpfv__CallFunc_GetOptionAtIndex_ReturnValue__pf = bpv__FogTypeSelect__pf->UComboBoxString::GetOptionAtIndex(bpfv__CallFunc_Conv_ByteToInt_ReturnValue__pf);
				}
				if(IsValid(bpv__FogTypeSelect__pf))
				{
					bpv__FogTypeSelect__pf->UComboBoxString::SetSelectedOption(bpfv__CallFunc_GetOptionAtIndex_ReturnValue__pf);
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
void UUMG_FogControl_C__pf421451684::bpf__ExecuteUbergraph_UMG_FogControl__pf_2(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsChecked_ReturnValue3__pf{};
	float bpfv__CallFunc_GetValue_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 17:
			{
				__CurrentState = 18;
				break;
			}
		case 18:
			{
				if(IsValid(bpv__VisionCircleCheck__pf))
				{
					bpfv__CallFunc_IsChecked_ReturnValue3__pf = bpv__VisionCircleCheck__pf->UCheckBox::IsChecked();
				}
				if(IsValid(bpv__RadiusSlider__pf))
				{
					bpfv__CallFunc_GetValue_ReturnValue__pf = bpv__RadiusSlider__pf->USlider::GetValue();
				}
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_GetValue_ReturnValue__pf, 800.000000);
				if(IsValid(bpv__FogDrawingActor__pf))
				{
					bpv__FogDrawingActor__pf->bpf__Modify_VisionCircle__pf(bpfv__CallFunc_IsChecked_ReturnValue3__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf);
				}
				__CurrentState = -1;
				break;
			}
		case 19:
			{
				__CurrentState = 18;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UUMG_FogControl_C__pf421451684::bpf__ExecuteUbergraph_UMG_FogControl__pf_3(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 15);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(b0l__K2Node_ComponentBoundEvent_Value3__pf, 1000.000000);
	if(IsValid(bpv__FogDrawingActor__pf))
	{
		bpv__FogDrawingActor__pf->bpf__Modify_VisionRange__pf(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
	}
	return; //KCST_EndOfThread
}
void UUMG_FogControl_C__pf421451684::bpf__ExecuteUbergraph_UMG_FogControl__pf_4(int32 bpp__EntryPoint__pf)
{
	FString bpfv__CallFunc_GetSelectedOption_ReturnValue__pf{};
	int32 bpfv__CallFunc_FindOptionIndex_ReturnValue__pf{};
	bool bpfv__CallFunc_IsChecked_ReturnValue__pf{};
	bool bpfv__CallFunc_IsChecked_ReturnValue2__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 13:
			{
				__CurrentState = 14;
				break;
			}
		case 14:
			{
				b0l__Temp_byte_Variable__pf = E__FogType__pf::NewEnumerator1;
				b0l__Temp_byte_Variable2__pf = E__FogType__pf::NewEnumerator0;
				if(IsValid(bpv__FogTypeSelect__pf))
				{
					bpfv__CallFunc_GetSelectedOption_ReturnValue__pf = bpv__FogTypeSelect__pf->UComboBoxString::GetSelectedOption();
				}
				if(IsValid(bpv__FogTypeSelect__pf))
				{
					bpfv__CallFunc_FindOptionIndex_ReturnValue__pf = bpv__FogTypeSelect__pf->UComboBoxString::FindOptionIndex(bpfv__CallFunc_GetSelectedOption_ReturnValue__pf);
				}
				b0l__Temp_int_Variable__pf = bpfv__CallFunc_FindOptionIndex_ReturnValue__pf;
				if(IsValid(bpv__DrawFogCheck__pf))
				{
					bpfv__CallFunc_IsChecked_ReturnValue__pf = bpv__DrawFogCheck__pf->UCheckBox::IsChecked();
				}
				if(IsValid(bpv__LineOfSightCheck__pf))
				{
					bpfv__CallFunc_IsChecked_ReturnValue2__pf = bpv__LineOfSightCheck__pf->UCheckBox::IsChecked();
				}
				if(IsValid(bpv__FogDrawingActor__pf))
				{
					bpv__FogDrawingActor__pf->bpf__Modify_FogDrawing__pf(bpfv__CallFunc_IsChecked_ReturnValue__pf, bpfv__CallFunc_IsChecked_ReturnValue2__pf, TSwitchValue<int32 , E__FogType__pf >(b0l__Temp_int_Variable__pf, b0l__K2Node_Select_Default__pf, 2, TSwitchPair<int32 , E__FogType__pf >(0, b0l__Temp_byte_Variable2__pf), TSwitchPair<int32 , E__FogType__pf >(1, b0l__Temp_byte_Variable__pf)));
				}
				__CurrentState = -1;
				break;
			}
		case 23:
			{
				__CurrentState = 14;
				break;
			}
		case 24:
			{
				__CurrentState = 14;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UUMG_FogControl_C__pf421451684::bpf__BndEvt__LineOfSightCheck_K2Node_ComponentBoundEvent_160_OnCheckBoxComponentStateChanged__DelegateSignature__pf(bool bpp__bIsChecked__pf)
{
	b0l__K2Node_ComponentBoundEvent_bIsChecked__pf = bpp__bIsChecked__pf;
	bpf__ExecuteUbergraph_UMG_FogControl__pf_4(24);
}
void UUMG_FogControl_C__pf421451684::bpf__BndEvt__FogTypeSelect_K2Node_ComponentBoundEvent_151_OnSelectionChangedEvent__DelegateSignature__pf(const FString& bpp__SelectedItem__pf__const, ESelectInfo::Type bpp__SelectionType__pf)
{
	typedef FString  T__Local__65;
	T__Local__65& bpp__SelectedItem__pf = *const_cast<T__Local__65 *>(&bpp__SelectedItem__pf__const);
	b0l__K2Node_ComponentBoundEvent_SelectedItem__pf = bpp__SelectedItem__pf;
	b0l__K2Node_ComponentBoundEvent_SelectionType__pf = bpp__SelectionType__pf;
	bpf__ExecuteUbergraph_UMG_FogControl__pf_4(23);
}
void UUMG_FogControl_C__pf421451684::bpf__BndEvt__SizeSlider_K2Node_ComponentBoundEvent_131_OnFloatValueChangedEvent__DelegateSignature__pf(float bpp__Value__pf)
{
	b0l__K2Node_ComponentBoundEvent_Value__pf = bpp__Value__pf;
	bpf__ExecuteUbergraph_UMG_FogControl__pf_0(22);
}
void UUMG_FogControl_C__pf421451684::bpf__BndEvt__ConeOfVisionCheck_K2Node_ComponentBoundEvent_124_OnCheckBoxComponentStateChanged__DelegateSignature__pf(bool bpp__bIsChecked__pf)
{
	b0l__K2Node_ComponentBoundEvent_bIsChecked2__pf = bpp__bIsChecked__pf;
	bpf__ExecuteUbergraph_UMG_FogControl__pf_0(20);
}
void UUMG_FogControl_C__pf421451684::bpf__BndEvt__RadiusSlider_K2Node_ComponentBoundEvent_118_OnFloatValueChangedEvent__DelegateSignature__pf(float bpp__Value__pf)
{
	b0l__K2Node_ComponentBoundEvent_Value2__pf = bpp__Value__pf;
	bpf__ExecuteUbergraph_UMG_FogControl__pf_2(19);
}
void UUMG_FogControl_C__pf421451684::bpf__BndEvt__VisionCircleCheck_K2Node_ComponentBoundEvent_113_OnCheckBoxComponentStateChanged__DelegateSignature__pf(bool bpp__bIsChecked__pf)
{
	b0l__K2Node_ComponentBoundEvent_bIsChecked3__pf = bpp__bIsChecked__pf;
	bpf__ExecuteUbergraph_UMG_FogControl__pf_2(17);
}
void UUMG_FogControl_C__pf421451684::bpf__BndEvt__RangeSlider_K2Node_ComponentBoundEvent_109_OnFloatValueChangedEvent__DelegateSignature__pf(float bpp__Value__pf)
{
	b0l__K2Node_ComponentBoundEvent_Value3__pf = bpp__Value__pf;
	bpf__ExecuteUbergraph_UMG_FogControl__pf_3(15);
}
void UUMG_FogControl_C__pf421451684::bpf__BndEvt__DrawFogCheck_K2Node_ComponentBoundEvent_106_OnCheckBoxComponentStateChanged__DelegateSignature__pf(bool bpp__bIsChecked__pf)
{
	b0l__K2Node_ComponentBoundEvent_bIsChecked4__pf = bpp__bIsChecked__pf;
	bpf__ExecuteUbergraph_UMG_FogControl__pf_4(13);
}
void UUMG_FogControl_C__pf421451684::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_UMG_FogControl__pf_1(1);
}
void UUMG_FogControl_C__pf421451684::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
void UUMG_FogControl_C__pf421451684::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{77, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{10, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{214, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESelectInfo 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{79, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{215, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.CheckBox 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{216, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Slider 
		{217, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.ComboBoxString 
		{42, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{218, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/FogOfWar/Blueprints/FogDrawingActor.FogDrawingActor_C 
		{205, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/FogOfWar/Blueprints/FogType.FogType 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
struct FRegisterHelper__UUMG_FogControl_C__pf421451684
{
	FRegisterHelper__UUMG_FogControl_C__pf421451684()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/FogOfWar/ExampleMap/Blueprints/UMG_FogControl"), &UUMG_FogControl_C__pf421451684::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UUMG_FogControl_C__pf421451684 Instance;
};
FRegisterHelper__UUMG_FogControl_C__pf421451684 FRegisterHelper__UUMG_FogControl_C__pf421451684::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
