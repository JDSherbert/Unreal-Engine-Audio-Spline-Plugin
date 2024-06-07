// ©2024 JDSherbert. All rights reserved.

#pragma once

#include <CoreMinimal.h>

#include <Modules/ModuleManager.h>

/* ------------------------------------------------------------ */

class FAudioSplinePluginModule : public IModuleInterface
{

public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	
};

/* ------------------------------------------------------------ */
