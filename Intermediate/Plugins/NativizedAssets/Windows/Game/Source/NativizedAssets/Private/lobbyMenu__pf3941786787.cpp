#include "NativizedAssets.h"
#include "lobbyMenu__pf3941786787.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/GridPanel.h"
#include "Runtime/UMG/Public/Components/GridSlot.h"
#include "Runtime/UMG/Public/Components/Border.h"
#include "Runtime/UMG/Public/Components/BorderSlot.h"
#include "Runtime/UMG/Public/Components/VerticalBox.h"
#include "Runtime/UMG/Public/Components/VerticalBoxSlot.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/UMG/Public/Components/HorizontalBox.h"
#include "Runtime/UMG/Public/Components/HorizontalBoxSlot.h"
#include "Runtime/UMG/Public/Components/SizeBox.h"
#include "Runtime/UMG/Public/Components/SizeBoxSlot.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/UMG/Public/Components/ButtonSlot.h"
#include "Runtime/UMG/Public/Components/Spacer.h"
#include "chatWIndow__pf1207061625.h"
#include "gameSettings__pf3941786787.h"
#include "characterSelect__pf3941786787.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
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
#include "lobbyPlayerController__pf2687806415.h"
#include "DestroySessionCallbackProxy.h"
#include "lobbyGM__pf2687806415.h"
#include "connectedPlayer__pf3941786787.h"
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
#include "Runtime/Engine/Classes/GameFramework/PlayerStart.h"
#include "gameInfoInstance__pf533497531.h"
#include "0_base__pf1490413170.h"
#include "mainMenu__pf1343218889.h"
#include "hostMenu__pf1343218889.h"
#include "serverMenu__pf1343218889.h"
#include "optionsMenu__pf1343218889.h"
#include "CreateSessionCallbackProxy.h"
#include "FindSessionsCallbackProxy.h"
#include "JoinSessionCallbackProxy.h"
#include "loadingScreen__pf1207061625.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
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
#include "Runtime/Engine/Classes/Engine/InputActionDelegateBinding.h"
#include "Runtime/HeadMountedDisplay/Public/HeadMountedDisplayFunctionLibrary.h"
#include "Runtime/HeadMountedDisplay/Public/HeadMountedDisplayTypes.h"
#include "FOWComponent__pf1242490746.h"
#include "Runtime/Engine/Classes/GameFramework/SpringArmComponent.h"
#include "Runtime/Engine/Classes/GameFramework/GameMode.h"
#include "Runtime/Engine/Classes/GameFramework/GameState.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
UlobbyMenu_C__pf3941786787::UlobbyMenu_C__pf3941786787(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (UlobbyMenu_C__pf3941786787::StaticClass() == GetClass()))
	{
		UlobbyMenu_C__pf3941786787::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__characterSelect__pf = nullptr;
	bpv__chatWIndow__pf = nullptr;
	bpv__chooseCharButton__pf = nullptr;
	bpv__gameSettings__pf = nullptr;
	bpv__leaveLobbyButton__pf = nullptr;
	bpv__mapTexture__pf = nullptr;
	bpv__playerWindow__pf = nullptr;
	bpv__readyStartButton__pf = nullptr;
	bpv__setGameSettingsButton__pf = nullptr;
	bpv__TextBlock_0__pf = nullptr;
	bpv__TextBlock_3__pf = nullptr;
	bpv__TextBlock_13__pf = nullptr;
	bpv__TextBlock_35__pf = nullptr;
	bpv__lobbyServerName__pf = FText::GetEmpty();
	bpv__mapName__pf = FText::GetEmpty();
	bpv__mapTime__pf = FText::GetEmpty();
	bpv__mapImage__pf = nullptr;
	bpv__playersDisplay__pf = FText::GetEmpty();
	bpv__lobbyControllerREF__pf = nullptr;
	bpv__readyButtonText__pf = FText::GetEmpty();
	bpv__readyStatus__pf = FText::GetEmpty();
	bCanEverTick = false;
	bCanEverPaint = false;
}
void UlobbyMenu_C__pf3941786787::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
void UlobbyMenu_C__pf3941786787::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	InDynamicClass->ReferencedConvertedFields.Add(AlobbyGM_C__pf2687806415::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UconnectedPlayer_C__pf3941786787::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UgameSettings_C__pf3941786787::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UcharacterSelect_C__pf3941786787::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(A0_base_C__pf1490413170::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UchatWIndow_C__pf1207061625::StaticClass());
	// List of all referenced converted structures
	extern UScriptStruct* Z_Construct_UScriptStruct_FPlayerInfo__pf533497531();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FPlayerInfo__pf533497531());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_3"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__0);
	auto __Local__1 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	__Local__0->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__0->ComponentDelegateBindings.AddUninitialized(4);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 4);
	auto& __Local__2 = __Local__0->ComponentDelegateBindings[0];
	__Local__2.ComponentPropertyName = FName(TEXT("chooseCharButton"));
	__Local__2.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__2.FunctionNameToBind = FName(TEXT("BndEvt__chooseCharButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__3 = __Local__0->ComponentDelegateBindings[1];
	__Local__3.ComponentPropertyName = FName(TEXT("setGameSettingsButton"));
	__Local__3.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__3.FunctionNameToBind = FName(TEXT("BndEvt__setGameSettingsButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__4 = __Local__0->ComponentDelegateBindings[2];
	__Local__4.ComponentPropertyName = FName(TEXT("readyStartButton"));
	__Local__4.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__4.FunctionNameToBind = FName(TEXT("BndEvt__readyStartButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__5 = __Local__0->ComponentDelegateBindings[3];
	__Local__5.ComponentPropertyName = FName(TEXT("leaveLobbyButton"));
	__Local__5.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__5.FunctionNameToBind = FName(TEXT("BndEvt__leaveLobbyButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));
	auto __Local__6 = NewObject<UCanvasPanel>(__Local__1, UCanvasPanel::StaticClass(), TEXT("CanvasPanel_0"));
	auto& __Local__7 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__6), UPanelWidget::__PPO__Slots() )));
	__Local__7 = TArray<UPanelSlot*> ();
	__Local__7.Reserve(3);
	auto __Local__8 = NewObject<UCanvasPanelSlot>(__Local__6, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_0"));
	__Local__8->LayoutData.Offsets.Left = -716.960938f;
	__Local__8->LayoutData.Offsets.Top = -324.492981f;
	__Local__8->LayoutData.Offsets.Right = 1431.903320f;
	__Local__8->LayoutData.Offsets.Bottom = 776.460754f;
	__Local__8->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.455556);
	__Local__8->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.455556);
	__Local__8->Parent = __Local__6;
	auto __Local__9 = NewObject<UGridPanel>(__Local__1, UGridPanel::StaticClass(), TEXT("GridPanel_0"));
	__Local__9->ColumnFill = TArray<float> ();
	__Local__9->ColumnFill.Reserve(2);
	__Local__9->ColumnFill.Add(0.500000f);
	__Local__9->ColumnFill.Add(0.500000f);
	__Local__9->RowFill = TArray<float> ();
	__Local__9->RowFill.Reserve(2);
	__Local__9->RowFill.Add(0.000000f);
	__Local__9->RowFill.Add(0.500000f);
	auto& __Local__10 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__9), UPanelWidget::__PPO__Slots() )));
	__Local__10 = TArray<UPanelSlot*> ();
	__Local__10.Reserve(3);
	auto __Local__11 = NewObject<UGridSlot>(__Local__9, UGridSlot::StaticClass(), TEXT("GridSlot_0"));
	__Local__11->Parent = __Local__9;
	auto __Local__12 = NewObject<UBorder>(__Local__1, UBorder::StaticClass(), TEXT("lobbySettings"));
	__Local__12->BrushColor = FLinearColor(0.000000, 0.000000, 0.000000, 0.250000);
	auto& __Local__13 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__12), UPanelWidget::__PPO__Slots() )));
	__Local__13 = TArray<UPanelSlot*> ();
	__Local__13.Reserve(1);
	auto __Local__14 = NewObject<UBorderSlot>(__Local__12, UBorderSlot::StaticClass(), TEXT("BorderSlot_0"));
	__Local__14->Parent = __Local__12;
	auto __Local__15 = NewObject<UVerticalBox>(__Local__1, UVerticalBox::StaticClass(), TEXT("VerticalBox_0"));
	auto& __Local__16 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__15), UPanelWidget::__PPO__Slots() )));
	__Local__16 = TArray<UPanelSlot*> ();
	__Local__16.Reserve(7);
	auto __Local__17 = NewObject<UVerticalBoxSlot>(__Local__15, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_0"));
	__Local__17->HorizontalAlignment = EHorizontalAlignment::HAlign_Left;
	__Local__17->Parent = __Local__15;
	auto __Local__18 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_0"));
	__Local__18->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Server Name"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("723D9EFA4CDB2E54B9B99EA2201731CD") /* Key */
	);
	__Local__18->Font.Size = 64;
	auto& __Local__19 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__18), UTextLayoutWidget::__PPO__Justification() )));
	__Local__19 = ETextJustify::Type::Center;
	__Local__18->Slot = __Local__17;
	__Local__17->Content = __Local__18;
	__Local__16.Add(__Local__17);
	auto __Local__20 = NewObject<UVerticalBoxSlot>(__Local__15, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_3"));
	__Local__20->Parent = __Local__15;
	auto __Local__21 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("HorizontalBox_1"));
	auto& __Local__22 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__21), UPanelWidget::__PPO__Slots() )));
	__Local__22 = TArray<UPanelSlot*> ();
	__Local__22.Reserve(2);
	auto __Local__23 = NewObject<UHorizontalBoxSlot>(__Local__21, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_0"));
	__Local__23->Parent = __Local__21;
	auto __Local__24 = NewObject<USizeBox>(__Local__1, USizeBox::StaticClass(), TEXT("SizeBox_0"));
	__Local__24->bOverride_WidthOverride = true;
	__Local__24->bOverride_HeightOverride = true;
	__Local__24->WidthOverride = 200.000000f;
	__Local__24->HeightOverride = 200.000000f;
	auto& __Local__25 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__24), UPanelWidget::__PPO__Slots() )));
	__Local__25 = TArray<UPanelSlot*> ();
	__Local__25.Reserve(1);
	auto __Local__26 = NewObject<USizeBoxSlot>(__Local__24, USizeBoxSlot::StaticClass(), TEXT("SizeBoxSlot_0"));
	__Local__26->Parent = __Local__24;
	auto __Local__27 = NewObject<UImage>(__Local__1, UImage::StaticClass(), TEXT("mapTexture"));
	__Local__27->Slot = __Local__26;
	__Local__26->Content = __Local__27;
	__Local__25.Add(__Local__26);
	__Local__24->Slot = __Local__23;
	__Local__23->Content = __Local__24;
	__Local__22.Add(__Local__23);
	auto __Local__28 = NewObject<UHorizontalBoxSlot>(__Local__21, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_1"));
	__Local__28->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__28->Parent = __Local__21;
	auto __Local__29 = NewObject<UVerticalBox>(__Local__1, UVerticalBox::StaticClass(), TEXT("VerticalBox_12"));
	auto& __Local__30 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__29), UPanelWidget::__PPO__Slots() )));
	__Local__30 = TArray<UPanelSlot*> ();
	__Local__30.Reserve(2);
	auto __Local__31 = NewObject<UVerticalBoxSlot>(__Local__29, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_5"));
	__Local__31->Parent = __Local__29;
	auto __Local__32 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("HorizontalBox_2"));
	auto& __Local__33 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__32), UPanelWidget::__PPO__Slots() )));
	__Local__33 = TArray<UPanelSlot*> ();
	__Local__33.Reserve(2);
	auto __Local__34 = NewObject<UHorizontalBoxSlot>(__Local__32, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_4"));
	__Local__34->Parent = __Local__32;
	auto __Local__35 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_2"));
	__Local__35->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Map :"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("72C0B98346D99227BB47128CE750BA2F") /* Key */
	);
	__Local__35->Slot = __Local__34;
	__Local__34->Content = __Local__35;
	__Local__33.Add(__Local__34);
	auto __Local__36 = NewObject<UHorizontalBoxSlot>(__Local__32, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_5"));
	__Local__36->Parent = __Local__32;
	auto __Local__37 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_3"));
	__Local__37->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Arena 01"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("8B330018411F2FE8D9667AB2A63487BA") /* Key */
	);
	__Local__37->Slot = __Local__36;
	__Local__36->Content = __Local__37;
	__Local__33.Add(__Local__36);
	__Local__32->Slot = __Local__31;
	__Local__31->Content = __Local__32;
	__Local__30.Add(__Local__31);
	auto __Local__38 = NewObject<UVerticalBoxSlot>(__Local__29, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_7"));
	__Local__38->Parent = __Local__29;
	auto __Local__39 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("HorizontalBox_3"));
	auto& __Local__40 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__39), UPanelWidget::__PPO__Slots() )));
	__Local__40 = TArray<UPanelSlot*> ();
	__Local__40.Reserve(2);
	auto __Local__41 = NewObject<UHorizontalBoxSlot>(__Local__39, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_4"));
	__Local__41->Parent = __Local__39;
	auto __Local__42 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_12"));
	__Local__42->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Time : "), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("EA25B9184FDC0F43775290983E947760") /* Key */
	);
	__Local__42->Slot = __Local__41;
	__Local__41->Content = __Local__42;
	__Local__40.Add(__Local__41);
	auto __Local__43 = NewObject<UHorizontalBoxSlot>(__Local__39, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_5"));
	__Local__43->Parent = __Local__39;
	auto __Local__44 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_13"));
	__Local__44->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("10 mins"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("C0B3E99D451BB1E8E0B434AD82D465CE") /* Key */
	);
	__Local__44->Slot = __Local__43;
	__Local__43->Content = __Local__44;
	__Local__40.Add(__Local__43);
	__Local__39->Slot = __Local__38;
	__Local__38->Content = __Local__39;
	__Local__30.Add(__Local__38);
	__Local__29->Slot = __Local__28;
	__Local__28->Content = __Local__29;
	__Local__22.Add(__Local__28);
	__Local__21->Slot = __Local__20;
	__Local__20->Content = __Local__21;
	__Local__16.Add(__Local__20);
	auto __Local__45 = NewObject<UVerticalBoxSlot>(__Local__15, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_1"));
	__Local__45->Parent = __Local__15;
	auto __Local__46 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("readyStartButton"));
	auto& __Local__47 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__46->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__47 = FLinearColor(1.000000, 0.544528, 0.118760, 1.000000);
	auto& __Local__48 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__46), UPanelWidget::__PPO__Slots() )));
	__Local__48 = TArray<UPanelSlot*> ();
	__Local__48.Reserve(1);
	auto __Local__49 = NewObject<UButtonSlot>(__Local__46, UButtonSlot::StaticClass(), TEXT("ButtonSlot_0"));
	__Local__49->Parent = __Local__46;
	auto __Local__50 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_1"));
	__Local__50->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Start Session"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("38088D7D470695922995C9B64C7594DA") /* Key */
	);
	__Local__50->Slot = __Local__49;
	__Local__49->Content = __Local__50;
	__Local__48.Add(__Local__49);
	__Local__46->Slot = __Local__45;
	__Local__45->Content = __Local__46;
	__Local__16.Add(__Local__45);
	auto __Local__51 = NewObject<UVerticalBoxSlot>(__Local__15, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_5"));
	__Local__51->Parent = __Local__15;
	auto __Local__52 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("setGameSettingsButton"));
	auto& __Local__53 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__52->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__53 = FLinearColor(1.000000, 0.544528, 0.118760, 1.000000);
	auto& __Local__54 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__52), UPanelWidget::__PPO__Slots() )));
	__Local__54 = TArray<UPanelSlot*> ();
	__Local__54.Reserve(1);
	auto __Local__55 = NewObject<UButtonSlot>(__Local__52, UButtonSlot::StaticClass(), TEXT("ButtonSlot_0"));
	__Local__55->Parent = __Local__52;
	auto __Local__56 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_5"));
	__Local__56->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Game Settings"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("0102CF0C46D821CB8059259F3924D57D") /* Key */
	);
	__Local__56->Slot = __Local__55;
	__Local__55->Content = __Local__56;
	__Local__54.Add(__Local__55);
	__Local__52->Slot = __Local__51;
	__Local__51->Content = __Local__52;
	__Local__16.Add(__Local__51);
	auto __Local__57 = NewObject<UVerticalBoxSlot>(__Local__15, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_6"));
	__Local__57->Parent = __Local__15;
	auto __Local__58 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("chooseCharButton"));
	auto& __Local__59 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__58->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__59 = FLinearColor(1.000000, 0.544528, 0.118760, 1.000000);
	auto& __Local__60 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__58), UPanelWidget::__PPO__Slots() )));
	__Local__60 = TArray<UPanelSlot*> ();
	__Local__60.Reserve(1);
	auto __Local__61 = NewObject<UButtonSlot>(__Local__58, UButtonSlot::StaticClass(), TEXT("ButtonSlot_0"));
	__Local__61->Parent = __Local__58;
	auto __Local__62 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_6"));
	__Local__62->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Choose Character"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("36C66AF143C973E45C90F2AE8EFD9C27") /* Key */
	);
	__Local__62->Slot = __Local__61;
	__Local__61->Content = __Local__62;
	__Local__60.Add(__Local__61);
	__Local__58->Slot = __Local__57;
	__Local__57->Content = __Local__58;
	__Local__16.Add(__Local__57);
	auto __Local__63 = NewObject<UVerticalBoxSlot>(__Local__15, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_7"));
	__Local__63->Parent = __Local__15;
	auto __Local__64 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("leaveLobbyButton"));
	auto& __Local__65 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__64->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__65 = FLinearColor(1.000000, 0.544528, 0.118760, 1.000000);
	auto& __Local__66 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__64), UPanelWidget::__PPO__Slots() )));
	__Local__66 = TArray<UPanelSlot*> ();
	__Local__66.Reserve(1);
	auto __Local__67 = NewObject<UButtonSlot>(__Local__64, UButtonSlot::StaticClass(), TEXT("ButtonSlot_0"));
	__Local__67->Parent = __Local__64;
	auto __Local__68 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_7"));
	__Local__68->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Leave Lobby"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("661E2CF540C1DF88B63ED5BCAAC68A93") /* Key */
	);
	__Local__68->Slot = __Local__67;
	__Local__67->Content = __Local__68;
	__Local__66.Add(__Local__67);
	__Local__64->Slot = __Local__63;
	__Local__63->Content = __Local__64;
	__Local__16.Add(__Local__63);
	auto __Local__69 = NewObject<UVerticalBoxSlot>(__Local__15, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_8"));
	__Local__69->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__69->Parent = __Local__15;
	auto __Local__70 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_14"));
	__Local__70->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("press T to toggle menus..."), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("F73EC7194B6876E6ACE242BD8B173DD9") /* Key */
	);
	__Local__70->Font.TypefaceFontName = FName(TEXT("Light"));
	__Local__70->Slot = __Local__69;
	__Local__69->Content = __Local__70;
	__Local__16.Add(__Local__69);
	__Local__15->Slot = __Local__14;
	__Local__14->Content = __Local__15;
	__Local__13.Add(__Local__14);
	__Local__12->Slot = __Local__11;
	__Local__11->Content = __Local__12;
	__Local__10.Add(__Local__11);
	auto __Local__71 = NewObject<UGridSlot>(__Local__9, UGridSlot::StaticClass(), TEXT("GridSlot_2"));
	__Local__71->RowSpan = 2;
	__Local__71->Column = 1;
	__Local__71->ColumnSpan = 1;
	__Local__71->Parent = __Local__9;
	auto __Local__72 = NewObject<UBorder>(__Local__1, UBorder::StaticClass(), TEXT("playerList"));
	__Local__72->BrushColor = FLinearColor(0.000000, 0.000000, 0.000000, 0.500000);
	auto& __Local__73 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__72), UPanelWidget::__PPO__Slots() )));
	__Local__73 = TArray<UPanelSlot*> ();
	__Local__73.Reserve(1);
	auto __Local__74 = NewObject<UBorderSlot>(__Local__72, UBorderSlot::StaticClass(), TEXT("BorderSlot_0"));
	__Local__74->Parent = __Local__72;
	auto __Local__75 = NewObject<UVerticalBox>(__Local__1, UVerticalBox::StaticClass(), TEXT("VerticalBox_16"));
	auto& __Local__76 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__75), UPanelWidget::__PPO__Slots() )));
	__Local__76 = TArray<UPanelSlot*> ();
	__Local__76.Reserve(3);
	auto __Local__77 = NewObject<UVerticalBoxSlot>(__Local__75, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_0"));
	__Local__77->HorizontalAlignment = EHorizontalAlignment::HAlign_Left;
	__Local__77->Parent = __Local__75;
	auto __Local__78 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("HorizontalBox_10"));
	auto& __Local__79 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__78), UPanelWidget::__PPO__Slots() )));
	__Local__79 = TArray<UPanelSlot*> ();
	__Local__79.Reserve(3);
	auto __Local__80 = NewObject<UHorizontalBoxSlot>(__Local__78, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_6"));
	__Local__80->Parent = __Local__78;
	auto __Local__81 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_25"));
	__Local__81->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("The Players"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("C22C5A0D486617B5A1B28DA4B47F7E8C") /* Key */
	);
	__Local__81->Font.Size = 64;
	auto& __Local__82 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__81), UTextLayoutWidget::__PPO__Justification() )));
	__Local__82 = ETextJustify::Type::Center;
	__Local__81->Slot = __Local__80;
	__Local__80->Content = __Local__81;
	__Local__79.Add(__Local__80);
	auto __Local__83 = NewObject<UHorizontalBoxSlot>(__Local__78, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_8"));
	__Local__83->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__83->Parent = __Local__78;
	auto __Local__84 = NewObject<USpacer>(__Local__1, USpacer::StaticClass(), TEXT("Spacer_0"));
	__Local__84->Size = FVector2D(130.762054, 1.000000);
	__Local__84->Slot = __Local__83;
	__Local__83->Content = __Local__84;
	__Local__79.Add(__Local__83);
	auto __Local__85 = NewObject<UHorizontalBoxSlot>(__Local__78, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_7"));
	__Local__85->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__85->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__85->Parent = __Local__78;
	auto __Local__86 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_35"));
	__Local__86->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("1 of 4"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("4F832461483C3FA3CE3EF6BE595828A7") /* Key */
	);
	__Local__86->Font.TypefaceFontName = FName(TEXT("Italic"));
	__Local__86->Font.Size = 32;
	auto& __Local__87 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__86), UTextLayoutWidget::__PPO__Justification() )));
	__Local__87 = ETextJustify::Type::Center;
	__Local__86->Slot = __Local__85;
	__Local__85->Content = __Local__86;
	__Local__79.Add(__Local__85);
	__Local__78->Slot = __Local__77;
	__Local__77->Content = __Local__78;
	__Local__76.Add(__Local__77);
	auto __Local__88 = NewObject<UVerticalBoxSlot>(__Local__75, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_9"));
	__Local__88->Parent = __Local__75;
	auto __Local__89 = NewObject<UVerticalBox>(__Local__1, UVerticalBox::StaticClass(), TEXT("VerticalBox_19"));
	__Local__89->Slot = __Local__88;
	__Local__88->Content = __Local__89;
	__Local__76.Add(__Local__88);
	auto __Local__90 = NewObject<UVerticalBoxSlot>(__Local__75, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_10"));
	__Local__90->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__90->Parent = __Local__75;
	auto __Local__91 = NewObject<UVerticalBox>(__Local__1, UVerticalBox::StaticClass(), TEXT("playerWindow"));
	__Local__91->Slot = __Local__90;
	__Local__91->bIsVariable = true;
	__Local__90->Content = __Local__91;
	__Local__76.Add(__Local__90);
	__Local__75->Slot = __Local__74;
	__Local__74->Content = __Local__75;
	__Local__73.Add(__Local__74);
	__Local__72->Slot = __Local__71;
	__Local__71->Content = __Local__72;
	__Local__10.Add(__Local__71);
	auto __Local__92 = NewObject<UGridSlot>(__Local__9, UGridSlot::StaticClass(), TEXT("GridSlot_4"));
	__Local__92->Row = 1;
	__Local__92->Parent = __Local__9;
	UchatWIndow_C__pf1207061625::StaticClass()->GetDefaultObject();
	auto __Local__93 = NewObject<UchatWIndow_C__pf1207061625>(__Local__1, UchatWIndow_C__pf1207061625::StaticClass(), TEXT("chatWIndow"));
	__Local__93->Slot = __Local__92;
	__Local__92->Content = __Local__93;
	__Local__10.Add(__Local__92);
	__Local__9->Slot = __Local__8;
	__Local__8->Content = __Local__9;
	__Local__7.Add(__Local__8);
	auto __Local__94 = NewObject<UCanvasPanelSlot>(__Local__6, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_1"));
	__Local__94->LayoutData.Offsets.Left = 512.000000f;
	__Local__94->LayoutData.Offsets.Top = 276.000000f;
	__Local__94->bAutoSize = true;
	__Local__94->Parent = __Local__6;
	UgameSettings_C__pf3941786787::StaticClass()->GetDefaultObject();
	auto __Local__95 = NewObject<UgameSettings_C__pf3941786787>(__Local__1, UgameSettings_C__pf3941786787::StaticClass(), TEXT("gameSettings"));
	__Local__95->Slot = __Local__94;
	__Local__95->Visibility = ESlateVisibility::Hidden;
	__Local__94->Content = __Local__95;
	__Local__7.Add(__Local__94);
	auto __Local__96 = NewObject<UCanvasPanelSlot>(__Local__6, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_2"));
	__Local__96->LayoutData.Offsets.Left = -724.960938f;
	__Local__96->LayoutData.Offsets.Top = -478.514526f;
	__Local__96->LayoutData.Offsets.Right = 1455.355347f;
	__Local__96->LayoutData.Offsets.Bottom = 984.954956f;
	__Local__96->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.475926);
	__Local__96->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.475926);
	__Local__96->Parent = __Local__6;
	UcharacterSelect_C__pf3941786787::StaticClass()->GetDefaultObject();
	auto __Local__97 = NewObject<UcharacterSelect_C__pf3941786787>(__Local__1, UcharacterSelect_C__pf3941786787::StaticClass(), TEXT("characterSelect"));
	__Local__97->bIsFocusable = true;
	__Local__97->Slot = __Local__96;
	__Local__97->Visibility = ESlateVisibility::Hidden;
	__Local__96->Content = __Local__97;
	__Local__7.Add(__Local__96);
	__Local__1->RootWidget = __Local__6;
}
void UlobbyMenu_C__pf3941786787::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__98;
	SlotNames.Append(__Local__98);
}
void UlobbyMenu_C__pf3941786787::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__99;
	TArray<FDelegateRuntimeBinding>  __Local__100;
	__Local__100.AddUninitialized(6);
	FDelegateRuntimeBinding::StaticStruct()->InitializeStruct(__Local__100.GetData(), 6);
	auto& __Local__101 = __Local__100[0];
	__Local__101.ObjectName = FString(TEXT("TextBlock_0"));
	__Local__101.PropertyName = FName(TEXT("Text"));
	auto& __Local__102 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__101.SourcePath), FDynamicPropertyPath::__PPO__Segments() )));
	__Local__102 = TArray<FPropertyPathSegment> ();
	__Local__102.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__102.GetData(), 1);
	auto& __Local__103 = __Local__102[0];
	__Local__103.Name = FName(TEXT("lobbyServerName"));
	__Local__101.Kind = EBindingKind::Property;
	auto& __Local__104 = __Local__100[1];
	__Local__104.ObjectName = FString(TEXT("mapTexture"));
	__Local__104.PropertyName = FName(TEXT("Brush"));
	auto& __Local__105 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__104.SourcePath), FDynamicPropertyPath::__PPO__Segments() )));
	__Local__105 = TArray<FPropertyPathSegment> ();
	__Local__105.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__105.GetData(), 1);
	auto& __Local__106 = __Local__105[0];
	__Local__106.Name = FName(TEXT("mapImage"));
	__Local__104.Kind = EBindingKind::Property;
	auto& __Local__107 = __Local__100[2];
	__Local__107.ObjectName = FString(TEXT("TextBlock_3"));
	__Local__107.PropertyName = FName(TEXT("Text"));
	auto& __Local__108 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__107.SourcePath), FDynamicPropertyPath::__PPO__Segments() )));
	__Local__108 = TArray<FPropertyPathSegment> ();
	__Local__108.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__108.GetData(), 1);
	auto& __Local__109 = __Local__108[0];
	__Local__109.Name = FName(TEXT("mapName"));
	__Local__107.Kind = EBindingKind::Property;
	auto& __Local__110 = __Local__100[3];
	__Local__110.ObjectName = FString(TEXT("TextBlock_13"));
	__Local__110.PropertyName = FName(TEXT("Text"));
	auto& __Local__111 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__110.SourcePath), FDynamicPropertyPath::__PPO__Segments() )));
	__Local__111 = TArray<FPropertyPathSegment> ();
	__Local__111.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__111.GetData(), 1);
	auto& __Local__112 = __Local__111[0];
	__Local__112.Name = FName(TEXT("mapTime"));
	__Local__110.Kind = EBindingKind::Property;
	auto& __Local__113 = __Local__100[4];
	__Local__113.ObjectName = FString(TEXT("TextBlock_35"));
	__Local__113.PropertyName = FName(TEXT("Text"));
	auto& __Local__114 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__113.SourcePath), FDynamicPropertyPath::__PPO__Segments() )));
	__Local__114 = TArray<FPropertyPathSegment> ();
	__Local__114.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__114.GetData(), 1);
	auto& __Local__115 = __Local__114[0];
	__Local__115.Name = FName(TEXT("playersDisplay"));
	__Local__113.Kind = EBindingKind::Property;
	auto& __Local__116 = __Local__100[5];
	__Local__116.ObjectName = FString(TEXT("readyStartButton"));
	__Local__116.PropertyName = FName(TEXT("bIsEnabled"));
	__Local__116.FunctionName = FName(TEXT("Get_readyStartButton_bIsEnabled_0"));
	auto& __Local__117 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__116.SourcePath), FDynamicPropertyPath::__PPO__Segments() )));
	__Local__117 = TArray<FPropertyPathSegment> ();
	__Local__117.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__117.GetData(), 1);
	auto& __Local__118 = __Local__117[0];
	__Local__118.Name = FName(TEXT("enableReadyStartButton"));
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), false, CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UlobbyMenu_C__pf3941786787::StaticClass())->MiscConvertedSubobjects[0]), __Local__99, __Local__100);
}
void UlobbyMenu_C__pf3941786787::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UlobbyMenu_C__pf3941786787::bpf__ExecuteUbergraph_lobbyMenu__pf_0(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetOwningPlayer_ReturnValue5__pf{};
	bool bpfv__CallFunc_IsVisible_ReturnValue2__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 47:
			{
				__CurrentState = 48;
				break;
			}
		case 48:
			{
				if(IsValid(bpv__characterSelect__pf))
				{
					bpfv__CallFunc_IsVisible_ReturnValue2__pf = bpv__characterSelect__pf->UWidget::IsVisible();
				}
				if (!bpfv__CallFunc_IsVisible_ReturnValue2__pf)
				{
					__CurrentState = 49;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 49:
			{
				if(IsValid(bpv__characterSelect__pf))
				{
					bpv__characterSelect__pf->SetVisibility(ESlateVisibility::Visible);
				}
			}
		case 50:
			{
				bpfv__CallFunc_GetOwningPlayer_ReturnValue5__pf = UUserWidget::GetOwningPlayer();
				if(IsValid(bpv__characterSelect__pf))
				{
					bpv__characterSelect__pf->UWidget::SetUserFocus(bpfv__CallFunc_GetOwningPlayer_ReturnValue5__pf);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UlobbyMenu_C__pf3941786787::bpf__ExecuteUbergraph_lobbyMenu__pf_1(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsVisible_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 43:
			{
				__CurrentState = 44;
				break;
			}
		case 44:
			{
				if(IsValid(bpv__gameSettings__pf))
				{
					bpfv__CallFunc_IsVisible_ReturnValue__pf = bpv__gameSettings__pf->UWidget::IsVisible();
				}
				if (!bpfv__CallFunc_IsVisible_ReturnValue__pf)
				{
					__CurrentState = 45;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 45:
			{
				if(IsValid(bpv__gameSettings__pf))
				{
					bpv__gameSettings__pf->SetVisibility(ESlateVisibility::Visible);
				}
			}
		case 46:
			{
				if(IsValid(bpv__gameSettings__pf))
				{
					bpv__gameSettings__pf->bpf__fillPlayersWindow__pf();
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UlobbyMenu_C__pf3941786787::bpf__ExecuteUbergraph_lobbyMenu__pf_2(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetOwningPlayer_ReturnValue4__pf{};
	UconnectedPlayer_C__pf3941786787* bpfv__CallFunc_Create_ReturnValue__pf{};
	UPanelSlot* bpfv__CallFunc_AddChild_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 21);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetOwningPlayer_ReturnValue4__pf = UUserWidget::GetOwningPlayer();
	bpfv__CallFunc_Create_ReturnValue__pf = CastChecked<UconnectedPlayer_C__pf3941786787>(UWidgetBlueprintLibrary::Create(this, UconnectedPlayer_C__pf3941786787::StaticClass(), bpfv__CallFunc_GetOwningPlayer_ReturnValue4__pf), ECastCheckedType::NullAllowed);
	FCustomThunkTemplates::SetStructurePropertyByName(bpfv__CallFunc_Create_ReturnValue__pf, FName(TEXT("playerInfo")), b0l__K2Node_CustomEvent_incomingPlayerInfo__pf);
	if(IsValid(bpv__playerWindow__pf))
	{
		bpfv__CallFunc_AddChild_ReturnValue__pf = bpv__playerWindow__pf->UPanelWidget::AddChild(bpfv__CallFunc_Create_ReturnValue__pf);
	}
	return; //KCST_EndOfThread
}
void UlobbyMenu_C__pf3941786787::bpf__ExecuteUbergraph_lobbyMenu__pf_3(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	APlayerController* bpfv__CallFunc_GetOwningPlayer_ReturnValue3__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 13:
			{
				if (!b0l__Temp_bool_Variable__pf)
				{
					__CurrentState = 17;
					break;
				}
			}
		case 14:
			{
				bpv__readyStatus__pf = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Ready!"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("57E4C8F048BF4B6B97F218936AA7412B") /* Key */
	);
			}
		case 15:
			{
				bpfv__CallFunc_GetOwningPlayer_ReturnValue3__pf = UUserWidget::GetOwningPlayer();
				b0l__K2Node_DynamicCast_AsLobby_Player_Controller3__pf = Cast<AlobbyPlayerController_C__pf2687806415>(bpfv__CallFunc_GetOwningPlayer_ReturnValue3__pf);
				b0l__K2Node_DynamicCast_bSuccess4__pf = (b0l__K2Node_DynamicCast_AsLobby_Player_Controller3__pf != nullptr);;
				if(IsValid(b0l__K2Node_DynamicCast_AsLobby_Player_Controller3__pf))
				{
					b0l__K2Node_DynamicCast_AsLobby_Player_Controller3__pf->bpv__playerSettings__pf.bpv__myPlayerName_2_816FFE264C08408F09C26C8C7F8CDB1A__pf = bpv__readyStatus__pf;
				}
			}
		case 16:
			{
				bpfv__CallFunc_GetOwningPlayer_ReturnValue3__pf = UUserWidget::GetOwningPlayer();
				b0l__K2Node_DynamicCast_AsLobby_Player_Controller3__pf = Cast<AlobbyPlayerController_C__pf2687806415>(bpfv__CallFunc_GetOwningPlayer_ReturnValue3__pf);
				b0l__K2Node_DynamicCast_bSuccess4__pf = (b0l__K2Node_DynamicCast_AsLobby_Player_Controller3__pf != nullptr);;
				if(IsValid(b0l__K2Node_DynamicCast_AsLobby_Player_Controller3__pf))
				{
					auto __Local__120 = FPlayerInfo__pf533497531::GetDefaultValue();
					FPlayerInfo__pf533497531  __Local__119 = __Local__120;
					b0l__K2Node_DynamicCast_AsLobby_Player_Controller3__pf->bpf__callUpdate__pf(((IsValid(b0l__K2Node_DynamicCast_AsLobby_Player_Controller3__pf)) ? (b0l__K2Node_DynamicCast_AsLobby_Player_Controller3__pf->bpv__playerSettings__pf) : (__Local__119)), true);
				}
				__CurrentState = -1;
				break;
			}
		case 17:
			{
				bpv__readyStatus__pf = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Not Ready!"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("56317C634EA5012FD204D8A991595DD6") /* Key */
	);
				__CurrentState = 15;
				break;
			}
		case 18:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(b0l__Temp_bool_Variable__pf);
				b0l__Temp_bool_Variable__pf = bpfv__CallFunc_Not_PreBool_ReturnValue__pf;
				__CurrentState = 13;
				break;
			}
		case 42:
			{
				__CurrentState = 18;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UlobbyMenu_C__pf3941786787::bpf__ExecuteUbergraph_lobbyMenu__pf_4(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 19);
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__playerWindow__pf))
	{
		bpv__playerWindow__pf->UPanelWidget::ClearChildren();
	}
	return; //KCST_EndOfThread
}
void UlobbyMenu_C__pf3941786787::bpf__ExecuteUbergraph_lobbyMenu__pf_5(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_IsServer_ReturnValue2__pf{};
	AGameModeBase* bpfv__CallFunc_GetGameMode_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 2:
			{
				b0l__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 3:
			{
				b0l__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 4:
			{
				bpfv__CallFunc_GetGameMode_ReturnValue__pf = UGameplayStatics::GetGameMode(this);
				b0l__K2Node_DynamicCast_AsLobby_GM__pf = Cast<AlobbyGM_C__pf2687806415>(bpfv__CallFunc_GetGameMode_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess2__pf = (b0l__K2Node_DynamicCast_AsLobby_GM__pf != nullptr);;
				TArray<APlayerController*>  __Local__121 = TArray<APlayerController*> {};
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(((IsValid(b0l__K2Node_DynamicCast_AsLobby_GM__pf)) ? (b0l__K2Node_DynamicCast_AsLobby_GM__pf->bpv__allPlayerControllers__pf) : (__Local__121)));
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 9;
					break;
				}
			}
		case 5:
			{
				b0l__Temp_int_Array_Index_Variable__pf = b0l__Temp_int_Loop_Counter_Variable__pf;
			}
		case 6:
			{
				__StateStack.Push(10);
			}
		case 7:
			{
				bpfv__CallFunc_GetGameMode_ReturnValue__pf = UGameplayStatics::GetGameMode(this);
				b0l__K2Node_DynamicCast_AsLobby_GM__pf = Cast<AlobbyGM_C__pf2687806415>(bpfv__CallFunc_GetGameMode_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess2__pf = (b0l__K2Node_DynamicCast_AsLobby_GM__pf != nullptr);;
				TArray<APlayerController*>  __Local__122 = TArray<APlayerController*> {};
				FCustomThunkTemplates::Array_Get(((IsValid(b0l__K2Node_DynamicCast_AsLobby_GM__pf)) ? (b0l__K2Node_DynamicCast_AsLobby_GM__pf->bpv__allPlayerControllers__pf) : (__Local__122)), b0l__Temp_int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				b0l__K2Node_DynamicCast_AsLobby_Player_Controller2__pf = Cast<AlobbyPlayerController_C__pf2687806415>(b0l__CallFunc_Array_Get_Item__pf);
				b0l__K2Node_DynamicCast_bSuccess3__pf = (b0l__K2Node_DynamicCast_AsLobby_Player_Controller2__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess3__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 8:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsLobby_Player_Controller2__pf))
				{
					b0l__K2Node_DynamicCast_AsLobby_Player_Controller2__pf->bpf__showLoadingScreen__pf();
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 9:
			{
				bpfv__CallFunc_GetGameMode_ReturnValue__pf = UGameplayStatics::GetGameMode(this);
				b0l__K2Node_DynamicCast_AsLobby_GM__pf = Cast<AlobbyGM_C__pf2687806415>(bpfv__CallFunc_GetGameMode_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess2__pf = (b0l__K2Node_DynamicCast_AsLobby_GM__pf != nullptr);;
				if(IsValid(b0l__K2Node_DynamicCast_AsLobby_GM__pf))
				{
					b0l__K2Node_DynamicCast_AsLobby_GM__pf->bpf__launchGame__pf();
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 10:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 4;
				break;
			}
		case 39:
			{
				__CurrentState = 40;
				break;
			}
		case 40:
			{
				bpfv__CallFunc_IsServer_ReturnValue2__pf = UKismetSystemLibrary::IsServer(this);
				if (!bpfv__CallFunc_IsServer_ReturnValue2__pf)
				{
					__CurrentState = 41;
					break;
				}
				__CurrentState = 2;
				break;
			}
		case 41:
			{
				bpf__updateStatus__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UlobbyMenu_C__pf3941786787::bpf__ExecuteUbergraph_lobbyMenu__pf_6(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetOwningPlayer_ReturnValue2__pf{};
	check(bpp__EntryPoint__pf == 33);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetOwningPlayer_ReturnValue2__pf = UUserWidget::GetOwningPlayer();
	b0l__CallFunc_DestroySession_ReturnValue__pf = UDestroySessionCallbackProxy::DestroySession(this, bpfv__CallFunc_GetOwningPlayer_ReturnValue2__pf);
	b0l__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_DestroySession_ReturnValue__pf);
	if (!b0l__CallFunc_IsValid_ReturnValue__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	b0l__K2Node_CreateDelegate_OutputDelegate__pf.BindUFunction(this,FName(TEXT("OnSuccess_C3EBCC454FAB8483C056089BF08BA5A4")));
	if(IsValid(b0l__CallFunc_DestroySession_ReturnValue__pf))
	{
		b0l__CallFunc_DestroySession_ReturnValue__pf->OnSuccess.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate__pf);
	}
	b0l__K2Node_CreateDelegate_OutputDelegate2__pf.BindUFunction(this,FName(TEXT("OnFailure_C3EBCC454FAB8483C056089BF08BA5A4")));
	if(IsValid(b0l__CallFunc_DestroySession_ReturnValue__pf))
	{
		b0l__CallFunc_DestroySession_ReturnValue__pf->OnFailure.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate2__pf);
	}
	if(IsValid(b0l__CallFunc_DestroySession_ReturnValue__pf))
	{
		b0l__CallFunc_DestroySession_ReturnValue__pf->Activate();
	}
	return; //KCST_EndOfThread
}
void UlobbyMenu_C__pf3941786787::bpf__ExecuteUbergraph_lobbyMenu__pf_7(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 11);
	// optimized KCST_UnconditionalGoto
	UGameplayStatics::OpenLevel(this, FName(TEXT("mainMenu")), true, FString(TEXT("")));
	return; //KCST_EndOfThread
}
void UlobbyMenu_C__pf3941786787::bpf__ExecuteUbergraph_lobbyMenu__pf_8(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf{};
	bool bpfv__CallFunc_IsServer_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 25:
			{
				__CurrentState = 26;
				break;
			}
		case 26:
			{
				bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf = UUserWidget::GetOwningPlayer();
				b0l__K2Node_DynamicCast_AsLobby_Player_Controller__pf = Cast<AlobbyPlayerController_C__pf2687806415>(bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsLobby_Player_Controller__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 27:
			{
				bpv__lobbyControllerREF__pf = b0l__K2Node_DynamicCast_AsLobby_Player_Controller__pf;
			}
		case 28:
			{
				bpfv__CallFunc_IsServer_ReturnValue__pf = UKismetSystemLibrary::IsServer(this);
				if (!bpfv__CallFunc_IsServer_ReturnValue__pf)
				{
					__CurrentState = 31;
					break;
				}
			}
		case 29:
			{
				bpv__readyButtonText__pf = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Start Session!"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("6025CE1B46C3F1580C38DCA50337A764") /* Key */
	);
			}
		case 30:
			{
				if(IsValid(bpv__lobbyControllerREF__pf))
				{
					bpv__lobbyControllerREF__pf->bpv__playerSettings__pf.bpv__myPlayerStatus_14_F1604291452782409E92779450FED1BE__pf = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Host"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("CDB8109B443E5B212B81E0BEC037DB7C") /* Key */
	);
				}
				__CurrentState = -1;
				break;
			}
		case 31:
			{
				bpv__readyButtonText__pf = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Toggle Ready!"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("E69AA6814E97BAEB5514249AC24B5160") /* Key */
	);
			}
		case 32:
			{
				if(IsValid(bpv__setGameSettingsButton__pf))
				{
					bpv__setGameSettingsButton__pf->RemoveFromParent();
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UlobbyMenu_C__pf3941786787::bpf__ExecuteUbergraph_lobbyMenu__pf_9(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 1);
	return; //KCST_EndOfThread
}
void UlobbyMenu_C__pf3941786787::bpf__BndEvt__chooseCharButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_lobbyMenu__pf_0(47);
}
void UlobbyMenu_C__pf3941786787::bpf__BndEvt__setGameSettingsButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_lobbyMenu__pf_1(43);
}
void UlobbyMenu_C__pf3941786787::bpf__updateStatus__pf()
{
	bpf__ExecuteUbergraph_lobbyMenu__pf_3(42);
}
void UlobbyMenu_C__pf3941786787::bpf__BndEvt__readyStartButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_lobbyMenu__pf_5(39);
}
void UlobbyMenu_C__pf3941786787::bpf__BndEvt__leaveLobbyButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_lobbyMenu__pf_6(33);
}
void UlobbyMenu_C__pf3941786787::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_lobbyMenu__pf_8(25);
}
void UlobbyMenu_C__pf3941786787::bpf__updatePlayerWindow__pf_Implementation(FPlayerInfo__pf533497531 bpp__incomingPlayerInfo__pf)
{
	b0l__K2Node_CustomEvent_incomingPlayerInfo__pf = bpp__incomingPlayerInfo__pf;
	bpf__ExecuteUbergraph_lobbyMenu__pf_2(21);
}
void UlobbyMenu_C__pf3941786787::bpf__clearPlayerList__pf()
{
	bpf__ExecuteUbergraph_lobbyMenu__pf_4(19);
}
void UlobbyMenu_C__pf3941786787::bpf__OnSuccess_C3EBCC454FAB8483C056089BF08BA5A4__pf()
{
	bpf__ExecuteUbergraph_lobbyMenu__pf_7(11);
}
void UlobbyMenu_C__pf3941786787::bpf__OnFailure_C3EBCC454FAB8483C056089BF08BA5A4__pf()
{
	bpf__ExecuteUbergraph_lobbyMenu__pf_9(1);
}
bool  UlobbyMenu_C__pf3941786787::bpf__enableReadyStartButton__pf()
{
	bool bpp__ReturnValue__pf{};
	bool bpfv__buttonStatus__pf{};
	APlayerController* bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf{};
	AlobbyPlayerController_C__pf2687806415* bpfv__K2Node_DynamicCast_AsLobby_Player_Controller__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	AGameModeBase* bpfv__CallFunc_GetGameMode_ReturnValue__pf{};
	AlobbyGM_C__pf2687806415* bpfv__K2Node_DynamicCast_AsLobby_GM__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess2__pf{};
	bool bpfv__CallFunc_EqualEqual_ClassClass_ReturnValue__pf{};
	bool bpfv__CallFunc_IsServer_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__buttonStatus__pf = false;
			}
		case 2:
			{
				bpfv__CallFunc_IsServer_ReturnValue__pf = UKismetSystemLibrary::IsServer(this);
				if (!bpfv__CallFunc_IsServer_ReturnValue__pf)
				{
					__CurrentState = 5;
					break;
				}
			}
		case 3:
			{
				bpfv__CallFunc_GetGameMode_ReturnValue__pf = UGameplayStatics::GetGameMode(this);
				bpfv__K2Node_DynamicCast_AsLobby_GM__pf = Cast<AlobbyGM_C__pf2687806415>(bpfv__CallFunc_GetGameMode_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess2__pf = (bpfv__K2Node_DynamicCast_AsLobby_GM__pf != nullptr);;
				bool  __Local__123 = false;
				bpfv__buttonStatus__pf = ((IsValid(bpfv__K2Node_DynamicCast_AsLobby_GM__pf)) ? (bpfv__K2Node_DynamicCast_AsLobby_GM__pf->bpv__canWeStartx__pfzy) : (__Local__123));
			}
		case 4:
			{
				bpp__ReturnValue__pf = bpfv__buttonStatus__pf;
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf = UUserWidget::GetOwningPlayer();
				bpfv__K2Node_DynamicCast_AsLobby_Player_Controller__pf = Cast<AlobbyPlayerController_C__pf2687806415>(bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsLobby_Player_Controller__pf != nullptr);;
				UClass*  __Local__124 = ((UClass*)nullptr);
				bpfv__CallFunc_EqualEqual_ClassClass_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ClassClass(((IsValid(bpfv__K2Node_DynamicCast_AsLobby_Player_Controller__pf)) ? (bpfv__K2Node_DynamicCast_AsLobby_Player_Controller__pf->bpv__playerSettings__pf.bpv__myPlayerCharacter_8_09E183C542505D365AD557BA76D256B2__pf) : (__Local__124)), A0_base_C__pf1490413170::StaticClass());
				if (!bpfv__CallFunc_EqualEqual_ClassClass_ReturnValue__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 6:
			{
				bpfv__buttonStatus__pf = true;
				__CurrentState = 4;
				break;
			}
		case 7:
			{
				bpfv__buttonStatus__pf = false;
				__CurrentState = 4;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
void UlobbyMenu_C__pf3941786787::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{69, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/InfinityBladeWarriors/Character/CompleteCharacters/Textures_Materials/CharM_Cardboard/Char_M_Cardboard_D.Char_M_Cardboard_D 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
void UlobbyMenu_C__pf3941786787::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{77, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{118, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Mannequin/Character/Textures/UE4_LOGO_CARD.UE4_LOGO_CARD 
		{119, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Textures/barbarous.barbarous 
		{120, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Textures/frosty.frosty 
		{121, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Textures/forge.forge 
		{10, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/Engine.EmptyOnlineDelegate__DelegateSignature 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/OnlineSubsystemUtils.DestroySessionCallbackProxy 
		{95, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameModeBase 
		{122, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.PanelSlot 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{79, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{42, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{123, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.VerticalBox 
		{124, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.PanelWidget 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{82, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Button 
		{102, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Widget 
		{83, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Image 
		{84, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.TextBlock 
		{0, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Texture2D 
		{113, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/lobby/lobbyPlayerController.lobbyPlayerController_C 
		{96, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/lobby/lobbyGM.lobbyGM_C 
		{125, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/UI/Lobby/connectedPlayer.connectedPlayer_C 
		{126, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  WidgetBlueprintGeneratedClass /Game/UI/Lobby/gameSettings.gameSettings_C 
		{117, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  WidgetBlueprintGeneratedClass /Game/UI/Lobby/characterSelect.characterSelect_C 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/characters/0_base.0_base_C 
		{127, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  WidgetBlueprintGeneratedClass /Game/UI/allLevels/chatWIndow.chatWIndow_C 
		{88, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedStruct /Game/Blueprints/allLevels/PlayerInfo.PlayerInfo 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
struct FRegisterHelper__UlobbyMenu_C__pf3941786787
{
	FRegisterHelper__UlobbyMenu_C__pf3941786787()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/UI/Lobby/lobbyMenu"), &UlobbyMenu_C__pf3941786787::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UlobbyMenu_C__pf3941786787 Instance;
};
FRegisterHelper__UlobbyMenu_C__pf3941786787 FRegisterHelper__UlobbyMenu_C__pf3941786787::Instance;
void UlobbyMenu_C__pf3941786787::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME_DIFFNAMES(UlobbyMenu_C__pf3941786787, bpv__lobbyServerName__pf, FName(TEXT("lobbyServerName")));
	DOREPLIFETIME_DIFFNAMES(UlobbyMenu_C__pf3941786787, bpv__mapName__pf, FName(TEXT("mapName")));
	DOREPLIFETIME_DIFFNAMES(UlobbyMenu_C__pf3941786787, bpv__mapTime__pf, FName(TEXT("mapTime")));
	DOREPLIFETIME_DIFFNAMES(UlobbyMenu_C__pf3941786787, bpv__mapImage__pf, FName(TEXT("mapImage")));
	DOREPLIFETIME_DIFFNAMES(UlobbyMenu_C__pf3941786787, bpv__playersDisplay__pf, FName(TEXT("playersDisplay")));
	DOREPLIFETIME_DIFFNAMES(UlobbyMenu_C__pf3941786787, bpv__readyButtonText__pf, FName(TEXT("readyButtonText")));
}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
