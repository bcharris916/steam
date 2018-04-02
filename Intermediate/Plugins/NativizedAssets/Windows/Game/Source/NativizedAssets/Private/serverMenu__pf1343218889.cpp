#include "NativizedAssets.h"
#include "serverMenu__pf1343218889.h"
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
#include "Runtime/UMG/Public/Components/WidgetSwitcher.h"
#include "Runtime/UMG/Public/Components/WidgetSwitcherSlot.h"
#include "Runtime/UMG/Public/Components/HorizontalBox.h"
#include "Runtime/UMG/Public/Components/HorizontalBoxSlot.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/UMG/Public/Components/ButtonSlot.h"
#include "Runtime/UMG/Public/Components/CircularThrobber.h"
#include "Runtime/UMG/Public/Components/Spacer.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
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
#include "Runtime/Engine/Classes/Engine/Player.h"
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
#include "Runtime/Engine/Public/Net/OnlineBlueprintCallProxyBase.h"
#include "gameInfoInstance__pf533497531.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
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
#include "Runtime/Engine/Classes/Kismet/KismetTextLibrary.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
UserverMenu_C__pf1343218889::UserverMenu_C__pf1343218889(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (UserverMenu_C__pf1343218889::StaticClass() == GetClass()))
	{
		UserverMenu_C__pf1343218889::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__Accept__pf = nullptr;
	bpv__backButton__pf = nullptr;
	bpv__count__pf = nullptr;
	bpv__Loading__pf = nullptr;
	bpv__TextBlock_65__pf = nullptr;
	bpv__TextBlock_67__pf = nullptr;
	bpv__toggleDisplayedWidget__pf = nullptr;
	bpv__toggleLeft__pf = nullptr;
	bpv__toggleRight__pf = nullptr;
	bpv__playModeText__pf = FText::GetEmpty();
	bpv__gameInstanceREF__pf = nullptr;
	bpv__enableLAN__pf = false;
	bpv__sessionfoundx__pfzy = false;
	bpv__playModeHeader__pf = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Choose Play Method."), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("54D799FD42F30608C171688611AE4C0D") /* Key */
	);
	bpv__timerValue__pf = 10;
	bpv__buttonVisibilty__pf = ESlateVisibility::Visible;
	bpv__foundSession__pf = TArray<FBlueprintSessionResult> ();
	bpv__numOfSessionsResult__pf = 20;
	bCanEverTick = false;
	bCanEverPaint = false;
}
void UserverMenu_C__pf1343218889::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
void UserverMenu_C__pf1343218889::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	__Local__0->ComponentDelegateBindings.AddUninitialized(4);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 4);
	auto& __Local__2 = __Local__0->ComponentDelegateBindings[0];
	__Local__2.ComponentPropertyName = FName(TEXT("Accept"));
	__Local__2.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__2.FunctionNameToBind = FName(TEXT("BndEvt__Accept_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__3 = __Local__0->ComponentDelegateBindings[1];
	__Local__3.ComponentPropertyName = FName(TEXT("backButton"));
	__Local__3.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__3.FunctionNameToBind = FName(TEXT("BndEvt__backButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__4 = __Local__0->ComponentDelegateBindings[2];
	__Local__4.ComponentPropertyName = FName(TEXT("toggleRight"));
	__Local__4.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__4.FunctionNameToBind = FName(TEXT("BndEvt__toggleRight_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__5 = __Local__0->ComponentDelegateBindings[3];
	__Local__5.ComponentPropertyName = FName(TEXT("toggleLeft"));
	__Local__5.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__5.FunctionNameToBind = FName(TEXT("BndEvt__toggleLeft_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature"));
	auto __Local__6 = NewObject<UCanvasPanel>(__Local__1, UCanvasPanel::StaticClass(), TEXT("CanvasPanel_0"));
	auto& __Local__7 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__6), UPanelWidget::__PPO__Slots() )));
	__Local__7 = TArray<UPanelSlot*> ();
	__Local__7.Reserve(1);
	auto __Local__8 = NewObject<UCanvasPanelSlot>(__Local__6, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_0"));
	__Local__8->LayoutData.Offsets.Left = -332.960938f;
	__Local__8->LayoutData.Offsets.Top = -236.492981f;
	__Local__8->LayoutData.Offsets.Right = 706.606628f;
	__Local__8->LayoutData.Offsets.Bottom = 286.256256f;
	__Local__8->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.455556);
	__Local__8->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.455556);
	__Local__8->bAutoSize = true;
	__Local__8->Parent = __Local__6;
	auto __Local__9 = NewObject<UBorder>(__Local__1, UBorder::StaticClass(), TEXT("Border_82"));
	__Local__9->BrushColor = FLinearColor(0.000000, 0.000000, 0.000000, 0.500000);
	auto& __Local__10 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__9), UPanelWidget::__PPO__Slots() )));
	__Local__10 = TArray<UPanelSlot*> ();
	__Local__10.Reserve(1);
	auto __Local__11 = NewObject<UBorderSlot>(__Local__9, UBorderSlot::StaticClass(), TEXT("BorderSlot_0"));
	__Local__11->Parent = __Local__9;
	auto __Local__12 = NewObject<UVerticalBox>(__Local__1, UVerticalBox::StaticClass(), TEXT("VerticalBox_0"));
	auto& __Local__13 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__12), UPanelWidget::__PPO__Slots() )));
	__Local__13 = TArray<UPanelSlot*> ();
	__Local__13.Reserve(4);
	auto __Local__14 = NewObject<UVerticalBoxSlot>(__Local__12, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_0"));
	__Local__14->Parent = __Local__12;
	auto __Local__15 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_0"));
	__Local__15->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Find a Match"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("C6B48C39472F809A668663AD8C62FF78") /* Key */
	);
	__Local__15->Font.Size = 64;
	auto& __Local__16 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__15), UTextLayoutWidget::__PPO__Justification() )));
	__Local__16 = ETextJustify::Type::Center;
	__Local__15->Slot = __Local__14;
	__Local__14->Content = __Local__15;
	__Local__13.Add(__Local__14);
	auto __Local__17 = NewObject<UVerticalBoxSlot>(__Local__12, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_15"));
	__Local__17->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__17->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__17->Parent = __Local__12;
	auto __Local__18 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_67"));
	__Local__18->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Choose Play Method"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("D2656BE641ED9025CD9115ACDC240077") /* Key */
	);
	__Local__18->Slot = __Local__17;
	__Local__17->Content = __Local__18;
	__Local__13.Add(__Local__17);
	auto __Local__19 = NewObject<UVerticalBoxSlot>(__Local__12, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_13"));
	__Local__19->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__19->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__19->Parent = __Local__12;
	auto __Local__20 = NewObject<UWidgetSwitcher>(__Local__1, UWidgetSwitcher::StaticClass(), TEXT("toggleDisplayedWidget"));
	auto& __Local__21 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__20), UPanelWidget::__PPO__Slots() )));
	__Local__21 = TArray<UPanelSlot*> ();
	__Local__21.Reserve(3);
	auto __Local__22 = NewObject<UWidgetSwitcherSlot>(__Local__20, UWidgetSwitcherSlot::StaticClass(), TEXT("WidgetSwitcherSlot_0"));
	__Local__22->Parent = __Local__20;
	auto __Local__23 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("playMode"));
	auto& __Local__24 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__23), UPanelWidget::__PPO__Slots() )));
	__Local__24 = TArray<UPanelSlot*> ();
	__Local__24.Reserve(3);
	auto __Local__25 = NewObject<UHorizontalBoxSlot>(__Local__23, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_0"));
	__Local__25->Parent = __Local__23;
	auto __Local__26 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("toggleLeft"));
	auto& __Local__27 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__26->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__27 = FLinearColor(1.000000, 0.544528, 0.118760, 1.000000);
	auto& __Local__28 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__26), UPanelWidget::__PPO__Slots() )));
	__Local__28 = TArray<UPanelSlot*> ();
	__Local__28.Reserve(1);
	auto __Local__29 = NewObject<UButtonSlot>(__Local__26, UButtonSlot::StaticClass(), TEXT("ButtonSlot_0"));
	__Local__29->Parent = __Local__26;
	auto __Local__30 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_64"));
	__Local__30->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("<"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("65B1A0954043F8E1DBD42BA3F54150FC") /* Key */
	);
	__Local__30->Slot = __Local__29;
	__Local__29->Content = __Local__30;
	__Local__28.Add(__Local__29);
	__Local__26->Slot = __Local__25;
	__Local__25->Content = __Local__26;
	__Local__24.Add(__Local__25);
	auto __Local__31 = NewObject<UHorizontalBoxSlot>(__Local__23, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_1"));
	__Local__31->Padding.Left = 25.000000f;
	__Local__31->Padding.Top = 25.000000f;
	__Local__31->Padding.Right = 25.000000f;
	__Local__31->Padding.Bottom = 25.000000f;
	__Local__31->Parent = __Local__23;
	auto __Local__32 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_65"));
	__Local__32->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("LAN"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("F235B16147522F7B3F8A629CE4CE8E42") /* Key */
	);
	__Local__32->Font.Size = 36;
	__Local__32->Slot = __Local__31;
	__Local__31->Content = __Local__32;
	__Local__24.Add(__Local__31);
	auto __Local__33 = NewObject<UHorizontalBoxSlot>(__Local__23, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_2"));
	__Local__33->Parent = __Local__23;
	auto __Local__34 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("toggleRight"));
	auto& __Local__35 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__34->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__35 = FLinearColor(1.000000, 0.544528, 0.118760, 1.000000);
	auto& __Local__36 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__34), UPanelWidget::__PPO__Slots() )));
	__Local__36 = TArray<UPanelSlot*> ();
	__Local__36.Reserve(1);
	auto __Local__37 = NewObject<UButtonSlot>(__Local__34, UButtonSlot::StaticClass(), TEXT("ButtonSlot_1"));
	__Local__37->Parent = __Local__34;
	auto __Local__38 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_66"));
	__Local__38->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT(">"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("0372328A41742D926FBCFD8527090486") /* Key */
	);
	__Local__38->Slot = __Local__37;
	__Local__37->Content = __Local__38;
	__Local__36.Add(__Local__37);
	__Local__34->Slot = __Local__33;
	__Local__33->Content = __Local__34;
	__Local__24.Add(__Local__33);
	__Local__23->Slot = __Local__22;
	__Local__22->Content = __Local__23;
	__Local__21.Add(__Local__22);
	auto __Local__39 = NewObject<UWidgetSwitcherSlot>(__Local__20, UWidgetSwitcherSlot::StaticClass(), TEXT("WidgetSwitcherSlot_1"));
	__Local__39->Parent = __Local__20;
	auto __Local__40 = NewObject<UCircularThrobber>(__Local__1, UCircularThrobber::StaticClass(), TEXT("Loading"));
	__Local__40->NumberOfPieces = 8;
	__Local__40->Radius = 44.000000f;
	__Local__40->Slot = __Local__39;
	__Local__39->Content = __Local__40;
	__Local__21.Add(__Local__39);
	auto __Local__41 = NewObject<UWidgetSwitcherSlot>(__Local__20, UWidgetSwitcherSlot::StaticClass(), TEXT("WidgetSwitcherSlot_2"));
	__Local__41->Parent = __Local__20;
	auto __Local__42 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("count"));
	__Local__42->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("10"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("FCB9CEFA499C1502BF7D139F16DD99E1") /* Key */
	);
	__Local__42->Slot = __Local__41;
	__Local__41->Content = __Local__42;
	__Local__21.Add(__Local__41);
	__Local__20->Slot = __Local__19;
	__Local__19->Content = __Local__20;
	__Local__13.Add(__Local__19);
	auto __Local__43 = NewObject<UVerticalBoxSlot>(__Local__12, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_16"));
	__Local__43->Parent = __Local__12;
	auto __Local__44 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("HorizontalBox_2"));
	auto& __Local__45 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__44), UPanelWidget::__PPO__Slots() )));
	__Local__45 = TArray<UPanelSlot*> ();
	__Local__45.Reserve(3);
	auto __Local__46 = NewObject<UHorizontalBoxSlot>(__Local__44, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_0"));
	__Local__46->Parent = __Local__44;
	auto __Local__47 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("backButton"));
	auto& __Local__48 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__47->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__48 = FLinearColor(1.000000, 0.544528, 0.118760, 1.000000);
	auto& __Local__49 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__47), UPanelWidget::__PPO__Slots() )));
	__Local__49 = TArray<UPanelSlot*> ();
	__Local__49.Reserve(1);
	auto __Local__50 = NewObject<UButtonSlot>(__Local__47, UButtonSlot::StaticClass(), TEXT("ButtonSlot_0"));
	__Local__50->Parent = __Local__47;
	auto __Local__51 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_86"));
	__Local__51->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Back"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("0BC94A7E418039DA6356A68568A7E9EF") /* Key */
	);
	__Local__51->Slot = __Local__50;
	__Local__50->Content = __Local__51;
	__Local__49.Add(__Local__50);
	__Local__47->Slot = __Local__46;
	__Local__46->Content = __Local__47;
	__Local__45.Add(__Local__46);
	auto __Local__52 = NewObject<UHorizontalBoxSlot>(__Local__44, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_3"));
	__Local__52->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__52->Parent = __Local__44;
	auto __Local__53 = NewObject<USpacer>(__Local__1, USpacer::StaticClass(), TEXT("Spacer_0"));
	__Local__53->Slot = __Local__52;
	__Local__52->Content = __Local__53;
	__Local__45.Add(__Local__52);
	auto __Local__54 = NewObject<UHorizontalBoxSlot>(__Local__44, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_2"));
	__Local__54->Parent = __Local__44;
	auto __Local__55 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("Accept"));
	auto& __Local__56 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__55->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__56 = FLinearColor(1.000000, 0.544528, 0.118760, 1.000000);
	auto& __Local__57 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__55), UPanelWidget::__PPO__Slots() )));
	__Local__57 = TArray<UPanelSlot*> ();
	__Local__57.Reserve(1);
	auto __Local__58 = NewObject<UButtonSlot>(__Local__55, UButtonSlot::StaticClass(), TEXT("ButtonSlot_1"));
	__Local__58->Parent = __Local__55;
	auto __Local__59 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_88"));
	__Local__59->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Accept"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("255E81FE4B1D0C7899A3D4A173AE1A43") /* Key */
	);
	__Local__59->Slot = __Local__58;
	__Local__58->Content = __Local__59;
	__Local__57.Add(__Local__58);
	__Local__55->Slot = __Local__54;
	__Local__54->Content = __Local__55;
	__Local__45.Add(__Local__54);
	__Local__44->Slot = __Local__43;
	__Local__43->Content = __Local__44;
	__Local__13.Add(__Local__43);
	__Local__12->Slot = __Local__11;
	__Local__11->Content = __Local__12;
	__Local__10.Add(__Local__11);
	__Local__9->Slot = __Local__8;
	__Local__8->Content = __Local__9;
	__Local__7.Add(__Local__8);
	__Local__1->RootWidget = __Local__6;
}
void UserverMenu_C__pf1343218889::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__60;
	SlotNames.Append(__Local__60);
}
void UserverMenu_C__pf1343218889::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__61;
	TArray<FDelegateRuntimeBinding>  __Local__62;
	__Local__62.AddUninitialized(4);
	FDelegateRuntimeBinding::StaticStruct()->InitializeStruct(__Local__62.GetData(), 4);
	auto& __Local__63 = __Local__62[0];
	__Local__63.ObjectName = FString(TEXT("TextBlock_67"));
	__Local__63.PropertyName = FName(TEXT("Text"));
	auto& __Local__64 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__63.SourcePath), FDynamicPropertyPath::__PPO__Segments() )));
	__Local__64 = TArray<FPropertyPathSegment> ();
	__Local__64.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__64.GetData(), 1);
	auto& __Local__65 = __Local__64[0];
	__Local__65.Name = FName(TEXT("playModeHeader"));
	__Local__63.Kind = EBindingKind::Property;
	auto& __Local__66 = __Local__62[1];
	__Local__66.ObjectName = FString(TEXT("TextBlock_65"));
	__Local__66.PropertyName = FName(TEXT("Text"));
	auto& __Local__67 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__66.SourcePath), FDynamicPropertyPath::__PPO__Segments() )));
	__Local__67 = TArray<FPropertyPathSegment> ();
	__Local__67.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__67.GetData(), 1);
	auto& __Local__68 = __Local__67[0];
	__Local__68.Name = FName(TEXT("playModeText"));
	__Local__66.Kind = EBindingKind::Property;
	auto& __Local__69 = __Local__62[2];
	__Local__69.ObjectName = FString(TEXT("backButton"));
	__Local__69.PropertyName = FName(TEXT("Visibility"));
	auto& __Local__70 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__69.SourcePath), FDynamicPropertyPath::__PPO__Segments() )));
	__Local__70 = TArray<FPropertyPathSegment> ();
	__Local__70.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__70.GetData(), 1);
	auto& __Local__71 = __Local__70[0];
	__Local__71.Name = FName(TEXT("buttonVisibilty"));
	__Local__69.Kind = EBindingKind::Property;
	auto& __Local__72 = __Local__62[3];
	__Local__72.ObjectName = FString(TEXT("count"));
	__Local__72.PropertyName = FName(TEXT("Text"));
	__Local__72.FunctionName = FName(TEXT("Get_count_Text_0"));
	auto& __Local__73 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__72.SourcePath), FDynamicPropertyPath::__PPO__Segments() )));
	__Local__73 = TArray<FPropertyPathSegment> ();
	__Local__73.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__73.GetData(), 1);
	auto& __Local__74 = __Local__73[0];
	__Local__74.Name = FName(TEXT("convertCountdown"));
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), false, CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UserverMenu_C__pf1343218889::StaticClass())->MiscConvertedSubobjects[0]), __Local__61, __Local__62);
}
void UserverMenu_C__pf1343218889::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UserverMenu_C__pf1343218889::bpf__ExecuteUbergraph_serverMenu__pf_0(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue2__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue2__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpf__handleCountdown__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 27:
			{
				if (!b0l__Temp_bool_IsClosed_Variable__pf)
				{
					__CurrentState = 28;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 28:
			{
				b0l__Temp_bool_IsClosed_Variable__pf = true;
			}
		case 29:
			{
				b0l__Temp_int_Variable__pf = 0;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 30:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable__pf = true;
			}
		case 31:
			{
				if (!false)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 32:
			{
				b0l__Temp_bool_IsClosed_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 33:
			{
				if (!b0l__Temp_bool_Has_Been_Initd_Variable__pf)
				{
					__CurrentState = 30;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 34:
			{
				__StateStack.Push(27);
				__CurrentState = 33;
				break;
			}
		case 44:
			{
				__StateStack.Push(45);
				__CurrentState = 34;
				break;
			}
		case 45:
			{
				bpfv__CallFunc_Less_IntInt_ReturnValue2__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Variable__pf, 10);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 46:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue2__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Variable__pf, 1);
				b0l__Temp_int_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue2__pf;
				__CurrentState = 1;
				break;
			}
		case 69:
			{
				__CurrentState = 70;
				break;
			}
		case 70:
			{
				if (!bpv__sessionfoundx__pfzy)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				__CurrentState = 44;
				break;
			}
		case 71:
			{
				__CurrentState = 29;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UserverMenu_C__pf1343218889::bpf__ExecuteUbergraph_serverMenu__pf_1(int32 bpp__EntryPoint__pf)
{
	FTimerHandle bpfv__CallFunc_K2_SetTimerDelegate_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 67);
	// optimized KCST_UnconditionalGoto
	bpv__availableSession__pf = b0l__K2Node_CustomEvent_sessionToJoin__pf;
	// optimized KCST_UnconditionalGoto
	b0l__K2Node_CreateDelegate_OutputDelegate2__pf.BindUFunction(this,FName(TEXT("sessionTimer")));
	bpfv__CallFunc_K2_SetTimerDelegate_ReturnValue__pf = UKismetSystemLibrary::K2_SetTimerDelegate(b0l__K2Node_CreateDelegate_OutputDelegate2__pf, 1.000000, false);
	bpv__playModeHeader__pf = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Match Available.  Join the Match?"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("67FE3AE74863C2B22C54D38FC54C3D39") /* Key */
	);
	return; //KCST_EndOfThread
}
void UserverMenu_C__pf1343218889::bpf__ExecuteUbergraph_serverMenu__pf_2(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 35:
			{
				bpv__buttonVisibilty__pf = ESlateVisibility::Visible;
			}
		case 36:
			{
				bpv__playModeHeader__pf = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Searching..."), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("3D8F08684296E39F94F2A4B591B20AF9") /* Key */
	);
			}
		case 37:
			{
				if(IsValid(bpv__toggleDisplayedWidget__pf))
				{
					bpv__toggleDisplayedWidget__pf->SetActiveWidgetIndex(1);
				}
			}
		case 38:
			{
				FCustomThunkTemplates::Array_Clear(bpv__foundSession__pf);
			}
		case 39:
			{
				bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf = UUserWidget::GetOwningPlayer();
				b0l__CallFunc_FindSessions_ReturnValue__pf = UFindSessionsCallbackProxy::FindSessions(this, bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf, bpv__numOfSessionsResult__pf, bpv__enableLAN__pf);
			}
		case 40:
			{
				b0l__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_FindSessions_ReturnValue__pf);
				if (!b0l__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 41:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate__pf.BindUFunction(this,FName(TEXT("OnSuccess_06B36603493EC14C3BD9AA8126C7257E")));
				if(IsValid(b0l__CallFunc_FindSessions_ReturnValue__pf))
				{
					b0l__CallFunc_FindSessions_ReturnValue__pf->OnSuccess.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate__pf);
				}
			}
		case 42:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate3__pf.BindUFunction(this,FName(TEXT("OnFailure_06B36603493EC14C3BD9AA8126C7257E")));
				if(IsValid(b0l__CallFunc_FindSessions_ReturnValue__pf))
				{
					b0l__CallFunc_FindSessions_ReturnValue__pf->OnFailure.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate3__pf);
				}
			}
		case 43:
			{
				if(IsValid(b0l__CallFunc_FindSessions_ReturnValue__pf))
				{
					b0l__CallFunc_FindSessions_ReturnValue__pf->Activate();
				}
				__CurrentState = -1;
				break;
			}
		case 63:
			{
				__CurrentState = 64;
				break;
			}
		case 64:
			{
				if (!bpv__sessionfoundx__pfzy)
				{
					__CurrentState = 35;
					break;
				}
			}
		case 65:
			{
				RemoveFromParent();
			}
		case 66:
			{
				if(IsValid(bpv__gameInstanceREF__pf))
				{
					bpv__gameInstanceREF__pf->bpf__joinServer__pf(bpv__availableSession__pf);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UserverMenu_C__pf1343218889::bpf__ExecuteUbergraph_serverMenu__pf_3(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_GetMaxPlayers_ReturnValue__pf{};
	int32 bpfv__CallFunc_GetCurrentPlayers_ReturnValue__pf{};
	bool bpfv__CallFunc_NotEqual_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 2:
			{
				__CurrentState = 3;
				break;
			}
		case 3:
			{
				b0l__Temp_struct_Variable__pf = b0l__K2Node_CustomEvent_Results2__pf;
			}
		case 4:
			{
				bpv__playModeHeader__pf = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Search failed. Please try again..."), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("3E9977C14B5856BE446CEBAF7323462F") /* Key */
	);
			}
		case 5:
			{
				bpv__buttonVisibilty__pf = ESlateVisibility::Visible;
			}
		case 6:
			{
				if(IsValid(bpv__toggleDisplayedWidget__pf))
				{
					bpv__toggleDisplayedWidget__pf->SetActiveWidgetIndex(0);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 7:
			{
				__CurrentState = 8;
				break;
			}
		case 8:
			{
				b0l__Temp_struct_Variable__pf = b0l__K2Node_CustomEvent_Results__pf;
			}
		case 9:
			{
				bpv__foundSession__pf = b0l__Temp_struct_Variable__pf;
			}
		case 10:
			{
				b0l__Temp_bool_True_if_break_was_hit_Variable__pf = false;
			}
		case 11:
			{
				b0l__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 12:
			{
				b0l__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 13:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__foundSession__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(b0l__Temp_bool_True_if_break_was_hit_Variable__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue__pf, bpfv__CallFunc_Less_IntInt_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = 19;
					break;
				}
			}
		case 14:
			{
				b0l__Temp_int_Array_Index_Variable__pf = b0l__Temp_int_Loop_Counter_Variable__pf;
			}
		case 15:
			{
				__StateStack.Push(24);
			}
		case 16:
			{
				FCustomThunkTemplates::Array_Get(bpv__foundSession__pf, b0l__Temp_int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_GetMaxPlayers_ReturnValue__pf = UFindSessionsCallbackProxy::GetMaxPlayers(b0l__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_GetCurrentPlayers_ReturnValue__pf = UFindSessionsCallbackProxy::GetCurrentPlayers(b0l__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_NotEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::NotEqual_IntInt(bpfv__CallFunc_GetCurrentPlayers_ReturnValue__pf, bpfv__CallFunc_GetMaxPlayers_ReturnValue__pf);
				if (!bpfv__CallFunc_NotEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 17:
			{
				bpv__sessionfoundx__pfzy = true;
			}
		case 18:
			{
				FCustomThunkTemplates::Array_Get(bpv__foundSession__pf, b0l__Temp_int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				bpv__availableSession__pf = b0l__CallFunc_Array_Get_Item__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 19:
			{
				if (!bpv__sessionfoundx__pfzy)
				{
					__CurrentState = 23;
					break;
				}
			}
		case 20:
			{
				bpv__buttonVisibilty__pf = ESlateVisibility::Visible;
			}
		case 21:
			{
				if(IsValid(bpv__toggleDisplayedWidget__pf))
				{
					bpv__toggleDisplayedWidget__pf->SetActiveWidgetIndex(2);
				}
			}
		case 22:
			{
				bpf__displaySession__pf(bpv__availableSession__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 23:
			{
				bpv__playModeHeader__pf = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("No session found.  Please try again."), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("F54B14624D7B28ECE4538DAE9F57FD91") /* Key */
	);
				__CurrentState = 5;
				break;
			}
		case 24:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 13;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UserverMenu_C__pf1343218889::bpf__ExecuteUbergraph_serverMenu__pf_4(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 60);
	// optimized KCST_UnconditionalGoto
	RemoveFromParent();
	if(IsValid(bpv__gameInstanceREF__pf))
	{
		bpv__gameInstanceREF__pf->bpf__ShowMainMenu__pf();
	}
	return; //KCST_EndOfThread
}
void UserverMenu_C__pf1343218889::bpf__ExecuteUbergraph_serverMenu__pf_5(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 56);
	// optimized KCST_UnconditionalGoto
	if (!bpv__enableLAN__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	bpv__enableLAN__pf = false;
	bpv__playModeText__pf = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Steam"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("0A350CFD43DC4718B22A57982062342C") /* Key */
	);
	return; //KCST_EndOfThread
}
void UserverMenu_C__pf1343218889::bpf__ExecuteUbergraph_serverMenu__pf_6(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 52:
			{
				__CurrentState = 53;
				break;
			}
		case 53:
			{
				if (!bpv__enableLAN__pf)
				{
					__CurrentState = 54;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 54:
			{
				bpv__enableLAN__pf = true;
			}
		case 55:
			{
				bpv__playModeText__pf = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("LAN"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("6F7282CB4A42296D6177AE8AC14AAD10") /* Key */
	);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UserverMenu_C__pf1343218889::bpf__ExecuteUbergraph_serverMenu__pf_7(int32 bpp__EntryPoint__pf)
{
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 47);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetGameInstance_ReturnValue__pf = UGameplayStatics::GetGameInstance(this);
	b0l__K2Node_DynamicCast_AsGame_Info_Instance__pf = Cast<UgameInfoInstance_C__pf533497531>(bpfv__CallFunc_GetGameInstance_ReturnValue__pf);
	b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsGame_Info_Instance__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	bpv__gameInstanceREF__pf = b0l__K2Node_DynamicCast_AsGame_Info_Instance__pf;
	bpv__playModeText__pf = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("LAN"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("6F7282CB4A42296D6177AE8AC14AAD10") /* Key */
	);
	bpv__enableLAN__pf = true;
	return; //KCST_EndOfThread
}
void UserverMenu_C__pf1343218889::bpf__resetTimer__pf()
{
	bpf__ExecuteUbergraph_serverMenu__pf_0(71);
}
void UserverMenu_C__pf1343218889::bpf__sessionTimer__pf()
{
	bpf__ExecuteUbergraph_serverMenu__pf_0(69);
}
void UserverMenu_C__pf1343218889::bpf__displaySession__pf(FBlueprintSessionResult bpp__sessionToJoin__pf)
{
	b0l__K2Node_CustomEvent_sessionToJoin__pf = bpp__sessionToJoin__pf;
	bpf__ExecuteUbergraph_serverMenu__pf_1(67);
}
void UserverMenu_C__pf1343218889::bpf__BndEvt__Accept_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_serverMenu__pf_2(63);
}
void UserverMenu_C__pf1343218889::bpf__BndEvt__backButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_serverMenu__pf_4(60);
}
void UserverMenu_C__pf1343218889::bpf__BndEvt__toggleRight_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_serverMenu__pf_5(56);
}
void UserverMenu_C__pf1343218889::bpf__BndEvt__toggleLeft_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_serverMenu__pf_6(52);
}
void UserverMenu_C__pf1343218889::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_serverMenu__pf_7(47);
}
void UserverMenu_C__pf1343218889::bpf__OnSuccess_06B36603493EC14C3BD9AA8126C7257E__pf(/*out*/ TArray<FBlueprintSessionResult> const& bpp__Results__pf__const)
{
	typedef TArray<FBlueprintSessionResult>  T__Local__75;
	T__Local__75& bpp__Results__pf = *const_cast<T__Local__75 *>(&bpp__Results__pf__const);
	b0l__K2Node_CustomEvent_Results__pf = bpp__Results__pf;
	bpf__ExecuteUbergraph_serverMenu__pf_3(7);
}
void UserverMenu_C__pf1343218889::bpf__OnFailure_06B36603493EC14C3BD9AA8126C7257E__pf(/*out*/ TArray<FBlueprintSessionResult> const& bpp__Results__pf__const)
{
	typedef TArray<FBlueprintSessionResult>  T__Local__76;
	T__Local__76& bpp__Results__pf = *const_cast<T__Local__76 *>(&bpp__Results__pf__const);
	b0l__K2Node_CustomEvent_Results2__pf = bpp__Results__pf;
	bpf__ExecuteUbergraph_serverMenu__pf_3(2);
}
void UserverMenu_C__pf1343218889::bpf__handleCountdown__pf()
{
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpv__timerValue__pf, 1);
				bpv__timerValue__pf = bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf;
			}
		case 2:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__timerValue__pf, 0);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				bpv__sessionfoundx__pfzy = false;
			}
		case 4:
			{
				bpv__timerValue__pf = 10;
			}
		case 5:
			{
				bpv__buttonVisibilty__pf = ESlateVisibility::Visible;
			}
		case 6:
			{
				bpv__playModeHeader__pf = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Choose Play Method."), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("F985D0C9499A174DF9ED5081A0D578A9") /* Key */
	);
			}
		case 7:
			{
				if(IsValid(bpv__toggleDisplayedWidget__pf))
				{
					bpv__toggleDisplayedWidget__pf->SetActiveWidgetIndex(0);
				}
			}
		case 8:
			{
				bpf__resetTimer__pf();
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
FText  UserverMenu_C__pf1343218889::bpf__convertCountdown__pf()
{
	FText bpp__ReturnValue__pf{};
	FText bpfv__CallFunc_Conv_IntToText_ReturnValue__pf{};
	bpfv__CallFunc_Conv_IntToText_ReturnValue__pf = UKismetTextLibrary::Conv_IntToText(bpv__timerValue__pf, true, 1, 324);
	bpp__ReturnValue__pf = bpfv__CallFunc_Conv_IntToText_ReturnValue__pf;
	return bpp__ReturnValue__pf;
}
void UserverMenu_C__pf1343218889::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
void UserverMenu_C__pf1343218889::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{77, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{10, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{37, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/OnlineSubsystemUtils.BlueprintSessionResult 
		{90, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/OnlineSubsystemUtils.BlueprintFindSessionsResultDelegate__DelegateSignature 
		{91, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/Engine.TimerDynamicDelegate__DelegateSignature 
		{92, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.TimerHandle 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{93, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameInstance 
		{78, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/UMG.ESlateVisibility 
		{94, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.WidgetSwitcher 
		{79, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{42, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{81, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{82, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Button 
		{84, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.TextBlock 
		{89, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.CircularThrobber 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/allLevels/gameInfoInstance.gameInfoInstance_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
struct FRegisterHelper__UserverMenu_C__pf1343218889
{
	FRegisterHelper__UserverMenu_C__pf1343218889()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/UI/MainMenu/serverMenu"), &UserverMenu_C__pf1343218889::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UserverMenu_C__pf1343218889 Instance;
};
FRegisterHelper__UserverMenu_C__pf1343218889 FRegisterHelper__UserverMenu_C__pf1343218889::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
