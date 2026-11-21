// FUN_00419c90  00419c90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00419c90(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_c;
  
  iVar1 = FUN_00418700();
  if (*(int *)(param_1 + 0x4dc) < iVar1 * 0x34) {
    iVar1 = FUN_00418700();
    local_c = ((double)iVar1 + (double)iVar1) - (double)*(int *)(param_1 + 0x4dc) / _DAT_006b4b18;
    if (local_c < _DAT_006b3e40) {
      local_c = _DAT_006b3e40;
    }
    if (0.0 <= (double)*(int *)(param_1 + 0x4e4) / local_c) {
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

