
#pragma once

#include "CoreMinimal.h"
#include "CreatureStats.generated.h"

USTRUCT(BlueprintType)
struct FCreatureStats
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
    int32 Attack = 1;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
    int32 Health = 3;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
    int32 MaxHealth = 3;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities")
    bool bHasTaunt = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities")
    bool bHasStealth = false;
};
