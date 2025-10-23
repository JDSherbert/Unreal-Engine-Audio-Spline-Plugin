// ©2024 JDSherbert. All rights reserved.

#include "AudioSpline.h"

/* ------------------------------------------------------------ */

AAudioSpline::AAudioSpline()
	: SplineComponent(CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent")))
	, AudioComponent(CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent")))
{
	RootComponent = SplineComponent;
	AudioComponent->SetupAttachment(RootComponent);
	PrimaryActorTick.bCanEverTick = true;
}

/* ------------------------------------------------------------ */

void AAudioSpline::UpdateSpline() const
{
    if (SplineComponent != nullptr && Target != nullptr)
    {
		const float InputKey = SplineComponent->FindInputKeyClosestToWorldLocation(Target->GetActorLocation());
		const FVector SplineLocation = SplineComponent->GetLocationAtSplineInputKey(InputKey, ESplineCoordinateSpace::World);
		AudioComponent->SetWorldLocation(SplineLocation);
	}
}

/* ------------------------------------------------------------ */

void AAudioSpline::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UpdateSpline();
}

/* ------------------------------------------------------------ */
