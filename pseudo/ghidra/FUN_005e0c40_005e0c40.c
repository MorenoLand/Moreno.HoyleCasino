// FUN_005e0c40  005e0c40

void FUN_005e0c40(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  *param_2 = 0;
  param_2[1] = 0;
  *param_3 = 0;
  param_3[1] = 0;
  iVar2 = FUN_005e0b90(param_1 + 0x10);
  if (iVar2 != 0) {
    uVar1 = *(undefined4 *)(iVar2 + 0x4c8);
    *param_2 = *(undefined4 *)(iVar2 + 0x4c4);
    param_2[1] = uVar1;
    uVar1 = *(undefined4 *)(iVar2 + 0x4d8);
    *param_3 = *(undefined4 *)(iVar2 + 0x4d4);
    param_3[1] = uVar1;
  }
  return;
}

