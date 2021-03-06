#include "..\STDInclude.h"

int Global::Main::PreInit()
{
	// Check environment
	if (!Global::Game::IsValidGame())
	{
		MessageBox(0, "Invalid game environment!", PROJECTLONG, MB_ICONERROR);
		return FALSE;
	}

	/*char* result = Global::Dependency::Loaded();

	if (result)
	{
		MessageBox(0, va("Dependency '%s' not loaded!", result), PROJECTLONG, MB_ICONERROR);
		return FALSE;
	}*/

	// Assign values according to the current gameversion
	Addresses::Assign();

	// Main initialization
	Patches::Apply();

	return TRUE;
}

int Global::Main::PostInit()
{
	return TRUE;
}

int Global::Main::ParseMessage(const char* message)
{
	return TRUE;
}