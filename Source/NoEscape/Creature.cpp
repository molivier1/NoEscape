
#include "Creature.h"
#include "Components/StaticMeshComponent.h"

ACreature::ACreature()
{
    PrimaryActorTick.bCanEverTick = false;

    CreatureMesh = CreateDefaultSubobject<UStaticMeshComponent>(
        TEXT("CreatureMesh")
    );

    RootComponent = CreatureMesh;
}
