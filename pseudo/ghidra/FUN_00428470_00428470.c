// FUN_00428470  00428470

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00428470(undefined4 param_1,int param_2,undefined4 param_3,char param_4)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_EDX;
  undefined8 uVar5;
  undefined8 local_24;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_8;
  
  FUN_0064c8a0(0,0,param_1);
  local_24 = FUN_0064c8a0(0,0);
  FUN_005dcb00();
  local_14 = FUN_005d5a50();
  cVar2 = FUN_004369a0(param_2,param_3);
  if (cVar2 == '\0') {
    local_8 = FUN_00434880();
    iVar3 = FUN_004286a0();
    local_24._0_4_ = iVar3;
    cVar2 = FUN_004388a0();
    if ((cVar2 != '\0') || (cVar2 = FUN_004388d0(), cVar2 != '\0')) {
      ceil((double)(int)local_24 / _DAT_006b6978);
      iVar3 = FUN_00686cc0();
      if (local_14 < (int)local_24 + iVar3) {
        return;
      }
      uVar5 = CONCAT44(extraout_EDX,-iVar3);
      FUN_005dcb00(param_2,-iVar3,extraout_EDX);
      FUN_005d5cf0(uVar5);
    }
    cVar2 = FUN_00435ca0();
    if ((cVar2 != '\0') || (cVar2 = FUN_00435cf0(), cVar2 != '\0')) {
      piVar1 = (int *)(*(int *)(DAT_007906d4 + 4 + local_8 * 4) + 0x48 + param_2 * 0x20);
      local_1c = *piVar1;
      local_18 = piVar1[1];
      local_10 = FUN_00436570(param_2,local_8);
      if ((param_4 != '\0') && (local_10 < local_14)) {
        local_24._0_4_ = local_10;
      }
      if (local_10 < local_1c + (int)local_24) {
        local_24._0_4_ = local_10 - local_1c;
      }
    }
    uVar4 = FUN_005dcb00();
    iVar3 = FUN_0063aac0();
    FUN_0062fde0("%s: bets $%d.00 on %d\n",iVar3 + 4,(int)local_24,local_8,param_1,iVar3 + 4,uVar4);
    uVar5 = CONCAT44(local_24._4_4_,(int)local_24);
    FUN_005dcb00(param_2,(int)local_24,local_24._4_4_);
    FUN_005d5e10(uVar5);
    FUN_005cba10(&local_24,0,1);
  }
  return;
}

