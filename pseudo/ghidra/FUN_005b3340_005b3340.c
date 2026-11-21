// FUN_005b3340  005b3340

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_005b3340(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_c;
  
  iVar1 = FUN_005b58a0();
  if (*(int *)(param_1 + 0x5c4) < iVar1 * 0x34) {
    iVar1 = FUN_005b58a0();
    local_c = (double)(iVar1 << 1) - (double)*(int *)(param_1 + 0x5c4) / _DAT_006b4b18;
    if (local_c < _DAT_006b3e40) {
      local_c = _DAT_006b3e40;
    }
    if (0.0 <= (double)*(int *)(param_1 + 0x5cc) / local_c) {
      uVar2 = FUN_00686cc0();
    }
    else {
      uVar2 = FUN_00686cc0();
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

