// FUN_004278d0  004278d0

void __thiscall FUN_004278d0(int param_1,int *param_2,int param_3,undefined1 param_4)

{
  int iVar1;
  CPane *this;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  CSize *pCVar5;
  undefined1 local_4c [8];
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c [8];
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_2c;
  undefined8 local_24;
  undefined8 local_1c;
  undefined8 local_14;
  int local_c;
  int local_8;
  
  local_24 = FUN_0064c8a0(0,0);
  local_8 = *(int *)(DAT_00790358 + 0xa0);
  local_1c = local_24;
  iVar1 = FUN_005dcb00(local_8);
  if (iVar1 != 0) {
    local_c = local_8 << 1;
    local_2c = FUN_0064c8a0(0,0);
    local_14 = local_2c;
    if (*param_2 == 0) {
      pCVar5 = (CSize *)&local_1c;
      this = (CPane *)FUN_005dcb00(local_8);
      CPane::GetMinSize(this,pCVar5);
    }
    else {
      local_1c = *(undefined8 *)param_2;
    }
    if ((int)local_1c == 0) {
      uVar2 = (**(code **)(*DAT_00790354 + 0x2b0))();
      local_1c = CONCAT44(local_1c._4_4_,uVar2);
    }
    if (0 < (int)local_1c) {
      iVar1 = FUN_00426560(param_1);
      if (iVar1 == local_c) {
        iVar1 = param_1 + 0x48 + local_8 * 0x20;
        local_34 = *(undefined4 *)(iVar1 + param_3 * 8);
        local_30 = *(undefined4 *)(iVar1 + 4 + param_3 * 8);
        piVar3 = (int *)FUN_0064c5c0(local_3c,local_1c);
        local_14._0_4_ = *piVar3;
        local_14._4_4_ = piVar3[1];
        FUN_005dcb00(local_8);
        iVar1 = FUN_005d5a50();
        if (iVar1 - (int)local_1c < (int)local_14 * 2) {
          uVar2 = FUN_00630f40("SID_CASINO_BETTING",0);
          uVar2 = FUN_00630f40("SID_CARIBBEANSTUD_NOTENOUGHMONEY2",uVar2);
          FUN_0062ff10(uVar2);
          return;
        }
      }
      else {
        iVar1 = FUN_00426560(param_1);
        if (iVar1 == local_c + 1) {
          iVar1 = param_1 + 0x48 + local_8 * 0x20;
          local_44 = *(undefined4 *)(iVar1 + param_3 * 8);
          local_40 = *(undefined4 *)(iVar1 + 4 + param_3 * 8);
          puVar4 = (undefined4 *)FUN_0064c5c0(local_4c,local_1c);
          local_14._0_4_ = *puVar4;
          local_14._4_4_ = puVar4[1];
          FUN_005dcb00(local_8);
          iVar1 = FUN_005d5a50();
          if (iVar1 < (int)local_1c) {
            uVar2 = FUN_00630f40("SID_CASINO_BETTING",0);
            uVar2 = FUN_00630f40("SID_CARIBBEANSTUD_NOTENOUGHMONEY2",uVar2);
            FUN_0062ff10(uVar2);
            return;
          }
        }
      }
    }
    FUN_005cba10(param_2,param_3,param_4);
  }
  return;
}

