/*
  FreeWeapons for GTA III/VC/SA

  Plugins by Huga.
*/

#include "plugin.h"

#ifdef GTA3
#include "common.h"
#include "CTimer.h"
#endif GTA3

#ifdef GTAVC
#include "common.h"
#include "CStreaming.h"
#include "CTimer.h"
#include "eWeaponModel.h"
#endif GTAVC

#ifdef GTASA
#include "common.h"
#include "CStreaming.h"
#include "CTimer.h"
#endif GTASA

using namespace plugin;

#ifdef GTA3
class FreeWeapons_III
{
public:
	FreeWeapons_III()
	{
		static int keyPressTime = 0;
		Events::gameProcessEvent += []
		{
			CPed* claude = FindPlayerPed();
			if (claude && KeyPressed(VK_F8) && CTimer::m_snTimeInMilliseconds - keyPressTime > 175)
			{
				keyPressTime = CTimer::m_snTimeInMilliseconds;
				claude->GiveWeapon(WEAPONTYPE_AK47, 1000);
				claude->GiveWeapon(WEAPONTYPE_COLT45, 1000);
				claude->GiveWeapon(WEAPONTYPE_UZI, 1000);
				claude->GiveWeapon(WEAPONTYPE_SHOTGUN, 1000);
				claude->GiveWeapon(WEAPONTYPE_M16, 1000);
				claude->GiveWeapon(WEAPONTYPE_SNIPERRIFLE, 1000);
				claude->GiveWeapon(WEAPONTYPE_ROCKETLAUNCHER, 1000);
				claude->GiveWeapon(WEAPONTYPE_MOLOTOV, 1000);
				claude->GiveWeapon(WEAPONTYPE_GRENADE, 1000);
				claude->GiveWeapon(WEAPONTYPE_FLAMETHROWER, 1000);
			}
		};

	}
} FreeWeapons_III;
#endif GTA3

#ifdef GTAVC
class FreeWeapons_VC
{
public:
	FreeWeapons_VC()
	{
		static int keyPressTime = 0;
		Events::gameProcessEvent += []
		{
			CPed* tommy = FindPlayerPed();

			if (tommy && KeyPressed(VK_F8) && CTimer::m_snTimeInMilliseconds - keyPressTime > 175)
			{

				keyPressTime = CTimer::m_snTimeInMilliseconds;
				CStreaming::RequestModel(MODEL_PYTHON, 2);
				CStreaming::RequestModel(MODEL_LASER, 2);
				CStreaming::RequestModel(MODEL_BUDDYSHOT, 2);
				CStreaming::RequestModel(MODEL_INGRAMSL, 2);
				CStreaming::RequestModel(MODEL_GRENADE, 2);
				CStreaming::RequestModel(MODEL_BOMB, 2);
				CStreaming::RequestModel(MODEL_M4, 2);
				CStreaming::RequestModel(MODEL_ROCKETLA, 2);
				CStreaming::LoadAllRequestedModels(false);
				tommy->GiveWeapon(WEAPONTYPE_DETONATOR_GRENADE, 1000, true);
				tommy->GiveWeapon(WEAPONTYPE_PYTHON, 1000, true);
				tommy->GiveWeapon(WEAPONTYPE_STUBBY_SHOTGUN, 1000, true);
				tommy->GiveWeapon(WEAPONTYPE_SILENCED_INGRAM, 1000, true);
				tommy->GiveWeapon(WEAPONTYPE_M4, 1000, true);
				tommy->GiveWeapon(WEAPONTYPE_LASERSCOPE, 1000, true);
				tommy->GiveWeapon(WEAPONTYPE_ROCKETLAUNCHER, 1000, true);
				tommy->SetCurrentWeapon(WEAPONTYPE_DETONATOR_GRENADE);
				tommy->SetCurrentWeapon(WEAPONTYPE_PYTHON);
				tommy->SetCurrentWeapon(WEAPONTYPE_STUBBY_SHOTGUN);
				tommy->SetCurrentWeapon(WEAPONTYPE_SILENCED_INGRAM);
				tommy->SetCurrentWeapon(WEAPONTYPE_M4);
				tommy->SetCurrentWeapon(WEAPONTYPE_LASERSCOPE);
				tommy->SetCurrentWeapon(WEAPONTYPE_ROCKETLAUNCHER);
				CStreaming::SetModelIsDeletable(MODEL_PYTHON);
				CStreaming::SetModelIsDeletable(MODEL_LASER);
				CStreaming::SetModelIsDeletable(MODEL_BUDDYSHOT);
				CStreaming::SetModelIsDeletable(MODEL_INGRAMSL);
				CStreaming::SetModelIsDeletable(MODEL_GRENADE);
				CStreaming::SetModelIsDeletable(MODEL_BOMB);
				CStreaming::SetModelIsDeletable(MODEL_M4);
				CStreaming::SetModelIsDeletable(MODEL_ROCKETLA);
			} // slot 1 
			if (tommy && KeyPressed(VK_F7) && CTimer::m_snTimeInMilliseconds - keyPressTime > 175)
			{
				keyPressTime = CTimer::m_snTimeInMilliseconds;
				CStreaming::RequestModel(MODEL_COLT45, 2);
				CStreaming::RequestModel(MODEL_UZI, 2);
				CStreaming::RequestModel(MODEL_RUGER, 2);
				CStreaming::RequestModel(MODEL_SNIPER, 2);
				CStreaming::LoadAllRequestedModels(false);
				tommy->GiveWeapon(WEAPONTYPE_PISTOL, 1000, true);
				tommy->GiveWeapon(WEAPONTYPE_UZI, 1000, true);
				tommy->GiveWeapon(WEAPONTYPE_RUGER, 1000, true);
				tommy->GiveWeapon(WEAPONTYPE_SNIPERRIFLE, 1000, true);
				tommy->SetCurrentWeapon(WEAPONTYPE_PISTOL);
				tommy->SetCurrentWeapon(WEAPONTYPE_UZI);
				tommy->SetCurrentWeapon(WEAPONTYPE_RUGER);
				tommy->SetCurrentWeapon(WEAPONTYPE_SNIPERRIFLE);
				CStreaming::SetModelIsDeletable(MODEL_COLT45);
				CStreaming::SetModelIsDeletable(MODEL_UZI);
				CStreaming::SetModelIsDeletable(MODEL_RUGER);
				CStreaming::SetModelIsDeletable(MODEL_SNIPER);
			} // slot 2 
		};
	}
} FreeWeapons_VC;
#endif GTAVC

#ifdef GTASA
class FreeWeapons_SA 
{
public:
    FreeWeapons_SA() 
	{
		static int keyPressTime = 0;
		Events::gameProcessEvent += []
		{
			CPed* carl = FindPlayerPed();
			if (carl && KeyPressed(VK_F8) && CTimer::m_snTimeInMilliseconds - keyPressTime > 175)
			{
				keyPressTime = CTimer::m_snTimeInMilliseconds;
				CStreaming::RequestModel(MODEL_AK47, 2);
				CStreaming::RequestModel(MODEL_ROCKETLA, 2);
				CStreaming::RequestModel(MODEL_MICRO_UZI, 2);
				CStreaming::RequestModel(MODEL_COLT45, 2);
				CStreaming::RequestModel(MODEL_CHROMEGUN, 2);
				CStreaming::RequestModel(MODEL_CUNTGUN, 2);
				CStreaming::RequestModel(MODEL_SATCHEL, 2);
				CStreaming::RequestModel(MODEL_BOMB, 2);
				CStreaming::RequestModel(MODEL_NVGOGGLES, 2);
				CStreaming::LoadAllRequestedModels(false);
				carl->GiveWeapon(WEAPON_AK47, 1000, true);
				carl->GiveWeapon(WEAPON_MICRO_UZI, 1000, true);
				carl->GiveWeapon(WEAPON_PISTOL, 1000, true);
				carl->GiveWeapon(WEAPON_SHOTGUN, 1000, true);
				carl->GiveWeapon(WEAPON_RLAUNCHER, 1000, true);
				carl->GiveWeapon(WEAPON_COUNTRYRIFLE, 1000, true);
				carl->GiveWeapon(WEAPON_SATCHEL_CHARGE, 1000, true);
				carl->GiveWeapon(WEAPON_DETONATOR, 0, true);
				carl->GiveWeapon(WEAPON_NIGHTVISION, 1, true);
				carl->SetCurrentWeapon(WEAPON_AK47);
				carl->SetCurrentWeapon(WEAPON_PISTOL);
				carl->SetCurrentWeapon(WEAPON_MICRO_UZI);
				carl->SetCurrentWeapon(WEAPON_SHOTGUN);
				carl->SetCurrentWeapon(WEAPON_RLAUNCHER);
				carl->SetCurrentWeapon(WEAPON_COUNTRYRIFLE);
				carl->SetCurrentWeapon(WEAPON_SATCHEL_CHARGE);
				carl->SetCurrentWeapon(WEAPON_DETONATOR);
				carl->SetCurrentWeapon(WEAPON_NIGHTVISION);
				CStreaming::SetModelIsDeletable(MODEL_AK47);
				CStreaming::SetModelIsDeletable(MODEL_ROCKETLA);
				CStreaming::SetModelIsDeletable(MODEL_COLT45);
				CStreaming::SetModelIsDeletable(MODEL_MICRO_UZI);
				CStreaming::SetModelIsDeletable(MODEL_CHROMEGUN);
				CStreaming::SetModelIsDeletable(MODEL_CUNTGUN);
				CStreaming::SetModelIsDeletable(MODEL_SATCHEL);
				CStreaming::SetModelIsDeletable(MODEL_BOMB);
				CStreaming::SetModelIsDeletable(MODEL_NVGOGGLES);
			} // slot 1 
			if (carl && KeyPressed(VK_F7) && CTimer::m_snTimeInMilliseconds - keyPressTime > 175)
			{
				keyPressTime = CTimer::m_snTimeInMilliseconds;
				CStreaming::RequestModel(MODEL_M4, 2);
				CStreaming::RequestModel(MODEL_SILENCED, 2);
				CStreaming::RequestModel(MODEL_SNIPER, 2);
				CStreaming::RequestModel(MODEL_SHOTGSPA, 2);
				CStreaming::RequestModel(MODEL_HEATSEEK, 2);
				CStreaming::RequestModel(MODEL_MP5LNG, 2);
				CStreaming::RequestModel(MODEL_GRENADE, 2);
				CStreaming::RequestModel(MODEL_IRGOGGLES, 2);
				CStreaming::RequestModel(MODEL_SPRAYCAN, 2);
				CStreaming::LoadAllRequestedModels(false);
				carl->GiveWeapon(WEAPON_M4, 1000, true);
				carl->GiveWeapon(WEAPON_PISTOL_SILENCED, 1000, true);
				carl->GiveWeapon(WEAPON_SNIPERRIFLE, 1000, true);
				carl->GiveWeapon(WEAPON_SPAS12, 1000, true);
				carl->GiveWeapon(WEAPON_RLAUNCHER_HS, 1000, true);
				carl->GiveWeapon(WEAPON_MP5, 1000, true);
				carl->GiveWeapon(WEAPON_GRENADE, 1000, true);
				carl->GiveWeapon(WEAPON_INFRARED, 1, true);
				carl->GiveWeapon(WEAPON_SPRAYCAN, 1000, true);
				carl->SetCurrentWeapon(WEAPON_M4);
				carl->SetCurrentWeapon(WEAPON_PISTOL_SILENCED);
				carl->SetCurrentWeapon(WEAPON_SNIPERRIFLE);
				carl->SetCurrentWeapon(WEAPON_SPAS12);
				carl->SetCurrentWeapon(WEAPON_RLAUNCHER_HS);
				carl->SetCurrentWeapon(WEAPON_MP5);
				carl->SetCurrentWeapon(WEAPON_GRENADE);
				carl->SetCurrentWeapon(WEAPON_INFRARED);
				carl->SetCurrentWeapon(WEAPON_SPRAYCAN);
				CStreaming::SetModelIsDeletable(MODEL_M4);
				CStreaming::SetModelIsDeletable(MODEL_SILENCED);
				CStreaming::SetModelIsDeletable(MODEL_SNIPER);
				CStreaming::SetModelIsDeletable(MODEL_SHOTGSPA);
				CStreaming::SetModelIsDeletable(MODEL_HEATSEEK);
				CStreaming::SetModelIsDeletable(MODEL_MP5LNG);
				CStreaming::SetModelIsDeletable(MODEL_GRENADE);
				CStreaming::SetModelIsDeletable(MODEL_IRGOGGLES);
				CStreaming::SetModelIsDeletable(MODEL_SPRAYCAN);
			} // slot 2 
			if (carl && KeyPressed(VK_F6) && CTimer::m_snTimeInMilliseconds - keyPressTime > 175)
			{
				keyPressTime = CTimer::m_snTimeInMilliseconds;
				CStreaming::RequestModel(MODEL_DESERT_EAGLE, 2);
				CStreaming::RequestModel(MODEL_MOLOTOV, 2);
				CStreaming::RequestModel(MODEL_SAWNOFF, 2);
				CStreaming::RequestModel(MODEL_TEC9, 2);
				CStreaming::RequestModel(MODEL_MINIGUN, 2);
				CStreaming::RequestModel(MODEL_CAMERA, 2);
				CStreaming::LoadAllRequestedModels(false);
				carl->GiveWeapon(WEAPON_DESERT_EAGLE, 1000, true);
				carl->GiveWeapon(WEAPON_MOLOTOV, 1000, true);
				carl->GiveWeapon(WEAPON_SAWNOFF, 1000, true);
				carl->GiveWeapon(WEAPON_TEC9, 1000, true);
				carl->GiveWeapon(WEAPON_MINIGUN, 1500, true);
				carl->GiveWeapon(WEAPON_CAMERA, 1000, true);
				carl->SetCurrentWeapon(WEAPON_DESERT_EAGLE);
				carl->SetCurrentWeapon(WEAPON_MOLOTOV);
				carl->SetCurrentWeapon(WEAPON_SAWNOFF);
				carl->SetCurrentWeapon(WEAPON_TEC9);
				carl->SetCurrentWeapon(WEAPON_MINIGUN);
				carl->SetCurrentWeapon(WEAPON_CAMERA);
				CStreaming::SetModelIsDeletable(MODEL_DESERT_EAGLE);
				CStreaming::SetModelIsDeletable(MODEL_MOLOTOV);
				CStreaming::SetModelIsDeletable(MODEL_SAWNOFF);
				CStreaming::SetModelIsDeletable(MODEL_TEC9);
				CStreaming::SetModelIsDeletable(MODEL_MINIGUN);
				CStreaming::SetModelIsDeletable(MODEL_CAMERA);
			    } // slot 3 
				if (carl && KeyPressed(VK_F5) && CTimer::m_snTimeInMilliseconds - keyPressTime > 175)
				{
					keyPressTime = CTimer::m_snTimeInMilliseconds;
					CStreaming::RequestModel(MODEL_FLAME, 2);
					CStreaming::RequestModel(MODEL_TEARGAS, 2);
					CStreaming::RequestModel(MODEL_FIRE_EX, 2);
					CStreaming::LoadAllRequestedModels(false);
					carl->GiveWeapon(WEAPON_FTHROWER, 1000, true);
					carl->GiveWeapon(WEAPON_TEARGAS, 1000, true);
					carl->GiveWeapon(WEAPON_EXTINGUISHER, 1000, true);
					CStreaming::SetModelIsDeletable(MODEL_FLAME);
					CStreaming::SetModelIsDeletable(MODEL_TEARGAS);
					CStreaming::SetModelIsDeletable(MODEL_FIRE_EX);
				} // slot 4 
		};
    }
} FreeWeapons_SA;
#endif GTASA
