// FUN_0044e170  0044e170

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0044e170(int param_1,int *param_2,int param_3,undefined1 param_4)

{
  double dVar1;
  CPane *this;
  undefined4 uVar2;
  int iVar3;
  CSize *pCVar4;
  undefined8 local_14;
  int local_c;
  int local_8;
  
  local_c = *(int *)(DAT_00790710 + 0xc4) * 3;
  local_14 = FUN_0064c8a0(0,0);
  if (*param_2 == 0) {
    pCVar4 = (CSize *)&local_14;
    this = (CPane *)FUN_0044ccc0();
    CPane::GetMinSize(this,pCVar4);
  }
  else {
    local_14 = *(undefined8 *)param_2;
  }
  if ((int)local_14 == 0) {
    uVar2 = (**(code **)(*DAT_0079070c + 0x2b0))();
    local_14 = CONCAT44(local_14._4_4_,uVar2);
  }
  if (0 < (int)local_14) {
    dVar1 = (double)(int)local_14 * _DAT_006b9490;
    FUN_0044ccc0();
    iVar3 = FUN_005d5a50();
    if ((double)iVar3 < dVar1) {
      uVar2 = FUN_00630f40("SID_CASINO_BETTING",0);
      uVar2 = FUN_00630f40("SID_CASINO_NOTENOUGHMONEYTOPLACEBET",uVar2);
      FUN_0062ff10(uVar2);
      return;
    }
  }
  FUN_005cba10(param_2,param_3,param_4);
  if (*(int *)(param_1 + 0x48 + *(int *)(DAT_00790710 + 0xc4) * 0x20 + param_3 * 8) != 0) {
    for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
      iVar3 = FUN_005f5400();
      if (local_c != iVar3) {
        FUN_005cba10(param_2,param_3,param_4);
      }
      local_c = local_c + 1;
    }
    iVar3 = FUN_0044ccc0();
    *(undefined1 *)(iVar3 + 0x4a0) = 1;
    (**(code **)(*(int *)DAT_0079070c[1] + 8))(1,0);
  }
  return;
}

