#include "NativizedAssets.h"
#include "lobbyGM__pf2687806415.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
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
#include "lobbyPlayerController__pf2687806415.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerStart.h"
#include "gameInfoInstance__pf533497531.h"
#include "0_base__pf1490413170.h"
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
#include "mainMenu__pf1343218889.h"
#include "hostMenu__pf1343218889.h"
#include "serverMenu__pf1343218889.h"
#include "optionsMenu__pf1343218889.h"
#include "CreateSessionCallbackProxy.h"
#include "Runtime/Engine/Public/Net/OnlineBlueprintCallProxyBase.h"
#include "FindSessionsCallbackProxy.h"
#include "JoinSessionCallbackProxy.h"
#include "loadingScreen__pf1207061625.h"
#include "DestroySessionCallbackProxy.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
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
#include "Runtime/Engine/Classes/Engine/InputKeyDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputDelegateBinding.h"
#include "Runtime/Slate/Public/Framework/Commands/InputChord.h"
#include "lobbyMenu__pf3941786787.h"
#include "Runtime/Engine/Classes/Engine/InputActionDelegateBinding.h"
#include "Runtime/HeadMountedDisplay/Public/HeadMountedDisplayFunctionLibrary.h"
#include "Runtime/HeadMountedDisplay/Public/HeadMountedDisplayTypes.h"
#include "FOWComponent__pf1242490746.h"
#include "Runtime/Engine/Classes/GameFramework/SpringArmComponent.h"
#include "connectedPlayer__pf3941786787.h"
#include "Runtime/UMG/Public/Components/VerticalBox.h"
#include "Runtime/UMG/Public/Components/VerticalBoxSlot.h"
#include "gameSettings__pf3941786787.h"
#include "characterSelect__pf3941786787.h"
#include "chatWIndow__pf1207061625.h"
#include "Runtime/Engine/Classes/GameFramework/GameState.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
AlobbyGM_C__pf2687806415::AlobbyGM_C__pf2687806415(const FObjectInitializer& ObjectInitializer) : Super()
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (AlobbyGM_C__pf2687806415::StaticClass() == GetClass()))
	{
		AlobbyGM_C__pf2687806415::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__DefaultSceneRoot__pf = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	RootComponent = bpv__DefaultSceneRoot__pf;
	bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__canWeStartx__pfzy = false;
	bpv__allPlayerControllers__pf = TArray<APlayerController*> ();
	bpv__spawnPoints__pf = TArray<APlayerStart*> ();
	bpv__serverName__pf = FText::GetEmpty();
	bpv__maxPlayers__pf = 0;
	bpv__gmMapTime__pf = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("10"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("C4EAE5B2460230016CD59A96DFA135AA") /* Key */
	);
	bpv__gmMapName__pf = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Arena 01"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("A9EA1F0741B43E3FDCCF3BABDC7AD3FB") /* Key */
	);
	bpv__gmMapImage__pf = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(AlobbyGM_C__pf2687806415::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__currentPlayers__pf = 0;
	bpv__connectedPlayers__pf = TArray<FPlayerInfo__pf533497531> ();
	bpv__availableCharacters__pf = TArray<bool> ();
	bpv__availableCharacters__pf.Reserve(4);
	bpv__availableCharacters__pf.Add(false);
	bpv__availableCharacters__pf.Add(false);
	bpv__availableCharacters__pf.Add(false);
	bpv__availableCharacters__pf.Add(false);
	bpv__gmMapID__pf = 0;
	bpv__characters__pf = TArray<UClass*> ();
	bpv__characters__pf.Reserve(4);
	bpv__characters__pf.Add(A0_base_C__pf1490413170::StaticClass());
	bpv__characters__pf.Add(CastChecked<UClass>(CastChecked<UDynamicClass>(AlobbyGM_C__pf2687806415::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
	bpv__characters__pf.Add(CastChecked<UClass>(CastChecked<UDynamicClass>(AlobbyGM_C__pf2687806415::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed));
	bpv__characters__pf.Add(CastChecked<UClass>(CastChecked<UDynamicClass>(AlobbyGM_C__pf2687806415::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed));
	bHandleDedicatedServerReplays = false;
	PlayerControllerClass = AlobbyPlayerController_C__pf2687806415::StaticClass();
	DefaultPawnClass = nullptr;
	bUseSeamlessTravel = true;
}
void AlobbyGM_C__pf2687806415::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__DefaultSceneRoot__pf)
	{
		bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
void AlobbyGM_C__pf2687806415::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(AlobbyPlayerController_C__pf2687806415::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UgameInfoInstance_C__pf533497531::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(A0_base_C__pf1490413170::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UlobbyMenu_C__pf3941786787::StaticClass());
	// List of all referenced converted structures
	extern UScriptStruct* Z_Construct_UScriptStruct_FPlayerInfo__pf533497531();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FPlayerInfo__pf533497531());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
}
void AlobbyGM_C__pf2687806415::bpf__ExecuteUbergraph_lobbyGM__pf_0(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Array_Add_ReturnValue__pf{};
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue__pf{};
	bool bpfv__CallFunc_HasAuthority_ReturnValue__pf{};
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
				bpv__spawnPoints__pf = b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
			}
		case 3:
			{
				bpfv__CallFunc_GetGameInstance_ReturnValue__pf = UGameplayStatics::GetGameInstance(this);
				b0l__K2Node_DynamicCast_AsGame_Info_Instance__pf = Cast<UgameInfoInstance_C__pf533497531>(bpfv__CallFunc_GetGameInstance_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess2__pf = (b0l__K2Node_DynamicCast_AsGame_Info_Instance__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess2__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 4:
			{
				FText  __Local__0 = FText::GetEmpty();
				bpv__serverName__pf = ((IsValid(b0l__K2Node_DynamicCast_AsGame_Info_Instance__pf)) ? (b0l__K2Node_DynamicCast_AsGame_Info_Instance__pf->bpv__serverName__pf) : (__Local__0));
			}
		case 5:
			{
				int32  __Local__1 = 0;
				bpv__maxPlayers__pf = ((IsValid(b0l__K2Node_DynamicCast_AsGame_Info_Instance__pf)) ? (b0l__K2Node_DynamicCast_AsGame_Info_Instance__pf->bpv__maxPlayers__pf) : (__Local__1));
			}
		case 6:
			{
				b0l__K2Node_DynamicCast_AsLobby_Player_Controller__pf = Cast<AlobbyPlayerController_C__pf2687806415>(b0l__K2Node_Event_NewPlayer__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsLobby_Player_Controller__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 11;
					break;
				}
			}
		case 7:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsLobby_Player_Controller__pf))
				{
					b0l__K2Node_DynamicCast_AsLobby_Player_Controller__pf->bpf__initalSetup__pf();
				}
			}
		case 8:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsLobby_Player_Controller__pf))
				{
					b0l__K2Node_DynamicCast_AsLobby_Player_Controller__pf->bpf__setupLobbyMenu__pf(bpv__serverName__pf);
				}
			}
		case 9:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsLobby_Player_Controller__pf))
				{
					b0l__K2Node_DynamicCast_AsLobby_Player_Controller__pf->bpf__updateLobbySettings__pf(bpv__gmMapImage__pf, bpv__gmMapName__pf, bpv__gmMapTime__pf);
				}
			}
		case 10:
			{
				bpf__respawnPlayer__pf(b0l__K2Node_DynamicCast_AsLobby_Player_Controller__pf);
				__CurrentState = -1;
				break;
			}
		case 11:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Loading charcter failed to cast to lobby player controller")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
				__CurrentState = -1;
				break;
			}
		case 87:
			{
				__CurrentState = 88;
				break;
			}
		case 88:
			{
				bpfv__CallFunc_HasAuthority_ReturnValue__pf = AActor::HasAuthority();
				if (!bpfv__CallFunc_HasAuthority_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 89:
			{
				bpfv__CallFunc_Array_Add_ReturnValue__pf = FCustomThunkTemplates::Array_Add(bpv__allPlayerControllers__pf, b0l__K2Node_Event_NewPlayer__pf);
			}
		case 90:
			{
				(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, APlayerStart::StaticClass(), /*out*/ TArrayCaster< APlayerStart* >(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf).Get< AActor* >());
				__CurrentState = 1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AlobbyGM_C__pf2687806415::bpf__ExecuteUbergraph_lobbyGM__pf_1(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue4__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue7__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue5__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue2__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 60:
			{
				__StateStack.Push(63);
			}
		case 61:
			{
				FCustomThunkTemplates::Array_Get(bpv__allPlayerControllers__pf, b0l__Temp_int_Array_Index_Variable4__pf, /*out*/ b0l__CallFunc_Array_Get_Item7__pf);
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ObjectObject(b0l__CallFunc_Array_Get_Item7__pf, b0l__K2Node_Event_ExitingController__pf);
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 62:
			{
				b0l__Temp_bool_True_if_break_was_hit_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 63:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue4__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable4__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable4__pf = bpfv__CallFunc_Add_IntInt_ReturnValue4__pf;
			}
		case 64:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(b0l__Temp_bool_True_if_break_was_hit_Variable__pf);
				bpfv__CallFunc_Array_Length_ReturnValue7__pf = FCustomThunkTemplates::Array_Length(bpv__allPlayerControllers__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue5__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable4__pf, bpfv__CallFunc_Array_Length_ReturnValue7__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue2__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue__pf, bpfv__CallFunc_Less_IntInt_ReturnValue5__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue2__pf)
				{
					__CurrentState = 66;
					break;
				}
			}
		case 65:
			{
				b0l__Temp_int_Array_Index_Variable4__pf = b0l__Temp_int_Loop_Counter_Variable4__pf;
				__CurrentState = 60;
				break;
			}
		case 66:
			{
				FCustomThunkTemplates::Array_Get(bpv__allPlayerControllers__pf, b0l__Temp_int_Array_Index_Variable4__pf, /*out*/ b0l__CallFunc_Array_Get_Item8__pf);
				b0l__K2Node_DynamicCast_AsLobby_Player_Controller6__pf = Cast<AlobbyPlayerController_C__pf2687806415>(b0l__CallFunc_Array_Get_Item8__pf);
				b0l__K2Node_DynamicCast_bSuccess7__pf = (b0l__K2Node_DynamicCast_AsLobby_Player_Controller6__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess7__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 67:
			{
				int32  __Local__2 = 0;
				FCustomThunkTemplates::Array_Set(bpv__availableCharacters__pf, ((IsValid(b0l__K2Node_DynamicCast_AsLobby_Player_Controller6__pf)) ? (b0l__K2Node_DynamicCast_AsLobby_Player_Controller6__pf->bpv__selectedCharacter__pf) : (__Local__2)), b0l__Temp_bool_Variable__pf, false);
			}
		case 68:
			{
				FCustomThunkTemplates::Array_Remove(bpv__allPlayerControllers__pf, b0l__Temp_int_Array_Index_Variable4__pf);
			}
		case 69:
			{
				FCustomThunkTemplates::Array_Remove(bpv__connectedPlayers__pf, b0l__Temp_int_Array_Index_Variable4__pf);
			}
		case 70:
			{
				bpf__everyoneUpdate__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 71:
			{
				b0l__Temp_int_Loop_Counter_Variable4__pf = 0;
			}
		case 72:
			{
				b0l__Temp_int_Array_Index_Variable4__pf = 0;
				__CurrentState = 64;
				break;
			}
		case 73:
			{
				b0l__Temp_bool_True_if_break_was_hit_Variable__pf = false;
				__CurrentState = 71;
				break;
			}
		case 107:
			{
				__CurrentState = 73;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void AlobbyGM_C__pf2687806415::bpf__ExecuteUbergraph_lobbyGM__pf_2(int32 bpp__EntryPoint__pf)
{
	APawn* bpfv__CallFunc_K2_GetPawn_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue8__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue2__pf{};
	int32 bpfv__CallFunc_RandomIntegerInRange_ReturnValue2__pf{};
	FTransform bpfv__CallFunc_GetTransform_ReturnValue2__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2__pf{};
	ACharacter* bpfv__CallFunc_FinishSpawningActor_ReturnValue2__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 74:
			{
				__CurrentState = 75;
				break;
			}
		case 75:
			{
				if (!b0l__K2Node_CustomEvent_changedStatus__pf)
				{
					__CurrentState = 76;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 76:
			{
				if(IsValid(b0l__K2Node_CustomEvent_playerController2__pf))
				{
					bpfv__CallFunc_K2_GetPawn_ReturnValue__pf = b0l__K2Node_CustomEvent_playerController2__pf->AController::K2_GetPawn();
				}
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpfv__CallFunc_K2_GetPawn_ReturnValue__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = 78;
					break;
				}
			}
		case 77:
			{
				if(IsValid(b0l__K2Node_CustomEvent_playerController2__pf))
				{
					bpfv__CallFunc_K2_GetPawn_ReturnValue__pf = b0l__K2Node_CustomEvent_playerController2__pf->AController::K2_GetPawn();
				}
				if(IsValid(bpfv__CallFunc_K2_GetPawn_ReturnValue__pf))
				{
					bpfv__CallFunc_K2_GetPawn_ReturnValue__pf->K2_DestroyActor();
				}
			}
		case 78:
			{
				bpfv__CallFunc_Array_Length_ReturnValue8__pf = FCustomThunkTemplates::Array_Length(bpv__spawnPoints__pf);
				bpfv__CallFunc_Subtract_IntInt_ReturnValue2__pf = UKismetMathLibrary::Subtract_IntInt(bpfv__CallFunc_Array_Length_ReturnValue8__pf, 1);
				bpfv__CallFunc_RandomIntegerInRange_ReturnValue2__pf = UKismetMathLibrary::RandomIntegerInRange(0, bpfv__CallFunc_Subtract_IntInt_ReturnValue2__pf);
				FCustomThunkTemplates::Array_Get(bpv__spawnPoints__pf, bpfv__CallFunc_RandomIntegerInRange_ReturnValue2__pf, /*out*/ b0l__CallFunc_Array_Get_Item9__pf);
				if(IsValid(b0l__CallFunc_Array_Get_Item9__pf))
				{
					bpfv__CallFunc_GetTransform_ReturnValue2__pf = b0l__CallFunc_Array_Get_Item9__pf->AActor::GetTransform();
				}
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, b0l__K2Node_CustomEvent_characterClass__pf, bpfv__CallFunc_GetTransform_ReturnValue2__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, ((AActor*)nullptr));
			}
		case 79:
			{
				bpfv__CallFunc_Array_Length_ReturnValue8__pf = FCustomThunkTemplates::Array_Length(bpv__spawnPoints__pf);
				bpfv__CallFunc_Subtract_IntInt_ReturnValue2__pf = UKismetMathLibrary::Subtract_IntInt(bpfv__CallFunc_Array_Length_ReturnValue8__pf, 1);
				bpfv__CallFunc_RandomIntegerInRange_ReturnValue2__pf = UKismetMathLibrary::RandomIntegerInRange(0, bpfv__CallFunc_Subtract_IntInt_ReturnValue2__pf);
				FCustomThunkTemplates::Array_Get(bpv__spawnPoints__pf, bpfv__CallFunc_RandomIntegerInRange_ReturnValue2__pf, /*out*/ b0l__CallFunc_Array_Get_Item9__pf);
				if(IsValid(b0l__CallFunc_Array_Get_Item9__pf))
				{
					bpfv__CallFunc_GetTransform_ReturnValue2__pf = b0l__CallFunc_Array_Get_Item9__pf->AActor::GetTransform();
				}
				bpfv__CallFunc_FinishSpawningActor_ReturnValue2__pf = CastChecked<ACharacter>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2__pf, bpfv__CallFunc_GetTransform_ReturnValue2__pf), ECastCheckedType::NullAllowed);
			}
		case 80:
			{
				if(IsValid(b0l__K2Node_CustomEvent_playerController2__pf))
				{
					b0l__K2Node_CustomEvent_playerController2__pf->Possess(bpfv__CallFunc_FinishSpawningActor_ReturnValue2__pf);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AlobbyGM_C__pf2687806415::bpf__ExecuteUbergraph_lobbyGM__pf_3(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue2__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue3__pf{};
	bool bpfv__CallFunc_IsVisible_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 98);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetPlayerController_ReturnValue2__pf = UGameplayStatics::GetPlayerController(this, 0);
	b0l__K2Node_DynamicCast_AsLobby_Player_Controller7__pf = Cast<AlobbyPlayerController_C__pf2687806415>(bpfv__CallFunc_GetPlayerController_ReturnValue2__pf);
	b0l__K2Node_DynamicCast_bSuccess8__pf = (b0l__K2Node_DynamicCast_AsLobby_Player_Controller7__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess8__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	UlobbyMenu_C__pf3941786787*  __Local__3 = ((UlobbyMenu_C__pf3941786787*)nullptr);
	bpfv__CallFunc_IsValid_ReturnValue3__pf = UKismetSystemLibrary::IsValid(((IsValid(b0l__K2Node_DynamicCast_AsLobby_Player_Controller7__pf)) ? (b0l__K2Node_DynamicCast_AsLobby_Player_Controller7__pf->bpv__lobbyMenuWB__pf) : (__Local__3)));
	if (!bpfv__CallFunc_IsValid_ReturnValue3__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	if(IsValid(b0l__K2Node_DynamicCast_AsLobby_Player_Controller7__pf) && IsValid(b0l__K2Node_DynamicCast_AsLobby_Player_Controller7__pf->bpv__lobbyMenuWB__pf) && IsValid(b0l__K2Node_DynamicCast_AsLobby_Player_Controller7__pf->bpv__lobbyMenuWB__pf->bpv__gameSettings__pf))
	{
		bpfv__CallFunc_IsVisible_ReturnValue__pf = b0l__K2Node_DynamicCast_AsLobby_Player_Controller7__pf->bpv__lobbyMenuWB__pf->bpv__gameSettings__pf->UWidget::IsVisible();
	}
	if (!bpfv__CallFunc_IsVisible_ReturnValue__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	if(IsValid(b0l__K2Node_DynamicCast_AsLobby_Player_Controller7__pf) && IsValid(b0l__K2Node_DynamicCast_AsLobby_Player_Controller7__pf->bpv__lobbyMenuWB__pf) && IsValid(b0l__K2Node_DynamicCast_AsLobby_Player_Controller7__pf->bpv__lobbyMenuWB__pf->bpv__gameSettings__pf))
	{
		b0l__K2Node_DynamicCast_AsLobby_Player_Controller7__pf->bpv__lobbyMenuWB__pf->bpv__gameSettings__pf->bpf__fillPlayersWindow__pf();
	}
	return; //KCST_EndOfThread
}
void AlobbyGM_C__pf2687806415::bpf__ExecuteUbergraph_lobbyGM__pf_4(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue3__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue2__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue5__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue2__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue3__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue4__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue2__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue5__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue3__pf{};
	bool bpfv__CallFunc_EqualEqual_ClassClass_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue2__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 28:
			{
				b0l__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 29:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue2__pf = UKismetMathLibrary::Not_PreBool(b0l__Temp_bool_True_if_break_was_hit_Variable2__pf);
				bpfv__CallFunc_Array_Length_ReturnValue5__pf = FCustomThunkTemplates::Array_Length(bpv__connectedPlayers__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue3__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable2__pf, bpfv__CallFunc_Array_Length_ReturnValue5__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue2__pf, bpfv__CallFunc_Less_IntInt_ReturnValue3__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 30:
			{
				b0l__Temp_int_Array_Index_Variable__pf = b0l__Temp_int_Loop_Counter_Variable2__pf;
			}
		case 31:
			{
				__StateStack.Push(35);
			}
		case 32:
			{
				FCustomThunkTemplates::Array_Get(bpv__connectedPlayers__pf, b0l__Temp_int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item3__pf);
				bpfv__CallFunc_EqualEqual_ClassClass_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ClassClass(b0l__CallFunc_Array_Get_Item3__pf.bpv__myPlayerCharacter_8_09E183C542505D365AD557BA76D256B2__pf, A0_base_C__pf1490413170::StaticClass());
				if (!bpfv__CallFunc_EqualEqual_ClassClass_ReturnValue__pf)
				{
					__CurrentState = 36;
					break;
				}
			}
		case 33:
			{
				bpv__canWeStartx__pfzy = false;
			}
		case 34:
			{
				bpf__cannotStartGame__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 35:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue3__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable2__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable2__pf = bpfv__CallFunc_Add_IntInt_ReturnValue3__pf;
				__CurrentState = 29;
				break;
			}
		case 36:
			{
				bpv__canWeStartx__pfzy = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 37:
			{
				b0l__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 38:
			{
				b0l__Temp_int_Array_Index_Variable5__pf = 0;
			}
		case 39:
			{
				bpfv__CallFunc_Array_Length_ReturnValue3__pf = FCustomThunkTemplates::Array_Length(bpv__allPlayerControllers__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue3__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 46;
					break;
				}
			}
		case 40:
			{
				b0l__Temp_int_Array_Index_Variable5__pf = b0l__Temp_int_Loop_Counter_Variable__pf;
			}
		case 41:
			{
				__StateStack.Push(45);
			}
		case 42:
			{
				FCustomThunkTemplates::Array_Get(bpv__allPlayerControllers__pf, b0l__Temp_int_Array_Index_Variable5__pf, /*out*/ b0l__CallFunc_Array_Get_Item5__pf);
				b0l__K2Node_DynamicCast_AsLobby_Player_Controller4__pf = Cast<AlobbyPlayerController_C__pf2687806415>(b0l__CallFunc_Array_Get_Item5__pf);
				b0l__K2Node_DynamicCast_bSuccess5__pf = (b0l__K2Node_DynamicCast_AsLobby_Player_Controller4__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess5__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 43:
			{
				auto __Local__5 = FPlayerInfo__pf533497531::GetDefaultValue();
				FPlayerInfo__pf533497531  __Local__4 = __Local__5;
				bpfv__CallFunc_Array_Add_ReturnValue2__pf = FCustomThunkTemplates::Array_Add(bpv__connectedPlayers__pf, ((IsValid(b0l__K2Node_DynamicCast_AsLobby_Player_Controller4__pf)) ? (b0l__K2Node_DynamicCast_AsLobby_Player_Controller4__pf->bpv__playerSettings__pf) : (__Local__4)));
			}
		case 44:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsLobby_Player_Controller4__pf))
				{
					b0l__K2Node_DynamicCast_AsLobby_Player_Controller4__pf->bpf__updateNumPlayers__pf(bpv__currentPlayers__pf, bpv__maxPlayers__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 45:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 39;
				break;
			}
		case 46:
			{
				b0l__Temp_int_Loop_Counter_Variable5__pf = 0;
			}
		case 47:
			{
				b0l__Temp_int_Array_Index_Variable3__pf = 0;
			}
		case 48:
			{
				bpfv__CallFunc_Array_Length_ReturnValue4__pf = FCustomThunkTemplates::Array_Length(bpv__allPlayerControllers__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue2__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable5__pf, bpfv__CallFunc_Array_Length_ReturnValue4__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue2__pf)
				{
					__CurrentState = 56;
					break;
				}
			}
		case 49:
			{
				b0l__Temp_int_Array_Index_Variable3__pf = b0l__Temp_int_Loop_Counter_Variable5__pf;
			}
		case 50:
			{
				__StateStack.Push(55);
			}
		case 51:
			{
				FCustomThunkTemplates::Array_Get(bpv__allPlayerControllers__pf, b0l__Temp_int_Array_Index_Variable3__pf, /*out*/ b0l__CallFunc_Array_Get_Item2__pf);
				b0l__K2Node_DynamicCast_AsLobby_Player_Controller2__pf = Cast<AlobbyPlayerController_C__pf2687806415>(b0l__CallFunc_Array_Get_Item2__pf);
				b0l__K2Node_DynamicCast_bSuccess3__pf = (b0l__K2Node_DynamicCast_AsLobby_Player_Controller2__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess3__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 52:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsLobby_Player_Controller2__pf))
				{
					b0l__K2Node_DynamicCast_AsLobby_Player_Controller2__pf->bpf__addxPlayerInfo__pfT(bpv__connectedPlayers__pf);
				}
			}
		case 53:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsLobby_Player_Controller2__pf))
				{
					b0l__K2Node_DynamicCast_AsLobby_Player_Controller2__pf->bpf__updateAvalableCharacters__pf(bpv__availableCharacters__pf);
				}
			}
		case 54:
			{
				bpf__addToKickList__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 55:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue5__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable5__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable5__pf = bpfv__CallFunc_Add_IntInt_ReturnValue5__pf;
				__CurrentState = 48;
				break;
			}
		case 56:
			{
				b0l__Temp_bool_True_if_break_was_hit_Variable2__pf = false;
			}
		case 57:
			{
				b0l__Temp_int_Loop_Counter_Variable2__pf = 0;
				__CurrentState = 28;
				break;
			}
		case 58:
			{
				bpfv__CallFunc_Greater_IntInt_ReturnValue__pf = UKismetMathLibrary::Greater_IntInt(bpv__currentPlayers__pf, 0);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 59:
			{
				FCustomThunkTemplates::Array_Clear(bpv__connectedPlayers__pf);
				__CurrentState = 37;
				break;
			}
		case 81:
			{
				__CurrentState = 82;
				break;
			}
		case 82:
			{
				bpfv__CallFunc_Array_Length_ReturnValue2__pf = FCustomThunkTemplates::Array_Length(bpv__allPlayerControllers__pf);
				bpv__currentPlayers__pf = bpfv__CallFunc_Array_Length_ReturnValue2__pf;
				__CurrentState = 58;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void AlobbyGM_C__pf2687806415::bpf__ExecuteUbergraph_lobbyGM__pf_5(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 105);
	// optimized KCST_UnconditionalGoto
	FCustomThunkTemplates::Array_Get(bpv__allPlayerControllers__pf, b0l__K2Node_CustomEvent_playerID__pf, /*out*/ b0l__CallFunc_Array_Get_Item6__pf);
	b0l__K2Node_DynamicCast_AsLobby_Player_Controller5__pf = Cast<AlobbyPlayerController_C__pf2687806415>(b0l__CallFunc_Array_Get_Item6__pf);
	b0l__K2Node_DynamicCast_bSuccess6__pf = (b0l__K2Node_DynamicCast_AsLobby_Player_Controller5__pf != nullptr);;
	if(IsValid(b0l__K2Node_DynamicCast_AsLobby_Player_Controller5__pf))
	{
		b0l__K2Node_DynamicCast_AsLobby_Player_Controller5__pf->bpf__kicked__pf();
	}
	return; //KCST_EndOfThread
}
void AlobbyGM_C__pf2687806415::bpf__ExecuteUbergraph_lobbyGM__pf_6(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 83:
			{
				__CurrentState = 84;
				break;
			}
		case 84:
			{
				b0l__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__gmMapID__pf, 0);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 86;
					break;
				}
				b0l__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__gmMapID__pf, 1);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 85;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 85:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("servertravel /Game/Maps/Arena02")), bpfv__CallFunc_GetPlayerController_ReturnValue__pf);
				__CurrentState = -1;
				break;
			}
		case 86:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("servertravel /Game/Maps/Arena01")), bpfv__CallFunc_GetPlayerController_ReturnValue__pf);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AlobbyGM_C__pf2687806415::bpf__ExecuteUbergraph_lobbyGM__pf_7(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue2__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue6__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue4__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 12:
			{
				AActor::FlushNetDormancy();
			}
		case 13:
			{
				bpv__gmMapImage__pf = b0l__K2Node_CustomEvent_mapImage__pf;
			}
		case 14:
			{
				AActor::FlushNetDormancy();
			}
		case 15:
			{
				bpv__gmMapName__pf = b0l__K2Node_CustomEvent_mapName__pf;
			}
		case 16:
			{
				AActor::FlushNetDormancy();
			}
		case 17:
			{
				bpv__gmMapTime__pf = b0l__K2Node_CustomEvent_mapTime__pf;
			}
		case 18:
			{
				AActor::FlushNetDormancy();
			}
		case 19:
			{
				bpv__gmMapID__pf = b0l__K2Node_CustomEvent_mapID__pf;
			}
		case 20:
			{
				b0l__Temp_int_Loop_Counter_Variable3__pf = 0;
			}
		case 21:
			{
				b0l__Temp_int_Array_Index_Variable2__pf = 0;
			}
		case 22:
			{
				bpfv__CallFunc_Array_Length_ReturnValue6__pf = FCustomThunkTemplates::Array_Length(bpv__allPlayerControllers__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue4__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable3__pf, bpfv__CallFunc_Array_Length_ReturnValue6__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue4__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 23:
			{
				b0l__Temp_int_Array_Index_Variable2__pf = b0l__Temp_int_Loop_Counter_Variable3__pf;
			}
		case 24:
			{
				__StateStack.Push(27);
			}
		case 25:
			{
				FCustomThunkTemplates::Array_Get(bpv__allPlayerControllers__pf, b0l__Temp_int_Array_Index_Variable2__pf, /*out*/ b0l__CallFunc_Array_Get_Item4__pf);
				b0l__K2Node_DynamicCast_AsLobby_Player_Controller3__pf = Cast<AlobbyPlayerController_C__pf2687806415>(b0l__CallFunc_Array_Get_Item4__pf);
				b0l__K2Node_DynamicCast_bSuccess4__pf = (b0l__K2Node_DynamicCast_AsLobby_Player_Controller3__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess4__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 26:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsLobby_Player_Controller3__pf))
				{
					b0l__K2Node_DynamicCast_AsLobby_Player_Controller3__pf->bpf__updateLobbySettings__pf(bpv__gmMapImage__pf, bpv__gmMapName__pf, bpv__gmMapTime__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 27:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue2__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable3__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable3__pf = bpfv__CallFunc_Add_IntInt_ReturnValue2__pf;
				__CurrentState = 22;
				break;
			}
		case 104:
			{
				__CurrentState = 12;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void AlobbyGM_C__pf2687806415::bpf__ExecuteUbergraph_lobbyGM__pf_8(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 103);
	return; //KCST_EndOfThread
}
void AlobbyGM_C__pf2687806415::bpf__ExecuteUbergraph_lobbyGM__pf_9(int32 bpp__EntryPoint__pf)
{
	APawn* bpfv__CallFunc_K2_GetPawn_ReturnValue2__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue2__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_RandomIntegerInRange_ReturnValue__pf{};
	FTransform bpfv__CallFunc_GetTransform_ReturnValue__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf{};
	A0_base_C__pf1490413170* bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 91:
			{
				__CurrentState = 92;
				break;
			}
		case 92:
			{
				if(IsValid(b0l__K2Node_CustomEvent_playerController__pf))
				{
					bpfv__CallFunc_K2_GetPawn_ReturnValue2__pf = b0l__K2Node_CustomEvent_playerController__pf->AController::K2_GetPawn();
				}
				bpfv__CallFunc_IsValid_ReturnValue2__pf = UKismetSystemLibrary::IsValid(bpfv__CallFunc_K2_GetPawn_ReturnValue2__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue2__pf)
				{
					__CurrentState = 94;
					break;
				}
			}
		case 93:
			{
				if(IsValid(b0l__K2Node_CustomEvent_playerController__pf))
				{
					bpfv__CallFunc_K2_GetPawn_ReturnValue2__pf = b0l__K2Node_CustomEvent_playerController__pf->AController::K2_GetPawn();
				}
				if(IsValid(bpfv__CallFunc_K2_GetPawn_ReturnValue2__pf))
				{
					bpfv__CallFunc_K2_GetPawn_ReturnValue2__pf->K2_DestroyActor();
				}
			}
		case 94:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__spawnPoints__pf);
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpfv__CallFunc_Array_Length_ReturnValue__pf, 1);
				bpfv__CallFunc_RandomIntegerInRange_ReturnValue__pf = UKismetMathLibrary::RandomIntegerInRange(0, bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf);
				FCustomThunkTemplates::Array_Get(bpv__spawnPoints__pf, bpfv__CallFunc_RandomIntegerInRange_ReturnValue__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				if(IsValid(b0l__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_GetTransform_ReturnValue__pf = b0l__CallFunc_Array_Get_Item__pf->AActor::GetTransform();
				}
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, A0_base_C__pf1490413170::StaticClass(), bpfv__CallFunc_GetTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn, ((AActor*)nullptr));
			}
		case 95:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__spawnPoints__pf);
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpfv__CallFunc_Array_Length_ReturnValue__pf, 1);
				bpfv__CallFunc_RandomIntegerInRange_ReturnValue__pf = UKismetMathLibrary::RandomIntegerInRange(0, bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf);
				FCustomThunkTemplates::Array_Get(bpv__spawnPoints__pf, bpfv__CallFunc_RandomIntegerInRange_ReturnValue__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				if(IsValid(b0l__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_GetTransform_ReturnValue__pf = b0l__CallFunc_Array_Get_Item__pf->AActor::GetTransform();
				}
				bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<A0_base_C__pf1490413170>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, bpfv__CallFunc_GetTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
			}
		case 96:
			{
				if(IsValid(b0l__K2Node_CustomEvent_playerController__pf))
				{
					b0l__K2Node_CustomEvent_playerController__pf->Possess(bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf);
				}
			}
		case 97:
			{
				bpf__everyoneUpdate__pf();
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AlobbyGM_C__pf2687806415::bpf__K2_OnLogout__pf(AController* bpp__ExitingController__pf)
{
	b0l__K2Node_Event_ExitingController__pf = bpp__ExitingController__pf;
	bpf__ExecuteUbergraph_lobbyGM__pf_1(107);
}
void AlobbyGM_C__pf2687806415::bpf__youHaveBeenKicked__pf_Implementation(int32 bpp__playerID__pf)
{
	b0l__K2Node_CustomEvent_playerID__pf = bpp__playerID__pf;
	bpf__ExecuteUbergraph_lobbyGM__pf_5(105);
}
void AlobbyGM_C__pf2687806415::bpf__serverUpdateGameSettings__pf_Implementation(UTexture2D* bpp__mapImage__pf, const FText& bpp__mapName__pf__const, const FText& bpp__mapTime__pf__const, int32 bpp__mapID__pf)
{
	typedef FText  T__Local__6;
	T__Local__6& bpp__mapName__pf = *const_cast<T__Local__6 *>(&bpp__mapName__pf__const);
	typedef FText  T__Local__7;
	T__Local__7& bpp__mapTime__pf = *const_cast<T__Local__7 *>(&bpp__mapTime__pf__const);
	b0l__K2Node_CustomEvent_mapImage__pf = bpp__mapImage__pf;
	b0l__K2Node_CustomEvent_mapName__pf = bpp__mapName__pf;
	b0l__K2Node_CustomEvent_mapTime__pf = bpp__mapTime__pf;
	b0l__K2Node_CustomEvent_mapID__pf = bpp__mapID__pf;
	bpf__ExecuteUbergraph_lobbyGM__pf_7(104);
}
void AlobbyGM_C__pf2687806415::bpf__cannotStartGame__pf()
{
	bpf__ExecuteUbergraph_lobbyGM__pf_8(103);
}
void AlobbyGM_C__pf2687806415::bpf__addToKickList__pf()
{
	bpf__ExecuteUbergraph_lobbyGM__pf_3(98);
}
void AlobbyGM_C__pf2687806415::bpf__respawnPlayer__pf_Implementation(APlayerController* bpp__playerController__pf)
{
	b0l__K2Node_CustomEvent_playerController__pf = bpp__playerController__pf;
	bpf__ExecuteUbergraph_lobbyGM__pf_9(91);
}
void AlobbyGM_C__pf2687806415::bpf__K2_PostLogin__pf(APlayerController* bpp__NewPlayer__pf)
{
	b0l__K2Node_Event_NewPlayer__pf = bpp__NewPlayer__pf;
	bpf__ExecuteUbergraph_lobbyGM__pf_0(87);
}
void AlobbyGM_C__pf2687806415::bpf__launchGame__pf()
{
	bpf__ExecuteUbergraph_lobbyGM__pf_6(83);
}
void AlobbyGM_C__pf2687806415::bpf__everyoneUpdate__pf_Implementation()
{
	bpf__ExecuteUbergraph_lobbyGM__pf_4(81);
}
void AlobbyGM_C__pf2687806415::bpf__SwapCharacter__pf_Implementation(APlayerController* bpp__playerController__pf, UClass* bpp__characterClass__pf, bool bpp__changedStatus__pf)
{
	b0l__K2Node_CustomEvent_playerController2__pf = bpp__playerController__pf;
	b0l__K2Node_CustomEvent_characterClass__pf = bpp__characterClass__pf;
	b0l__K2Node_CustomEvent_changedStatus__pf = bpp__changedStatus__pf;
	bpf__ExecuteUbergraph_lobbyGM__pf_2(74);
}
void AlobbyGM_C__pf2687806415::bpf__UserConstructionScript__pf()
{
}
void AlobbyGM_C__pf2687806415::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{97, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Textures/arena01.arena01 
		{98, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/characters/Barbarous.Barbarous_C 
		{99, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/characters/Frosty.Frosty_C 
		{100, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/characters/Forge.Forge_C 
		{69, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/InfinityBladeWarriors/Character/CompleteCharacters/Textures_Materials/CharM_Cardboard/Char_M_Cardboard_D.Char_M_Cardboard_D 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
void AlobbyGM_C__pf2687806415::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SceneComponent 
		{10, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Character 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{101, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerStart 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameInstance 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{0, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Texture2D 
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Controller 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{79, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{102, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Widget 
		{103, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameMode 
		{95, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameModeBase 
		{104, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Barbarous_C /Game/Blueprints/characters/Barbarous.Default__Barbarous_C 
		{105, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Frosty_C /Game/Blueprints/characters/Frosty.Default__Frosty_C 
		{106, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Forge_C /Game/Blueprints/characters/Forge.Default__Forge_C 
		{107, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.EngineMessage 
		{108, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameSession 
		{109, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameState 
		{110, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerState 
		{111, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.HUD 
		{112, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SpectatorPawn 
		{113, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/lobby/lobbyPlayerController.lobbyPlayerController_C 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/allLevels/gameInfoInstance.gameInfoInstance_C 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/characters/0_base.0_base_C 
		{114, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/UI/Lobby/lobbyMenu.lobbyMenu_C 
		{88, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedStruct /Game/Blueprints/allLevels/PlayerInfo.PlayerInfo 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
struct FRegisterHelper__AlobbyGM_C__pf2687806415
{
	FRegisterHelper__AlobbyGM_C__pf2687806415()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Blueprints/lobby/lobbyGM"), &AlobbyGM_C__pf2687806415::__StaticDependenciesAssets);
	}
	static FRegisterHelper__AlobbyGM_C__pf2687806415 Instance;
};
FRegisterHelper__AlobbyGM_C__pf2687806415 FRegisterHelper__AlobbyGM_C__pf2687806415::Instance;
void AlobbyGM_C__pf2687806415::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME_DIFFNAMES(AlobbyGM_C__pf2687806415, bpv__spawnPoints__pf, FName(TEXT("spawnPoints")));
	DOREPLIFETIME_DIFFNAMES(AlobbyGM_C__pf2687806415, bpv__gmMapTime__pf, FName(TEXT("gmMapTime")));
	DOREPLIFETIME_DIFFNAMES(AlobbyGM_C__pf2687806415, bpv__gmMapName__pf, FName(TEXT("gmMapName")));
	DOREPLIFETIME_DIFFNAMES(AlobbyGM_C__pf2687806415, bpv__gmMapImage__pf, FName(TEXT("gmMapImage")));
	DOREPLIFETIME_DIFFNAMES(AlobbyGM_C__pf2687806415, bpv__connectedPlayers__pf, FName(TEXT("connectedPlayers")));
	DOREPLIFETIME_DIFFNAMES(AlobbyGM_C__pf2687806415, bpv__availableCharacters__pf, FName(TEXT("availableCharacters")));
	DOREPLIFETIME_DIFFNAMES(AlobbyGM_C__pf2687806415, bpv__gmMapID__pf, FName(TEXT("gmMapID")));
	DOREPLIFETIME_DIFFNAMES(AlobbyGM_C__pf2687806415, bpv__characters__pf, FName(TEXT("characters")));
}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
