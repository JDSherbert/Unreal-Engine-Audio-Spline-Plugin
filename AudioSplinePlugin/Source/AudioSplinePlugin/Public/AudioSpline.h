// ©2024 JDSherbert. All rights reserved.

#pragma once

#include <Runtime/Core/Public/CoreMinimal.h>

#include <Runtime/Engine/Classes/Components/AudioComponent.h>
#include <Runtime/Engine/Classes/Components/SplineComponent.h>
#include <Runtime/Engine/Classes/GameFramework/Actor.h>

#include "AudioSpline.generated.h"

/* ------------------------------------------------------------ */

class AActor;
class UAudioComponent;
class USplineComponent;

/* ------------------------------------------------------------ */

/**
 * AudioSpline Class
 * This class allows an AudioComponent child to follow a spline and update its position accordingly.
 * Assign a Sound to the AudioComponent and populate the Target parameter with the entity to follow at runtime.
 * 
 * @since Unreal Engine 5.2
 * @author JDSherbert
 */
UCLASS(Blueprintable, ClassGroup=SherbertAudio)
class AUDIOSPLINEPLUGIN_API AAudioSpline : public AActor
{
	GENERATED_BODY()

public:

	AAudioSpline();

protected:

	/** The spline component that defines the path. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AudioSpline")
	USplineComponent* SplineComponent;

	/** The target to follow along the spline. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AudioSpline")
	AActor* Target;

	/** AudioComponent that will be moving along the spline. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "AudioSpline")
	UAudioComponent* AudioComponent ;

private:

	/**
	* Updates the AudioComponent's location along the spline based on the target's position.
	* 
	* @since Unreal Engine 5.2
	* @author JDSherbert
	*/
	void UpdateSpline() const;

	/**
	* Called every frame.
	* Updates the AudioComponent's Location along the spline.
	* 
	* @param DeltaTime				: The time since the last frame.
	* @since Unreal Engine 5.2
	* @author JDSherbert
	*/
	virtual void Tick(float DeltaTime) override;
	
};

/* ------------------------------------------------------------ */
