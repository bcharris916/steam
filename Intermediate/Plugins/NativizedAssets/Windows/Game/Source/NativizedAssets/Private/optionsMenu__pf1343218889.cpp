#include "NativizedAssets.h"
#include "optionsMenu__pf1343218889.h"
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
#include "Runtime/UMG/Public/Components/SizeBox.h"
#include "Runtime/UMG/Public/Components/SizeBoxSlot.h"
#include "Runtime/UMG/Public/Components/Image.h"
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
#include "CreateSessionCallbackProxy.h"
#include "Runtime/Engine/Public/Net/OnlineBlueprintCallProxyBase.h"
#include "FindSessionsCallbackProxy.h"
#include "JoinSessionCallbackProxy.h"
#include "loadingScreen__pf1207061625.h"
#include "DestroySessionCallbackProxy.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "playerSaveGame__pf533497531.h"
#include "Runtime/Engine/Classes/Kismet/KismetTextLibrary.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"
#include "Runtime/Engine/Classes/Engine/Texture2DDynamic.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
UoptionsMenu_C__pf1343218889::UoptionsMenu_C__pf1343218889(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (UoptionsMenu_C__pf1343218889::StaticClass() == GetClass()))
	{
		UoptionsMenu_C__pf1343218889::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__Accept__pf = nullptr;
	bpv__backButton__pf = nullptr;
	bpv__currentAvatar__pf = nullptr;
	bpv__TextBlock_53__pf = nullptr;
	bpv__toggleLeft__pf = nullptr;
	bpv__toggleRight__pf = nullptr;
	bpv__UserPlayerName__pf = nullptr;
	bpv__welcomeMessageVis__pf = ESlateVisibility::Hidden;
	bpv__gameINstanceRef__pf = nullptr;
	bpv__enteredPlayerName__pf = FText::GetEmpty();
	bpv__playerInfo__pf.bpv__myPlayerName_2_816FFE264C08408F09C26C8C7F8CDB1A__pf = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Default"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("FCCDCE27438B7835895E47AD475C835C") /* Key */
	);
	bpv__playerInfo__pf.bpv__myPlayerImage_5_E3B8ED5F4387C5691564BF96105E1E15__pf = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UoptionsMenu_C__pf1343218889::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__playerInfo__pf.bpv__myPlayerStatus_14_F1604291452782409E92779450FED1BE__pf = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Not Ready"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("0A30DD434ACD58561AD3B897574F0563") /* Key */
	);
	bpv__avatarImage__pf = nullptr;
	bpv__playerSettingsSave__pf = FString(TEXT("playerSettingsSave"));
	bpv__foundSaveGamex__pfzy = false;
	bpv__saveGameREF__pf = nullptr;
	bpv__allAvatars__pf = TArray<UTexture2D*> ();
	bpv__allAvatars__pf.Reserve(7);
	bpv__allAvatars__pf.Add(CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UoptionsMenu_C__pf1343218889::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
	bpv__allAvatars__pf.Add(CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UoptionsMenu_C__pf1343218889::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed));
	bpv__allAvatars__pf.Add(CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UoptionsMenu_C__pf1343218889::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed));
	bpv__allAvatars__pf.Add(CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UoptionsMenu_C__pf1343218889::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed));
	bpv__allAvatars__pf.Add(CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UoptionsMenu_C__pf1343218889::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed));
	bpv__allAvatars__pf.Add(CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UoptionsMenu_C__pf1343218889::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed));
	bpv__allAvatars__pf.Add(CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UoptionsMenu_C__pf1343218889::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed));
	bpv__avatarCount__pf = 0;
	bpv__acceptEnabledx__pfzy = false;
	bCanEverTick = false;
	bCanEverPaint = false;
}
void UoptionsMenu_C__pf1343218889::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
void UoptionsMenu_C__pf1343218889::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	InDynamicClass->ReferencedConvertedFields.Add(UplayerSaveGame_C__pf533497531::StaticClass());
	// List of all referenced converted structures
	extern UScriptStruct* Z_Construct_UScriptStruct_FPlayerInfo__pf533497531();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FPlayerInfo__pf533497531());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_3"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__0);
	auto __Local__1 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	__Local__0->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__0->ComponentDelegateBindings.AddUninitialized(5);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 5);
	auto& __Local__2 = __Local__0->ComponentDelegateBindings[0];
	__Local__2.ComponentPropertyName = FName(TEXT("toggleRight"));
	__Local__2.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__2.FunctionNameToBind = FName(TEXT("BndEvt__toggleRight_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__3 = __Local__0->ComponentDelegateBindings[1];
	__Local__3.ComponentPropertyName = FName(TEXT("toggleLeft"));
	__Local__3.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__3.FunctionNameToBind = FName(TEXT("BndEvt__toggleLeft_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__4 = __Local__0->ComponentDelegateBindings[2];
	__Local__4.ComponentPropertyName = FName(TEXT("Accept"));
	__Local__4.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__4.FunctionNameToBind = FName(TEXT("BndEvt__Accept_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__5 = __Local__0->ComponentDelegateBindings[3];
	__Local__5.ComponentPropertyName = FName(TEXT("backButton"));
	__Local__5.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__5.FunctionNameToBind = FName(TEXT("BndEvt__backButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__6 = __Local__0->ComponentDelegateBindings[4];
	__Local__6.ComponentPropertyName = FName(TEXT("UserPlayerName"));
	__Local__6.DelegatePropertyName = FName(TEXT("OnTextChanged"));
	__Local__6.FunctionNameToBind = FName(TEXT("BndEvt__UserPlayerName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature"));
	auto __Local__7 = NewObject<UCanvasPanel>(__Local__1, UCanvasPanel::StaticClass(), TEXT("CanvasPanel_0"));
	auto& __Local__8 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__7), UPanelWidget::__PPO__Slots() )));
	__Local__8 = TArray<UPanelSlot*> ();
	__Local__8.Reserve(2);
	auto __Local__9 = NewObject<UCanvasPanelSlot>(__Local__7, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_0"));
	__Local__9->LayoutData.Offsets.Left = -284.960938f;
	__Local__9->LayoutData.Offsets.Top = -176.492981f;
	__Local__9->LayoutData.Offsets.Right = 706.606628f;
	__Local__9->LayoutData.Offsets.Bottom = 286.256256f;
	__Local__9->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.455556);
	__Local__9->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.455556);
	__Local__9->bAutoSize = true;
	__Local__9->Parent = __Local__7;
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
	__Local__14.Reserve(6);
	auto __Local__15 = NewObject<UVerticalBoxSlot>(__Local__13, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_0"));
	__Local__15->Parent = __Local__13;
	auto __Local__16 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_0"));
	__Local__16->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Player Options"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("8053BD074A98BACB1FEA5385F3435E91") /* Key */
	);
	__Local__16->Font.Size = 64;
	auto& __Local__17 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__16), UTextLayoutWidget::__PPO__Justification() )));
	__Local__17 = ETextJustify::Type::Center;
	__Local__16->Slot = __Local__15;
	__Local__15->Content = __Local__16;
	__Local__14.Add(__Local__15);
	auto __Local__18 = NewObject<UVerticalBoxSlot>(__Local__13, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_8"));
	__Local__18->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__18->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__18->Parent = __Local__13;
	auto __Local__19 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_58"));
	__Local__19->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Enter your Player Name"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("E7EB12744A199E97609833A0466CEE62") /* Key */
	);
	__Local__19->Slot = __Local__18;
	__Local__18->Content = __Local__19;
	__Local__14.Add(__Local__18);
	auto __Local__20 = NewObject<UVerticalBoxSlot>(__Local__13, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_9"));
	__Local__20->Parent = __Local__13;
	auto __Local__21 = NewObject<UEditableTextBox>(__Local__1, UEditableTextBox::StaticClass(), TEXT("UserPlayerName"));
	__Local__21->WidgetStyle.Font.Size = 28;
	__Local__21->HintText = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Enter your Name"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("757E332A4ABC45A967115FBF68BA1933") /* Key */
	);
	__Local__21->Slot = __Local__20;
	__Local__20->Content = __Local__21;
	__Local__14.Add(__Local__20);
	auto __Local__22 = NewObject<UVerticalBoxSlot>(__Local__13, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_15"));
	__Local__22->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__22->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__22->Parent = __Local__13;
	auto __Local__23 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_67"));
	__Local__23->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Choose Avatar"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("E2F442B749214A144617E489EB8306D3") /* Key */
	);
	__Local__23->Slot = __Local__22;
	__Local__22->Content = __Local__23;
	__Local__14.Add(__Local__22);
	auto __Local__24 = NewObject<UVerticalBoxSlot>(__Local__13, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_13"));
	__Local__24->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__24->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__24->Parent = __Local__13;
	auto __Local__25 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("HorizontalBox_1"));
	auto& __Local__26 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__25), UPanelWidget::__PPO__Slots() )));
	__Local__26 = TArray<UPanelSlot*> ();
	__Local__26.Reserve(3);
	auto __Local__27 = NewObject<UHorizontalBoxSlot>(__Local__25, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_0"));
	__Local__27->Parent = __Local__25;
	auto __Local__28 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("toggleLeft"));
	auto& __Local__29 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__28->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__29 = FLinearColor(1.000000, 0.544528, 0.118760, 1.000000);
	auto& __Local__30 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__28), UPanelWidget::__PPO__Slots() )));
	__Local__30 = TArray<UPanelSlot*> ();
	__Local__30.Reserve(1);
	auto __Local__31 = NewObject<UButtonSlot>(__Local__28, UButtonSlot::StaticClass(), TEXT("ButtonSlot_0"));
	__Local__31->Parent = __Local__28;
	auto __Local__32 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_64"));
	__Local__32->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("<"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("179851744BB03A1E2BEA6C91693EAED4") /* Key */
	);
	__Local__32->Slot = __Local__31;
	__Local__31->Content = __Local__32;
	__Local__30.Add(__Local__31);
	__Local__28->Slot = __Local__27;
	__Local__27->Content = __Local__28;
	__Local__26.Add(__Local__27);
	auto __Local__33 = NewObject<UHorizontalBoxSlot>(__Local__25, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_3"));
	__Local__33->Parent = __Local__25;
	auto __Local__34 = NewObject<USizeBox>(__Local__1, USizeBox::StaticClass(), TEXT("SizeBox_0"));
	__Local__34->bOverride_WidthOverride = true;
	__Local__34->bOverride_HeightOverride = true;
	__Local__34->WidthOverride = 256.000000f;
	__Local__34->HeightOverride = 256.000000f;
	auto& __Local__35 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__34), UPanelWidget::__PPO__Slots() )));
	__Local__35 = TArray<UPanelSlot*> ();
	__Local__35.Reserve(1);
	auto __Local__36 = NewObject<USizeBoxSlot>(__Local__34, USizeBoxSlot::StaticClass(), TEXT("SizeBoxSlot_0"));
	__Local__36->Parent = __Local__34;
	auto __Local__37 = NewObject<UImage>(__Local__1, UImage::StaticClass(), TEXT("currentAvatar"));
	__Local__37->Slot = __Local__36;
	__Local__36->Content = __Local__37;
	__Local__35.Add(__Local__36);
	__Local__34->Slot = __Local__33;
	__Local__33->Content = __Local__34;
	__Local__26.Add(__Local__33);
	auto __Local__38 = NewObject<UHorizontalBoxSlot>(__Local__25, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_2"));
	__Local__38->Parent = __Local__25;
	auto __Local__39 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("toggleRight"));
	auto& __Local__40 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__39->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__40 = FLinearColor(1.000000, 0.544528, 0.118760, 1.000000);
	auto& __Local__41 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__39), UPanelWidget::__PPO__Slots() )));
	__Local__41 = TArray<UPanelSlot*> ();
	__Local__41.Reserve(1);
	auto __Local__42 = NewObject<UButtonSlot>(__Local__39, UButtonSlot::StaticClass(), TEXT("ButtonSlot_1"));
	__Local__42->Parent = __Local__39;
	auto __Local__43 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_66"));
	__Local__43->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT(">"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("F38613E945346895DC4ACFAB36566839") /* Key */
	);
	__Local__43->Slot = __Local__42;
	__Local__42->Content = __Local__43;
	__Local__41.Add(__Local__42);
	__Local__39->Slot = __Local__38;
	__Local__38->Content = __Local__39;
	__Local__26.Add(__Local__38);
	__Local__25->Slot = __Local__24;
	__Local__24->Content = __Local__25;
	__Local__14.Add(__Local__24);
	auto __Local__44 = NewObject<UVerticalBoxSlot>(__Local__13, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_16"));
	__Local__44->Parent = __Local__13;
	auto __Local__45 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("HorizontalBox_2"));
	auto& __Local__46 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__45), UPanelWidget::__PPO__Slots() )));
	__Local__46 = TArray<UPanelSlot*> ();
	__Local__46.Reserve(3);
	auto __Local__47 = NewObject<UHorizontalBoxSlot>(__Local__45, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_0"));
	__Local__47->Parent = __Local__45;
	auto __Local__48 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("backButton"));
	auto& __Local__49 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__48->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__49 = FLinearColor(1.000000, 0.544528, 0.118760, 1.000000);
	auto& __Local__50 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__48), UPanelWidget::__PPO__Slots() )));
	__Local__50 = TArray<UPanelSlot*> ();
	__Local__50.Reserve(1);
	auto __Local__51 = NewObject<UButtonSlot>(__Local__48, UButtonSlot::StaticClass(), TEXT("ButtonSlot_0"));
	__Local__51->Parent = __Local__48;
	auto __Local__52 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_86"));
	__Local__52->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Back"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("814726274F9D9126588DDEB76A1F00C3") /* Key */
	);
	__Local__52->Slot = __Local__51;
	__Local__51->Content = __Local__52;
	__Local__50.Add(__Local__51);
	__Local__48->Slot = __Local__47;
	__Local__47->Content = __Local__48;
	__Local__46.Add(__Local__47);
	auto __Local__53 = NewObject<UHorizontalBoxSlot>(__Local__45, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_3"));
	__Local__53->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__53->Parent = __Local__45;
	auto __Local__54 = NewObject<USpacer>(__Local__1, USpacer::StaticClass(), TEXT("Spacer_0"));
	__Local__54->Slot = __Local__53;
	__Local__53->Content = __Local__54;
	__Local__46.Add(__Local__53);
	auto __Local__55 = NewObject<UHorizontalBoxSlot>(__Local__45, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_2"));
	__Local__55->Parent = __Local__45;
	auto __Local__56 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("Accept"));
	auto& __Local__57 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__56->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__57 = FLinearColor(1.000000, 0.544528, 0.118760, 1.000000);
	auto& __Local__58 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__56), UPanelWidget::__PPO__Slots() )));
	__Local__58 = TArray<UPanelSlot*> ();
	__Local__58.Reserve(1);
	auto __Local__59 = NewObject<UButtonSlot>(__Local__56, UButtonSlot::StaticClass(), TEXT("ButtonSlot_1"));
	__Local__59->Parent = __Local__56;
	auto __Local__60 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_88"));
	__Local__60->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Accept"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("0A73A1824FBBD9541D7728B88BCB772E") /* Key */
	);
	__Local__60->Slot = __Local__59;
	__Local__59->Content = __Local__60;
	__Local__58.Add(__Local__59);
	__Local__56->Slot = __Local__55;
	__Local__55->Content = __Local__56;
	__Local__46.Add(__Local__55);
	__Local__45->Slot = __Local__44;
	__Local__44->Content = __Local__45;
	__Local__14.Add(__Local__44);
	__Local__13->Slot = __Local__12;
	__Local__12->Content = __Local__13;
	__Local__11.Add(__Local__12);
	__Local__10->Slot = __Local__9;
	__Local__9->Content = __Local__10;
	__Local__8.Add(__Local__9);
	auto __Local__61 = NewObject<UCanvasPanelSlot>(__Local__7, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_1"));
	__Local__61->LayoutData.Offsets.Left = -412.960938f;
	__Local__61->LayoutData.Offsets.Top = 232.000000f;
	__Local__61->LayoutData.Offsets.Right = 519.368408f;
	__Local__61->LayoutData.Offsets.Bottom = 82.042038f;
	__Local__61->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.000000);
	__Local__61->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.000000);
	__Local__61->bAutoSize = true;
	__Local__61->Parent = __Local__7;
	auto __Local__62 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_53"));
	__Local__62->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Please Setup Player Profile to Continue"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("0BF2824F46DDC427413011BED449622E") /* Key */
	);
	__Local__62->Font.TypefaceFontName = FName(TEXT("Light"));
	__Local__62->Font.Size = 36;
	__Local__62->Slot = __Local__61;
	__Local__61->Content = __Local__62;
	__Local__8.Add(__Local__61);
	__Local__1->RootWidget = __Local__7;
}
void UoptionsMenu_C__pf1343218889::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__63;
	SlotNames.Append(__Local__63);
}
void UoptionsMenu_C__pf1343218889::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__64;
	TArray<FDelegateRuntimeBinding>  __Local__65;
	__Local__65.AddUninitialized(5);
	FDelegateRuntimeBinding::StaticStruct()->InitializeStruct(__Local__65.GetData(), 5);
	auto& __Local__66 = __Local__65[0];
	__Local__66.ObjectName = FString(TEXT("UserPlayerName"));
	__Local__66.PropertyName = FName(TEXT("Text"));
	auto& __Local__67 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__66.SourcePath), FDynamicPropertyPath::__PPO__Segments() )));
	__Local__67 = TArray<FPropertyPathSegment> ();
	__Local__67.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__67.GetData(), 1);
	auto& __Local__68 = __Local__67[0];
	__Local__68.Name = FName(TEXT("enteredPlayerName"));
	__Local__66.Kind = EBindingKind::Property;
	auto& __Local__69 = __Local__65[1];
	__Local__69.ObjectName = FString(TEXT("currentAvatar"));
	__Local__69.PropertyName = FName(TEXT("Brush"));
	auto& __Local__70 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__69.SourcePath), FDynamicPropertyPath::__PPO__Segments() )));
	__Local__70 = TArray<FPropertyPathSegment> ();
	__Local__70.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__70.GetData(), 1);
	auto& __Local__71 = __Local__70[0];
	__Local__71.Name = FName(TEXT("avatarImage"));
	__Local__69.Kind = EBindingKind::Property;
	auto& __Local__72 = __Local__65[2];
	__Local__72.ObjectName = FString(TEXT("Accept"));
	__Local__72.PropertyName = FName(TEXT("bIsEnabled"));
	auto& __Local__73 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__72.SourcePath), FDynamicPropertyPath::__PPO__Segments() )));
	__Local__73 = TArray<FPropertyPathSegment> ();
	__Local__73.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__73.GetData(), 1);
	auto& __Local__74 = __Local__73[0];
	__Local__74.Name = FName(TEXT("acceptEnabled?"));
	__Local__72.Kind = EBindingKind::Property;
	auto& __Local__75 = __Local__65[3];
	__Local__75.ObjectName = FString(TEXT("TextBlock_53"));
	__Local__75.PropertyName = FName(TEXT("Visibility"));
	auto& __Local__76 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__75.SourcePath), FDynamicPropertyPath::__PPO__Segments() )));
	__Local__76 = TArray<FPropertyPathSegment> ();
	__Local__76.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__76.GetData(), 1);
	auto& __Local__77 = __Local__76[0];
	__Local__77.Name = FName(TEXT("welcomeMessageVis"));
	__Local__75.Kind = EBindingKind::Property;
	auto& __Local__78 = __Local__65[4];
	__Local__78.ObjectName = FString(TEXT("backButton"));
	__Local__78.PropertyName = FName(TEXT("Visibility"));
	__Local__78.FunctionName = FName(TEXT("Get_backButton_Visibility_0"));
	auto& __Local__79 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__78.SourcePath), FDynamicPropertyPath::__PPO__Segments() )));
	__Local__79 = TArray<FPropertyPathSegment> ();
	__Local__79.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__79.GetData(), 1);
	auto& __Local__80 = __Local__79[0];
	__Local__80.Name = FName(TEXT("Get_backButton_Visibility_0"));
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), false, CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UoptionsMenu_C__pf1343218889::StaticClass())->MiscConvertedSubobjects[0]), __Local__64, __Local__65);
}
void UoptionsMenu_C__pf1343218889::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UoptionsMenu_C__pf1343218889::bpf__ExecuteUbergraph_optionsMenu__pf_0(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue2__pf{};
	int32 bpfv__CallFunc_Clamp_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 21);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__allAvatars__pf);
	bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpv__avatarCount__pf, 1);
	bpfv__CallFunc_Subtract_IntInt_ReturnValue2__pf = UKismetMathLibrary::Subtract_IntInt(bpfv__CallFunc_Array_Length_ReturnValue__pf, 1);
	bpfv__CallFunc_Clamp_ReturnValue__pf = UKismetMathLibrary::Clamp(bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf, 0, bpfv__CallFunc_Subtract_IntInt_ReturnValue2__pf);
	bpv__avatarCount__pf = bpfv__CallFunc_Clamp_ReturnValue__pf;
	FCustomThunkTemplates::Array_Get(bpv__allAvatars__pf, bpv__avatarCount__pf, /*out*/ b0l__CallFunc_Array_Get_Item2__pf);
	bpv__avatarImage__pf = b0l__CallFunc_Array_Get_Item2__pf;
	return; // KCST_GotoReturn
}
void UoptionsMenu_C__pf1343218889::bpf__ExecuteUbergraph_optionsMenu__pf_1(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Array_Length_ReturnValue2__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue2__pf{};
	int32 bpfv__CallFunc_Clamp_ReturnValue2__pf{};
	check(bpp__EntryPoint__pf == 24);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_Array_Length_ReturnValue2__pf = FCustomThunkTemplates::Array_Length(bpv__allAvatars__pf);
	bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__CallFunc_Array_Length_ReturnValue2__pf, 1);
	bpfv__CallFunc_Add_IntInt_ReturnValue2__pf = UKismetMathLibrary::Add_IntInt(bpv__avatarCount__pf, 1);
	bpfv__CallFunc_Clamp_ReturnValue2__pf = UKismetMathLibrary::Clamp(bpfv__CallFunc_Add_IntInt_ReturnValue2__pf, 0, bpfv__CallFunc_Add_IntInt_ReturnValue__pf);
	bpv__avatarCount__pf = bpfv__CallFunc_Clamp_ReturnValue2__pf;
	FCustomThunkTemplates::Array_Get(bpv__allAvatars__pf, bpv__avatarCount__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
	bpv__avatarImage__pf = b0l__CallFunc_Array_Get_Item__pf;
	return; // KCST_GotoReturn
}
void UoptionsMenu_C__pf1343218889::bpf__ExecuteUbergraph_optionsMenu__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 13);
	// optimized KCST_UnconditionalGoto
	bpv__playerInfo__pf.bpv__myPlayerName_2_816FFE264C08408F09C26C8C7F8CDB1A__pf = bpv__enteredPlayerName__pf;
	bpv__playerInfo__pf.bpv__myPlayerImage_5_E3B8ED5F4387C5691564BF96105E1E15__pf = bpv__avatarImage__pf;
	bpf__saveGame__pf();
	bpv__welcomeMessageVis__pf = ESlateVisibility::Hidden;
	RemoveFromParent();
	if(IsValid(bpv__gameINstanceRef__pf))
	{
		bpv__gameINstanceRef__pf->bpv__createdSaveFilex__pfzy = true;
	}
	if(IsValid(bpv__gameINstanceRef__pf))
	{
		bpv__gameINstanceRef__pf->bpf__ShowMainMenu__pf();
	}
	return; // KCST_GotoReturn
}
void UoptionsMenu_C__pf1343218889::bpf__ExecuteUbergraph_optionsMenu__pf_3(int32 bpp__EntryPoint__pf)
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
	bpv__gameINstanceRef__pf = b0l__K2Node_DynamicCast_AsGame_Info_Instance__pf;
	// optimized KCST_UnconditionalGoto
	bpf__saveGameCheck__pf();
	bpv__enteredPlayerName__pf = bpv__playerInfo__pf.bpv__myPlayerName_2_816FFE264C08408F09C26C8C7F8CDB1A__pf;
	bpv__avatarImage__pf = bpv__playerInfo__pf.bpv__myPlayerImage_5_E3B8ED5F4387C5691564BF96105E1E15__pf;
	bpf__emptyNameCheck__pf(bpv__enteredPlayerName__pf);
	bpf__setupAvatarDisplay__pf();
	return; // KCST_GotoReturn
}
void UoptionsMenu_C__pf1343218889::bpf__ExecuteUbergraph_optionsMenu__pf_4(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 8);
	// optimized KCST_UnconditionalGoto
	RemoveFromParent();
	if(IsValid(bpv__gameINstanceRef__pf))
	{
		bpv__gameINstanceRef__pf->bpf__ShowMainMenu__pf();
	}
	return; // KCST_GotoReturn
}
void UoptionsMenu_C__pf1343218889::bpf__ExecuteUbergraph_optionsMenu__pf_5(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 6);
	// optimized KCST_UnconditionalGoto
	bpf__emptyNameCheck__pf(b0l__K2Node_ComponentBoundEvent_Text__pf);
	return; // KCST_GotoReturn
}
void UoptionsMenu_C__pf1343218889::bpf__BndEvt__toggleRight_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_optionsMenu__pf_1(24);
}
void UoptionsMenu_C__pf1343218889::bpf__BndEvt__toggleLeft_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_optionsMenu__pf_0(21);
}
void UoptionsMenu_C__pf1343218889::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_optionsMenu__pf_3(20);
}
void UoptionsMenu_C__pf1343218889::bpf__BndEvt__Accept_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_optionsMenu__pf_2(13);
}
void UoptionsMenu_C__pf1343218889::bpf__BndEvt__backButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_optionsMenu__pf_4(8);
}
void UoptionsMenu_C__pf1343218889::bpf__BndEvt__UserPlayerName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature__pf(/*out*/ FText const& bpp__Text__pf__const)
{
	typedef FText  T__Local__81;
	T__Local__81& bpp__Text__pf = *const_cast<T__Local__81 *>(&bpp__Text__pf__const);
	b0l__K2Node_ComponentBoundEvent_Text__pf = bpp__Text__pf;
	bpf__ExecuteUbergraph_optionsMenu__pf_5(6);
}
void UoptionsMenu_C__pf1343218889::bpf__saveGameCheck__pf()
{
	bool bpfv__CallFunc_DoesSaveGameExist_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_DoesSaveGameExist_ReturnValue__pf = UGameplayStatics::DoesSaveGameExist(bpv__playerSettingsSave__pf, 0);
			}
		case 2:
			{
				if (!bpfv__CallFunc_DoesSaveGameExist_ReturnValue__pf)
				{
					__CurrentState = 4;
					break;
				}
			}
		case 3:
			{
				bpf__loadGame__pf();
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				bpf__saveGame__pf();
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UoptionsMenu_C__pf1343218889::bpf__emptyNameCheck__pf(const FText& bpp__nameText__pf__const)
{
	typedef FText  T__Local__82;
	T__Local__82& bpp__nameText__pf = *const_cast<T__Local__82 *>(&bpp__nameText__pf__const);
	bool bpfv__CallFunc_TextIsEmpty_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_TextIsEmpty_ReturnValue__pf = UKismetTextLibrary::TextIsEmpty(bpp__nameText__pf);
				if (!bpfv__CallFunc_TextIsEmpty_ReturnValue__pf)
				{
					__CurrentState = 4;
					break;
				}
			}
		case 2:
			{
				bpv__enteredPlayerName__pf = bpp__nameText__pf;
			}
		case 3:
			{
				bpv__acceptEnabledx__pfzy = false;
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				bpv__enteredPlayerName__pf = bpp__nameText__pf;
			}
		case 5:
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
void UoptionsMenu_C__pf1343218889::bpf__setupAvatarDisplay__pf()
{
}
void UoptionsMenu_C__pf1343218889::bpf__saveGame__pf()
{
	bool bpfv__CallFunc_SaveGameToSlot_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	UplayerSaveGame_C__pf533497531* bpfv__CallFunc_CreateSaveGameObject_ReturnValue__pf{};
	UplayerSaveGame_C__pf533497531* bpfv__K2Node_DynamicCast_AsPlayer_Save_Game__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__saveGameREF__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = 4;
					break;
				}
			}
		case 2:
			{
				if(IsValid(bpv__saveGameREF__pf))
				{
					bpv__saveGameREF__pf->bpv__S_PlayerINfo__pf = bpv__playerInfo__pf;
				}
			}
		case 3:
			{
				bpfv__CallFunc_SaveGameToSlot_ReturnValue__pf = UGameplayStatics::SaveGameToSlot(bpv__saveGameREF__pf, bpv__playerSettingsSave__pf, 0);
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				bpfv__CallFunc_CreateSaveGameObject_ReturnValue__pf = CastChecked<UplayerSaveGame_C__pf533497531>(UGameplayStatics::CreateSaveGameObject(UplayerSaveGame_C__pf533497531::StaticClass()), ECastCheckedType::NullAllowed);
			}
		case 5:
			{
				bpfv__K2Node_DynamicCast_AsPlayer_Save_Game__pf = Cast<UplayerSaveGame_C__pf533497531>(bpfv__CallFunc_CreateSaveGameObject_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsPlayer_Save_Game__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 6:
			{
				bpv__saveGameREF__pf = bpfv__K2Node_DynamicCast_AsPlayer_Save_Game__pf;
				__CurrentState = 2;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UoptionsMenu_C__pf1343218889::bpf__loadGame__pf()
{
	USaveGame* bpfv__CallFunc_LoadGameFromSlot_ReturnValue__pf{};
	UplayerSaveGame_C__pf533497531* bpfv__K2Node_DynamicCast_AsPlayer_Save_Game__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_LoadGameFromSlot_ReturnValue__pf = UGameplayStatics::LoadGameFromSlot(bpv__playerSettingsSave__pf, 0);
			}
		case 2:
			{
				bpfv__K2Node_DynamicCast_AsPlayer_Save_Game__pf = Cast<UplayerSaveGame_C__pf533497531>(bpfv__CallFunc_LoadGameFromSlot_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsPlayer_Save_Game__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				auto __Local__84 = FPlayerInfo__pf533497531::GetDefaultValue();
				FPlayerInfo__pf533497531  __Local__83 = __Local__84;
				bpv__playerInfo__pf = ((IsValid(bpfv__K2Node_DynamicCast_AsPlayer_Save_Game__pf)) ? (bpfv__K2Node_DynamicCast_AsPlayer_Save_Game__pf->bpv__S_PlayerINfo__pf) : (__Local__83));
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
bool  UoptionsMenu_C__pf1343218889::bpf__GetbIsEnabled_0__pf()
{
	bool bpp__ReturnValue__pf{};
	return bpp__ReturnValue__pf;
}
ESlateVisibility  UoptionsMenu_C__pf1343218889::bpf__toggleBackButtonDisplay__pf()
{
	ESlateVisibility bpp__ReturnValue__pf{};
	ESlateVisibility bpfv__backButtonVis__pf{};
	bool bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__backButtonVis__pf = ESlateVisibility::Visible;
			}
		case 2:
			{
				bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ByteByte(static_cast<uint8>(bpv__welcomeMessageVis__pf), static_cast<uint8>(ESlateVisibility::Visible));
				if (!bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf)
				{
					__CurrentState = 5;
					break;
				}
			}
		case 3:
			{
				bpfv__backButtonVis__pf = ESlateVisibility::Hidden;
			}
		case 4:
			{
				bpp__ReturnValue__pf = bpfv__backButtonVis__pf;
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				bpfv__backButtonVis__pf = ESlateVisibility::Visible;
				__CurrentState = 4;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
ESlateVisibility  UoptionsMenu_C__pf1343218889::bpf__Get_backButton_Visibility_0__pf()
{
	ESlateVisibility bpp__ReturnValue__pf{};
	ESlateVisibility bpfv__backButtonVis__pf{};
	bool bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ByteByte(static_cast<uint8>(bpv__welcomeMessageVis__pf), static_cast<uint8>(ESlateVisibility::Visible));
				if (!bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf)
				{
					__CurrentState = 4;
					break;
				}
			}
		case 2:
			{
				bpfv__backButtonVis__pf = ESlateVisibility::Hidden;
			}
		case 3:
			{
				bpp__ReturnValue__pf = bpfv__backButtonVis__pf;
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				bpfv__backButtonVis__pf = ESlateVisibility::Visible;
				__CurrentState = 3;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
void UoptionsMenu_C__pf1343218889::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{69, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/InfinityBladeWarriors/Character/CompleteCharacters/Textures_Materials/CharM_Cardboard/Char_M_Cardboard_D.Char_M_Cardboard_D 
		{70, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/StarterContent/Textures/T_Brick_Clay_New_D.T_Brick_Clay_New_D 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/StarterContent/Textures/T_Brick_Clay_New_N.T_Brick_Clay_New_N 
		{72, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/StarterContent/Textures/T_Burst_M.T_Burst_M 
		{73, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/StarterContent/Textures/T_Ceramic_Tile_M.T_Ceramic_Tile_M 
		{74, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/InfinityBladeWarriors/Character/CompleteCharacters/Textures_Materials/CharM_FrostGiant/T_Char_M_FrostGiant_D.T_Char_M_FrostGiant_D 
		{75, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/StarterContent/Textures/T_Bush_N.T_Bush_N 
		{76, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/InfinityBladeWarriors/Character/CompleteCharacters/Textures_Materials/CharM_Barbarous/T_CharM_Barbarous_D.T_CharM_Barbarous_D 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
void UoptionsMenu_C__pf1343218889::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{77, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{10, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameInstance 
		{0, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Texture2D 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{78, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/UMG.ESlateVisibility 
		{79, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{42, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{80, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SaveGame 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{81, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{82, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Button 
		{83, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Image 
		{84, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.TextBlock 
		{85, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.EditableTextBox 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/allLevels/gameInfoInstance.gameInfoInstance_C 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/allLevels/playerSaveGame.playerSaveGame_C 
		{88, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedStruct /Game/Blueprints/allLevels/PlayerInfo.PlayerInfo 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
struct FRegisterHelper__UoptionsMenu_C__pf1343218889
{
	FRegisterHelper__UoptionsMenu_C__pf1343218889()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/UI/MainMenu/optionsMenu"), &UoptionsMenu_C__pf1343218889::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UoptionsMenu_C__pf1343218889 Instance;
};
FRegisterHelper__UoptionsMenu_C__pf1343218889 FRegisterHelper__UoptionsMenu_C__pf1343218889::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
