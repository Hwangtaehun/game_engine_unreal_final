// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "EnemyFSM.h"
#include "EnemyAnim.generated.h"

/**
 * 
 */
UCLASS()
class FINALPROJECT_API UEnemyAnim : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = FSM)
	EEnemyState animState;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = FSM)
	bool bAttackPlay = false;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = FSM)
	bool bDieDone = false;

	UFUNCTION(BlueprintCallable, Category = FSMEvent)
	void OnEndAttackAnimation();
	UFUNCTION(BlueprintImplementableEvent, Category = FSMEvent)
	void PlayDamageAnim(FName sectionName);
};
