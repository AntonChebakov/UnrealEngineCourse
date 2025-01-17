// Copyright Epic Games, Inc. All Rights Reserved.

#include "CoreMinimal.h"
#include "Engine/World.h"
#include "Engine/Engine.h"
#include "Misc/AutomationTest.h"
#include "../TestActor.h" // add test class for testing

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FTestActorLocation, "OtusThirdPerson.Test.TestActorLocation", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FTestActorLocation::RunTest(const FString& Parameters)
{
    UWorld* World = GEditor->GetEditorWorldContext().World();

    if (!World)
    {
        AddError(TEXT("World is null."));
        return false;
    }

    ATestActor* TestActor = World->SpawnActor<ATestActor>();
    if (!TestActor)
    {
        AddError(TEXT("Failed to spawn TestActor."));
        return false;
    }

    AActor* AnotherActor = World->SpawnActor<AActor>();
    if (AnotherActor)
    {
        AddError(TEXT("Failed to spawn another AActor."));
        return false;
    }

    TestActor->SelectedActor = AnotherActor;
    if (TestActor->GetSelectedActorLocation() != AnotherActor->GetActorLocation())
    {
        AddError(TEXT("GetSelectedActorLocation() returned incorrect location."));
        return false;
    }

    TestActor->Destroy();
    AnotherActor->Destroy();

    return true;
}


 