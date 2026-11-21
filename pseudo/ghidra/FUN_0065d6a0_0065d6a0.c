// FUN_0065d6a0  0065d6a0

void __fastcall FUN_0065d6a0(int param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 local_2c;
  undefined4 local_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ac86a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar13 = 0xffffffff;
  uVar12 = 0x12;
  uVar11 = 1;
  uVar10 = 3;
  uVar9 = 3;
  uVar8 = 0x19;
  uVar7 = 0x142;
  uVar6 = 0x49;
  uVar1 = FUN_00630f40("SID_SHELL_FACE_CHANGED",0x49,0x142,0x19,3,3,1,0x12,0xffffffff,
                       DAT_00781870 ^ (uint)&stack0xfffffffc);
  FUN_005fa5b0(0,0,uVar1,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13);
  uVar13 = 0xffffffff;
  uVar12 = 5;
  uVar11 = 1;
  uVar10 = 0x9b;
  uVar9 = 10;
  uVar8 = 0x4b;
  uVar7 = 0x142;
  uVar6 = 0x1f;
  uVar1 = FUN_00630f40("SID_SHELL_FACE_CHANGED_INSTRUCTIONS",0x1f,0x142,0x4b,10,0x9b,1,5,0xffffffff)
  ;
  FUN_005fa5b0(0,0,uVar1,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13);
  FUN_005fa880(0,0,0x149,1,3,0xda,1,0x78,0x7c,0xa1,0,0,0);
  FUN_005fa880(0,0,0x149,1,4,0xdb,1,0xff,0xff,0xff,0,0,0);
  uVar10 = 0;
  uVar9 = 0xffffffff;
  uVar8 = 0x4a;
  uVar7 = 0x4b;
  uVar6 = 0x48;
  uVar1 = FUN_00630f40("SID_SHELL_ADD",0x48,0x4b,0x4a,0xffffffff,0);
  FUN_005f9de0(0,0,0x30d4de,10,0xe1,1,uVar1,uVar6,uVar7,uVar8,uVar9,uVar10);
  uVar10 = 0;
  uVar9 = 0xffffffff;
  uVar8 = 0x4a;
  uVar7 = 0x4b;
  uVar6 = 0x48;
  uVar1 = FUN_00630f40("SID_SHELL_UPDATE",0x48,0x4b,0x4a,0xffffffff,0);
  FUN_005f9de0(0,1,0x30d4de,0x6e,0xe1,1,uVar1,uVar6,uVar7,uVar8,uVar9,uVar10);
  uVar10 = 0x1b;
  uVar9 = 0xffffffff;
  uVar8 = 0x4a;
  uVar7 = 0x4b;
  uVar6 = 0x48;
  uVar1 = FUN_00630f40("SID_GENERIC_CANCEL",0x48,0x4b,0x4a,0xffffffff,0x1b);
  FUN_005f9de0(0,2,0x30d4de,0xf2,0xe1,1,uVar1,uVar6,uVar7,uVar8,uVar9,uVar10);
  FUN_005f9ce0(0,0xffffffff,0x30d4e8,0x28,0x26,1,0,0xff,0);
  FUN_005f9ce0(0,0xffffffff,0x30d4e8,0xc3,0x26,1,0,0xff,0);
  pvVar2 = operator_new(200);
  local_8 = 0;
  if (pvVar2 == (void *)0x0) {
    local_28 = 0;
  }
  else {
    local_28 = FUN_006640c0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c0) = local_28;
  FUN_00664200(param_1,0);
  puVar4 = (undefined4 *)(DAT_016306a4 + 0x1e0);
  puVar5 = (undefined4 *)(*(int *)(param_1 + 0x1c0) + 0x10);
  for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_006643f0(0x28,0x26);
  FUN_00664630();
  pvVar2 = operator_new(200);
  local_8 = 1;
  if (pvVar2 == (void *)0x0) {
    local_2c = 0;
  }
  else {
    local_2c = FUN_006640c0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c4) = local_2c;
  FUN_00664200(param_1,0);
  puVar4 = (undefined4 *)(*(int *)(DAT_016306a4 + 0x1dc) + 0x10);
  puVar5 = (undefined4 *)(*(int *)(param_1 + 0x1c4) + 0x10);
  for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_006643f0(0xc3,0x26);
  FUN_00664630();
  uVar13 = 0xffffffff;
  uVar12 = 0x30;
  uVar11 = 2;
  uVar10 = 0x7b;
  uVar9 = 0xfffffff6;
  uVar8 = 0x14;
  uVar7 = 200;
  uVar6 = 0x1f;
  uVar1 = FUN_00630f40("SID_SHELL_OLD_VERSION",0x1f,200,0x14,0xfffffff6,0x7b,2,0x30,0xffffffff);
  FUN_005fa5b0(0,0,uVar1,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13);
  uVar13 = 0xffffffff;
  uVar12 = 0x30;
  uVar11 = 2;
  uVar10 = 0x7b;
  uVar9 = 0x91;
  uVar8 = 0x14;
  uVar7 = 200;
  uVar6 = 0x1f;
  uVar1 = FUN_00630f40("SID_SHELL_NEW_VERSION",0x1f,200,0x14,0x91,0x7b,2,0x30,0xffffffff);
  FUN_005fa5b0(0,0,uVar1,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13);
  ExceptionList = local_10;
  return;
}

