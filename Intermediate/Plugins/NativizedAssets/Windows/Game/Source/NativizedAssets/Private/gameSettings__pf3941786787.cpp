#include "NativizedAssets.h"
#include "gameSettings__pf3941786787.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/Border.h"
#include "Runtime/UMG/Public/Components/BorderSlot.h"
#include "Runtime/UMG/Public/Components/VerticalBox.h"
#include "Runtime/UMG/Public/Components/VerticalBoxSlot.h"
#include "Runtime/UMG/Public/Components/HorizontalBox.h"
#include "Runtime/UMG/Public/Components/HorizontalBoxSlot.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/UMG/Public/Components/ButtonSlot.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/UMG/Public/Components/WidgetSwitcher.h"
#include "Runtime/UMG/Public/Components/WidgetSwitcherSlot.h"
#include "Runtime/UMG/Public/Components/SizeBox.h"
#include "Runtime/UMG/Public/Components/SizeBoxSlot.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/UMG/Public/Components/ScrollBox.h"
#include "Runtime/UMG/Public/Components/Spacer.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "playerButton__pf3941786787.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
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
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
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
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
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
#include "Runtime/Engine/Classes/Components/InputComponent.h"
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
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "lobbyGM__pf2687806415.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "lobbyPlayerController__pf2687806415.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerStart.h"
#include "gameInfoInstance__pf533497531.h"
#include "0_base__pf1490413170.h"
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
#include "playerSaveGame__pf533497531.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Kismet/KismetTextLibrary.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"
#include "Runtime/Engine/Classes/Engine/Texture2DDynamic.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
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
#include "characterSelect__pf3941786787.h"
#include "chatWIndow__pf1207061625.h"
#include "Runtime/Engine/Classes/GameFramework/GameMode.h"
#include "Runtime/Engine/Classes/GameFramework/GameState.h"
#include "Runtime/Slate/Public/Widgets/Layout/SScrollBox.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
UgameSettings_C__pf3941786787::UgameSettings_C__pf3941786787(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (UgameSettings_C__pf3941786787::StaticClass() == GetClass()))
	{
		UgameSettings_C__pf3941786787::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__Accept__pf = nullptr;
	bpv__backButton__pf = nullptr;
	bpv__currentAvatar__pf = nullptr;
	bpv__kickButton__pf = nullptr;
	bpv__playersWIndow__pf = nullptr;
	bpv__settingsButton__pf = nullptr;
	bpv__TextBlock_56__pf = nullptr;
	bpv__TextBlock_171__pf = nullptr;
	bpv__toggledDisplayeWidget__pf = nullptr;
	bpv__toggleLeft__pf = nullptr;
	bpv__toggleRight__pf = nullptr;
	bpv__toggleTimeLeft__pf = nullptr;
	bpv__toggleTimeRight__pf = nullptr;
	bpv__displayedMap__pf = nullptr;
	bpv__displayedMapTime__pf = FText::GetEmpty();
	bpv__displayedMapName__pf = FText::GetEmpty();
	bpv__mapID__pf = 0;
	bpv__timeID__pf = 0;
	bCanEverTick = false;
	bCanEverPaint = false;
}
void UgameSettings_C__pf3941786787::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
void UgameSettings_C__pf3941786787::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(UplayerButton_C__pf3941786787::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AlobbyGM_C__pf2687806415::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_3"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__0);
	auto __Local__1 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	__Local__0->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__0->ComponentDelegateBindings.AddUninitialized(8);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 8);
	auto& __Local__2 = __Local__0->ComponentDelegateBindings[0];
	__Local__2.ComponentPropertyName = FName(TEXT("kickButton"));
	__Local__2.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__2.FunctionNameToBind = FName(TEXT("BndEvt__kickButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__3 = __Local__0->ComponentDelegateBindings[1];
	__Local__3.ComponentPropertyName = FName(TEXT("settingsButton"));
	__Local__3.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__3.FunctionNameToBind = FName(TEXT("BndEvt__settingsButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__4 = __Local__0->ComponentDelegateBindings[2];
	__Local__4.ComponentPropertyName = FName(TEXT("backButton"));
	__Local__4.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__4.FunctionNameToBind = FName(TEXT("BndEvt__backButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__5 = __Local__0->ComponentDelegateBindings[3];
	__Local__5.ComponentPropertyName = FName(TEXT("Accept"));
	__Local__5.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__5.FunctionNameToBind = FName(TEXT("BndEvt__Accept_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__6 = __Local__0->ComponentDelegateBindings[4];
	__Local__6.ComponentPropertyName = FName(TEXT("toggleTimeRight"));
	__Local__6.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__6.FunctionNameToBind = FName(TEXT("BndEvt__toggleTimeRight_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__7 = __Local__0->ComponentDelegateBindings[5];
	__Local__7.ComponentPropertyName = FName(TEXT("toggleTimeLeft"));
	__Local__7.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__7.FunctionNameToBind = FName(TEXT("BndEvt__toggleTimeLeft_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__8 = __Local__0->ComponentDelegateBindings[6];
	__Local__8.ComponentPropertyName = FName(TEXT("toggleRight"));
	__Local__8.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__8.FunctionNameToBind = FName(TEXT("BndEvt__toggleRight_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__9 = __Local__0->ComponentDelegateBindings[7];
	__Local__9.ComponentPropertyName = FName(TEXT("toggleLeft"));
	__Local__9.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__9.FunctionNameToBind = FName(TEXT("BndEvt__toggleLeft_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature"));
	auto __Local__10 = NewObject<UBorder>(__Local__1, UBorder::StaticClass(), TEXT("Border_82"));
	__Local__10->BrushColor = FLinearColor(0.000000, 0.000000, 0.000000, 0.500000);
	auto& __Local__11 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__10), UPanelWidget::__PPO__Slots() )));
	__Local__11 = TArray<UPanelSlot*> ();
	__Local__11.Reserve(1);
	auto __Local__12 = NewObject<UBorderSlot>(__Local__10, UBorderSlot::StaticClass(), TEXT("BorderSlot_0"));
	__Local__12->Parent = __Local__10;
	auto __Local__13 = NewObject<UVerticalBox>(__Local__1, UVerticalBox::StaticClass(), TEXT("VerticalBox_0"));
	auto& __Local__14 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__13), UPanelWidget::__PPO__Slots() )));
	__Local__14 = TArray<UPanelSlot*> ();
	__Local__14.Reserve(3);
	auto __Local__15 = NewObject<UVerticalBoxSlot>(__Local__13, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_0"));
	__Local__15->Parent = __Local__13;
	auto __Local__16 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("HorizontalBox_0"));
	auto& __Local__17 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__16), UPanelWidget::__PPO__Slots() )));
	__Local__17 = TArray<UPanelSlot*> ();
	__Local__17.Reserve(3);
	auto __Local__18 = NewObject<UHorizontalBoxSlot>(__Local__16, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_1"));
	__Local__18->Parent = __Local__16;
	auto __Local__19 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("settingsButton"));
	auto& __Local__20 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__19), UPanelWidget::__PPO__Slots() )));
	__Local__20 = TArray<UPanelSlot*> ();
	__Local__20.Reserve(1);
	auto __Local__21 = NewObject<UButtonSlot>(__Local__19, UButtonSlot::StaticClass(), TEXT("ButtonSlot_0"));
	__Local__21->Parent = __Local__19;
	auto __Local__22 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_1"));
	__Local__22->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Settings"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("80C9B95B4C87470B93179BAA93243138") /* Key */
	);
	__Local__22->Slot = __Local__21;
	__Local__21->Content = __Local__22;
	__Local__20.Add(__Local__21);
	__Local__19->Slot = __Local__18;
	__Local__18->Content = __Local__19;
	__Local__17.Add(__Local__18);
	auto __Local__23 = NewObject<UHorizontalBoxSlot>(__Local__16, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_0"));
	__Local__23->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__23->Parent = __Local__16;
	auto __Local__24 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_0"));
	__Local__24->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Game Settings"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("DFFB02D44DA5078A1B7BB4969E4EDFBE") /* Key */
	);
	__Local__24->Font.Size = 64;
	auto& __Local__25 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__24), UTextLayoutWidget::__PPO__Justification() )));
	__Local__25 = ETextJustify::Type::Center;
	__Local__24->Slot = __Local__23;
	__Local__23->Content = __Local__24;
	__Local__17.Add(__Local__23);
	auto __Local__26 = NewObject<UHorizontalBoxSlot>(__Local__16, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_2"));
	__Local__26->Parent = __Local__16;
	auto __Local__27 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("kickButton"));
	auto& __Local__28 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__27), UPanelWidget::__PPO__Slots() )));
	__Local__28 = TArray<UPanelSlot*> ();
	__Local__28.Reserve(1);
	auto __Local__29 = NewObject<UButtonSlot>(__Local__27, UButtonSlot::StaticClass(), TEXT("ButtonSlot_1"));
	__Local__29->Parent = __Local__27;
	auto __Local__30 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_2"));
	__Local__30->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Kick Player"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("634BC0A442BAE12282DC9589C25C229E") /* Key */
	);
	__Local__30->Slot = __Local__29;
	__Local__29->Content = __Local__30;
	__Local__28.Add(__Local__29);
	__Local__27->Slot = __Local__26;
	__Local__26->Content = __Local__27;
	__Local__17.Add(__Local__26);
	__Local__16->Slot = __Local__15;
	__Local__15->Content = __Local__16;
	__Local__14.Add(__Local__15);
	auto __Local__31 = NewObject<UVerticalBoxSlot>(__Local__13, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_13"));
	__Local__31->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__31->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__31->Parent = __Local__13;
	auto __Local__32 = NewObject<UWidgetSwitcher>(__Local__1, UWidgetSwitcher::StaticClass(), TEXT("toggledDisplayeWidget"));
	auto& __Local__33 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__32), UPanelWidget::__PPO__Slots() )));
	__Local__33 = TArray<UPanelSlot*> ();
	__Local__33.Reserve(2);
	auto __Local__34 = NewObject<UWidgetSwitcherSlot>(__Local__32, UWidgetSwitcherSlot::StaticClass(), TEXT("WidgetSwitcherSlot_0"));
	__Local__34->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__34->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__34->Parent = __Local__32;
	auto __Local__35 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("HorizontalBox_6"));
	auto& __Local__36 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__35), UPanelWidget::__PPO__Slots() )));
	__Local__36 = TArray<UPanelSlot*> ();
	__Local__36.Reserve(2);
	auto __Local__37 = NewObject<UHorizontalBoxSlot>(__Local__35, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_6"));
	__Local__37->Padding.Left = 10.000000f;
	__Local__37->Padding.Top = 10.000000f;
	__Local__37->Padding.Right = 10.000000f;
	__Local__37->Padding.Bottom = 10.000000f;
	__Local__37->Parent = __Local__35;
	auto __Local__38 = NewObject<UVerticalBox>(__Local__1, UVerticalBox::StaticClass(), TEXT("selectMapWidget"));
	auto& __Local__39 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__38), UPanelWidget::__PPO__Slots() )));
	__Local__39 = TArray<UPanelSlot*> ();
	__Local__39.Reserve(3);
	auto __Local__40 = NewObject<UVerticalBoxSlot>(__Local__38, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_11"));
	__Local__40->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__40->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__40->Parent = __Local__38;
	auto __Local__41 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_55"));
	__Local__41->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Select Map"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("380DB4624D9BD2605306E3B313BFC5DC") /* Key */
	);
	__Local__41->Slot = __Local__40;
	__Local__40->Content = __Local__41;
	__Local__39.Add(__Local__40);
	auto __Local__42 = NewObject<UVerticalBoxSlot>(__Local__38, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_7"));
	__Local__42->Parent = __Local__38;
	auto __Local__43 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("HorizontalBox_1"));
	auto& __Local__44 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__43), UPanelWidget::__PPO__Slots() )));
	__Local__44 = TArray<UPanelSlot*> ();
	__Local__44.Reserve(3);
	auto __Local__45 = NewObject<UHorizontalBoxSlot>(__Local__43, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_0"));
	__Local__45->Parent = __Local__43;
	auto __Local__46 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("toggleLeft"));
	auto& __Local__47 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__46->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__47 = FLinearColor(1.000000, 0.544528, 0.118760, 1.000000);
	auto& __Local__48 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__46), UPanelWidget::__PPO__Slots() )));
	__Local__48 = TArray<UPanelSlot*> ();
	__Local__48.Reserve(1);
	auto __Local__49 = NewObject<UButtonSlot>(__Local__46, UButtonSlot::StaticClass(), TEXT("ButtonSlot_0"));
	__Local__49->Parent = __Local__46;
	auto __Local__50 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_64"));
	__Local__50->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("<"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("2A74AA19452E80286F13569F7853BE15") /* Key */
	);
	__Local__50->Slot = __Local__49;
	__Local__49->Content = __Local__50;
	__Local__48.Add(__Local__49);
	__Local__46->Slot = __Local__45;
	__Local__45->Content = __Local__46;
	__Local__44.Add(__Local__45);
	auto __Local__51 = NewObject<UHorizontalBoxSlot>(__Local__43, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_3"));
	__Local__51->Parent = __Local__43;
	auto __Local__52 = NewObject<USizeBox>(__Local__1, USizeBox::StaticClass(), TEXT("SizeBox_0"));
	__Local__52->bOverride_WidthOverride = true;
	__Local__52->bOverride_HeightOverride = true;
	__Local__52->WidthOverride = 256.000000f;
	__Local__52->HeightOverride = 256.000000f;
	auto& __Local__53 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__52), UPanelWidget::__PPO__Slots() )));
	__Local__53 = TArray<UPanelSlot*> ();
	__Local__53.Reserve(1);
	auto __Local__54 = NewObject<USizeBoxSlot>(__Local__52, USizeBoxSlot::StaticClass(), TEXT("SizeBoxSlot_0"));
	__Local__54->Parent = __Local__52;
	auto __Local__55 = NewObject<UImage>(__Local__1, UImage::StaticClass(), TEXT("currentAvatar"));
	__Local__55->Slot = __Local__54;
	__Local__54->Content = __Local__55;
	__Local__53.Add(__Local__54);
	__Local__52->Slot = __Local__51;
	__Local__51->Content = __Local__52;
	__Local__44.Add(__Local__51);
	auto __Local__56 = NewObject<UHorizontalBoxSlot>(__Local__43, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_2"));
	__Local__56->Parent = __Local__43;
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
	TEXT("A1C223A3462D9EE213A72DA47F3636C4") /* Key */
	);
	__Local__61->Slot = __Local__60;
	__Local__60->Content = __Local__61;
	__Local__59.Add(__Local__60);
	__Local__57->Slot = __Local__56;
	__Local__56->Content = __Local__57;
	__Local__44.Add(__Local__56);
	__Local__43->Slot = __Local__42;
	__Local__42->Content = __Local__43;
	__Local__39.Add(__Local__42);
	auto __Local__62 = NewObject<UVerticalBoxSlot>(__Local__38, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_6"));
	__Local__62->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__62->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__62->Parent = __Local__38;
	auto __Local__63 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_56"));
	__Local__63->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Arena01"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("308A89734AC4F24228316A959918AD3D") /* Key */
	);
	__Local__63->Slot = __Local__62;
	__Local__62->Content = __Local__63;
	__Local__39.Add(__Local__62);
	__Local__38->Slot = __Local__37;
	__Local__37->Content = __Local__38;
	__Local__36.Add(__Local__37);
	auto __Local__64 = NewObject<UHorizontalBoxSlot>(__Local__35, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_7"));
	__Local__64->Padding.Left = 10.000000f;
	__Local__64->Padding.Top = 10.000000f;
	__Local__64->Padding.Right = 10.000000f;
	__Local__64->Padding.Bottom = 10.000000f;
	__Local__64->Parent = __Local__35;
	auto __Local__65 = NewObject<UVerticalBox>(__Local__1, UVerticalBox::StaticClass(), TEXT("selectTimeWidget"));
	auto& __Local__66 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__65), UPanelWidget::__PPO__Slots() )));
	__Local__66 = TArray<UPanelSlot*> ();
	__Local__66.Reserve(2);
	auto __Local__67 = NewObject<UVerticalBoxSlot>(__Local__65, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_11"));
	__Local__67->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__67->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__67->Parent = __Local__65;
	auto __Local__68 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_167"));
	__Local__68->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Select Time"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("472653BF44BD46CC25346F9249905018") /* Key */
	);
	__Local__68->Slot = __Local__67;
	__Local__67->Content = __Local__68;
	__Local__66.Add(__Local__67);
	auto __Local__69 = NewObject<UVerticalBoxSlot>(__Local__65, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_7"));
	__Local__69->Parent = __Local__65;
	auto __Local__70 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("HorizontalBox_7"));
	auto& __Local__71 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__70), UPanelWidget::__PPO__Slots() )));
	__Local__71 = TArray<UPanelSlot*> ();
	__Local__71.Reserve(3);
	auto __Local__72 = NewObject<UHorizontalBoxSlot>(__Local__70, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_0"));
	__Local__72->Parent = __Local__70;
	auto __Local__73 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("toggleTimeLeft"));
	auto& __Local__74 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__73->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__74 = FLinearColor(1.000000, 0.544528, 0.118760, 1.000000);
	auto& __Local__75 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__73), UPanelWidget::__PPO__Slots() )));
	__Local__75 = TArray<UPanelSlot*> ();
	__Local__75.Reserve(1);
	auto __Local__76 = NewObject<UButtonSlot>(__Local__73, UButtonSlot::StaticClass(), TEXT("ButtonSlot_0"));
	__Local__76->Parent = __Local__73;
	auto __Local__77 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_168"));
	__Local__77->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("<"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("2A74AA19452E80286F13569F7853BE15") /* Key */
	);
	__Local__77->Slot = __Local__76;
	__Local__76->Content = __Local__77;
	__Local__75.Add(__Local__76);
	__Local__73->Slot = __Local__72;
	__Local__72->Content = __Local__73;
	__Local__71.Add(__Local__72);
	auto __Local__78 = NewObject<UHorizontalBoxSlot>(__Local__70, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_3"));
	__Local__78->Parent = __Local__70;
	auto __Local__79 = NewObject<USizeBox>(__Local__1, USizeBox::StaticClass(), TEXT("SizeBox_1"));
	__Local__79->bOverride_WidthOverride = true;
	__Local__79->bOverride_HeightOverride = true;
	__Local__79->WidthOverride = 256.000000f;
	__Local__79->HeightOverride = 256.000000f;
	auto& __Local__80 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__79), UPanelWidget::__PPO__Slots() )));
	__Local__80 = TArray<UPanelSlot*> ();
	__Local__80.Reserve(1);
	auto __Local__81 = NewObject<USizeBoxSlot>(__Local__79, USizeBoxSlot::StaticClass(), TEXT("SizeBoxSlot_1"));
	__Local__81->Padding.Left = 10.000000f;
	__Local__81->Padding.Top = 10.000000f;
	__Local__81->Padding.Right = 10.000000f;
	__Local__81->Padding.Bottom = 10.000000f;
	__Local__81->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__81->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__81->Parent = __Local__79;
	auto __Local__82 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_171"));
	__Local__82->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("10 mins"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("043CC3EA443586A9140E50AA8BB87A60") /* Key */
	);
	__Local__82->Font.Size = 36;
	__Local__82->Slot = __Local__81;
	__Local__81->Content = __Local__82;
	__Local__80.Add(__Local__81);
	__Local__79->Slot = __Local__78;
	__Local__78->Content = __Local__79;
	__Local__71.Add(__Local__78);
	auto __Local__83 = NewObject<UHorizontalBoxSlot>(__Local__70, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_2"));
	__Local__83->Parent = __Local__70;
	auto __Local__84 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("toggleTimeRight"));
	auto& __Local__85 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__84->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__85 = FLinearColor(1.000000, 0.544528, 0.118760, 1.000000);
	auto& __Local__86 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__84), UPanelWidget::__PPO__Slots() )));
	__Local__86 = TArray<UPanelSlot*> ();
	__Local__86.Reserve(1);
	auto __Local__87 = NewObject<UButtonSlot>(__Local__84, UButtonSlot::StaticClass(), TEXT("ButtonSlot_1"));
	__Local__87->Parent = __Local__84;
	auto __Local__88 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_169"));
	__Local__88->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT(">"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("A1C223A3462D9EE213A72DA47F3636C4") /* Key */
	);
	__Local__88->Slot = __Local__87;
	__Local__87->Content = __Local__88;
	__Local__86.Add(__Local__87);
	__Local__84->Slot = __Local__83;
	__Local__83->Content = __Local__84;
	__Local__71.Add(__Local__83);
	__Local__70->Slot = __Local__69;
	__Local__69->Content = __Local__70;
	__Local__66.Add(__Local__69);
	__Local__65->Slot = __Local__64;
	__Local__64->Content = __Local__65;
	__Local__36.Add(__Local__64);
	__Local__35->Slot = __Local__34;
	__Local__34->Content = __Local__35;
	__Local__33.Add(__Local__34);
	auto __Local__89 = NewObject<UWidgetSwitcherSlot>(__Local__32, UWidgetSwitcherSlot::StaticClass(), TEXT("WidgetSwitcherSlot_1"));
	__Local__89->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__89->Parent = __Local__32;
	auto __Local__90 = NewObject<UVerticalBox>(__Local__1, UVerticalBox::StaticClass(), TEXT("VerticalBox_4"));
	auto& __Local__91 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__90), UPanelWidget::__PPO__Slots() )));
	__Local__91 = TArray<UPanelSlot*> ();
	__Local__91.Reserve(2);
	auto __Local__92 = NewObject<UVerticalBoxSlot>(__Local__90, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_12"));
	__Local__92->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__92->Parent = __Local__90;
	auto __Local__93 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_173"));
	__Local__93->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Select Player to Kick"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("EB084D6F404E28EA1E8C318A720FBDEB") /* Key */
	);
	__Local__93->Slot = __Local__92;
	__Local__92->Content = __Local__93;
	__Local__91.Add(__Local__92);
	auto __Local__94 = NewObject<UVerticalBoxSlot>(__Local__90, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_13"));
	__Local__94->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__94->Parent = __Local__90;
	auto __Local__95 = NewObject<UScrollBox>(__Local__1, UScrollBox::StaticClass(), TEXT("playersWIndow"));
	__Local__95->Slot = __Local__94;
	__Local__95->bIsVariable = true;
	__Local__94->Content = __Local__95;
	__Local__91.Add(__Local__94);
	__Local__90->Slot = __Local__89;
	__Local__89->Content = __Local__90;
	__Local__33.Add(__Local__89);
	__Local__32->Slot = __Local__31;
	__Local__31->Content = __Local__32;
	__Local__14.Add(__Local__31);
	auto __Local__96 = NewObject<UVerticalBoxSlot>(__Local__13, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_16"));
	__Local__96->Parent = __Local__13;
	auto __Local__97 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("HorizontalBox_2"));
	auto& __Local__98 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__97), UPanelWidget::__PPO__Slots() )));
	__Local__98 = TArray<UPanelSlot*> ();
	__Local__98.Reserve(3);
	auto __Local__99 = NewObject<UHorizontalBoxSlot>(__Local__97, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_0"));
	__Local__99->Parent = __Local__97;
	auto __Local__100 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("backButton"));
	auto& __Local__101 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__100->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__101 = FLinearColor(1.000000, 0.544528, 0.118760, 1.000000);
	auto& __Local__102 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__100), UPanelWidget::__PPO__Slots() )));
	__Local__102 = TArray<UPanelSlot*> ();
	__Local__102.Reserve(1);
	auto __Local__103 = NewObject<UButtonSlot>(__Local__100, UButtonSlot::StaticClass(), TEXT("ButtonSlot_0"));
	__Local__103->Parent = __Local__100;
	auto __Local__104 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_86"));
	__Local__104->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Back"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("5FBCB58846868F038DD5578BF3E1F9DA") /* Key */
	);
	__Local__104->Slot = __Local__103;
	__Local__103->Content = __Local__104;
	__Local__102.Add(__Local__103);
	__Local__100->Slot = __Local__99;
	__Local__99->Content = __Local__100;
	__Local__98.Add(__Local__99);
	auto __Local__105 = NewObject<UHorizontalBoxSlot>(__Local__97, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_3"));
	__Local__105->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__105->Parent = __Local__97;
	auto __Local__106 = NewObject<USpacer>(__Local__1, USpacer::StaticClass(), TEXT("Spacer_0"));
	__Local__106->Slot = __Local__105;
	__Local__105->Content = __Local__106;
	__Local__98.Add(__Local__105);
	auto __Local__107 = NewObject<UHorizontalBoxSlot>(__Local__97, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_2"));
	__Local__107->Parent = __Local__97;
	auto __Local__108 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("Accept"));
	auto& __Local__109 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__108->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__109 = FLinearColor(1.000000, 0.544528, 0.118760, 1.000000);
	auto& __Local__110 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__108), UPanelWidget::__PPO__Slots() )));
	__Local__110 = TArray<UPanelSlot*> ();
	__Local__110.Reserve(1);
	auto __Local__111 = NewObject<UButtonSlot>(__Local__108, UButtonSlot::StaticClass(), TEXT("ButtonSlot_1"));
	__Local__111->Parent = __Local__108;
	auto __Local__112 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_88"));
	__Local__112->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Accept"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("D7DE8E524BF0CD9A252231A0044FE05F") /* Key */
	);
	__Local__112->Slot = __Local__111;
	__Local__111->Content = __Local__112;
	__Local__110.Add(__Local__111);
	__Local__108->Slot = __Local__107;
	__Local__107->Content = __Local__108;
	__Local__98.Add(__Local__107);
	__Local__97->Slot = __Local__96;
	__Local__96->Content = __Local__97;
	__Local__14.Add(__Local__96);
	__Local__13->Slot = __Local__12;
	__Local__12->Content = __Local__13;
	__Local__11.Add(__Local__12);
	__Local__1->RootWidget = __Local__10;
}
void UgameSettings_C__pf3941786787::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__113;
	SlotNames.Append(__Local__113);
}
void UgameSettings_C__pf3941786787::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__114;
	TArray<FDelegateRuntimeBinding>  __Local__115;
	__Local__115.AddUninitialized(3);
	FDelegateRuntimeBinding::StaticStruct()->InitializeStruct(__Local__115.GetData(), 3);
	auto& __Local__116 = __Local__115[0];
	__Local__116.ObjectName = FString(TEXT("currentAvatar"));
	__Local__116.PropertyName = FName(TEXT("Brush"));
	auto& __Local__117 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__116.SourcePath), FDynamicPropertyPath::__PPO__Segments() )));
	__Local__117 = TArray<FPropertyPathSegment> ();
	__Local__117.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__117.GetData(), 1);
	auto& __Local__118 = __Local__117[0];
	__Local__118.Name = FName(TEXT("displayedMap"));
	__Local__116.Kind = EBindingKind::Property;
	auto& __Local__119 = __Local__115[1];
	__Local__119.ObjectName = FString(TEXT("TextBlock_171"));
	__Local__119.PropertyName = FName(TEXT("Text"));
	auto& __Local__120 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__119.SourcePath), FDynamicPropertyPath::__PPO__Segments() )));
	__Local__120 = TArray<FPropertyPathSegment> ();
	__Local__120.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__120.GetData(), 1);
	auto& __Local__121 = __Local__120[0];
	__Local__121.Name = FName(TEXT("displayedMapTime"));
	__Local__119.Kind = EBindingKind::Property;
	auto& __Local__122 = __Local__115[2];
	__Local__122.ObjectName = FString(TEXT("TextBlock_56"));
	__Local__122.PropertyName = FName(TEXT("Text"));
	auto& __Local__123 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__122.SourcePath), FDynamicPropertyPath::__PPO__Segments() )));
	__Local__123 = TArray<FPropertyPathSegment> ();
	__Local__123.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__123.GetData(), 1);
	auto& __Local__124 = __Local__123[0];
	__Local__124.Name = FName(TEXT("displayedMapName"));
	__Local__122.Kind = EBindingKind::Property;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), false, CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UgameSettings_C__pf3941786787::StaticClass())->MiscConvertedSubobjects[0]), __Local__114, __Local__115);
}
void UgameSettings_C__pf3941786787::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UgameSettings_C__pf3941786787::bpf__ExecuteUbergraph_gameSettings__pf_0(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	UplayerButton_C__pf3941786787* bpfv__CallFunc_Create_ReturnValue__pf{};
	AGameModeBase* bpfv__CallFunc_GetGameMode_ReturnValue2__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	UPanelSlot* bpfv__CallFunc_AddChild_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
			}
		case 2:
			{
				TArray<FPlayerInfo__pf533497531>  __Local__125 = TArray<FPlayerInfo__pf533497531> {};
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(((IsValid(b0l__K2Node_DynamicCast_AsLobby_GM2__pf)) ? (b0l__K2Node_DynamicCast_AsLobby_GM2__pf->bpv__connectedPlayers__pf) : (__Local__125)));
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 3:
			{
				b0l__Temp_int_Array_Index_Variable__pf = b0l__Temp_int_Loop_Counter_Variable__pf;
			}
		case 4:
			{
				__StateStack.Push(1);
			}
		case 5:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(b0l__Temp_int_Array_Index_Variable__pf, 0);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 6;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 6:
			{
				bpfv__CallFunc_Create_ReturnValue__pf = CastChecked<UplayerButton_C__pf3941786787>(UWidgetBlueprintLibrary::Create(this, UplayerButton_C__pf3941786787::StaticClass(), ((APlayerController*)nullptr)), ECastCheckedType::NullAllowed);
			}
		case 7:
			{
				UKismetSystemLibrary::SetIntPropertyByName(bpfv__CallFunc_Create_ReturnValue__pf, FName(TEXT("playerID")), b0l__Temp_int_Array_Index_Variable__pf);
			}
		case 8:
			{
				if(IsValid(bpv__playersWIndow__pf))
				{
					bpfv__CallFunc_AddChild_ReturnValue__pf = bpv__playersWIndow__pf->UPanelWidget::AddChild(bpfv__CallFunc_Create_ReturnValue__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 9:
			{
				b0l__Temp_int_Array_Index_Variable__pf = 0;
				__CurrentState = 2;
				break;
			}
		case 10:
			{
				b0l__Temp_int_Loop_Counter_Variable__pf = 0;
				__CurrentState = 9;
				break;
			}
		case 15:
			{
				__CurrentState = 16;
				break;
			}
		case 16:
			{
				bpfv__CallFunc_GetGameMode_ReturnValue2__pf = UGameplayStatics::GetGameMode(this);
				b0l__K2Node_DynamicCast_AsLobby_GM2__pf = Cast<AlobbyGM_C__pf2687806415>(bpfv__CallFunc_GetGameMode_ReturnValue2__pf);
				b0l__K2Node_DynamicCast_bSuccess2__pf = (b0l__K2Node_DynamicCast_AsLobby_GM2__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 17:
			{
				if(IsValid(bpv__playersWIndow__pf))
				{
					bpv__playersWIndow__pf->UPanelWidget::ClearChildren();
				}
				__CurrentState = 10;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UgameSettings_C__pf3941786787::bpf__ExecuteUbergraph_gameSettings__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 46);
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__toggledDisplayeWidget__pf))
	{
		bpv__toggledDisplayeWidget__pf->SetActiveWidgetIndex(0);
	}
	return; //KCST_EndOfThread
}
void UgameSettings_C__pf3941786787::bpf__ExecuteUbergraph_gameSettings__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 48);
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__toggledDisplayeWidget__pf))
	{
		bpv__toggledDisplayeWidget__pf->SetActiveWidgetIndex(1);
	}
	return; //KCST_EndOfThread
}
void UgameSettings_C__pf3941786787::bpf__ExecuteUbergraph_gameSettings__pf_3(int32 bpp__EntryPoint__pf)
{
	AGameModeBase* bpfv__CallFunc_GetGameMode_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 41:
			{
				__CurrentState = 42;
				break;
			}
		case 42:
			{
				bpfv__CallFunc_GetGameMode_ReturnValue__pf = UGameplayStatics::GetGameMode(this);
				b0l__K2Node_DynamicCast_AsLobby_GM__pf = Cast<AlobbyGM_C__pf2687806415>(bpfv__CallFunc_GetGameMode_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsLobby_GM__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 43:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsLobby_GM__pf))
				{
					b0l__K2Node_DynamicCast_AsLobby_GM__pf->bpf__serverUpdateGameSettings__pf(bpv__displayedMap__pf, bpv__displayedMapName__pf, bpv__displayedMapTime__pf, bpv__mapID__pf);
				}
			}
		case 44:
			{
				SetVisibility(ESlateVisibility::Hidden);
				__CurrentState = -1;
				break;
			}
		case 45:
			{
				__CurrentState = 44;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UgameSettings_C__pf3941786787::bpf__ExecuteUbergraph_gameSettings__pf_4(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue2__pf{};
	int32 bpfv__CallFunc_Clamp_ReturnValue2__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 34:
			{
				__CurrentState = 35;
				break;
			}
		case 35:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue2__pf = UKismetMathLibrary::Add_IntInt(bpv__timeID__pf, 1);
				bpfv__CallFunc_Clamp_ReturnValue2__pf = UKismetMathLibrary::Clamp(bpfv__CallFunc_Add_IntInt_ReturnValue2__pf, 0, 3);
				bpv__timeID__pf = bpfv__CallFunc_Clamp_ReturnValue2__pf;
			}
		case 36:
			{
				b0l__K2Node_SwitchInteger3_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__timeID__pf, 0);
				if (!b0l__K2Node_SwitchInteger3_CmpSuccess__pf)
				{
					__CurrentState = 40;
					break;
				}
				b0l__K2Node_SwitchInteger3_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__timeID__pf, 1);
				if (!b0l__K2Node_SwitchInteger3_CmpSuccess__pf)
				{
					__CurrentState = 39;
					break;
				}
				b0l__K2Node_SwitchInteger3_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__timeID__pf, 2);
				if (!b0l__K2Node_SwitchInteger3_CmpSuccess__pf)
				{
					__CurrentState = 38;
					break;
				}
				b0l__K2Node_SwitchInteger3_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__timeID__pf, 3);
				if (!b0l__K2Node_SwitchInteger3_CmpSuccess__pf)
				{
					__CurrentState = 37;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 37:
			{
				bpv__displayedMapTime__pf = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("25 Mins"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("F01FA8D74D5BFF41D5FEA091246263B5") /* Key */
	);
				__CurrentState = -1;
				break;
			}
		case 38:
			{
				bpv__displayedMapTime__pf = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("20 Mins"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("6D94FF0D434BD00283F348B37534C3B8") /* Key */
	);
				__CurrentState = -1;
				break;
			}
		case 39:
			{
				bpv__displayedMapTime__pf = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("15 Mins"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("EAB6202049852802345B049F58194E10") /* Key */
	);
				__CurrentState = -1;
				break;
			}
		case 40:
			{
				bpv__displayedMapTime__pf = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("10 Mins"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("3AC1945A4CED8A9053C2A1B5CCB1DF98") /* Key */
	);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UgameSettings_C__pf3941786787::bpf__ExecuteUbergraph_gameSettings__pf_5(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Clamp_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 27:
			{
				__CurrentState = 28;
				break;
			}
		case 28:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpv__timeID__pf, 1);
				bpfv__CallFunc_Clamp_ReturnValue__pf = UKismetMathLibrary::Clamp(bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf, 0, 3);
				bpv__timeID__pf = bpfv__CallFunc_Clamp_ReturnValue__pf;
			}
		case 29:
			{
				b0l__K2Node_SwitchInteger2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__timeID__pf, 0);
				if (!b0l__K2Node_SwitchInteger2_CmpSuccess__pf)
				{
					__CurrentState = 31;
					break;
				}
				b0l__K2Node_SwitchInteger2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__timeID__pf, 1);
				if (!b0l__K2Node_SwitchInteger2_CmpSuccess__pf)
				{
					__CurrentState = 30;
					break;
				}
				b0l__K2Node_SwitchInteger2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__timeID__pf, 2);
				if (!b0l__K2Node_SwitchInteger2_CmpSuccess__pf)
				{
					__CurrentState = 32;
					break;
				}
				b0l__K2Node_SwitchInteger2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__timeID__pf, 3);
				if (!b0l__K2Node_SwitchInteger2_CmpSuccess__pf)
				{
					__CurrentState = 33;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 30:
			{
				bpv__displayedMapTime__pf = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("15 Mins"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("EAB6202049852802345B049F58194E10") /* Key */
	);
				__CurrentState = -1;
				break;
			}
		case 31:
			{
				bpv__displayedMapTime__pf = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("10 Mins"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("3AC1945A4CED8A9053C2A1B5CCB1DF98") /* Key */
	);
				__CurrentState = -1;
				break;
			}
		case 32:
			{
				bpv__displayedMapTime__pf = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("20 Mins"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("6D94FF0D434BD00283F348B37534C3B8") /* Key */
	);
				__CurrentState = -1;
				break;
			}
		case 33:
			{
				bpv__displayedMapTime__pf = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("25 Mins"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("F01FA8D74D5BFF41D5FEA091246263B5") /* Key */
	);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UgameSettings_C__pf3941786787::bpf__ExecuteUbergraph_gameSettings__pf_6(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 18:
			{
				__CurrentState = 19;
				break;
			}
		case 19:
			{
				bpv__mapID__pf = 0;
			}
		case 20:
			{
				b0l__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__mapID__pf, 0);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 21;
					break;
				}
				b0l__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpv__mapID__pf, 1);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 23;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 21:
			{
				bpv__displayedMap__pf = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UgameSettings_C__pf3941786787::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
			}
		case 22:
			{
				bpv__displayedMapName__pf = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Arena 01"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("94FD74964A8599AB5DA9A182E325C314") /* Key */
	);
				__CurrentState = -1;
				break;
			}
		case 23:
			{
				bpv__displayedMap__pf = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UgameSettings_C__pf3941786787::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
			}
		case 24:
			{
				bpv__displayedMapName__pf = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Arena 02"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("5BAD21864B9A210B294C25B45D92F3F3") /* Key */
	);
				__CurrentState = -1;
				break;
			}
		case 25:
			{
				__CurrentState = 26;
				break;
			}
		case 26:
			{
				bpv__mapID__pf = 1;
				__CurrentState = 20;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UgameSettings_C__pf3941786787::bpf__ExecuteUbergraph_gameSettings__pf_7(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 11);
	// optimized KCST_UnconditionalGoto
	bpv__displayedMap__pf = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UgameSettings_C__pf3941786787::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__displayedMapTime__pf = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("10 Mins"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("C210B5F946ECCC9C96EEF981507A1B36") /* Key */
	);
	bpv__displayedMapName__pf = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Arena 01"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("5218215E4FE6924D09E27E971574069F") /* Key */
	);
	return; //KCST_EndOfThread
}
void UgameSettings_C__pf3941786787::bpf__BndEvt__kickButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_gameSettings__pf_2(48);
}
void UgameSettings_C__pf3941786787::bpf__BndEvt__settingsButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_gameSettings__pf_1(46);
}
void UgameSettings_C__pf3941786787::bpf__BndEvt__backButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_gameSettings__pf_3(45);
}
void UgameSettings_C__pf3941786787::bpf__BndEvt__Accept_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_gameSettings__pf_3(41);
}
void UgameSettings_C__pf3941786787::bpf__BndEvt__toggleTimeRight_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_gameSettings__pf_4(34);
}
void UgameSettings_C__pf3941786787::bpf__BndEvt__toggleTimeLeft_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_gameSettings__pf_5(27);
}
void UgameSettings_C__pf3941786787::bpf__BndEvt__toggleRight_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_gameSettings__pf_6(25);
}
void UgameSettings_C__pf3941786787::bpf__BndEvt__toggleLeft_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_gameSettings__pf_6(18);
}
void UgameSettings_C__pf3941786787::bpf__fillPlayersWindow__pf()
{
	bpf__ExecuteUbergraph_gameSettings__pf_0(15);
}
void UgameSettings_C__pf3941786787::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_gameSettings__pf_7(11);
}
void UgameSettings_C__pf3941786787::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{97, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Textures/arena01.arena01 
		{139, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Textures/arena02.arena02 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
void UgameSettings_C__pf3941786787::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{77, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{10, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{95, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameModeBase 
		{122, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.PanelSlot 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{79, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{129, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.ScrollBox 
		{124, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.PanelWidget 
		{0, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Texture2D 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{94, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.WidgetSwitcher 
		{42, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{82, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Button 
		{83, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Image 
		{84, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.TextBlock 
		{140, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/UI/Lobby/playerButton.playerButton_C 
		{96, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/lobby/lobbyGM.lobbyGM_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
struct FRegisterHelper__UgameSettings_C__pf3941786787
{
	FRegisterHelper__UgameSettings_C__pf3941786787()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/UI/Lobby/gameSettings"), &UgameSettings_C__pf3941786787::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UgameSettings_C__pf3941786787 Instance;
};
FRegisterHelper__UgameSettings_C__pf3941786787 FRegisterHelper__UgameSettings_C__pf3941786787::Instance;
void UgameSettings_C__pf3941786787::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME_DIFFNAMES(UgameSettings_C__pf3941786787, bpv__displayedMap__pf, FName(TEXT("displayedMap")));
	DOREPLIFETIME_DIFFNAMES(UgameSettings_C__pf3941786787, bpv__displayedMapTime__pf, FName(TEXT("displayedMapTime")));
	DOREPLIFETIME_DIFFNAMES(UgameSettings_C__pf3941786787, bpv__displayedMapName__pf, FName(TEXT("displayedMapName")));
	DOREPLIFETIME_DIFFNAMES(UgameSettings_C__pf3941786787, bpv__mapID__pf, FName(TEXT("mapID")));
	DOREPLIFETIME_DIFFNAMES(UgameSettings_C__pf3941786787, bpv__timeID__pf, FName(TEXT("timeID")));
}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
