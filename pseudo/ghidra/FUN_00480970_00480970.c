// FUN_00480970  00480970

void __fastcall FUN_00480970(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int local_8;
  
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(DAT_007947e0 + 0x4efc);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(DAT_007947e0 + 0x4f00);
  iVar1 = FUN_005dcb00(0);
  iVar2 = FUN_00480920();
  iVar2 = *(int *)(iVar1 + 0x4b4) - iVar2;
  uVar4 = FUN_0064c8a0(iVar2,0);
  iVar1 = FUN_005dcb00(0);
  *(undefined8 *)(iVar1 + 0x4b4) = uVar4;
  uVar3 = FUN_00480920(0);
  uVar4 = FUN_0064c8a0(uVar3);
  FUN_005dcb00(0,uVar4);
  FUN_005d5af0(uVar4);
  uVar4 = FUN_0064c8a0(iVar2,0);
  FUN_005dcb00(0,uVar4);
  FUN_005d59e0(uVar4);
  uVar4 = FUN_0064c8a0(0,0);
  iVar1 = FUN_005dcb00(0);
  *(undefined8 *)(iVar1 + 0x4dc) = uVar4;
  FUN_00480710(0);
  FUN_00480c10(1);
  *(undefined4 *)(param_1 + 0xfc) = 1;
  for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
    *(undefined4 *)(param_1 + 0x108 + local_8 * 4) = 1;
  }
  for (local_8 = 0; local_8 < 7; local_8 = local_8 + 1) {
    *(undefined4 *)(param_1 + 0x3e4 + local_8 * 4) = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x400) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0xffffffff;
  for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
    *(undefined4 *)(param_1 + 0x114 + local_8 * 4) = 0;
  }
  FUN_00481a00(1);
  FUN_004fb890();
  return;
}

