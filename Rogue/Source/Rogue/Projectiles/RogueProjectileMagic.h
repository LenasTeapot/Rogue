#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RogueProjectileMagic.generated.h"

class USphereComponent;
class UProjectileMovementComponent;
class UNiagaraComponent;

UCLASS()
class ROGUE_API ARogueProjectileMagic : public AActor
{
	GENERATED_BODY()
	

protected:

	UPROPERTY(EditDefaultsOnly, Category = "Components")
	TObjectPtr<USphereComponent> SphereComponent;

	UPROPERTY(EditDefaultsOnly, Category = "Components")
	TObjectPtr<UNiagaraComponent> LoopedNiagaraComponent;

	UPROPERTY(EditDefaultsOnly, Category = "Components")
	TObjectPtr<UProjectileMovementComponent> ProjectileMovementComponent;

public:

	ARogueProjectileMagic();

};
