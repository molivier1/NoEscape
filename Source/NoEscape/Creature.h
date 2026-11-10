
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CreatureStats.h"
#include "Creature.generated.h"

UCLASS()
class NOESCAPE_API ACreature : public AActor
{
    GENERATED_BODY()

public:
    ACreature();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Creature")
    FCreatureStats Stats;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Creature")
    TObjectPtr<UStaticMeshComponent> CreatureMesh;
};
