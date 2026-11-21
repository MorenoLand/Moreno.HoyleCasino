// FUN_0063ef60  0063ef60

int FUN_0063ef60(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 local_2c;
  undefined4 local_28;
  int local_20;
  int *local_10;
  int local_8;
  
  if (DAT_0163068c != 0) {
    for (local_8 = 0; local_8 < param_4; local_8 = local_8 + 1) {
      local_10 = (int *)0x0;
      if (param_5 == 0) {
        local_20 = *(int *)(param_3 + local_8 * 0x10);
      }
      else {
        local_20 = *(int *)(param_5 + local_8 * 0x10);
      }
      local_20 = local_20 * 100;
      iVar3 = local_20 + 0x32;
      if (param_5 == 0) {
        cVar1 = *(char *)(param_3 + 8 + local_8 * 0x10);
        local_28 = *(undefined4 *)(param_3 + 4 + local_8 * 0x10);
      }
      else {
        cVar1 = *(char *)(param_5 + 8 + local_8 * 0x10);
        local_28 = *(undefined4 *)(param_5 + 4 + local_8 * 0x10);
      }
      if (cVar1 == 'C') {
        local_10 = (int *)FUN_005fb350(iVar3);
      }
      if ((cVar1 == 'R') && (iVar2 = FUN_005fb3a0(local_20 + 0x33), iVar2 != 0)) {
        FUN_005fb3a0(local_20 + 0x33);
        local_10 = (int *)FUN_00606350(local_28);
      }
      if ((cVar1 == 'S') && (iVar2 = FUN_005fb7c0(iVar3), iVar2 != 0)) {
        iVar2 = FUN_005fb7c0(iVar3);
        local_10 = *(int **)(iVar2 + 0x48);
      }
      if ((cVar1 == 'B') && (iVar2 = FUN_005fb300(iVar3), iVar2 != 0)) {
        local_10 = (int *)FUN_005fb300(iVar3);
      }
      if ((cVar1 == 'V') && (iVar2 = FUN_005fb2b0(iVar3), iVar2 != 0)) {
        local_10 = (int *)FUN_005fb2b0(iVar3);
      }
      if ((cVar1 == 'D') && (iVar2 = FUN_005fb5e0(iVar3), iVar2 != 0)) {
        local_10 = (int *)FUN_005fb5e0(iVar3);
      }
      if ((local_10 != (int *)0x0) &&
         (cVar1 = (**(code **)(*local_10 + 0x84))(param_2), cVar1 != '\0')) {
        if (param_5 == 0) {
          local_2c = *(undefined4 *)(param_3 + 0xc + local_8 * 0x10);
        }
        else {
          local_2c = FUN_00630f40(*(undefined4 *)(param_5 + 0xc + local_8 * 0x10));
        }
        (**(code **)(*param_1 + 0xb4))(local_2c);
        return local_8;
      }
    }
    if (*(int *)(param_2 + 0x18) == 3) {
      (**(code **)(*param_1 + 0xb4))(&PTR_006b27f8);
    }
  }
  return -1;
}

