#include "NativizedAssets.h"
#include "hostMenu__pf1343218889.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/Border.h"
#include "Runtime/UMG/Public/Components/BorderSlot.h"
#include "Runtime/UMG/Public/Components/VerticalBox.h"
#include "Runtime/UMG/Public/Components/VerticalBoxSlot.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/UMG/Public/Components/EditableTextBox.h"
#include "Runtime/UMG/Public/Components/HorizontalBox.h"
#include "Runtime/UMG/Public/Components/HorizontalBoxSlot.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/UMG/Public/Components/ButtonSlot.h"
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
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
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
#include "Runtime/Engine/Classes/Kismet/KismetTextLibrary.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
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
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
UhostMenu_C__pf1343218889::UhostMenu_C__pf1343218889(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (UhostMenu_C__pf1343218889::StaticClass() == GetClass()))
	{
		UhostMenu_C__pf1343218889::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__Accept__pf = nullptr;
	bpv__backButton__pf = nullptr;
	bpv__decreasePlayers__pf = nullptr;
	bpv__IncreasePlayers__pf = nullptr;
	bpv__TextBlock_61__pf = nullptr;
	bpv__TextBlock_65__pf = nullptr;
	bpv__TextBlock_88__pf = nullptr;
	bpv__toggleLeft__pf = nullptr;
	bpv__toggleRight__pf = nullptr;
	bpv__UserServerName__pf = nullptr;
	bpv__gameInstanceRef__pf = nullptr;
	bpv__serverNameText__pf = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Empty"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("33559B8F4EB6178A8A2F8390DEF7A102") /* Key */
	);
	bpv__acceptEnabledx__pfzy = false;
	bpv__numPlayers__pf = 2;
	bpv__enableLANx__pfzy = true;
	bpv__maxPlayers__pf = 3;
	bpv__playModeText__pf = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("LAN"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("D0CDC444409370AB35BEA6A255BD7575") /* Key */
	);
	bCanEverTick = false;
	bCanEverPaint = false;
}
void UhostMenu_C__pf1343218889::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
void UhostMenu_C__pf1343218889::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_3"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__0);
	auto __Local__1 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	__Local__0->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__0->ComponentDelegateBindings.AddUninitialized(7);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 7);
	auto& __Local__2 = __Local__0->ComponentDelegateBindings[0];
	__Local__2.ComponentPropertyName = FName(TEXT("toggleRight"));
	__Local__2.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__2.FunctionNameToBind = FName(TEXT("BndEvt__toggleRight_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__3 = __Local__0->ComponentDelegateBindings[1];
	__Local__3.ComponentPropertyName = FName(TEXT("toggleLeft"));
	__Local__3.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__3.FunctionNameToBind = FName(TEXT("BndEvt__toggleLeft_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__4 = __Local__0->ComponentDelegateBindings[2];
	__Local__4.ComponentPropertyName = FName(TEXT("IncreasePlayers"));
	__Local__4.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__4.FunctionNameToBind = FName(TEXT("BndEvt__IncreasePlayers_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__5 = __Local__0->ComponentDelegateBindings[3];
	__Local__5.ComponentPropertyName = FName(TEXT("decreasePlayers"));
	__Local__5.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__5.FunctionNameToBind = FName(TEXT("BndEvt__decreasePlayers_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__6 = __Local__0->ComponentDelegateBindings[4];
	__Local__6.ComponentPropertyName = FName(TEXT("Accept"));
	__Local__6.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__6.FunctionNameToBind = FName(TEXT("BndEvt__Accept_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__7 = __Local__0->ComponentDelegateBindings[5];
	__Local__7.ComponentPropertyName = FName(TEXT("backButton"));
	__Local__7.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__7.FunctionNameToBind = FName(TEXT("BndEvt__backButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__8 = __Local__0->ComponentDelegateBindings[6];
	__Local__8.ComponentPropertyName = FName(TEXT("UserServerName"));
	__Local__8.DelegatePropertyName = FName(TEXT("OnTextChanged"));
	__Local__8.FunctionNameToBind = FName(TEXT("BndEvt__UserServerName_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature"));
	auto __Local__9 = NewObject<UCanvasPanel>(__Local__1, UCanvasPanel::StaticClass(), TEXT("CanvasPanel_0"));
	auto& __Local__10 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__9), UPanelWidget::__PPO__Slots() )));
	__Local__10 = TArray<UPanelSlot*> ();
	__Local__10.Reserve(1);
	auto __Local__11 = NewObject<UCanvasPanelSlot>(__Local__9, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_0"));
	__Local__11->LayoutData.Offsets.Left = -340.960938f;
	__Local__11->LayoutData.Offsets.Top = -132.492981f;
	__Local__11->LayoutData.Offsets.Right = 706.606628f;
	__Local__11->LayoutData.Offsets.Bottom = 286.256256f;
	__Local__11->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.455556);
	__Local__11->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.455556);
	__Local__11->bAutoSize = true;
	__Local__11->Parent = __Local__9;
	auto __Local__12 = NewObject<UBorder>(__Local__1, UBorder::StaticClass(), TEXT("Border_82"));
	__Local__12->BrushColor = FLinearColor(0.000000, 0.000000, 0.000000, 0.500000);
	auto& __Local__13 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__12), UPanelWidget::__PPO__Slots() )));
	__Local__13 = TArray<UPanelSlot*> ();
	__Local__13.Reserve(1);
	auto __Local__14 = NewObject<UBorderSlot>(__Local__12, UBorderSlot::StaticClass(), TEXT("BorderSlot_0"));
	__Local__14->Parent = __Local__12;
	auto __Local__15 = NewObject<UVerticalBox>(__Local__1, UVerticalBox::StaticClass(), TEXT("VerticalBox_0"));
	auto& __Local__16 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__15), UPanelWidget::__PPO__Slots() )));
	__Local__16 = TArray<UPanelSlot*> ();
	__Local__16.Reserve(8);
	auto __Local__17 = NewObject<UVerticalBoxSlot>(__Local__15, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_0"));
	__Local__17->Parent = __Local__15;
	auto __Local__18 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_0"));
	__Local__18->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Host Game Setup"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("1A1146E84C984E843496368FECF4CBB6") /* Key */
	);
	__Local__18->Font.Size = 64;
	auto& __Local__19 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__18), UTextLayoutWidget::__PPO__Justification() )));
	__Local__19 = ETextJustify::Type::Center;
	__Local__18->Slot = __Local__17;
	__Local__17->Content = __Local__18;
	__Local__16.Add(__Local__17);
	auto __Local__20 = NewObject<UVerticalBoxSlot>(__Local__15, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_8"));
	__Local__20->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__20->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__20->Parent = __Local__15;
	auto __Local__21 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_58"));
	__Local__21->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Enter a Server Name"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("F8F211C941FC4ED7A52501A3A0D8FF02") /* Key */
	);
	__Local__21->Slot = __Local__20;
	__Local__20->Content = __Local__21;
	__Local__16.Add(__Local__20);
	auto __Local__22 = NewObject<UVerticalBoxSlot>(__Local__15, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_9"));
	__Local__22->Parent = __Local__15;
	auto __Local__23 = NewObject<UEditableTextBox>(__Local__1, UEditableTextBox::StaticClass(), TEXT("UserServerName"));
	__Local__23->WidgetStyle.Font.Size = 28;
	__Local__23->HintText = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Enter a Name"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("77AF691B451E38F7E6B7D3A78006D199") /* Key */
	);
	__Local__23->Slot = __Local__22;
	__Local__22->Content = __Local__23;
	__Local__16.Add(__Local__22);
	auto __Local__24 = NewObject<UVerticalBoxSlot>(__Local__15, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_11"));
	__Local__24->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__24->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__24->Parent = __Local__15;
	auto __Local__25 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_60"));
	__Local__25->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Enter number of Players"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("A1FE22784B88F5947E3354BCA06A5085") /* Key */
	);
	__Local__25->Slot = __Local__24;
	__Local__24->Content = __Local__25;
	__Local__16.Add(__Local__24);
	auto __Local__26 = NewObject<UVerticalBoxSlot>(__Local__15, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_12"));
	__Local__26->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__26->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__26->Parent = __Local__15;
	auto __Local__27 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("HorizontalBox_0"));
	auto& __Local__28 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__27), UPanelWidget::__PPO__Slots() )));
	__Local__28 = TArray<UPanelSlot*> ();
	__Local__28.Reserve(3);
	auto __Local__29 = NewObject<UHorizontalBoxSlot>(__Local__27, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_0"));
	__Local__29->Parent = __Local__27;
	auto __Local__30 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("decreasePlayers"));
	auto& __Local__31 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__30->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__31 = FLinearColor(1.000000, 0.544528, 0.118760, 1.000000);
	auto& __Local__32 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__30), UPanelWidget::__PPO__Slots() )));
	__Local__32 = TArray<UPanelSlot*> ();
	__Local__32.Reserve(1);
	auto __Local__33 = NewObject<UButtonSlot>(__Local__30, UButtonSlot::StaticClass(), TEXT("ButtonSlot_0"));
	__Local__33->Parent = __Local__30;
	auto __Local__34 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_62"));
	__Local__34->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("<"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("B6CD19674697EF5DA1532B8DB97854FF") /* Key */
	);
	__Local__34->Slot = __Local__33;
	__Local__33->Content = __Local__34;
	__Local__32.Add(__Local__33);
	__Local__30->Slot = __Local__29;
	__Local__29->Content = __Local__30;
	__Local__28.Add(__Local__29);
	auto __Local__35 = NewObject<UHorizontalBoxSlot>(__Local__27, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_1"));
	__Local__35->Padding.Left = 25.000000f;
	__Local__35->Padding.Top = 25.000000f;
	__Local__35->Padding.Right = 25.000000f;
	__Local__35->Padding.Bottom = 25.000000f;
	__Local__35->Parent = __Local__27;
	auto __Local__36 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_61"));
	__Local__36->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("2"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("4987960440BFA1C405F7CBA6B186EC6D") /* Key */
	);
	__Local__36->Font.Size = 36;
	__Local__36->Slot = __Local__35;
	__Local__35->Content = __Local__36;
	__Local__28.Add(__Local__35);
	auto __Local__37 = NewObject<UHorizontalBoxSlot>(__Local__27, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_2"));
	__Local__37->Parent = __Local__27;
	auto __Local__38 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("IncreasePlayers"));
	auto& __Local__39 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__38->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__39 = FLinearColor(1.000000, 0.544528, 0.118760, 1.000000);
	auto& __Local__40 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__38), UPanelWidget::__PPO__Slots() )));
	__Local__40 = TArray<UPanelSlot*> ();
	__Local__40.Reserve(1);
	auto __Local__41 = NewObject<UButtonSlot>(__Local__38, UButtonSlot::StaticClass(), TEXT("ButtonSlot_1"));
	__Local__41->Parent = __Local__38;
	auto __Local__42 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_63"));
	__Local__42->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT(">"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("F42D2AD74FCF5BA3E60526B446DD3ACB") /* Key */
	);
	__Local__42->Slot = __Local__41;
	__Local__41->Content = __Local__42;
	__Local__40.Add(__Local__41);
	__Local__38->Slot = __Local__37;
	__Local__37->Content = __Local__38;
	__Local__28.Add(__Local__37);
	__Local__27->Slot = __Local__26;
	__Local__26->Content = __Local__27;
	__Local__16.Add(__Local__26);
	auto __Local__43 = NewObject<UVerticalBoxSlot>(__Local__15, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_15"));
	__Local__43->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__43->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__43->Parent = __Local__15;
	auto __Local__44 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_67"));
	__Local__44->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Choose Play Method"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("36AE73BA42BEF2B3687FFE8E4EB6C2C9") /* Key */
	);
	__Local__44->Slot = __Local__43;
	__Local__43->Content = __Local__44;
	__Local__16.Add(__Local__43);
	auto __Local__45 = NewObject<UVerticalBoxSlot>(__Local__15, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_13"));
	__Local__45->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__45->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__45->Parent = __Local__15;
	auto __Local__46 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("HorizontalBox_1"));
	auto& __Local__47 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__46), UPanelWidget::__PPO__Slots() )));
	__Local__47 = TArray<UPanelSlot*> ();
	__Local__47.Reserve(3);
	auto __Local__48 = NewObject<UHorizontalBoxSlot>(__Local__46, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_0"));
	__Local__48->Parent = __Local__46;
	auto __Local__49 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("toggleLeft"));
	auto& __Local__50 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__49->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__50 = FLinearColor(1.000000, 0.544528, 0.118760, 1.000000);
	auto& __Local__51 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__49), UPanelWidget::__PPO__Slots() )));
	__Local__51 = TArray<UPanelSlot*> ();
	__Local__51.Reserve(1);
	auto __Local__52 = NewObject<UButtonSlot>(__Local__49, UButtonSlot::StaticClass(), TEXT("ButtonSlot_0"));
	__Local__52->Parent = __Local__49;
	auto __Local__53 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_64"));
	__Local__53->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("<"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("B6CD19674697EF5DA1532B8DB97854FF") /* Key */
	);
	__Local__53->Slot = __Local__52;
	__Local__52->Content = __Local__53;
	__Local__51.Add(__Local__52);
	__Local__49->Slot = __Local__48;
	__Local__48->Content = __Local__49;
	__Local__47.Add(__Local__48);
	auto __Local__54 = NewObject<UHorizontalBoxSlot>(__Local__46, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_1"));
	__Local__54->Padding.Left = 25.000000f;
	__Local__54->Padding.Top = 25.000000f;
	__Local__54->Padding.Right = 25.000000f;
	__Local__54->Padding.Bottom = 25.000000f;
	__Local__54->Parent = __Local__46;
	auto __Local__55 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_65"));
	__Local__55->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("LAN"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("CB9555F045C410C5523D0CACD5495237") /* Key */
	);
	__Local__55->Font.Size = 36;
	__Local__55->Slot = __Local__54;
	__Local__54->Content = __Local__55;
	__Local__47.Add(__Local__54);
	auto __Local__56 = NewObject<UHorizontalBoxSlot>(__Local__46, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_2"));
	__Local__56->Parent = __Local__46;
	auto __Local__57 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("toggleRight"));
	auto& __Local__58 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__57->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__58 = FLinearColor(1.000000, 0.544528, 0.118760, 1.000000);
	auto& __Local__59 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__57), UPanelWidget::__PPO__Slots() )));
	__Local__59 = TArray<UPanelSlot*> ();
	__Local__59.Reserve(1);
	auto __Local__60 = NewObject<UButtonSlot>(__Local__57, UButtonSlot::StaticClass(), TEXT("ButtonSlot_1"));
	__Local__60->Parent = __Local__57;
	auto __Local__61 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_66"));
	__Local__61->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT(">"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("F42D2AD74FCF5BA3E60526B446DD3ACB") /* Key */
	);
	__Local__61->Slot = __Local__60;
	__Local__60->Content = __Local__61;
	__Local__59.Add(__Local__60);
	__Local__57->Slot = __Local__56;
	__Local__56->Content = __Local__57;
	__Local__47.Add(__Local__56);
	__Local__46->Slot = __Local__45;
	__Local__45->Content = __Local__46;
	__Local__16.Add(__Local__45);
	auto __Local__62 = NewObject<UVerticalBoxSlot>(__Local__15, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_16"));
	__Local__62->Parent = __Local__15;
	auto __Local__63 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("HorizontalBox_2"));
	auto& __Local__64 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__63), UPanelWidget::__PPO__Slots() )));
	__Local__64 = TArray<UPanelSlot*> ();
	__Local__64.Reserve(3);
	auto __Local__65 = NewObject<UHorizontalBoxSlot>(__Local__63, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_0"));
	__Local__65->Parent = __Local__63;
	auto __Local__66 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("backButton"));
	auto& __Local__67 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__66->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__67 = FLinearColor(1.000000, 0.544528, 0.118760, 1.000000);
	auto& __Local__68 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__66), UPanelWidget::__PPO__Slots() )));
	__Local__68 = TArray<UPanelSlot*> ();
	__Local__68.Reserve(1);
	auto __Local__69 = NewObject<UButtonSlot>(__Local__66, UButtonSlot::StaticClass(), TEXT("ButtonSlot_0"));
	__Local__69->Parent = __Local__66;
	auto __Local__70 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_86"));
	__Local__70->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Back"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("E69C77554947F94D911E65868B043B65") /* Key */
	);
	__Local__70->Slot = __Local__69;
	__Local__69->Content = __Local__70;
	__Local__68.Add(__Local__69);
	__Local__66->Slot = __Local__65;
	__Local__65->Content = __Local__66;
	__Local__64.Add(__Local__65);
	auto __Local__71 = NewObject<UHorizontalBoxSlot>(__Local__63, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_3"));
	__Local__71->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__71->Parent = __Local__63;
	auto __Local__72 = NewObject<USpacer>(__Local__1, USpacer::StaticClass(), TEXT("Spacer_0"));
	__Local__72->Slot = __Local__71;
	__Local__71->Content = __Local__72;
	__Local__64.Add(__Local__71);
	auto __Local__73 = NewObject<UHorizontalBoxSlot>(__Local__63, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_2"));
	__Local__73->Parent = __Local__63;
	auto __Local__74 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("Accept"));
	auto& __Local__75 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__74->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__75 = FLinearColor(1.000000, 0.544528, 0.118760, 1.000000);
	auto& __Local__76 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__74), UPanelWidget::__PPO__Slots() )));
	__Local__76 = TArray<UPanelSlot*> ();
	__Local__76.Reserve(1);
	auto __Local__77 = NewObject<UButtonSlot>(__Local__74, UButtonSlot::StaticClass(), TEXT("ButtonSlot_1"));
	__Local__77->Parent = __Local__74;
	auto __Local__78 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_88"));
	__Local__78->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Accept"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("7D7DA22D401BC99191937E9340DE9AB5") /* Key */
	);
	__Local__78->Slot = __Local__77;
	__Local__77->Content = __Local__78;
	__Local__76.Add(__Local__77);
	__Local__74->Slot = __Local__73;
	__Local__73->Content = __Local__74;
	__Local__64.Add(__Local__73);
	__Local__63->Slot = __Local__62;
	__Local__62->Content = __Local__63;
	__Local__16.Add(__Local__62);
	__Local__15->Slot = __Local__14;
	__Local__14->Content = __Local__15;
	__Local__13.Add(__Local__14);
	__Local__12->Slot = __Local__11;
	__Local__11->Content = __Local__12;
	__Local__10.Add(__Local__11);
	__Local__1->RootWidget = __Local__9;
}
void UhostMenu_C__pf1343218889::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__79;
	SlotNames.Append(__Local__79);
}
void UhostMenu_C__pf1343218889::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__80;
	TArray<FDelegateRuntimeBinding>  __Local__81;
	__Local__81.AddUninitialized(3);
	FDelegateRuntimeBinding::StaticStruct()->InitializeStruct(__Local__81.GetData(), 3);
	auto& __Local__82 = __Local__81[0];
	__Local__82.ObjectName = FString(TEXT("TextBlock_61"));
	__Local__82.PropertyName = FName(TEXT("Text"));
	__Local__82.FunctionName = FName(TEXT("GetText_0"));
	auto& __Local__83 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__82.SourcePath), FDynamicPropertyPath::__PPO__Segments() )));
	__Local__83 = TArray<FPropertyPathSegment> ();
	__Local__83.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__83.GetData(), 1);
	auto& __Local__84 = __Local__83[0];
	__Local__84.Name = FName(TEXT("convertNumPlayers"));
	auto& __Local__85 = __Local__81[1];
	__Local__85.ObjectName = FString(TEXT("TextBlock_65"));
	__Local__85.PropertyName = FName(TEXT("Text"));
	auto& __Local__86 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__85.SourcePath), FDynamicPropertyPath::__PPO__Segments() )));
	__Local__86 = TArray<FPropertyPathSegment> ();
	__Local__86.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__86.GetData(), 1);
	auto& __Local__87 = __Local__86[0];
	__Local__87.Name = FName(TEXT("playModeText"));
	__Local__85.Kind = EBindingKind::Property;
	auto& __Local__88 = __Local__81[2];
	__Local__88.ObjectName = FString(TEXT("TextBlock_88"));
	__Local__88.PropertyName = FName(TEXT("bIsEnabled"));
	auto& __Local__89 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__88.SourcePath), FDynamicPropertyPath::__PPO__Segments() )));
	__Local__89 = TArray<FPropertyPathSegment> ();
	__Local__89.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__89.GetData(), 1);
	auto& __Local__90 = __Local__89[0];
	__Local__90.Name = FName(TEXT("acceptEnabled?"));
	__Local__88.Kind = EBindingKind::Property;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), false, CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UhostMenu_C__pf1343218889::StaticClass())->MiscConvertedSubobjects[0]), __Local__80, __Local__81);
}
void UhostMenu_C__pf1343218889::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UhostMenu_C__pf1343218889::bpf__ExecuteUbergraph_hostMenu__pf_0(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 25);
	// optimized KCST_UnconditionalGoto
	if (!bpv__enableLANx__pfzy)
	{
		return; //KCST_GotoReturnIfNot
	}
	bpv__enableLANx__pfzy = false;
	bpv__playModeText__pf = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Steam"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("24EAEA7B4AEE7EF35F71D2B0EF496085") /* Key */
	);
	return; // KCST_GotoReturn
}
void UhostMenu_C__pf1343218889::bpf__ExecuteUbergraph_hostMenu__pf_1(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 21:
			{
				__CurrentState = 22;
				break;
			}
		case 22:
			{
				if (!bpv__enableLANx__pfzy)
				{
					__CurrentState = 23;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 23:
			{
				bpv__enableLANx__pfzy = true;
			}
		case 24:
			{
				bpv__playModeText__pf = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("LAN"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("B6E6CD164AEF85FDC63A459D25FCC22E") /* Key */
	);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UhostMenu_C__pf1343218889::bpf__ExecuteUbergraph_hostMenu__pf_2(int32 bpp__EntryPoint__pf)
{
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 20);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetGameInstance_ReturnValue__pf = UGameplayStatics::GetGameInstance(this);
	b0l__K2Node_DynamicCast_AsGame_Info_Instance__pf = Cast<UgameInfoInstance_C__pf533497531>(bpfv__CallFunc_GetGameInstance_ReturnValue__pf);
	b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsGame_Info_Instance__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	bpv__gameInstanceRef__pf = b0l__K2Node_DynamicCast_AsGame_Info_Instance__pf;
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__UserServerName__pf))
	{
		bpv__UserServerName__pf->UEditableTextBox::SetText(FText::GetEmpty());
	}
	return; // KCST_GotoReturn
}
void UhostMenu_C__pf1343218889::bpf__ExecuteUbergraph_hostMenu__pf_3(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Clamp_ReturnValue2__pf{};
	check(bpp__EntryPoint__pf == 18);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpv__maxPlayers__pf, 1);
	bpfv__CallFunc_Clamp_ReturnValue2__pf = UKismetMathLibrary::Clamp(bpfv__CallFunc_Add_IntInt_ReturnValue__pf, 2, bpv__maxPlayers__pf);
	bpv__numPlayers__pf = bpfv__CallFunc_Clamp_ReturnValue2__pf;
	return; // KCST_GotoReturn
}
void UhostMenu_C__pf1343218889::bpf__ExecuteUbergraph_hostMenu__pf_4(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Clamp_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 16);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpv__maxPlayers__pf, 1);
	bpfv__CallFunc_Clamp_ReturnValue__pf = UKismetMathLibrary::Clamp(bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf, 2, bpv__maxPlayers__pf);
	bpv__numPlayers__pf = bpfv__CallFunc_Clamp_ReturnValue__pf;
	return; // KCST_GotoReturn
}
void UhostMenu_C__pf1343218889::bpf__ExecuteUbergraph_hostMenu__pf_5(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 11);
	// optimized KCST_UnconditionalGoto
	RemoveFromParent();
	if(IsValid(bpv__gameInstanceRef__pf))
	{
		bpv__gameInstanceRef__pf->bpf__launchLobby__pf(bpv__numPlayers__pf, bpv__enableLANx__pfzy, bpv__serverNameText__pf);
	}
	return; // KCST_GotoReturn
}
void UhostMenu_C__pf1343218889::bpf__ExecuteUbergraph_hostMenu__pf_6(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 8);
	// optimized KCST_UnconditionalGoto
	RemoveFromParent();
	if(IsValid(bpv__gameInstanceRef__pf))
	{
		bpv__gameInstanceRef__pf->bpf__ShowMainMenu__pf();
	}
	return; // KCST_GotoReturn
}
void UhostMenu_C__pf1343218889::bpf__ExecuteUbergraph_hostMenu__pf_7(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_TextIsEmpty_ReturnValue__pf{};
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
				bpfv__CallFunc_TextIsEmpty_ReturnValue__pf = UKismetTextLibrary::TextIsEmpty(b0l__K2Node_ComponentBoundEvent_Text__pf);
				if (!bpfv__CallFunc_TextIsEmpty_ReturnValue__pf)
				{
					__CurrentState = 5;
					break;
				}
			}
		case 3:
			{
				bpv__serverNameText__pf = b0l__K2Node_ComponentBoundEvent_Text__pf;
			}
		case 4:
			{
				bpv__acceptEnabledx__pfzy = false;
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				bpv__serverNameText__pf = b0l__K2Node_ComponentBoundEvent_Text__pf;
			}
		case 6:
			{
				bpv__acceptEnabledx__pfzy = true;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UhostMenu_C__pf1343218889::bpf__BndEvt__toggleRight_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_hostMenu__pf_0(25);
}
void UhostMenu_C__pf1343218889::bpf__BndEvt__toggleLeft_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_hostMenu__pf_1(21);
}
void UhostMenu_C__pf1343218889::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_hostMenu__pf_2(20);
}
void UhostMenu_C__pf1343218889::bpf__BndEvt__IncreasePlayers_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_hostMenu__pf_3(18);
}
void UhostMenu_C__pf1343218889::bpf__BndEvt__decreasePlayers_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_hostMenu__pf_4(16);
}
void UhostMenu_C__pf1343218889::bpf__BndEvt__Accept_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_hostMenu__pf_5(11);
}
void UhostMenu_C__pf1343218889::bpf__BndEvt__backButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_hostMenu__pf_6(8);
}
void UhostMenu_C__pf1343218889::bpf__BndEvt__UserServerName_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature__pf(/*out*/ FText const& bpp__Text__pf__const)
{
	typedef FText  T__Local__91;
	T__Local__91& bpp__Text__pf = *const_cast<T__Local__91 *>(&bpp__Text__pf__const);
	b0l__K2Node_ComponentBoundEvent_Text__pf = bpp__Text__pf;
	bpf__ExecuteUbergraph_hostMenu__pf_7(1);
}
FText  UhostMenu_C__pf1343218889::bpf__convertNumPlayers__pf()
{
	FText bpp__ReturnValue__pf{};
	FText bpfv__CallFunc_Conv_IntToText_ReturnValue__pf{};
	bpfv__CallFunc_Conv_IntToText_ReturnValue__pf = UKismetTextLibrary::Conv_IntToText(bpv__numPlayers__pf, true, 1, 324);
	bpp__ReturnValue__pf = bpfv__CallFunc_Conv_IntToText_ReturnValue__pf;
	return bpp__ReturnValue__pf;
}
void UhostMenu_C__pf1343218889::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
void UhostMenu_C__pf1343218889::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{77, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{10, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameInstance 
		{81, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{85, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.EditableTextBox 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{42, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{82, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Button 
		{84, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.TextBlock 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/allLevels/gameInfoInstance.gameInfoInstance_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
struct FRegisterHelper__UhostMenu_C__pf1343218889
{
	FRegisterHelper__UhostMenu_C__pf1343218889()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/UI/MainMenu/hostMenu"), &UhostMenu_C__pf1343218889::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UhostMenu_C__pf1343218889 Instance;
};
FRegisterHelper__UhostMenu_C__pf1343218889 FRegisterHelper__UhostMenu_C__pf1343218889::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
