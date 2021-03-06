// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "NavLadderActor.generated.h"

class UNavLadderComponent;

UCLASS()
class NAVGRID_API ANavLadderActor : public AActor
{
	GENERATED_BODY()

public:
	ANavLadderActor(const FObjectInitializer &ObjectInitializer);

	UPROPERTY(BlueprintReadOnly, EditAnyWhere, Category = "Components") USceneComponent *SceneComponent;
	UPROPERTY(BlueprintReadOnly, EditAnyWhere, Category = "Components") UNavLadderComponent *NavLadderComponent;
	UPROPERTY(BlueprintReadOnly, EditAnyWhere, Category = "Components") UStaticMeshComponent *Mesh;
};