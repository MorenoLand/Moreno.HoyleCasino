// FUN_005eb780  005eb780

void __thiscall FUN_005eb780(int param_1,undefined4 *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if ((((*(int *)(param_1 + 0x174) != 0) && (*(int *)(param_1 + 4) != 0)) &&
      (cVar2 = FUN_005f54a0(), cVar2 != '\0')) && (*(char *)(param_1 + 0x16c) != '\0')) {
    iVar3 = (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14)) + *(int *)(param_1 + 0x14);
    iVar4 = (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x10)) + *(int *)(param_1 + 0x10);
    local_20 = *(int *)(param_1 + 0x14);
    local_24 = *(int *)(param_1 + 0x10);
    local_1c = iVar4;
    local_18 = iVar3;
    if (*(int *)(param_1 + 0x40) < 2) {
      local_44 = *param_2;
      local_40 = param_2[1];
      local_3c = param_2[2] + 1;
      local_38 = param_2[3] + 1;
      FUN_005ec3a0(&local_24,&local_24,&local_44);
      local_14 = local_24;
      local_10 = local_20;
      local_c = local_1c;
      local_8 = local_18;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x40);
      if (1 < iVar1) {
        local_1c = (iVar4 - local_24) * iVar1 + local_24;
        local_18 = (iVar3 - local_20) * iVar1 + local_20;
      }
      local_34 = local_24;
      local_30 = local_20;
      local_2c = iVar4;
      local_28 = iVar3;
      FUN_005ec3a0(&local_24,&local_24,param_2);
      local_14 = local_24;
      local_10 = local_20;
      local_c = local_1c;
      local_8 = local_18;
      FUN_005ec4a0(&local_24,&local_34,*(undefined4 *)(param_1 + 0x40),0);
      FUN_005ec4a0(&local_14,&local_34,*(undefined4 *)(param_1 + 0x40),1);
    }
    local_14 = local_14 + -*(int *)(param_1 + 0x10);
    local_10 = local_10 + -*(int *)(param_1 + 0x14);
    local_c = local_c + -*(int *)(param_1 + 0x10);
    local_8 = local_8 + -*(int *)(param_1 + 0x14);
    iVar3 = FUN_005f84f0();
    iVar4 = FUN_005f84d0();
    local_24 = local_24 + iVar4;
    local_20 = local_20 + iVar3;
    local_1c = local_1c + iVar4;
    local_18 = local_18 + iVar3;
    FUN_00616510(*(undefined4 *)(param_1 + 0x164),*(undefined4 *)(param_1 + 0x15c),
                 *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x1a8) + 0x50),local_24,local_20,
                 local_1c,local_18,local_14,local_10,local_c,local_8,
                 *(undefined1 *)(param_1 + 0x16c),*(undefined4 *)(param_1 + 0x40),
                 CONCAT31((int3)((uint)*(int *)(param_1 + 4) >> 8),*(undefined1 *)(param_1 + 0x16f))
                 ,0);
  }
  return;
}

