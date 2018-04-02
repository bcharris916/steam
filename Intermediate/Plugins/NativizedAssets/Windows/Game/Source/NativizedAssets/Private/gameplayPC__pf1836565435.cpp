#include "NativizedAssets.h"
#include "gameplayPC__pf1836565435.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/InputKeyDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "PaperFlipbookComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
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
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsSettingsEnums.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/Engine/Classes/Vehicles/TireType.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunction.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollection.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
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
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
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
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
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
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
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
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
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
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "PaperFlipbook.h"
#include "PaperSprite.h"
#include "SpriteEditorOnlyTypes.h"
#include "Runtime/Engine/Public/Slate/SlateTextureAtlasInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"
#include "gameplayGM__pf1836565435.h"
#include "0_base__pf1490413170.h"
#include "gameplayChat__pf1207061625.h"
#include "aoeSpell__pf2191428166.h"
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
#include "Runtime/Engine/Classes/Engine/InputDelegateBinding.h"
#include "Runtime/Slate/Public/Framework/Commands/InputChord.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerStart.h"
#include "gameInfoInstance__pf533497531.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/GameFramework/GameMode.h"
#include "Runtime/Engine/Classes/GameFramework/GameState.h"
#include "Runtime/Engine/Classes/Engine/InputActionDelegateBinding.h"
#include "Runtime/HeadMountedDisplay/Public/HeadMountedDisplayFunctionLibrary.h"
#include "Runtime/HeadMountedDisplay/Public/HeadMountedDisplayTypes.h"
#include "FOWComponent__pf1242490746.h"
#include "Runtime/Engine/Classes/GameFramework/SpringArmComponent.h"
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "chatWIndow__pf1207061625.h"
#include "Runtime/UMG/Public/Blueprint/WidgetLayoutLibrary.h"
#include "Runtime/UMG/Public/Components/VerticalBoxSlot.h"
#include "Runtime/UMG/Public/Components/UniformGridSlot.h"
#include "Runtime/UMG/Public/Components/OverlaySlot.h"
#include "Runtime/UMG/Public/Components/HorizontalBoxSlot.h"
#include "Runtime/UMG/Public/Components/GridSlot.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/BorderSlot.h"
#include "playerSaveGame__pf533497531.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
AgameplayPC_C__pf1836565435::AgameplayPC_C__pf1836565435(const FObjectInitializer& ObjectInitializer) : Super()
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (AgameplayPC_C__pf1836565435::StaticClass() == GetClass()))
	{
		AgameplayPC_C__pf1836565435::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	auto __Local__0 = CastChecked<USceneComponent>(GetDefaultSubobjectByName(TEXT("TransformComponent0")));
	bpv__aoeFlipbook__pf = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("aoeFlipbook"));
	bpv__burstFlipbook__pf = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("burstFlipbook"));
	bpv__aoeFlipbook__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__aoeFlipbook__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__1 = (*(AccessPrivateProperty<UPaperFlipbook* >((bpv__aoeFlipbook__pf), UPaperFlipbookComponent::__PPO__SourceFlipbook() )));
	__Local__1 = CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(AgameplayPC_C__pf1836565435::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	if(!bpv__aoeFlipbook__pf->IsTemplate())
	{
		bpv__aoeFlipbook__pf->BodyInstance.FixupData(bpv__aoeFlipbook__pf);
	}
	bpv__burstFlipbook__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__burstFlipbook__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__2 = (*(AccessPrivateProperty<UPaperFlipbook* >((bpv__burstFlipbook__pf), UPaperFlipbookComponent::__PPO__SourceFlipbook() )));
	__Local__2 = CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(AgameplayPC_C__pf1836565435::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	if(!bpv__burstFlipbook__pf->IsTemplate())
	{
		bpv__burstFlipbook__pf->BodyInstance.FixupData(bpv__burstFlipbook__pf);
	}
	bpv__MinClickDIstance__pf = 100.000000f;
	bpv__gameplayChatWB__pf = nullptr;
	bpv__playerSettings__pf.bpv__myPlayerName_2_816FFE264C08408F09C26C8C7F8CDB1A__pf = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Default"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("FCCDCE27438B7835895E47AD475C835C") /* Key */
	);
	bpv__playerSettings__pf.bpv__myPlayerImage_5_E3B8ED5F4387C5691564BF96105E1E15__pf = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(AgameplayPC_C__pf1836565435::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	bpv__playerSettings__pf.bpv__myPlayerStatus_14_F1604291452782409E92779450FED1BE__pf = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Not Ready"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("0A30DD434ACD58561AD3B897574F0563") /* Key */
	);
	bpv__sendersText__pf = FText::GetEmpty();
	bpv__senderName__pf = FText::GetEmpty();
	bpv__requestingClient__pf = nullptr;
	bpv__castingPlayer__pf = nullptr;
	bpv__castTime__pf = 3.000000f;
	bpv__timeOfCast__pf = 0.000000f;
	bpv__spellReadyToSpawn__pf = false;
	bpv__currentSpellCast__pf = nullptr;
	InputYawScale = 2.500000f;
	InputPitchScale = -1.750000f;
	InputRollScale = 1.000000f;
	ForceFeedbackScale = 1.000000f;
	auto& __Local__3 = (*(AccessPrivateProperty<USceneComponent*>((this), AController::__PPO__TransformComponent() )));
	bOnlyRelevantToOwner = false;
	bAlwaysRelevant = true;
	bReplicateMovement = true;
	bReplicates = true;
}
void AgameplayPC_C__pf1836565435::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__aoeFlipbook__pf)
	{
		bpv__aoeFlipbook__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__burstFlipbook__pf)
	{
		bpv__burstFlipbook__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
void AgameplayPC_C__pf1836565435::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(AgameplayGM_C__pf1836565435::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(A0_base_C__pf1490413170::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UgameplayChat_C__pf1207061625::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AaoeSpell_C__pf2191428166::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UplayerSaveGame_C__pf533497531::StaticClass());
	// List of all referenced converted structures
	extern UScriptStruct* Z_Construct_UScriptStruct_FPlayerInfo__pf533497531();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FPlayerInfo__pf533497531());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__4 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"));
	InDynamicClass->ComponentTemplates.Add(__Local__4);
	auto __Local__5 = NewObject<UInputKeyDelegateBinding>(InDynamicClass, UInputKeyDelegateBinding::StaticClass(), TEXT("InputKeyDelegateBinding_1"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__5);
	__Local__5->InputKeyDelegateBindings = TArray<FBlueprintInputKeyDelegateBinding> ();
	__Local__5->InputKeyDelegateBindings.AddUninitialized(2);
	FBlueprintInputKeyDelegateBinding::StaticStruct()->InitializeStruct(__Local__5->InputKeyDelegateBindings.GetData(), 2);
	auto& __Local__6 = __Local__5->InputKeyDelegateBindings[0];
	__Local__6.InputChord.Key = FKey(TEXT("RightMouseButton"));
	__Local__6.FunctionNameToBind = FName(TEXT("InpActEvt_RightMouseButton_K2Node_InputKeyEvent_3"));
	auto& __Local__7 = __Local__5->InputKeyDelegateBindings[1];
	__Local__7.InputChord.Key = FKey(TEXT("Q"));
	__Local__7.InputKeyEvent = EInputEvent::IE_Released;
	__Local__7.FunctionNameToBind = FName(TEXT("InpActEvt_Q_K2Node_InputKeyEvent_2"));
}
void AgameplayPC_C__pf1836565435::bpf__ExecuteUbergraph_gameplayPC__pf_0(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_GetRealTimeSeconds_ReturnValue__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	int32 bpfv__CallFunc_GetFlipbookLengthInFrames_ReturnValue__pf{};
	int32 bpfv__CallFunc_GetPlaybackPositionInFrames_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 15:
			{
				if(IsValid(bpv__currentSpellCast__pf))
				{
					bpv__currentSpellCast__pf->K2_DestroyActor();
				}
				__CurrentState = -1;
				break;
			}
		case 56:
			{
				__CurrentState = 57;
				break;
			}
		case 57:
			{
				bpfv__CallFunc_GetRealTimeSeconds_ReturnValue__pf = UGameplayStatics::GetRealTimeSeconds(this);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_GetRealTimeSeconds_ReturnValue__pf, bpv__timeOfCast__pf);
				bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, bpv__castTime__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf, bpv__spellReadyToSpawn__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = 60;
					break;
				}
			}
		case 58:
			{
				bpf__spawnSpellSprite__pf();
			}
		case 59:
			{
				bpv__spellReadyToSpawn__pf = false;
			}
		case 60:
			{
				if(IsValid(bpv__currentSpellCast__pf) && IsValid(bpv__currentSpellCast__pf->bpv__PaperFlipbook__pf))
				{
					bpfv__CallFunc_GetFlipbookLengthInFrames_ReturnValue__pf = bpv__currentSpellCast__pf->bpv__PaperFlipbook__pf->UPaperFlipbookComponent::GetFlipbookLengthInFrames();
				}
				if(IsValid(bpv__currentSpellCast__pf) && IsValid(bpv__currentSpellCast__pf->bpv__PaperFlipbook__pf))
				{
					bpfv__CallFunc_GetPlaybackPositionInFrames_ReturnValue__pf = bpv__currentSpellCast__pf->bpv__PaperFlipbook__pf->UPaperFlipbookComponent::GetPlaybackPositionInFrames();
				}
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpfv__CallFunc_GetFlipbookLengthInFrames_ReturnValue__pf, 1);
				bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_IntInt(bpfv__CallFunc_GetPlaybackPositionInFrames_ReturnValue__pf, bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf);
				if (!bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
				__CurrentState = 15;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AgameplayPC_C__pf1836565435::bpf__ExecuteUbergraph_gameplayPC__pf_1(int32 bpp__EntryPoint__pf)
{
	APawn* bpfv__CallFunc_K2_GetPawn_ReturnValue2__pf{};
	check(bpp__EntryPoint__pf == 39);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_K2_GetPawn_ReturnValue2__pf = AController::K2_GetPawn();
	b0l__K2Node_DynamicCast_As0_Base2__pf = Cast<A0_base_C__pf1490413170>(bpfv__CallFunc_K2_GetPawn_ReturnValue2__pf);
	b0l__K2Node_DynamicCast_bSuccess5__pf = (b0l__K2Node_DynamicCast_As0_Base2__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess5__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	if(IsValid(b0l__K2Node_DynamicCast_As0_Base2__pf))
	{
		b0l__K2Node_DynamicCast_As0_Base2__pf->AActor::FlushNetDormancy();
	}
	if(IsValid(b0l__K2Node_DynamicCast_As0_Base2__pf))
	{
		b0l__K2Node_DynamicCast_As0_Base2__pf->bpv__qCast__pf = true;
	}
	bpv__spellReadyToSpawn__pf = true;
	bpf__sendToServer__pf();
	return; //KCST_EndOfThread
}
void AgameplayPC_C__pf1836565435::bpf__ExecuteUbergraph_gameplayPC__pf_2(int32 bpp__EntryPoint__pf)
{
	APawn* bpfv__CallFunc_K2_GetPawn_ReturnValue4__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf{};
	AaoeSpell_C__pf2191428166* bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 61);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_K2_GetPawn_ReturnValue4__pf = AController::K2_GetPawn();
	if(IsValid(bpfv__CallFunc_K2_GetPawn_ReturnValue4__pf))
	{
		bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = bpfv__CallFunc_K2_GetPawn_ReturnValue4__pf->AActor::K2_GetActorLocation();
	}
	bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf, FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
	bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, AaoeSpell_C__pf2191428166::StaticClass(), bpfv__CallFunc_MakeTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::Undefined, this);
	bpfv__CallFunc_K2_GetPawn_ReturnValue4__pf = AController::K2_GetPawn();
	if(IsValid(bpfv__CallFunc_K2_GetPawn_ReturnValue4__pf))
	{
		bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = bpfv__CallFunc_K2_GetPawn_ReturnValue4__pf->AActor::K2_GetActorLocation();
	}
	bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf, FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
	bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<AaoeSpell_C__pf2191428166>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, bpfv__CallFunc_MakeTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
	bpv__currentSpellCast__pf = bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf;
	return; //KCST_EndOfThread
}
void AgameplayPC_C__pf1836565435::bpf__ExecuteUbergraph_gameplayPC__pf_3(int32 bpp__EntryPoint__pf)
{
	UgameplayChat_C__pf1207061625* bpfv__CallFunc_Create_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 27);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_Create_ReturnValue__pf = CastChecked<UgameplayChat_C__pf1207061625>(UWidgetBlueprintLibrary::Create(this, UgameplayChat_C__pf1207061625::StaticClass(), ((APlayerController*)nullptr)), ECastCheckedType::NullAllowed);
	bpv__gameplayChatWB__pf = bpfv__CallFunc_Create_ReturnValue__pf;
	if(IsValid(bpv__gameplayChatWB__pf))
	{
		bpv__gameplayChatWB__pf->UUserWidget::AddToViewport(0);
	}
	return; //KCST_EndOfThread
}
void AgameplayPC_C__pf1836565435::bpf__ExecuteUbergraph_gameplayPC__pf_4(int32 bpp__EntryPoint__pf)
{
	APawn* bpfv__CallFunc_K2_GetPawn_ReturnValue3__pf{};
	float bpfv__CallFunc_GetRealTimeSeconds_ReturnValue2__pf{};
	check(bpp__EntryPoint__pf == 51);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_K2_GetPawn_ReturnValue3__pf = AController::K2_GetPawn();
	b0l__K2Node_DynamicCast_As0_Base3__pf = Cast<A0_base_C__pf1490413170>(bpfv__CallFunc_K2_GetPawn_ReturnValue3__pf);
	b0l__K2Node_DynamicCast_bSuccess6__pf = (b0l__K2Node_DynamicCast_As0_Base3__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess6__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	if(IsValid(b0l__K2Node_DynamicCast_As0_Base3__pf))
	{
		b0l__K2Node_DynamicCast_As0_Base3__pf->AActor::FlushNetDormancy();
	}
	if(IsValid(b0l__K2Node_DynamicCast_As0_Base3__pf))
	{
		b0l__K2Node_DynamicCast_As0_Base3__pf->bpv__qCast__pf = true;
	}
	bpfv__CallFunc_GetRealTimeSeconds_ReturnValue2__pf = UGameplayStatics::GetRealTimeSeconds(this);
	bpv__timeOfCast__pf = bpfv__CallFunc_GetRealTimeSeconds_ReturnValue2__pf;
	return; //KCST_EndOfThread
}
void AgameplayPC_C__pf1836565435::bpf__ExecuteUbergraph_gameplayPC__pf_5(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 21);
	// optimized KCST_UnconditionalGoto
	bpf__requestAbilityQ__pf();
	return; //KCST_EndOfThread
}
void AgameplayPC_C__pf1836565435::bpf__ExecuteUbergraph_gameplayPC__pf_6(int32 bpp__EntryPoint__pf)
{
	APawn* bpfv__CallFunc_K2_GetPawn_ReturnValue__pf{};
	bool bpfv__CallFunc_GetHitResultUnderCursorByChannel_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 23);
	// optimized KCST_UnconditionalGoto
	if (!true)
	{
		return; //KCST_EndOfThreadIfNot
	}
	bpfv__CallFunc_K2_GetPawn_ReturnValue__pf = AController::K2_GetPawn();
	b0l__K2Node_DynamicCast_As0_Base__pf = Cast<A0_base_C__pf1490413170>(bpfv__CallFunc_K2_GetPawn_ReturnValue__pf);
	b0l__K2Node_DynamicCast_bSuccess4__pf = (b0l__K2Node_DynamicCast_As0_Base__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess4__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	bpfv__CallFunc_GetHitResultUnderCursorByChannel_ReturnValue__pf = APlayerController::GetHitResultUnderCursorByChannel(ETraceTypeQuery::TraceTypeQuery1, true, /*out*/ b0l__CallFunc_GetHitResultUnderCursorByChannel_HitResult__pf);
	UGameplayStatics::BreakHitResult(b0l__CallFunc_GetHitResultUnderCursorByChannel_HitResult__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time__pf, /*out*/ b0l__CallFunc_BreakHitResult_Distance__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd__pf);
	if(IsValid(b0l__K2Node_DynamicCast_As0_Base__pf))
	{
		b0l__K2Node_DynamicCast_As0_Base__pf->bpv__targetLocation__pf = b0l__CallFunc_BreakHitResult_Location__pf;
	}
	return; //KCST_EndOfThread
}
void AgameplayPC_C__pf1836565435::bpf__ExecuteUbergraph_gameplayPC__pf_7(int32 bpp__EntryPoint__pf)
{
	AGameModeBase* bpfv__CallFunc_GetGameMode_ReturnValue2__pf{};
	check(bpp__EntryPoint__pf == 49);
	// optimized KCST_UnconditionalGoto
	AActor::FlushNetDormancy();
	bpv__playerSettings__pf = b0l__K2Node_CustomEvent_playerSettingsInfo__pf;
	bpfv__CallFunc_GetGameMode_ReturnValue2__pf = UGameplayStatics::GetGameMode(this);
	b0l__K2Node_DynamicCast_AsGameplay_GM2__pf = Cast<AgameplayGM_C__pf1836565435>(bpfv__CallFunc_GetGameMode_ReturnValue2__pf);
	b0l__K2Node_DynamicCast_bSuccess2__pf = (b0l__K2Node_DynamicCast_AsGameplay_GM2__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess2__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	if(IsValid(b0l__K2Node_DynamicCast_AsGameplay_GM2__pf))
	{
		b0l__K2Node_DynamicCast_AsGameplay_GM2__pf->bpf__respawnPlayer__pf(this, bpv__playerSettings__pf.bpv__myPlayerCharacter_8_09E183C542505D365AD557BA76D256B2__pf);
	}
	bpf__setupChatWIndow__pf();
	return; //KCST_EndOfThread
}
void AgameplayPC_C__pf1836565435::bpf__ExecuteUbergraph_gameplayPC__pf_8(int32 bpp__EntryPoint__pf)
{
	AGameModeBase* bpfv__CallFunc_GetGameMode_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

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
				bpv__sendersText__pf = b0l__K2Node_CustomEvent_textToSend__pf;
			}
		case 3:
			{
				AActor::FlushNetDormancy();
			}
		case 4:
			{
				bpv__senderName__pf = bpv__playerSettings__pf.bpv__myPlayerName_2_816FFE264C08408F09C26C8C7F8CDB1A__pf;
			}
		case 5:
			{
				bpfv__CallFunc_GetGameMode_ReturnValue__pf = UGameplayStatics::GetGameMode(this);
				b0l__K2Node_DynamicCast_AsGameplay_GM__pf = Cast<AgameplayGM_C__pf1836565435>(bpfv__CallFunc_GetGameMode_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsGameplay_GM__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 6:
			{
				b0l__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 7:
			{
				b0l__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 8:
			{
				TArray<APlayerController*>  __Local__8 = TArray<APlayerController*> {};
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(((IsValid(b0l__K2Node_DynamicCast_AsGameplay_GM__pf)) ? (b0l__K2Node_DynamicCast_AsGameplay_GM__pf->bpv__allPlayerControllers__pf) : (__Local__8)));
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 9:
			{
				b0l__Temp_int_Array_Index_Variable__pf = b0l__Temp_int_Loop_Counter_Variable__pf;
			}
		case 10:
			{
				__StateStack.Push(13);
			}
		case 11:
			{
				TArray<APlayerController*>  __Local__9 = TArray<APlayerController*> {};
				FCustomThunkTemplates::Array_Get(((IsValid(b0l__K2Node_DynamicCast_AsGameplay_GM__pf)) ? (b0l__K2Node_DynamicCast_AsGameplay_GM__pf->bpv__allPlayerControllers__pf) : (__Local__9)), b0l__Temp_int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				b0l__K2Node_DynamicCast_AsGameplay_PC__pf = Cast<AgameplayPC_C__pf1836565435>(b0l__CallFunc_Array_Get_Item__pf);
				b0l__K2Node_DynamicCast_bSuccess3__pf = (b0l__K2Node_DynamicCast_AsGameplay_PC__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess3__pf)
				{
					__CurrentState = 14;
					break;
				}
			}
		case 12:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsGameplay_PC__pf))
				{
					b0l__K2Node_DynamicCast_AsGameplay_PC__pf->bpf__updateChat__pf(bpv__senderName__pf, bpv__sendersText__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 13:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 8;
				break;
			}
		case 14:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Hello")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 31:
			{
				__CurrentState = 1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void AgameplayPC_C__pf1836565435::bpf__ExecuteUbergraph_gameplayPC__pf_9(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsLocalController_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 50);
	// optimized KCST_UnconditionalGoto
	bShowMouseCursor = true;
	bpfv__CallFunc_IsLocalController_ReturnValue__pf = IsLocalController();
	if (!bpfv__CallFunc_IsLocalController_ReturnValue__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	UWidgetLayoutLibrary::RemoveAllWidgets(this);
	bpf__loadGame__pf();
	bpf__passCharInfoToServer__pf(bpv__playerSettings__pf);
	return; //KCST_EndOfThread
}
void AgameplayPC_C__pf1836565435::bpf__ExecuteUbergraph_gameplayPC__pf_10(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 46);
	// optimized KCST_UnconditionalGoto
	bpf__castAbilityW__pf();
	return; //KCST_EndOfThread
}
void AgameplayPC_C__pf1836565435::bpf__ExecuteUbergraph_gameplayPC__pf_11(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 48);
	return; //KCST_EndOfThread
}
void AgameplayPC_C__pf1836565435::bpf__ExecuteUbergraph_gameplayPC__pf_12(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 45);
	return; //KCST_EndOfThread
}
void AgameplayPC_C__pf1836565435::bpf__ExecuteUbergraph_gameplayPC__pf_13(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 32);
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__gameplayChatWB__pf) && IsValid(bpv__gameplayChatWB__pf->bpv__gameplayChat__pf))
	{
		bpv__gameplayChatWB__pf->bpv__gameplayChat__pf->bpf__updateChatWindow__pf(b0l__K2Node_CustomEvent_senderName__pf, b0l__K2Node_CustomEvent_senderText__pf);
	}
	return; //KCST_EndOfThread
}
void AgameplayPC_C__pf1836565435::bpf__spawnSpellSprite__pf_Implementation()
{
	bpf__ExecuteUbergraph_gameplayPC__pf_2(61);
}
void AgameplayPC_C__pf1836565435::bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
{
	b0l__K2Node_Event_DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	bpf__ExecuteUbergraph_gameplayPC__pf_0(56);
}
void AgameplayPC_C__pf1836565435::bpf__sendToServer__pf_Implementation()
{
	bpf__ExecuteUbergraph_gameplayPC__pf_4(51);
}
void AgameplayPC_C__pf1836565435::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_gameplayPC__pf_9(50);
}
void AgameplayPC_C__pf1836565435::bpf__passCharInfoToServer__pf_Implementation(FPlayerInfo__pf533497531 bpp__playerSettingsInfo__pf)
{
	b0l__K2Node_CustomEvent_playerSettingsInfo__pf = bpp__playerSettingsInfo__pf;
	bpf__ExecuteUbergraph_gameplayPC__pf_7(49);
}
void AgameplayPC_C__pf1836565435::bpf__castAbilityW__pf()
{
	bpf__ExecuteUbergraph_gameplayPC__pf_11(48);
}
void AgameplayPC_C__pf1836565435::bpf__requestAbilityW__pf()
{
	bpf__ExecuteUbergraph_gameplayPC__pf_10(46);
}
void AgameplayPC_C__pf1836565435::bpf__castAbilityQ__pf_Implementation()
{
	bpf__ExecuteUbergraph_gameplayPC__pf_12(45);
}
void AgameplayPC_C__pf1836565435::bpf__requestAbilityQ__pf()
{
	bpf__ExecuteUbergraph_gameplayPC__pf_1(39);
}
void AgameplayPC_C__pf1836565435::bpf__updateChat__pf_Implementation(const FText& bpp__senderName__pf__const, const FText& bpp__senderText__pf__const)
{
	typedef FText  T__Local__10;
	T__Local__10& bpp__senderName__pf = *const_cast<T__Local__10 *>(&bpp__senderName__pf__const);
	typedef FText  T__Local__11;
	T__Local__11& bpp__senderText__pf = *const_cast<T__Local__11 *>(&bpp__senderText__pf__const);
	b0l__K2Node_CustomEvent_senderName__pf = bpp__senderName__pf;
	b0l__K2Node_CustomEvent_senderText__pf = bpp__senderText__pf;
	bpf__ExecuteUbergraph_gameplayPC__pf_13(32);
}
void AgameplayPC_C__pf1836565435::bpf__getchatmessage__pf(const FText& bpp__textToSend__pf__const)
{
	typedef FText  T__Local__12;
	T__Local__12& bpp__textToSend__pf = *const_cast<T__Local__12 *>(&bpp__textToSend__pf__const);
	b0l__K2Node_CustomEvent_textToSend__pf = bpp__textToSend__pf;
	bpf__ExecuteUbergraph_gameplayPC__pf_8(31);
}
void AgameplayPC_C__pf1836565435::bpf__setupChatWIndow__pf_Implementation()
{
	bpf__ExecuteUbergraph_gameplayPC__pf_3(27);
}
void AgameplayPC_C__pf1836565435::bpf__InpActEvt_Q_K2Node_InputKeyEvent_2__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_gameplayPC__pf_5(21);
}
void AgameplayPC_C__pf1836565435::bpf__InpActEvt_RightMouseButton_K2Node_InputKeyEvent_3__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key2__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_gameplayPC__pf_6(23);
}
void AgameplayPC_C__pf1836565435::bpf__UserConstructionScript__pf()
{
}
void AgameplayPC_C__pf1836565435::bpf__MoveToHitLocation__pf(FHitResult bpp__HIt__pf)
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
				UGameplayStatics::BreakHitResult(bpp__HIt__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Time__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Distance__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Normal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitItem__pf, /*out*/ bpfv__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceEnd__pf);
				if(IsValid(bpfv__CallFunc_K2_GetPawn_ReturnValue__pf))
				{
					bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = bpfv__CallFunc_K2_GetPawn_ReturnValue__pf->AActor::K2_GetActorLocation();
				}
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf, bpfv__CallFunc_BreakHitResult_Location__pf);
				bpfv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf);
				bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(bpfv__CallFunc_VSize_ReturnValue__pf, bpv__MinClickDIstance__pf);
				if (!bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				UGameplayStatics::BreakHitResult(bpp__HIt__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Time__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Distance__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Normal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitItem__pf, /*out*/ bpfv__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceEnd__pf);
				UNavigationSystem::SimpleMoveToLocation(this, bpfv__CallFunc_BreakHitResult_Location__pf);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AgameplayPC_C__pf1836565435::bpf__loadGame__pf()
{
	FString bpfv__playerSettingsSave__pf{};
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
				bpfv__playerSettingsSave__pf = FString(TEXT("playerSettingsSave"));
			}
		case 2:
			{
				bpfv__CallFunc_LoadGameFromSlot_ReturnValue__pf = UGameplayStatics::LoadGameFromSlot(bpfv__playerSettingsSave__pf, 0);
			}
		case 3:
			{
				bpfv__K2Node_DynamicCast_AsPlayer_Save_Game__pf = Cast<UplayerSaveGame_C__pf533497531>(bpfv__CallFunc_LoadGameFromSlot_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsPlayer_Save_Game__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 4:
			{
				AActor::FlushNetDormancy();
			}
		case 5:
			{
				auto __Local__14 = FPlayerInfo__pf533497531::GetDefaultValue();
				FPlayerInfo__pf533497531  __Local__13 = __Local__14;
				bpv__playerSettings__pf = ((IsValid(bpfv__K2Node_DynamicCast_AsPlayer_Save_Game__pf)) ? (bpfv__K2Node_DynamicCast_AsPlayer_Save_Game__pf->bpv__S_PlayerINfo__pf) : (__Local__13));
			}
		case 6:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("loaded game for arena")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AgameplayPC_C__pf1836565435::bpf__NewFunction_0__pf()
{
}
void AgameplayPC_C__pf1836565435::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{132, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperFlipbook /Game/InfinityBladeWarriors/animations/sprites/aoe.aoe 
		{133, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperFlipbook /Game/InfinityBladeWarriors/animations/sprites/burst.burst 
		{69, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/InfinityBladeWarriors/Character/CompleteCharacters/Textures_Materials/CharM_Cardboard/Char_M_Cardboard_D.Char_M_Cardboard_D 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
void AgameplayPC_C__pf1836565435::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{134, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Paper2D.PaperFlipbookComponent 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SceneComponent 
		{10, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{11, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{95, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameModeBase 
		{35, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{53, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PhysicalMaterial 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{79, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Controller 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{135, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetLayoutLibrary 
		{80, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SaveGame 
		{57, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.NavigationSystem 
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.CrowdManager 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CheatManager 
		{136, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/gameplay/gameplayGM.gameplayGM_C 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/characters/0_base.0_base_C 
		{137, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/UI/allLevels/gameplayChat.gameplayChat_C 
		{138, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/InfinityBladeWarriors/animations/sprites/aoeSpell.aoeSpell_C 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/allLevels/playerSaveGame.playerSaveGame_C 
		{88, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedStruct /Game/Blueprints/allLevels/PlayerInfo.PlayerInfo 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
struct FRegisterHelper__AgameplayPC_C__pf1836565435
{
	FRegisterHelper__AgameplayPC_C__pf1836565435()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Blueprints/gameplay/gameplayPC"), &AgameplayPC_C__pf1836565435::__StaticDependenciesAssets);
	}
	static FRegisterHelper__AgameplayPC_C__pf1836565435 Instance;
};
FRegisterHelper__AgameplayPC_C__pf1836565435 FRegisterHelper__AgameplayPC_C__pf1836565435::Instance;
void AgameplayPC_C__pf1836565435::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME_DIFFNAMES(AgameplayPC_C__pf1836565435, bpv__playerSettings__pf, FName(TEXT("playerSettings")));
	DOREPLIFETIME_DIFFNAMES(AgameplayPC_C__pf1836565435, bpv__sendersText__pf, FName(TEXT("sendersText")));
	DOREPLIFETIME_DIFFNAMES(AgameplayPC_C__pf1836565435, bpv__senderName__pf, FName(TEXT("senderName")));
	DOREPLIFETIME_DIFFNAMES(AgameplayPC_C__pf1836565435, bpv__castingPlayer__pf, FName(TEXT("castingPlayer")));
}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
