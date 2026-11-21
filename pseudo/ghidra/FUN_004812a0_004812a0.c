// FUN_004812a0  004812a0

/* WARNING: Removing unreachable block (ram,0x004812b9) */
/* WARNING: Removing unreachable block (ram,0x004812cb) */
/* WARNING: Removing unreachable block (ram,0x004812d8) */
/* WARNING: Removing unreachable block (ram,0x0048130f) */
/* WARNING: Removing unreachable block (ram,0x00481306) */
/* WARNING: Removing unreachable block (ram,0x00481316) */
/* WARNING: Removing unreachable block (ram,0x0048132d) */
/* WARNING: Removing unreachable block (ram,0x004812c2) */

void FUN_004812a0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 extraout_var;
  int local_24;
  int local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = FUN_00607960("HumanGetsSmallBank",0);
  if (iVar1 == 0) {
    uVar2 = extraout_var;
    iVar1 = FUN_00607960("HumanGetsLargestBank",0);
    if (iVar1 != 0) {
      local_24 = 0;
      local_10 = -1;
      for (local_14 = 0; iVar1 = FUN_0047f950(uVar2), local_14 < iVar1; local_14 = local_14 + 1) {
        FUN_005dcb00(local_14);
        iVar1 = FUN_005d5a50();
        if (local_24 < iVar1) {
          FUN_005dcb00(local_14);
          local_24 = FUN_005d5a50();
          local_10 = local_14;
        }
      }
      if (local_10 != 0) {
        puVar4 = &local_c;
        FUN_005dcb00(0,puVar4);
        FUN_005d5ac0(puVar4);
        uVar2 = 0;
        FUN_005dcb00(0,local_24,0);
        FUN_005d5af0(local_24,uVar2);
        FUN_005dcb00(local_10,local_c,local_8);
        FUN_005d5af0(local_c,local_8);
      }
    }
  }
  else {
    uVar3 = 0;
    uVar2 = 0x1c2;
    FUN_005dcb00(0,0x1c2,0);
    FUN_005d5af0(uVar2,uVar3);
  }
  return;
}

