//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void Fill_Clip(struct playerState_s* ps, unsigned int weapon)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Add_Ammo(struct gentity_s* ent, unsigned int weaponIndex, unsigned char weaponModel, int count, int fillClip)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CurrentPrimaryWeapon(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int G_ItemClipMask(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int WeaponPickup_AddWeapon(struct gentity_s* ent, struct gentity_s* other, int weapon, unsigned char weaponModel, struct gentity_s** pDroppedWeapon)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PrintPlayerPickupMessage(struct gentity_s* player, int weapIdx, struct WeaponDef* weapDef)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool WeaponPickup_LeechFromWeaponEnt(struct gentity_s* weaponEnt, struct gentity_s* player, int haveExactWeapon, int* pickupEvent, bool suppressNotifies)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void WeaponPickup_AddAmmoForNewWeapon(struct gentity_s* weaponEnt, struct gentity_s* player)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void WeaponPickup_Notifies(struct gentity_s* thisItem, struct gentity_s* newDroppedItem, struct gentity_s* player, struct WeaponDef* weapDef, bool pickedUp)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int WeaponPickup_Grab(struct gentity_s* weaponEnt, struct gentity_s* player, int weapIdx, int* pickupEvent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int WeaponPickup_Touch(struct gentity_s* weaponEnt, struct gentity_s* player, int weapIdx, int* pickupEvent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int WeaponPickup(struct gentity_s* weaponEnt, struct gentity_s* player, int* pickupEvent, int touched)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Touch_Item_Auto(struct gentity_s* ent, struct gentity_s* other, int bTouched)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PrintMessage_CannotGrabItem(struct gentity_s* ent, struct gentity_s* player, int touched, struct gitem_s* item, int weapIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Touch_Item(struct gentity_s* ent, struct gentity_s* other, int touched)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int GetFreeDropCueIdx()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DroppedItemClearOwner(struct gentity_s* pSelf)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_GetItemClassname(const struct gitem_s* item, unsigned short* out)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct gentity_s* LaunchItem(const struct gitem_s* item, float* origin, float* angles, float* velocity, int ownerNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct gentity_s* Drop_Item(struct gentity_s* ent, const struct gitem_s* item, float angle, int novelocity)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int GetNonClipAmmoToTransferToWeaponEntity(struct gentity_s* player, int transferWeapon)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool PlayerHasAnyAmmoToTransferToWeapon(struct gentity_s* player, int transferWeapon)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int TransferPlayerAmmoToWeaponEntity(struct gentity_s* player, struct gentity_s* weaponEnt, int transferWeapon)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int TransferRandomAmmoToWeaponEntity(struct gentity_s* weaponEnt, int transferWeapon)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct gentity_s* Drop_Weapon(struct gentity_s* ent, int weapIdx, unsigned char weaponModel, unsigned int tag)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FinishSpawningItem(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void ClearRegisteredItems()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SaveRegisteredWeapons()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SaveRegisteredItems()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RegisterWeaponRumbles(struct WeaponDef* weapDef)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_RegisterWeapon(unsigned int weapIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int IsItemRegistered(int iItemIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_SpawnItem(struct gentity_s* ent, const struct gitem_s* item)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void G_OrientItemToGround(struct gentity_s* ent, struct trace_t* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_RunItem(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__
