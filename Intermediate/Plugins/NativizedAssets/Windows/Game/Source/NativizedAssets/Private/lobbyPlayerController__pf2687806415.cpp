#include "NativizedAssets.h"
#include "lobbyPlayerController__pf2687806415.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/InputKeyDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
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
#include "0_base__pf1490413170.h"
#include "lobbyGM__pf2687806415.h"
#include "loadingScreen__pf1207061625.h"
#include "DestroySessionCallbackProxy.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"
#include "lobbyMenu__pf3941786787.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerStart.h"
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
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "gameInfoInstance__pf533497531.h"
#include "mainMenu__pf1343218889.h"
#include "hostMenu__pf1343218889.h"
#include "serverMenu__pf1343218889.h"
#include "optionsMenu__pf1343218889.h"
#include "CreateSessionCallbackProxy.h"
#include "FindSessionsCallbackProxy.h"
#include "JoinSessionCallbackProxy.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "playerSaveGame__pf533497531.h"
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
#include "connectedPlayer__pf3941786787.h"
#include "Runtime/UMG/Public/Components/VerticalBox.h"
#include "Runtime/UMG/Public/Components/VerticalBoxSlot.h"
#include "gameSettings__pf3941786787.h"
#include "characterSelect__pf3941786787.h"
#include "chatWIndow__pf1207061625.h"
#include "Runtime/Engine/Classes/GameFramework/GameMode.h"
#include "Runtime/Engine/Classes/GameFramework/GameState.h"
#include "Runtime/Engine/Classes/Engine/InputActionDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputDelegateBinding.h"
#include "Runtime/HeadMountedDisplay/Public/HeadMountedDisplayFunctionLibrary.h"
#include "Runtime/HeadMountedDisplay/Public/HeadMountedDisplayTypes.h"
#include "FOWComponent__pf1242490746.h"
#include "Runtime/Engine/Classes/GameFramework/SpringArmComponent.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
AlobbyPlayerController_C__pf2687806415::AlobbyPlayerController_C__pf2687806415(const FObjectInitializer& ObjectInitializer) : Super()
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (AlobbyPlayerController_C__pf2687806415::StaticClass() == GetClass()))
	{
		AlobbyPlayerController_C__pf2687806415::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	auto __Local__0 = CastChecked<USceneComponent>(GetDefaultSubobjectByName(TEXT("TransformComponent0")));
	bpv__playerSettings__pf.bpv__myPlayerImage_5_E3B8ED5F4387C5691564BF96105E1E15__pf = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(AlobbyPlayerController_C__pf2687806415::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__playerSettings__pf.bpv__myPlayerStatus_14_F1604291452782409E92779450FED1BE__pf = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Not Ready"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("0A30DD434ACD58561AD3B897574F0563") /* Key */
	);
	bpv__lobbyMenuWB__pf = nullptr;
	bpv__allConnectedPlayers__pf = TArray<FPlayerInfo__pf533497531> ();
	bpv__playerSettingsSave__pf = FString(TEXT("playerSettingsSave"));
	bpv__playerSaveGameREF__pf = nullptr;
	bpv__selectedCharacter__pf = 0;
	bpv__availableCharacters__pf = TArray<bool> ();
	bpv__previousSelectedChar__pf = 0;
	bpv__charImage__pf = nullptr;
	bpv__senderText__pf = FText::GetEmpty();
	bpv__senderName__pf = FText::GetEmpty();
	bpv__minClickDIstance__pf = 100.000000f;
	InputYawScale = 2.500000f;
	InputPitchScale = -1.750000f;
	InputRollScale = 1.000000f;
	ForceFeedbackScale = 1.000000f;
	auto& __Local__1 = (*(AccessPrivateProperty<USceneComponent*>((this), AController::__PPO__TransformComponent() )));
	bReplicateMovement = true;
	bReplicates = true;
}
void AlobbyPlayerController_C__pf2687806415::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
void AlobbyPlayerController_C__pf2687806415::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(A0_base_C__pf1490413170::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AlobbyGM_C__pf2687806415::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UloadingScreen_C__pf1207061625::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UlobbyMenu_C__pf3941786787::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UcharacterSelect_C__pf3941786787::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UplayerSaveGame_C__pf533497531::StaticClass());
	// List of all referenced converted structures
	extern UScriptStruct* Z_Construct_UScriptStruct_FPlayerInfo__pf533497531();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FPlayerInfo__pf533497531());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__2 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"));
	InDynamicClass->ComponentTemplates.Add(__Local__2);
	auto __Local__3 = NewObject<UInputKeyDelegateBinding>(InDynamicClass, UInputKeyDelegateBinding::StaticClass(), TEXT("InputKeyDelegateBinding_1"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__3);
	__Local__3->InputKeyDelegateBindings = TArray<FBlueprintInputKeyDelegateBinding> ();
	__Local__3->InputKeyDelegateBindings.AddUninitialized(1);
	FBlueprintInputKeyDelegateBinding::StaticStruct()->InitializeStruct(__Local__3->InputKeyDelegateBindings.GetData(), 1);
	auto& __Local__4 = __Local__3->InputKeyDelegateBindings[0];
	__Local__4.InputChord.Key = FKey(TEXT("RightMouseButton"));
	__Local__4.FunctionNameToBind = FName(TEXT("InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1"));
}
void AlobbyPlayerController_C__pf2687806415::bpf__ExecuteUbergraph_lobbyPlayerController__pf_0(int32 bpp__EntryPoint__pf)
{
	APawn* bpfv__CallFunc_K2_GetPawn_ReturnValue__pf{};
	AGameModeBase* bpfv__CallFunc_GetGameMode_ReturnValue3__pf{};
	int32 bpfv__CallFunc_RandomInteger_ReturnValue__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 90);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_K2_GetPawn_ReturnValue__pf = AController::K2_GetPawn();
	b0l__K2Node_DynamicCast_As0_Base__pf = Cast<A0_base_C__pf1490413170>(bpfv__CallFunc_K2_GetPawn_ReturnValue__pf);
	b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_As0_Base__pf != nullptr);;
	bpfv__CallFunc_GetGameMode_ReturnValue3__pf = UGameplayStatics::GetGameMode(this);
	bpfv__CallFunc_RandomInteger_ReturnValue__pf = UKismetMathLibrary::RandomInteger(2);
	b0l__K2Node_DynamicCast_AsLobby_GM3__pf = Cast<AlobbyGM_C__pf2687806415>(bpfv__CallFunc_GetGameMode_ReturnValue3__pf);
	b0l__K2Node_DynamicCast_bSuccess6__pf = (b0l__K2Node_DynamicCast_AsLobby_GM3__pf != nullptr);;
	TArray<APlayerStart*>  __Local__5 = TArray<APlayerStart*> {};
	FCustomThunkTemplates::Array_Get(((IsValid(b0l__K2Node_DynamicCast_AsLobby_GM3__pf)) ? (b0l__K2Node_DynamicCast_AsLobby_GM3__pf->bpv__spawnPoints__pf) : (__Local__5)), bpfv__CallFunc_RandomInteger_ReturnValue__pf, /*out*/ b0l__CallFunc_Array_Get_Item5__pf);
	if(IsValid(b0l__CallFunc_Array_Get_Item5__pf))
	{
		bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = b0l__CallFunc_Array_Get_Item5__pf->AActor::K2_GetActorLocation();
	}
	if(IsValid(b0l__K2Node_DynamicCast_As0_Base__pf))
	{
		b0l__K2Node_DynamicCast_As0_Base__pf->bpv__targetLocation__pf = bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf;
	}
	return; //KCST_EndOfThread
}
void AlobbyPlayerController_C__pf2687806415::bpf__ExecuteUbergraph_lobbyPlayerController__pf_1(int32 bpp__EntryPoint__pf)
{
	APawn* bpfv__CallFunc_K2_GetPawn_ReturnValue2__pf{};
	bool bpfv__CallFunc_GetHitResultUnderCursorByChannel_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 35);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_K2_GetPawn_ReturnValue2__pf = AController::K2_GetPawn();
	b0l__K2Node_DynamicCast_As0_Base2__pf = Cast<A0_base_C__pf1490413170>(bpfv__CallFunc_K2_GetPawn_ReturnValue2__pf);
	b0l__K2Node_DynamicCast_bSuccess5__pf = (b0l__K2Node_DynamicCast_As0_Base2__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess5__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	bpfv__CallFunc_GetHitResultUnderCursorByChannel_ReturnValue__pf = APlayerController::GetHitResultUnderCursorByChannel(ETraceTypeQuery::TraceTypeQuery1, true, /*out*/ b0l__CallFunc_GetHitResultUnderCursorByChannel_HitResult__pf);
	UGameplayStatics::BreakHitResult(b0l__CallFunc_GetHitResultUnderCursorByChannel_HitResult__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time__pf, /*out*/ b0l__CallFunc_BreakHitResult_Distance__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd__pf);
	if(IsValid(b0l__K2Node_DynamicCast_As0_Base2__pf))
	{
		b0l__K2Node_DynamicCast_As0_Base2__pf->bpv__targetLocation__pf = b0l__CallFunc_BreakHitResult_Location__pf;
	}
	return; //KCST_EndOfThread
}
void AlobbyPlayerController_C__pf2687806415::bpf__ExecuteUbergraph_lobbyPlayerController__pf_2(int32 bpp__EntryPoint__pf)
{
	UlobbyMenu_C__pf3941786787* bpfv__CallFunc_Create_ReturnValue2__pf{};
	check(bpp__EntryPoint__pf == 42);
	// optimized KCST_UnconditionalGoto
	bShowMouseCursor = true;
	bpfv__CallFunc_Create_ReturnValue2__pf = CastChecked<UlobbyMenu_C__pf3941786787>(UWidgetBlueprintLibrary::Create(this, UlobbyMenu_C__pf3941786787::StaticClass(), ((APlayerController*)nullptr)), ECastCheckedType::NullAllowed);
	UKismetSystemLibrary::SetTextPropertyByName(bpfv__CallFunc_Create_ReturnValue2__pf, FName(TEXT("lobbyServerName")), b0l__K2Node_CustomEvent_serverName__pf);
	bpv__lobbyMenuWB__pf = bpfv__CallFunc_Create_ReturnValue2__pf;
	if(IsValid(bpv__lobbyMenuWB__pf))
	{
		bpv__lobbyMenuWB__pf->UUserWidget::AddToViewport(0);
	}
	return; //KCST_EndOfThread
}
void AlobbyPlayerController_C__pf2687806415::bpf__ExecuteUbergraph_lobbyPlayerController__pf_3(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue2__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 5:
			{
				AActor::FlushNetDormancy();
			}
		case 6:
			{
				bpv__allConnectedPlayers__pf = b0l__K2Node_CustomEvent_connectedPlayersInfo__pf;
			}
		case 7:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__lobbyMenuWB__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 8:
			{
				if(IsValid(bpv__lobbyMenuWB__pf))
				{
					bpv__lobbyMenuWB__pf->bpf__clearPlayerList__pf();
				}
			}
		case 9:
			{
				b0l__Temp_int_Loop_Counter_Variable2__pf = 0;
			}
		case 10:
			{
				b0l__Temp_int_Array_Index_Variable3__pf = 0;
			}
		case 11:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__allConnectedPlayers__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable2__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 12:
			{
				b0l__Temp_int_Array_Index_Variable3__pf = b0l__Temp_int_Loop_Counter_Variable2__pf;
			}
		case 13:
			{
				__StateStack.Push(15);
			}
		case 14:
			{
				FCustomThunkTemplates::Array_Get(bpv__allConnectedPlayers__pf, b0l__Temp_int_Array_Index_Variable3__pf, /*out*/ b0l__CallFunc_Array_Get_Item4__pf);
				if(IsValid(bpv__lobbyMenuWB__pf))
				{
					bpv__lobbyMenuWB__pf->bpf__updatePlayerWindow__pf(b0l__CallFunc_Array_Get_Item4__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 15:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue2__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable2__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable2__pf = bpfv__CallFunc_Add_IntInt_ReturnValue2__pf;
				__CurrentState = 11;
				break;
			}
		case 54:
			{
				__CurrentState = 5;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void AlobbyPlayerController_C__pf2687806415::bpf__ExecuteUbergraph_lobbyPlayerController__pf_4(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 89);
	return; //KCST_EndOfThread
}
void AlobbyPlayerController_C__pf2687806415::bpf__ExecuteUbergraph_lobbyPlayerController__pf_5(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 86);
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__lobbyMenuWB__pf) && IsValid(bpv__lobbyMenuWB__pf->bpv__chatWIndow__pf))
	{
		bpv__lobbyMenuWB__pf->bpv__chatWIndow__pf->bpf__updateChatWindow__pf(b0l__K2Node_CustomEvent_sender__pf, b0l__K2Node_CustomEvent_text__pf);
	}
	return; //KCST_EndOfThread
}
void AlobbyPlayerController_C__pf2687806415::bpf__ExecuteUbergraph_lobbyPlayerController__pf_6(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 88);
	return; //KCST_EndOfThread
}
void AlobbyPlayerController_C__pf2687806415::bpf__ExecuteUbergraph_lobbyPlayerController__pf_7(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	AGameModeBase* bpfv__CallFunc_GetGameMode_ReturnValue2__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue3__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue3__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 21:
			{
				AActor::FlushNetDormancy();
			}
		case 22:
			{
				bpv__senderText__pf = b0l__K2Node_CustomEvent_textToSend__pf;
			}
		case 23:
			{
				AActor::FlushNetDormancy();
			}
		case 24:
			{
				bpv__senderName__pf = bpv__playerSettings__pf.bpv__myPlayerName_2_816FFE264C08408F09C26C8C7F8CDB1A__pf;
			}
		case 25:
			{
				bpfv__CallFunc_GetGameMode_ReturnValue2__pf = UGameplayStatics::GetGameMode(this);
				b0l__K2Node_DynamicCast_AsLobby_GM2__pf = Cast<AlobbyGM_C__pf2687806415>(bpfv__CallFunc_GetGameMode_ReturnValue2__pf);
				b0l__K2Node_DynamicCast_bSuccess3__pf = (b0l__K2Node_DynamicCast_AsLobby_GM2__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess3__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 26:
			{
				b0l__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 27:
			{
				b0l__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 28:
			{
				TArray<APlayerController*>  __Local__6 = TArray<APlayerController*> {};
				bpfv__CallFunc_Array_Length_ReturnValue3__pf = FCustomThunkTemplates::Array_Length(((IsValid(b0l__K2Node_DynamicCast_AsLobby_GM2__pf)) ? (b0l__K2Node_DynamicCast_AsLobby_GM2__pf->bpv__allPlayerControllers__pf) : (__Local__6)));
				bpfv__CallFunc_Less_IntInt_ReturnValue3__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue3__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue3__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 29:
			{
				b0l__Temp_int_Array_Index_Variable__pf = b0l__Temp_int_Loop_Counter_Variable__pf;
			}
		case 30:
			{
				__StateStack.Push(33);
			}
		case 31:
			{
				TArray<APlayerController*>  __Local__7 = TArray<APlayerController*> {};
				FCustomThunkTemplates::Array_Get(((IsValid(b0l__K2Node_DynamicCast_AsLobby_GM2__pf)) ? (b0l__K2Node_DynamicCast_AsLobby_GM2__pf->bpv__allPlayerControllers__pf) : (__Local__7)), b0l__Temp_int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item3__pf);
				b0l__K2Node_DynamicCast_AsLobby_Player_Controller__pf = Cast<AlobbyPlayerController_C__pf2687806415>(b0l__CallFunc_Array_Get_Item3__pf);
				b0l__K2Node_DynamicCast_bSuccess4__pf = (b0l__K2Node_DynamicCast_AsLobby_Player_Controller__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess4__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 32:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsLobby_Player_Controller__pf))
				{
					b0l__K2Node_DynamicCast_AsLobby_Player_Controller__pf->bpf__updateChat__pf(bpv__senderName__pf, bpv__senderText__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 33:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 28;
				break;
			}
		case 85:
			{
				__CurrentState = 21;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void AlobbyPlayerController_C__pf2687806415::bpf__ExecuteUbergraph_lobbyPlayerController__pf_8(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 81);
	// optimized KCST_UnconditionalGoto
	bpv__playerSettings__pf.bpv__myPlayerCharacter_8_09E183C542505D365AD557BA76D256B2__pf = b0l__K2Node_CustomEvent_character__pf;
	bpv__playerSettings__pf.bpv__myPlayerCharImage_11_46601ED342E51FBB0EEC429F8DA0F92A__pf = b0l__K2Node_CustomEvent_charImage__pf;
	bpf__saveGame__pf();
	bpf__callUpdate__pf(bpv__playerSettings__pf, false);
	return; //KCST_EndOfThread
}
void AlobbyPlayerController_C__pf2687806415::bpf__ExecuteUbergraph_lobbyPlayerController__pf_9(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsValid_ReturnValue4__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue2__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue2__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue3__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 48:
			{
				b0l__Temp_int_Array_Index_Variable2__pf = 0;
			}
		case 49:
			{
				TArray<UButton*>  __Local__8 = TArray<UButton*> {};
				bpfv__CallFunc_Array_Length_ReturnValue2__pf = FCustomThunkTemplates::Array_Length(((IsValid(bpv__lobbyMenuWB__pf) && IsValid(bpv__lobbyMenuWB__pf->bpv__characterSelect__pf)) ? (bpv__lobbyMenuWB__pf->bpv__characterSelect__pf->bpv__charButtons__pf) : (__Local__8)));
				bpfv__CallFunc_Less_IntInt_ReturnValue2__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable3__pf, bpfv__CallFunc_Array_Length_ReturnValue2__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 50:
			{
				b0l__Temp_int_Array_Index_Variable2__pf = b0l__Temp_int_Loop_Counter_Variable3__pf;
			}
		case 51:
			{
				__StateStack.Push(53);
			}
		case 52:
			{
				FCustomThunkTemplates::Array_Get(bpv__availableCharacters__pf, b0l__Temp_int_Array_Index_Variable2__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				TArray<UButton*>  __Local__9 = TArray<UButton*> {};
				FCustomThunkTemplates::Array_Get(((IsValid(bpv__lobbyMenuWB__pf) && IsValid(bpv__lobbyMenuWB__pf->bpv__characterSelect__pf)) ? (bpv__lobbyMenuWB__pf->bpv__characterSelect__pf->bpv__charButtons__pf) : (__Local__9)), b0l__Temp_int_Array_Index_Variable2__pf, /*out*/ b0l__CallFunc_Array_Get_Item2__pf);
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(b0l__CallFunc_Array_Get_Item__pf);
				if(IsValid(b0l__CallFunc_Array_Get_Item2__pf))
				{
					b0l__CallFunc_Array_Get_Item2__pf->SetIsEnabled(bpfv__CallFunc_Not_PreBool_ReturnValue__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 53:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue3__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable3__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable3__pf = bpfv__CallFunc_Add_IntInt_ReturnValue3__pf;
				__CurrentState = 49;
				break;
			}
		case 75:
			{
				__CurrentState = 76;
				break;
			}
		case 76:
			{
				bpv__availableCharacters__pf = b0l__K2Node_CustomEvent_availableCharacters__pf;
			}
		case 77:
			{
				bpfv__CallFunc_IsValid_ReturnValue4__pf = UKismetSystemLibrary::IsValid(bpv__lobbyMenuWB__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue4__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 78:
			{
				b0l__Temp_int_Loop_Counter_Variable3__pf = 0;
				__CurrentState = 48;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void AlobbyPlayerController_C__pf2687806415::bpf__ExecuteUbergraph_lobbyPlayerController__pf_10(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 67:
			{
				__CurrentState = 68;
				break;
			}
		case 68:
			{
				b0l__CallFunc_DestroySession_ReturnValue__pf = UDestroySessionCallbackProxy::DestroySession(this, this);
			}
		case 69:
			{
				b0l__CallFunc_IsValid_ReturnValue3__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_DestroySession_ReturnValue__pf);
				if (!b0l__CallFunc_IsValid_ReturnValue3__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 70:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate__pf.BindUFunction(this,FName(TEXT("OnSuccess_8D0FFF694034D0D1CBB5A69700D20292")));
				if(IsValid(b0l__CallFunc_DestroySession_ReturnValue__pf))
				{
					b0l__CallFunc_DestroySession_ReturnValue__pf->OnSuccess.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate__pf);
				}
			}
		case 71:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate2__pf.BindUFunction(this,FName(TEXT("OnFailure_8D0FFF694034D0D1CBB5A69700D20292")));
				if(IsValid(b0l__CallFunc_DestroySession_ReturnValue__pf))
				{
					b0l__CallFunc_DestroySession_ReturnValue__pf->OnFailure.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate2__pf);
				}
			}
		case 72:
			{
				if(IsValid(b0l__CallFunc_DestroySession_ReturnValue__pf))
				{
					b0l__CallFunc_DestroySession_ReturnValue__pf->Activate();
				}
				__CurrentState = -1;
				break;
			}
		case 73:
			{
				__CurrentState = 74;
				break;
			}
		case 74:
			{
				UGameplayStatics::OpenLevel(this, FName(TEXT("mainMenu")), true, FString(TEXT("")));
				__CurrentState = 68;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AlobbyPlayerController_C__pf2687806415::bpf__ExecuteUbergraph_lobbyPlayerController__pf_11(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 79);
	// optimized KCST_UnconditionalGoto
	bpv__previousSelectedChar__pf = bpv__selectedCharacter__pf;
	// optimized KCST_UnconditionalGoto
	AActor::FlushNetDormancy();
	bpv__charImage__pf = b0l__K2Node_CustomEvent_charImage2__pf;
	AActor::FlushNetDormancy();
	bpv__selectedCharacter__pf = b0l__K2Node_CustomEvent_charID__pf;
	bpf__charCheck__pf();
	return; //KCST_EndOfThread
}
void AlobbyPlayerController_C__pf2687806415::bpf__ExecuteUbergraph_lobbyPlayerController__pf_12(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 66);
	return; //KCST_EndOfThread
}
void AlobbyPlayerController_C__pf2687806415::bpf__ExecuteUbergraph_lobbyPlayerController__pf_13(int32 bpp__EntryPoint__pf)
{
	FText bpfv__CallFunc_Conv_IntToText_ReturnValue__pf{};
	FText bpfv__CallFunc_Conv_IntToText_ReturnValue2__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue2__pf{};
	FText bpfv__CallFunc_Format_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 63);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_IsValid_ReturnValue2__pf = UKismetSystemLibrary::IsValid(bpv__lobbyMenuWB__pf);
	if (!bpfv__CallFunc_IsValid_ReturnValue2__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	bpfv__CallFunc_Conv_IntToText_ReturnValue__pf = UKismetTextLibrary::Conv_IntToText(b0l__K2Node_CustomEvent_maxPlayers__pf, true, 1, 324);
	bpfv__CallFunc_Conv_IntToText_ReturnValue2__pf = UKismetTextLibrary::Conv_IntToText(b0l__K2Node_CustomEvent_currentPlayers__pf, true, 1, 324);
	b0l__K2Node_MakeStruct_FormatArgumentData__pf.ArgumentName = FString(TEXT("maxPlayers"));
	b0l__K2Node_MakeStruct_FormatArgumentData__pf.ArgumentValueType = EFormatArgumentType::Text;
	b0l__K2Node_MakeStruct_FormatArgumentData__pf.ArgumentValue = bpfv__CallFunc_Conv_IntToText_ReturnValue__pf;
	b0l__K2Node_MakeStruct_FormatArgumentData__pf.ArgumentValueInt = 0;
	b0l__K2Node_MakeStruct_FormatArgumentData__pf.ArgumentValueFloat = 0.000000;
	b0l__K2Node_MakeStruct_FormatArgumentData__pf.ArgumentValueGender = ETextGender::Masculine;
	b0l__K2Node_MakeStruct_FormatArgumentData2__pf.ArgumentName = FString(TEXT("currentPlayers"));
	b0l__K2Node_MakeStruct_FormatArgumentData2__pf.ArgumentValueType = EFormatArgumentType::Text;
	b0l__K2Node_MakeStruct_FormatArgumentData2__pf.ArgumentValue = bpfv__CallFunc_Conv_IntToText_ReturnValue2__pf;
	b0l__K2Node_MakeStruct_FormatArgumentData2__pf.ArgumentValueInt = 0;
	b0l__K2Node_MakeStruct_FormatArgumentData2__pf.ArgumentValueFloat = 0.000000;
	b0l__K2Node_MakeStruct_FormatArgumentData2__pf.ArgumentValueGender = ETextGender::Masculine;
	b0l__K2Node_MakeArray_Array__pf.SetNum(2, true);
	b0l__K2Node_MakeArray_Array__pf[0] = b0l__K2Node_MakeStruct_FormatArgumentData2__pf;
	b0l__K2Node_MakeArray_Array__pf[1] = b0l__K2Node_MakeStruct_FormatArgumentData__pf;
	bpfv__CallFunc_Format_ReturnValue__pf = UKismetTextLibrary::Format(FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("{currentPlayers} of {maxPlayers}"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("8ACC56EF43207A50FB15279E70185A6D") /* Key */
	), b0l__K2Node_MakeArray_Array__pf);
	if(IsValid(bpv__lobbyMenuWB__pf))
	{
		bpv__lobbyMenuWB__pf->bpv__playersDisplay__pf = bpfv__CallFunc_Format_ReturnValue__pf;
	}
	return; //KCST_EndOfThread
}
void AlobbyPlayerController_C__pf2687806415::bpf__ExecuteUbergraph_lobbyPlayerController__pf_14(int32 bpp__EntryPoint__pf)
{
	UloadingScreen_C__pf1207061625* bpfv__CallFunc_Create_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 59);
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__lobbyMenuWB__pf))
	{
		bpv__lobbyMenuWB__pf->RemoveFromParent();
	}
	bpfv__CallFunc_Create_ReturnValue__pf = CastChecked<UloadingScreen_C__pf1207061625>(UWidgetBlueprintLibrary::Create(this, UloadingScreen_C__pf1207061625::StaticClass(), this), ECastCheckedType::NullAllowed);
	if(IsValid(bpfv__CallFunc_Create_ReturnValue__pf))
	{
		bpfv__CallFunc_Create_ReturnValue__pf->UUserWidget::AddToViewport(0);
	}
	return; //KCST_EndOfThread
}
void AlobbyPlayerController_C__pf2687806415::bpf__ExecuteUbergraph_lobbyPlayerController__pf_15(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 55);
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__lobbyMenuWB__pf))
	{
		bpv__lobbyMenuWB__pf->bpv__mapImage__pf = b0l__K2Node_CustomEvent_mapImage__pf;
	}
	if(IsValid(bpv__lobbyMenuWB__pf))
	{
		bpv__lobbyMenuWB__pf->bpv__mapName__pf = b0l__K2Node_CustomEvent_nameMap__pf;
	}
	if(IsValid(bpv__lobbyMenuWB__pf))
	{
		bpv__lobbyMenuWB__pf->bpv__mapTime__pf = b0l__K2Node_CustomEvent_mapTime__pf;
	}
	return; //KCST_EndOfThread
}
void AlobbyPlayerController_C__pf2687806415::bpf__ExecuteUbergraph_lobbyPlayerController__pf_16(int32 bpp__EntryPoint__pf)
{
	AGameModeBase* bpfv__CallFunc_GetGameMode_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 41);
	// optimized KCST_UnconditionalGoto
	AActor::FlushNetDormancy();
	bpv__playerSettings__pf = b0l__K2Node_CustomEvent_playerInfo__pf;
	bpfv__CallFunc_GetGameMode_ReturnValue__pf = UGameplayStatics::GetGameMode(this);
	b0l__K2Node_DynamicCast_AsLobby_GM__pf = Cast<AlobbyGM_C__pf2687806415>(bpfv__CallFunc_GetGameMode_ReturnValue__pf);
	b0l__K2Node_DynamicCast_bSuccess2__pf = (b0l__K2Node_DynamicCast_AsLobby_GM__pf != nullptr);;
	if(IsValid(b0l__K2Node_DynamicCast_AsLobby_GM__pf))
	{
		b0l__K2Node_DynamicCast_AsLobby_GM__pf->bpf__SwapCharacter__pf(this, bpv__playerSettings__pf.bpv__myPlayerCharacter_8_09E183C542505D365AD557BA76D256B2__pf, b0l__K2Node_CustomEvent_changedStatus__pf);
	}
	bpfv__CallFunc_GetGameMode_ReturnValue__pf = UGameplayStatics::GetGameMode(this);
	b0l__K2Node_DynamicCast_AsLobby_GM__pf = Cast<AlobbyGM_C__pf2687806415>(bpfv__CallFunc_GetGameMode_ReturnValue__pf);
	b0l__K2Node_DynamicCast_bSuccess2__pf = (b0l__K2Node_DynamicCast_AsLobby_GM__pf != nullptr);;
	if(IsValid(b0l__K2Node_DynamicCast_AsLobby_GM__pf))
	{
		b0l__K2Node_DynamicCast_AsLobby_GM__pf->bpf__everyoneUpdate__pf();
	}
	return; //KCST_EndOfThread
}
void AlobbyPlayerController_C__pf2687806415::bpf__ExecuteUbergraph_lobbyPlayerController__pf_17(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 38);
	// optimized KCST_UnconditionalGoto
	bpf__saveGameCheck__pf();
	bpf__callUpdate__pf(bpv__playerSettings__pf, true);
	return; //KCST_EndOfThread
}
void AlobbyPlayerController_C__pf2687806415::bpf__ExecuteUbergraph_lobbyPlayerController__pf_18(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 34);
	return; //KCST_EndOfThread
}
void AlobbyPlayerController_C__pf2687806415::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_lobbyPlayerController__pf_0(90);
}
void AlobbyPlayerController_C__pf2687806415::bpf__movePawn__pf_Implementation(A0_base_C__pf1490413170* bpp__target__pf)
{
	b0l__K2Node_CustomEvent_target__pf = bpp__target__pf;
	bpf__ExecuteUbergraph_lobbyPlayerController__pf_4(89);
}
void AlobbyPlayerController_C__pf2687806415::bpf__rightClickEvent__pf_Implementation()
{
	bpf__ExecuteUbergraph_lobbyPlayerController__pf_6(88);
}
void AlobbyPlayerController_C__pf2687806415::bpf__updateChat__pf_Implementation(const FText& bpp__sender__pf__const, const FText& bpp__text__pf__const)
{
	typedef FText  T__Local__10;
	T__Local__10& bpp__sender__pf = *const_cast<T__Local__10 *>(&bpp__sender__pf__const);
	typedef FText  T__Local__11;
	T__Local__11& bpp__text__pf = *const_cast<T__Local__11 *>(&bpp__text__pf__const);
	b0l__K2Node_CustomEvent_sender__pf = bpp__sender__pf;
	b0l__K2Node_CustomEvent_text__pf = bpp__text__pf;
	bpf__ExecuteUbergraph_lobbyPlayerController__pf_5(86);
}
void AlobbyPlayerController_C__pf2687806415::bpf__getChatMessage__pf_Implementation(const FText& bpp__textToSend__pf__const)
{
	typedef FText  T__Local__12;
	T__Local__12& bpp__textToSend__pf = *const_cast<T__Local__12 *>(&bpp__textToSend__pf__const);
	b0l__K2Node_CustomEvent_textToSend__pf = bpp__textToSend__pf;
	bpf__ExecuteUbergraph_lobbyPlayerController__pf_7(85);
}
void AlobbyPlayerController_C__pf2687806415::bpf__assignPlayer__pf_Implementation(UClass* bpp__character__pf, UTexture2D* bpp__charImage__pf)
{
	b0l__K2Node_CustomEvent_character__pf = bpp__character__pf;
	b0l__K2Node_CustomEvent_charImage__pf = bpp__charImage__pf;
	bpf__ExecuteUbergraph_lobbyPlayerController__pf_8(81);
}
void AlobbyPlayerController_C__pf2687806415::bpf__assignSelecteddCharacter__pf_Implementation(int32 bpp__charID__pf, UTexture2D* bpp__charImage__pf)
{
	b0l__K2Node_CustomEvent_charID__pf = bpp__charID__pf;
	b0l__K2Node_CustomEvent_charImage2__pf = bpp__charImage__pf;
	bpf__ExecuteUbergraph_lobbyPlayerController__pf_11(79);
}
void AlobbyPlayerController_C__pf2687806415::bpf__updateAvalableCharacters__pf_Implementation(/*out*/ TArray<bool> const& bpp__availableCharacters__pf__const)
{
	typedef TArray<bool>  T__Local__13;
	T__Local__13& bpp__availableCharacters__pf = *const_cast<T__Local__13 *>(&bpp__availableCharacters__pf__const);
	b0l__K2Node_CustomEvent_availableCharacters__pf = bpp__availableCharacters__pf;
	bpf__ExecuteUbergraph_lobbyPlayerController__pf_9(75);
}
void AlobbyPlayerController_C__pf2687806415::bpf__kicked__pf_Implementation()
{
	bpf__ExecuteUbergraph_lobbyPlayerController__pf_10(73);
}
void AlobbyPlayerController_C__pf2687806415::bpf__ReceiveEndPlay__pf(EEndPlayReason::Type bpp__EndPlayReason__pf)
{
	b0l__K2Node_Event_EndPlayReason__pf = bpp__EndPlayReason__pf;
	bpf__ExecuteUbergraph_lobbyPlayerController__pf_10(67);
}
void AlobbyPlayerController_C__pf2687806415::bpf__updateNumPlayers__pf_Implementation(int32 bpp__currentPlayers__pf, int32 bpp__maxPlayers__pf)
{
	b0l__K2Node_CustomEvent_currentPlayers__pf = bpp__currentPlayers__pf;
	b0l__K2Node_CustomEvent_maxPlayers__pf = bpp__maxPlayers__pf;
	bpf__ExecuteUbergraph_lobbyPlayerController__pf_13(63);
}
void AlobbyPlayerController_C__pf2687806415::bpf__showLoadingScreen__pf_Implementation()
{
	bpf__ExecuteUbergraph_lobbyPlayerController__pf_14(59);
}
void AlobbyPlayerController_C__pf2687806415::bpf__updateLobbySettings__pf_Implementation(UTexture2D* bpp__mapImage__pf, const FText& bpp__nameMap__pf__const, const FText& bpp__mapTime__pf__const)
{
	typedef FText  T__Local__14;
	T__Local__14& bpp__nameMap__pf = *const_cast<T__Local__14 *>(&bpp__nameMap__pf__const);
	typedef FText  T__Local__15;
	T__Local__15& bpp__mapTime__pf = *const_cast<T__Local__15 *>(&bpp__mapTime__pf__const);
	b0l__K2Node_CustomEvent_mapImage__pf = bpp__mapImage__pf;
	b0l__K2Node_CustomEvent_nameMap__pf = bpp__nameMap__pf;
	b0l__K2Node_CustomEvent_mapTime__pf = bpp__mapTime__pf;
	bpf__ExecuteUbergraph_lobbyPlayerController__pf_15(55);
}
void AlobbyPlayerController_C__pf2687806415::bpf__addxPlayerInfo__pfT_Implementation(/*out*/ TArray<FPlayerInfo__pf533497531> const& bpp__connectedPlayersInfo__pf__const)
{
	typedef TArray<FPlayerInfo__pf533497531>  T__Local__16;
	T__Local__16& bpp__connectedPlayersInfo__pf = *const_cast<T__Local__16 *>(&bpp__connectedPlayersInfo__pf__const);
	b0l__K2Node_CustomEvent_connectedPlayersInfo__pf = bpp__connectedPlayersInfo__pf;
	bpf__ExecuteUbergraph_lobbyPlayerController__pf_3(54);
}
void AlobbyPlayerController_C__pf2687806415::bpf__setupLobbyMenu__pf_Implementation(const FText& bpp__serverName__pf__const)
{
	typedef FText  T__Local__17;
	T__Local__17& bpp__serverName__pf = *const_cast<T__Local__17 *>(&bpp__serverName__pf__const);
	b0l__K2Node_CustomEvent_serverName__pf = bpp__serverName__pf;
	bpf__ExecuteUbergraph_lobbyPlayerController__pf_2(42);
}
void AlobbyPlayerController_C__pf2687806415::bpf__callUpdate__pf_Implementation(FPlayerInfo__pf533497531 bpp__playerInfo__pf, bool bpp__changedStatus__pf)
{
	b0l__K2Node_CustomEvent_playerInfo__pf = bpp__playerInfo__pf;
	b0l__K2Node_CustomEvent_changedStatus__pf = bpp__changedStatus__pf;
	bpf__ExecuteUbergraph_lobbyPlayerController__pf_16(41);
}
void AlobbyPlayerController_C__pf2687806415::bpf__initalSetup__pf_Implementation()
{
	bpf__ExecuteUbergraph_lobbyPlayerController__pf_17(38);
}
void AlobbyPlayerController_C__pf2687806415::bpf__InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_lobbyPlayerController__pf_1(35);
}
void AlobbyPlayerController_C__pf2687806415::bpf__OnSuccess_8D0FFF694034D0D1CBB5A69700D20292__pf()
{
	bpf__ExecuteUbergraph_lobbyPlayerController__pf_18(34);
}
void AlobbyPlayerController_C__pf2687806415::bpf__OnFailure_8D0FFF694034D0D1CBB5A69700D20292__pf()
{
	bpf__ExecuteUbergraph_lobbyPlayerController__pf_12(66);
}
void AlobbyPlayerController_C__pf2687806415::bpf__UserConstructionScript__pf()
{
}
void AlobbyPlayerController_C__pf2687806415::bpf__saveGameCheck__pf()
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
					__CurrentState = 5;
					break;
				}
			}
		case 3:
			{
				bpf__loadGame__pf();
			}
		case 4:
			{
				bpf__saveGame__pf();
				__CurrentState = -1;
				break;
			}
		case 5:
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
void AlobbyPlayerController_C__pf2687806415::bpf__loadGame__pf()
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
				FText  __Local__18 = FText::GetEmpty();
				bpv__playerSettings__pf.bpv__myPlayerName_2_816FFE264C08408F09C26C8C7F8CDB1A__pf = ((IsValid(bpfv__K2Node_DynamicCast_AsPlayer_Save_Game__pf)) ? (bpfv__K2Node_DynamicCast_AsPlayer_Save_Game__pf->bpv__S_PlayerINfo__pf.bpv__myPlayerName_2_816FFE264C08408F09C26C8C7F8CDB1A__pf) : (__Local__18));
				UTexture2D*  __Local__19 = ((UTexture2D*)nullptr);
				bpv__playerSettings__pf.bpv__myPlayerImage_5_E3B8ED5F4387C5691564BF96105E1E15__pf = ((IsValid(bpfv__K2Node_DynamicCast_AsPlayer_Save_Game__pf)) ? (bpfv__K2Node_DynamicCast_AsPlayer_Save_Game__pf->bpv__S_PlayerINfo__pf.bpv__myPlayerImage_5_E3B8ED5F4387C5691564BF96105E1E15__pf) : (__Local__19));
				bpv__playerSettings__pf.bpv__myPlayerCharacter_8_09E183C542505D365AD557BA76D256B2__pf = ((UClass*)nullptr);
				bpv__playerSettings__pf.bpv__myPlayerCharImage_11_46601ED342E51FBB0EEC429F8DA0F92A__pf = ((UTexture2D*)nullptr);
				bpv__playerSettings__pf.bpv__myPlayerStatus_14_F1604291452782409E92779450FED1BE__pf = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Not Ready"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("747CA788434D815352EB5CAD11C9A3FF") /* Key */
	);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AlobbyPlayerController_C__pf2687806415::bpf__saveGame__pf()
{
	bool bpfv__CallFunc_SaveGameToSlot_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	UplayerSaveGame_C__pf533497531* bpfv__CallFunc_CreateSaveGameObject_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__playerSaveGameREF__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = 4;
					break;
				}
			}
		case 2:
			{
				if(IsValid(bpv__playerSaveGameREF__pf))
				{
					bpv__playerSaveGameREF__pf->bpv__S_PlayerINfo__pf = bpv__playerSettings__pf;
				}
			}
		case 3:
			{
				bpfv__CallFunc_SaveGameToSlot_ReturnValue__pf = UGameplayStatics::SaveGameToSlot(bpv__playerSaveGameREF__pf, bpv__playerSettingsSave__pf, 0);
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				bpfv__CallFunc_CreateSaveGameObject_ReturnValue__pf = CastChecked<UplayerSaveGame_C__pf533497531>(UGameplayStatics::CreateSaveGameObject(UplayerSaveGame_C__pf533497531::StaticClass()), ECastCheckedType::NullAllowed);
			}
		case 5:
			{
				bpv__playerSaveGameREF__pf = bpfv__CallFunc_CreateSaveGameObject_ReturnValue__pf;
				__CurrentState = 2;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AlobbyPlayerController_C__pf2687806415::bpf__charCheck__pf()
{
	bool bpfv__Temp_bool_Variable__pf{};
	bool bpfv__Temp_bool_Variable2__pf{};
	AGameModeBase* bpfv__CallFunc_GetGameMode_ReturnValue__pf{};
	AlobbyGM_C__pf2687806415* bpfv__K2Node_DynamicCast_AsLobby_GM__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	UClass* bpfv__CallFunc_Array_Get_Item__pf{};
	bool bpfv__CallFunc_Array_Get_Item2__pf{};
	bool bpfv__CallFunc_EqualEqual_BoolBool_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__selectedCharacter__pf, 0);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 4;
					break;
				}
			}
		case 2:
			{
				bpfv__CallFunc_GetGameMode_ReturnValue__pf = UGameplayStatics::GetGameMode(this);
				bpfv__K2Node_DynamicCast_AsLobby_GM__pf = Cast<AlobbyGM_C__pf2687806415>(bpfv__CallFunc_GetGameMode_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsLobby_GM__pf != nullptr);;
				TArray<bool>  __Local__20 = TArray<bool> {};
				FCustomThunkTemplates::Array_Set(((IsValid(bpfv__K2Node_DynamicCast_AsLobby_GM__pf)) ? (bpfv__K2Node_DynamicCast_AsLobby_GM__pf->bpv__availableCharacters__pf) : (__Local__20)), bpv__previousSelectedChar__pf, bpfv__Temp_bool_Variable__pf, false);
			}
		case 3:
			{
				bpfv__CallFunc_GetGameMode_ReturnValue__pf = UGameplayStatics::GetGameMode(this);
				bpfv__K2Node_DynamicCast_AsLobby_GM__pf = Cast<AlobbyGM_C__pf2687806415>(bpfv__CallFunc_GetGameMode_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsLobby_GM__pf != nullptr);;
				TArray<UClass*>  __Local__21 = TArray<UClass*> {};
				FCustomThunkTemplates::Array_Get(((IsValid(bpfv__K2Node_DynamicCast_AsLobby_GM__pf)) ? (bpfv__K2Node_DynamicCast_AsLobby_GM__pf->bpv__characters__pf) : (__Local__21)), bpv__selectedCharacter__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpf__assignPlayer__pf(bpfv__CallFunc_Array_Get_Item__pf, bpv__charImage__pf);
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				bpfv__CallFunc_GetGameMode_ReturnValue__pf = UGameplayStatics::GetGameMode(this);
				bpfv__K2Node_DynamicCast_AsLobby_GM__pf = Cast<AlobbyGM_C__pf2687806415>(bpfv__CallFunc_GetGameMode_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsLobby_GM__pf != nullptr);;
				TArray<bool>  __Local__22 = TArray<bool> {};
				FCustomThunkTemplates::Array_Get(((IsValid(bpfv__K2Node_DynamicCast_AsLobby_GM__pf)) ? (bpfv__K2Node_DynamicCast_AsLobby_GM__pf->bpv__availableCharacters__pf) : (__Local__22)), bpv__selectedCharacter__pf, /*out*/ bpfv__CallFunc_Array_Get_Item2__pf);
				bpfv__CallFunc_EqualEqual_BoolBool_ReturnValue__pf = UKismetMathLibrary::EqualEqual_BoolBool(bpfv__CallFunc_Array_Get_Item2__pf, true);
				if (!bpfv__CallFunc_EqualEqual_BoolBool_ReturnValue__pf)
				{
					__CurrentState = 5;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				bpfv__Temp_bool_Variable2__pf = true;
				bpfv__CallFunc_GetGameMode_ReturnValue__pf = UGameplayStatics::GetGameMode(this);
				bpfv__K2Node_DynamicCast_AsLobby_GM__pf = Cast<AlobbyGM_C__pf2687806415>(bpfv__CallFunc_GetGameMode_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsLobby_GM__pf != nullptr);;
				TArray<bool>  __Local__23 = TArray<bool> {};
				FCustomThunkTemplates::Array_Set(((IsValid(bpfv__K2Node_DynamicCast_AsLobby_GM__pf)) ? (bpfv__K2Node_DynamicCast_AsLobby_GM__pf->bpv__availableCharacters__pf) : (__Local__23)), bpv__selectedCharacter__pf, bpfv__Temp_bool_Variable2__pf, false);
				__CurrentState = 2;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AlobbyPlayerController_C__pf2687806415::bpf__MoveToHitLocation__pf(FHitResult bpp__Hit__pf)
{
	APawn* bpfv__CallFunc_K2_GetPawn_ReturnValue__pf{};
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
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_VSize_ReturnValue__pf{};
	bool bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_K2_GetPawn_ReturnValue__pf = AController::K2_GetPawn();
				UGameplayStatics::BreakHitResult(bpp__Hit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Time__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Distance__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Normal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitItem__pf, /*out*/ bpfv__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceEnd__pf);
				if(IsValid(bpfv__CallFunc_K2_GetPawn_ReturnValue__pf))
				{
					bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = bpfv__CallFunc_K2_GetPawn_ReturnValue__pf->AActor::K2_GetActorLocation();
				}
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf, bpfv__CallFunc_BreakHitResult_Location__pf);
				bpfv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf);
				bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(bpfv__CallFunc_VSize_ReturnValue__pf, bpv__minClickDIstance__pf);
				if (!bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				UGameplayStatics::BreakHitResult(bpp__Hit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Time__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Distance__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Normal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitItem__pf, /*out*/ bpfv__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceEnd__pf);
				UNavigationSystem::SimpleMoveToLocation(this, bpfv__CallFunc_BreakHitResult_Location__pf);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AlobbyPlayerController_C__pf2687806415::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
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
void AlobbyPlayerController_C__pf2687806415::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SceneComponent 
		{10, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{11, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/Engine.EmptyOnlineDelegate__DelegateSignature 
		{95, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameModeBase 
		{0, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Texture2D 
		{115, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.FormatArgumentData 
		{116, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EEndPlayReason 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/OnlineSubsystemUtils.DestroySessionCallbackProxy 
		{82, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Button 
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Character 
		{35, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{53, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PhysicalMaterial 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{101, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerStart 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{79, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Controller 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{81, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{57, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.NavigationSystem 
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.CrowdManager 
		{80, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SaveGame 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CheatManager 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/characters/0_base.0_base_C 
		{96, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/lobby/lobbyGM.lobbyGM_C 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/UI/allLevels/loadingScreen.loadingScreen_C 
		{114, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/UI/Lobby/lobbyMenu.lobbyMenu_C 
		{117, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/UI/Lobby/characterSelect.characterSelect_C 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/allLevels/playerSaveGame.playerSaveGame_C 
		{88, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedStruct /Game/Blueprints/allLevels/PlayerInfo.PlayerInfo 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
struct FRegisterHelper__AlobbyPlayerController_C__pf2687806415
{
	FRegisterHelper__AlobbyPlayerController_C__pf2687806415()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Blueprints/lobby/lobbyPlayerController"), &AlobbyPlayerController_C__pf2687806415::__StaticDependenciesAssets);
	}
	static FRegisterHelper__AlobbyPlayerController_C__pf2687806415 Instance;
};
FRegisterHelper__AlobbyPlayerController_C__pf2687806415 FRegisterHelper__AlobbyPlayerController_C__pf2687806415::Instance;
void AlobbyPlayerController_C__pf2687806415::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME_DIFFNAMES(AlobbyPlayerController_C__pf2687806415, bpv__playerSettings__pf, FName(TEXT("playerSettings")));
	DOREPLIFETIME_DIFFNAMES(AlobbyPlayerController_C__pf2687806415, bpv__allConnectedPlayers__pf, FName(TEXT("allConnectedPlayers")));
	DOREPLIFETIME_DIFFNAMES(AlobbyPlayerController_C__pf2687806415, bpv__playerSettingsSave__pf, FName(TEXT("playerSettingsSave")));
	DOREPLIFETIME_DIFFNAMES(AlobbyPlayerController_C__pf2687806415, bpv__selectedCharacter__pf, FName(TEXT("selectedCharacter")));
	DOREPLIFETIME_DIFFNAMES(AlobbyPlayerController_C__pf2687806415, bpv__charImage__pf, FName(TEXT("charImage")));
	DOREPLIFETIME_DIFFNAMES(AlobbyPlayerController_C__pf2687806415, bpv__senderText__pf, FName(TEXT("senderText")));
	DOREPLIFETIME_DIFFNAMES(AlobbyPlayerController_C__pf2687806415, bpv__senderName__pf, FName(TEXT("senderName")));
}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
