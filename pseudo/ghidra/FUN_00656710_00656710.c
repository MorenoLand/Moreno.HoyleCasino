// FUN_00656710  00656710

void __fastcall FUN_00656710(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int local_18;
  int local_8;
  
  FUN_005f89d0(0);
  FUN_00656980();
  for (local_8 = 0; local_8 < 0xc; local_8 = local_8 + 1) {
    uVar1 = FUN_005f9ff0(0,0,local_8 + 0x4d7,0,0x1e84d0,(local_8 % 6) * 0x67 + 0xc,
                         ((5 < local_8) - 1 & 0xffffffa9) + 0x5b,3,&PTR_006b27f8,0xffffffff,
                         0xffffffff,0xffffffff,0xffffffff,0x14,0);
    *(undefined4 *)(param_1 + 0x5fc) = uVar1;
    uVar1 = 1;
    FUN_00606350(local_8);
    FUN_005eb700(uVar1);
  }
  if (*(int *)(param_1 + 0x1d8) == 0) {
    uVar1 = (**(code **)(*DAT_0162ee84 + 0x31c))();
    *(undefined4 *)(param_1 + 0x1d8) = uVar1;
    FUN_0063a3e0(0xffffffff,0);
    FUN_0063a8d0(0xffffffff,param_1,0,0,0);
    puVar2 = (undefined4 *)FUN_0063aac0();
    *puVar2 = 3;
    FUN_00646380(1);
    FUN_00646150(0x10e,0x12a);
  }
  *(undefined4 *)(param_1 + 0x1dc) =
       *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1d8) + 0x20) + 0x14);
  FUN_00657430();
  if (*(char *)(param_1 + 0x1bc) != '\0') {
    FUN_0065a0b0(param_1 + 0x1bc);
  }
  iVar3 = FUN_005fb5e0(0x400);
  if (iVar3 != 0) {
    if (*(char *)(param_1 + 0x1bc) == '\0') {
      local_18 = 0x21;
    }
    else {
      local_18 = FUN_00665800(param_1 + 0x1bc);
    }
    piVar4 = (int *)FUN_005fb5e0(0x400);
    (**(code **)(*piVar4 + 0xf0))(local_18 + 0x186bf,1);
  }
  puVar2 = (undefined4 *)(*(int *)(param_1 + 0x1dc) + 0x10);
  puVar5 = (undefined4 *)(param_1 + 0x1e0);
  for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  memset((void *)(param_1 + 0x22c),0,0x4c);
  if (DAT_00795f95 != '\0') {
    uVar1 = FUN_00630f40("SID_SHELL_FAMEMAKER_TM",0);
    uVar1 = FUN_00630f40("SID_SHELL_FACEMAKER_CANNOT_SAVE",uVar1);
    FUN_0062ff10(uVar1);
  }
  return;
}

