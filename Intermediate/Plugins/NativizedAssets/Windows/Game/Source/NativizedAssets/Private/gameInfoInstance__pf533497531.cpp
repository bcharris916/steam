#include "NativizedAssets.h"
#include "gameInfoInstance__pf533497531.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
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
#include "Runtime/Engine/Classes/Engine/Font.h"
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
#include "mainMenu__pf1343218889.h"
#include "hostMenu__pf1343218889.h"
#include "serverMenu__pf1343218889.h"
#include "optionsMenu__pf1343218889.h"
#include "CreateSessionCallbackProxy.h"
#include "JoinSessionCallbackProxy.h"
#include "loadingScreen__pf1207061625.h"
#include "DestroySessionCallbackProxy.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "PlayerInfo__pf533497531.h"
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
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "playerSaveGame__pf533497531.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Kismet/KismetTextLibrary.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/Engine/Classes/Engine/Texture2DDynamic.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/UMG/Public/Components/EditableTextBox.h"
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
UgameInfoInstance_C__pf533497531::UgameInfoInstance_C__pf533497531(const FObjectInitializer& ObjectInitializer) : Super()
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (UgameInfoInstance_C__pf533497531::StaticClass() == GetClass()))
	{
		UgameInfoInstance_C__pf533497531::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__mainMenuWB__pf = nullptr;
	bpv__hostMenuWB__pf = nullptr;
	bpv__optionsMenuWB__pf = nullptr;
	bpv__maxPlayers__pf = 0;
	bpv__serverName__pf = FText::GetEmpty();
	bpv__loadingScreenWB__pf = nullptr;
	bpv__playerSettingsSave__pf = FString(TEXT("PlayerSettingsSave"));
	bpv__createdSaveFilex__pfzy = false;
}
void UgameInfoInstance_C__pf533497531::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
void UgameInfoInstance_C__pf533497531::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(UmainMenu_C__pf1343218889::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UhostMenu_C__pf1343218889::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UserverMenu_C__pf1343218889::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UoptionsMenu_C__pf1343218889::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UloadingScreen_C__pf1207061625::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
}
void UgameInfoInstance_C__pf533497531::bpf__ExecuteUbergraph_gameInfoInstance__pf_0(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue4__pf{};
	UoptionsMenu_C__pf1343218889* bpfv__CallFunc_Create_ReturnValue4__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue3__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 2:
			{
				if(IsValid(bpv__optionsMenuWB__pf))
				{
					bpv__optionsMenuWB__pf->bpv__welcomeMessageVis__pf = ESlateVisibility::Visible;
				}
				__CurrentState = -1;
				break;
			}
		case 19:
			{
				__CurrentState = 20;
				break;
			}
		case 20:
			{
				bpfv__CallFunc_IsValid_ReturnValue3__pf = UKismetSystemLibrary::IsValid(bpv__optionsMenuWB__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue3__pf)
				{
					__CurrentState = 23;
					break;
				}
			}
		case 21:
			{
				if(IsValid(bpv__optionsMenuWB__pf))
				{
					bpv__optionsMenuWB__pf->UUserWidget::AddToViewport(0);
				}
			}
		case 22:
			{
				if (!bpv__createdSaveFilex__pfzy)
				{
					__CurrentState = 2;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 23:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue4__pf = UGameplayStatics::GetPlayerController(this, 0);
				bpfv__CallFunc_Create_ReturnValue4__pf = CastChecked<UoptionsMenu_C__pf1343218889>(UWidgetBlueprintLibrary::Create(this, UoptionsMenu_C__pf1343218889::StaticClass(), bpfv__CallFunc_GetPlayerController_ReturnValue4__pf), ECastCheckedType::NullAllowed);
			}
		case 24:
			{
				bpv__optionsMenuWB__pf = bpfv__CallFunc_Create_ReturnValue4__pf;
				__CurrentState = 21;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UgameInfoInstance_C__pf533497531::bpf__ExecuteUbergraph_gameInfoInstance__pf_1(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_DoesSaveGameExist_ReturnValue__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue8__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 59:
			{
				__CurrentState = 60;
				break;
			}
		case 60:
			{
				bpfv__CallFunc_DoesSaveGameExist_ReturnValue__pf = UGameplayStatics::DoesSaveGameExist(bpv__playerSettingsSave__pf, 0);
			}
		case 61:
			{
				if (!bpfv__CallFunc_DoesSaveGameExist_ReturnValue__pf)
				{
					__CurrentState = 64;
					break;
				}
			}
		case 62:
			{
				bpf__ShowMainMenu__pf();
			}
		case 63:
			{
				bpv__createdSaveFilex__pfzy = true;
				__CurrentState = -1;
				break;
			}
		case 64:
			{
				bpf__showOptionsMenu__pf();
			}
		case 65:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue8__pf = UGameplayStatics::GetPlayerController(this, 0);
				if(IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue8__pf))
				{
					bpfv__CallFunc_GetPlayerController_ReturnValue8__pf->bShowMouseCursor = true;
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UgameInfoInstance_C__pf533497531::bpf__ExecuteUbergraph_gameInfoInstance__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 53);
	// optimized KCST_UnconditionalGoto
	b0l__CallFunc_DestroySession_ReturnValue__pf = UDestroySessionCallbackProxy::DestroySession(this, b0l__K2Node_CustomEvent_playerController__pf);
	b0l__CallFunc_IsValid_ReturnValue7__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_DestroySession_ReturnValue__pf);
	if (!b0l__CallFunc_IsValid_ReturnValue7__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	b0l__K2Node_CreateDelegate_OutputDelegate3__pf.BindUFunction(this,FName(TEXT("OnSuccess_D98D5DF945E741F55AB9ADBFAD37ABF0")));
	if(IsValid(b0l__CallFunc_DestroySession_ReturnValue__pf))
	{
		b0l__CallFunc_DestroySession_ReturnValue__pf->OnSuccess.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate3__pf);
	}
	b0l__K2Node_CreateDelegate_OutputDelegate2__pf.BindUFunction(this,FName(TEXT("OnFailure_D98D5DF945E741F55AB9ADBFAD37ABF0")));
	if(IsValid(b0l__CallFunc_DestroySession_ReturnValue__pf))
	{
		b0l__CallFunc_DestroySession_ReturnValue__pf->OnFailure.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate2__pf);
	}
	if(IsValid(b0l__CallFunc_DestroySession_ReturnValue__pf))
	{
		b0l__CallFunc_DestroySession_ReturnValue__pf->Activate();
	}
	return; // KCST_GotoReturn
}
void UgameInfoInstance_C__pf533497531::bpf__ExecuteUbergraph_gameInfoInstance__pf_3(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue5__pf{};
	check(bpp__EntryPoint__pf == 27);
	// optimized KCST_UnconditionalGoto
	bpv__maxPlayers__pf = b0l__K2Node_CustomEvent_numberPlayers__pf;
	bpv__serverName__pf = b0l__K2Node_CustomEvent_serverName__pf;
	bpf__showLoadingScreen__pf();
	bpfv__CallFunc_GetPlayerController_ReturnValue5__pf = UGameplayStatics::GetPlayerController(this, 0);
	b0l__CallFunc_CreateSession_ReturnValue__pf = UCreateSessionCallbackProxy::CreateSession(this, bpfv__CallFunc_GetPlayerController_ReturnValue5__pf, bpv__maxPlayers__pf, b0l__K2Node_CustomEvent_enableLAN___pf);
	b0l__CallFunc_IsValid_ReturnValue4__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_CreateSession_ReturnValue__pf);
	if (!b0l__CallFunc_IsValid_ReturnValue4__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	b0l__K2Node_CreateDelegate_OutputDelegate5__pf.BindUFunction(this,FName(TEXT("OnSuccess_15496AFC4A06C70CDE0628BE1A91E1E9")));
	if(IsValid(b0l__CallFunc_CreateSession_ReturnValue__pf))
	{
		b0l__CallFunc_CreateSession_ReturnValue__pf->OnSuccess.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate5__pf);
	}
	b0l__K2Node_CreateDelegate_OutputDelegate6__pf.BindUFunction(this,FName(TEXT("OnFailure_15496AFC4A06C70CDE0628BE1A91E1E9")));
	if(IsValid(b0l__CallFunc_CreateSession_ReturnValue__pf))
	{
		b0l__CallFunc_CreateSession_ReturnValue__pf->OnFailure.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate6__pf);
	}
	if(IsValid(b0l__CallFunc_CreateSession_ReturnValue__pf))
	{
		b0l__CallFunc_CreateSession_ReturnValue__pf->Activate();
	}
	return; // KCST_GotoReturn
}
void UgameInfoInstance_C__pf533497531::bpf__ExecuteUbergraph_gameInfoInstance__pf_4(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 52);
	return; // KCST_GotoReturn
}
void UgameInfoInstance_C__pf533497531::bpf__ExecuteUbergraph_gameInfoInstance__pf_5(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 49);
	// optimized KCST_UnconditionalGoto
	if (!b0l__K2Node_Event_bIsServer__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	return; // KCST_GotoReturn
}
void UgameInfoInstance_C__pf533497531::bpf__ExecuteUbergraph_gameInfoInstance__pf_6(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	UmainMenu_C__pf1343218889* bpfv__CallFunc_Create_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 6:
			{
				if(IsValid(bpv__mainMenuWB__pf))
				{
					bpv__mainMenuWB__pf->UUserWidget::AddToViewport(0);
				}
			}
		case 7:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				if(IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue__pf))
				{
					bpfv__CallFunc_GetPlayerController_ReturnValue__pf->bShowMouseCursor = true;
				}
				__CurrentState = -1;
				break;
			}
		case 8:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__mainMenuWB__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = 9;
					break;
				}
				__CurrentState = 6;
				break;
			}
		case 9:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				bpfv__CallFunc_Create_ReturnValue__pf = CastChecked<UmainMenu_C__pf1343218889>(UWidgetBlueprintLibrary::Create(this, UmainMenu_C__pf1343218889::StaticClass(), bpfv__CallFunc_GetPlayerController_ReturnValue__pf), ECastCheckedType::NullAllowed);
			}
		case 10:
			{
				bpv__mainMenuWB__pf = bpfv__CallFunc_Create_ReturnValue__pf;
				__CurrentState = 6;
				break;
			}
		case 51:
			{
				__CurrentState = 8;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UgameInfoInstance_C__pf533497531::bpf__ExecuteUbergraph_gameInfoInstance__pf_7(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue7__pf{};
	UloadingScreen_C__pf1207061625* bpfv__CallFunc_Create_ReturnValue5__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue6__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 36:
			{
				__CurrentState = 37;
				break;
			}
		case 37:
			{
				bpfv__CallFunc_IsValid_ReturnValue6__pf = UKismetSystemLibrary::IsValid(bpv__loadingScreenWB__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue6__pf)
				{
					__CurrentState = 39;
					break;
				}
			}
		case 38:
			{
				if(IsValid(bpv__loadingScreenWB__pf))
				{
					bpv__loadingScreenWB__pf->UUserWidget::AddToViewport(0);
				}
				__CurrentState = -1;
				break;
			}
		case 39:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue7__pf = UGameplayStatics::GetPlayerController(this, 0);
				bpfv__CallFunc_Create_ReturnValue5__pf = CastChecked<UloadingScreen_C__pf1207061625>(UWidgetBlueprintLibrary::Create(this, UloadingScreen_C__pf1207061625::StaticClass(), bpfv__CallFunc_GetPlayerController_ReturnValue7__pf), ECastCheckedType::NullAllowed);
			}
		case 40:
			{
				bpv__loadingScreenWB__pf = bpfv__CallFunc_Create_ReturnValue5__pf;
				__CurrentState = 38;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UgameInfoInstance_C__pf533497531::bpf__ExecuteUbergraph_gameInfoInstance__pf_8(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue6__pf{};
	check(bpp__EntryPoint__pf == 41);
	// optimized KCST_UnconditionalGoto
	bpf__showLoadingScreen__pf();
	bpfv__CallFunc_GetPlayerController_ReturnValue6__pf = UGameplayStatics::GetPlayerController(this, 0);
	b0l__CallFunc_JoinSession_ReturnValue__pf = UJoinSessionCallbackProxy::JoinSession(this, bpfv__CallFunc_GetPlayerController_ReturnValue6__pf, b0l__K2Node_CustomEvent_sessionToJoin__pf);
	b0l__CallFunc_IsValid_ReturnValue5__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_JoinSession_ReturnValue__pf);
	if (!b0l__CallFunc_IsValid_ReturnValue5__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	b0l__K2Node_CreateDelegate_OutputDelegate__pf.BindUFunction(this,FName(TEXT("OnSuccess_5CDCCF3B4CDACBE7E37E129A38F379F3")));
	if(IsValid(b0l__CallFunc_JoinSession_ReturnValue__pf))
	{
		b0l__CallFunc_JoinSession_ReturnValue__pf->OnSuccess.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate__pf);
	}
	b0l__K2Node_CreateDelegate_OutputDelegate4__pf.BindUFunction(this,FName(TEXT("OnFailure_5CDCCF3B4CDACBE7E37E129A38F379F3")));
	if(IsValid(b0l__CallFunc_JoinSession_ReturnValue__pf))
	{
		b0l__CallFunc_JoinSession_ReturnValue__pf->OnFailure.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate4__pf);
	}
	if(IsValid(b0l__CallFunc_JoinSession_ReturnValue__pf))
	{
		b0l__CallFunc_JoinSession_ReturnValue__pf->Activate();
	}
	return; // KCST_GotoReturn
}
void UgameInfoInstance_C__pf533497531::bpf__ExecuteUbergraph_gameInfoInstance__pf_9(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 48);
	return; // KCST_GotoReturn
}
void UgameInfoInstance_C__pf533497531::bpf__ExecuteUbergraph_gameInfoInstance__pf_10(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 25);
	// optimized KCST_UnconditionalGoto
	UGameplayStatics::OpenLevel(this, FName(TEXT("lobby")), true, FString(TEXT("listen")));
	return; // KCST_GotoReturn
}
void UgameInfoInstance_C__pf533497531::bpf__ExecuteUbergraph_gameInfoInstance__pf_11(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue3__pf{};
	UserverMenu_C__pf1343218889* bpfv__CallFunc_Create_ReturnValue3__pf{};
	check(bpp__EntryPoint__pf == 16);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetPlayerController_ReturnValue3__pf = UGameplayStatics::GetPlayerController(this, 0);
	bpfv__CallFunc_Create_ReturnValue3__pf = CastChecked<UserverMenu_C__pf1343218889>(UWidgetBlueprintLibrary::Create(this, UserverMenu_C__pf1343218889::StaticClass(), bpfv__CallFunc_GetPlayerController_ReturnValue3__pf), ECastCheckedType::NullAllowed);
	if(IsValid(bpfv__CallFunc_Create_ReturnValue3__pf))
	{
		bpfv__CallFunc_Create_ReturnValue3__pf->UUserWidget::AddToViewport(0);
	}
	return; // KCST_GotoReturn
}
void UgameInfoInstance_C__pf533497531::bpf__ExecuteUbergraph_gameInfoInstance__pf_12(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue2__pf{};
	UhostMenu_C__pf1343218889* bpfv__CallFunc_Create_ReturnValue2__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue2__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 11:
			{
				__CurrentState = 12;
				break;
			}
		case 12:
			{
				bpfv__CallFunc_IsValid_ReturnValue2__pf = UKismetSystemLibrary::IsValid(bpv__hostMenuWB__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue2__pf)
				{
					__CurrentState = 14;
					break;
				}
			}
		case 13:
			{
				if(IsValid(bpv__hostMenuWB__pf))
				{
					bpv__hostMenuWB__pf->UUserWidget::AddToViewport(0);
				}
				__CurrentState = -1;
				break;
			}
		case 14:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue2__pf = UGameplayStatics::GetPlayerController(this, 0);
				bpfv__CallFunc_Create_ReturnValue2__pf = CastChecked<UhostMenu_C__pf1343218889>(UWidgetBlueprintLibrary::Create(this, UhostMenu_C__pf1343218889::StaticClass(), bpfv__CallFunc_GetPlayerController_ReturnValue2__pf), ECastCheckedType::NullAllowed);
			}
		case 15:
			{
				bpv__hostMenuWB__pf = bpfv__CallFunc_Create_ReturnValue2__pf;
				__CurrentState = 13;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UgameInfoInstance_C__pf533497531::bpf__ExecuteUbergraph_gameInfoInstance__pf_13(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 5);
	return; // KCST_GotoReturn
}
void UgameInfoInstance_C__pf533497531::bpf__ExecuteUbergraph_gameInfoInstance__pf_14(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 4);
	return; // KCST_GotoReturn
}
void UgameInfoInstance_C__pf533497531::bpf__ExecuteUbergraph_gameInfoInstance__pf_15(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 3);
	return; // KCST_GotoReturn
}
void UgameInfoInstance_C__pf533497531::bpf__ExecuteUbergraph_gameInfoInstance__pf_16(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 1);
	return; // KCST_GotoReturn
}
void UgameInfoInstance_C__pf533497531::bpf__saveGameCheck__pf()
{
	bpf__ExecuteUbergraph_gameInfoInstance__pf_1(59);
}
void UgameInfoInstance_C__pf533497531::bpf__destroySessionCaller__pf(APlayerController* bpp__playerController__pf)
{
	b0l__K2Node_CustomEvent_playerController__pf = bpp__playerController__pf;
	bpf__ExecuteUbergraph_gameInfoInstance__pf_2(53);
}
void UgameInfoInstance_C__pf533497531::bpf__HandleTravelError__pf(ETravelFailure::Type bpp__FailureType__pf)
{
	b0l__K2Node_Event_FailureType__pf = bpp__FailureType__pf;
	bpf__ExecuteUbergraph_gameInfoInstance__pf_4(52);
}
void UgameInfoInstance_C__pf533497531::bpf__ShowMainMenu__pf()
{
	bpf__ExecuteUbergraph_gameInfoInstance__pf_6(51);
}
void UgameInfoInstance_C__pf533497531::bpf__HandleNetworkError__pf(ENetworkFailure::Type bpp__FailureType__pf, bool bpp__bIsServer__pf)
{
	b0l__K2Node_Event_FailureType2__pf = bpp__FailureType__pf;
	b0l__K2Node_Event_bIsServer__pf = bpp__bIsServer__pf;
	bpf__ExecuteUbergraph_gameInfoInstance__pf_5(49);
}
void UgameInfoInstance_C__pf533497531::bpf__joinServer__pf(FBlueprintSessionResult bpp__sessionToJoin__pf)
{
	b0l__K2Node_CustomEvent_sessionToJoin__pf = bpp__sessionToJoin__pf;
	bpf__ExecuteUbergraph_gameInfoInstance__pf_8(41);
}
void UgameInfoInstance_C__pf533497531::bpf__showLoadingScreen__pf()
{
	bpf__ExecuteUbergraph_gameInfoInstance__pf_7(36);
}
void UgameInfoInstance_C__pf533497531::bpf__launchLobby__pf(int32 bpp__numberPlayers__pf, bool bpp__enableLANx__pfzy, const FText& bpp__serverName__pf__const)
{
	typedef FText  T__Local__0;
	T__Local__0& bpp__serverName__pf = *const_cast<T__Local__0 *>(&bpp__serverName__pf__const);
	b0l__K2Node_CustomEvent_numberPlayers__pf = bpp__numberPlayers__pf;
	b0l__K2Node_CustomEvent_enableLAN___pf = bpp__enableLANx__pfzy;
	b0l__K2Node_CustomEvent_serverName__pf = bpp__serverName__pf;
	bpf__ExecuteUbergraph_gameInfoInstance__pf_3(27);
}
void UgameInfoInstance_C__pf533497531::bpf__showOptionsMenu__pf()
{
	bpf__ExecuteUbergraph_gameInfoInstance__pf_0(19);
}
void UgameInfoInstance_C__pf533497531::bpf__showServerMenu__pf()
{
	bpf__ExecuteUbergraph_gameInfoInstance__pf_11(16);
}
void UgameInfoInstance_C__pf533497531::bpf__ShowHostMenu__pf()
{
	bpf__ExecuteUbergraph_gameInfoInstance__pf_12(11);
}
void UgameInfoInstance_C__pf533497531::bpf__OnSuccess_D98D5DF945E741F55AB9ADBFAD37ABF0__pf()
{
	bpf__ExecuteUbergraph_gameInfoInstance__pf_13(5);
}
void UgameInfoInstance_C__pf533497531::bpf__OnFailure_D98D5DF945E741F55AB9ADBFAD37ABF0__pf()
{
	bpf__ExecuteUbergraph_gameInfoInstance__pf_14(4);
}
void UgameInfoInstance_C__pf533497531::bpf__OnSuccess_5CDCCF3B4CDACBE7E37E129A38F379F3__pf()
{
	bpf__ExecuteUbergraph_gameInfoInstance__pf_15(3);
}
void UgameInfoInstance_C__pf533497531::bpf__OnFailure_5CDCCF3B4CDACBE7E37E129A38F379F3__pf()
{
	bpf__ExecuteUbergraph_gameInfoInstance__pf_16(1);
}
void UgameInfoInstance_C__pf533497531::bpf__OnSuccess_15496AFC4A06C70CDE0628BE1A91E1E9__pf()
{
	bpf__ExecuteUbergraph_gameInfoInstance__pf_10(25);
}
void UgameInfoInstance_C__pf533497531::bpf__OnFailure_15496AFC4A06C70CDE0628BE1A91E1E9__pf()
{
	bpf__ExecuteUbergraph_gameInfoInstance__pf_9(48);
}
void UgameInfoInstance_C__pf533497531::bpf__netErrorToString__pf(ENetworkFailure::Type bpp__failureType__pf, /*out*/ FString& bpp__outString__pf)
{
	bpp__outString__pf = FString(TEXT(""));
}
void UgameInfoInstance_C__pf533497531::bpf__travelErrorToScreen__pf(ETravelFailure::Type bpp__failureType__pf, /*out*/ FString& bpp__outText__pf)
{
	bpp__outText__pf = FString(TEXT(""));
}
void UgameInfoInstance_C__pf533497531::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
void UgameInfoInstance_C__pf533497531::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{10, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/Engine.EmptyOnlineDelegate__DelegateSignature 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/OnlineSubsystemUtils.CreateSessionCallbackProxy 
		{37, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/OnlineSubsystemUtils.BlueprintSessionResult 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/OnlineSubsystemUtils.JoinSessionCallbackProxy 
		{39, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ENetworkFailure 
		{40, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ETravelFailure 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/OnlineSubsystemUtils.DestroySessionCallbackProxy 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{45, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameInstance 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/UI/MainMenu/mainMenu.mainMenu_C 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/UI/MainMenu/hostMenu.hostMenu_C 
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/UI/MainMenu/serverMenu.serverMenu_C 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/UI/MainMenu/optionsMenu.optionsMenu_C 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/UI/allLevels/loadingScreen.loadingScreen_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
struct FRegisterHelper__UgameInfoInstance_C__pf533497531
{
	FRegisterHelper__UgameInfoInstance_C__pf533497531()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Blueprints/allLevels/gameInfoInstance"), &UgameInfoInstance_C__pf533497531::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UgameInfoInstance_C__pf533497531 Instance;
};
FRegisterHelper__UgameInfoInstance_C__pf533497531 FRegisterHelper__UgameInfoInstance_C__pf533497531::Instance;
void UgameInfoInstance_C__pf533497531::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME_DIFFNAMES(UgameInfoInstance_C__pf533497531, bpv__maxPlayers__pf, FName(TEXT("maxPlayers")));
	DOREPLIFETIME_DIFFNAMES(UgameInfoInstance_C__pf533497531, bpv__serverName__pf, FName(TEXT("serverName")));
}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
