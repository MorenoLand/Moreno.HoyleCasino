// FUN_00606f60  00606f60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00606f60(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x2c) == -1) {
    FUN_00606bc0(param_2,param_3);
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = param_2;
    *(undefined4 *)(param_1 + 0x14) = param_3;
    if (*(int *)(param_1 + 4) != 0) {
      *(undefined1 *)(param_1 + 0xc) = 1;
      iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x4c))();
      *(float *)(param_1 + 0x18) = (float)iVar1;
      iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x54))();
      *(float *)(param_1 + 0x1c) = (float)iVar1;
      *(float *)(param_1 + 0x20) = (float)*(int *)(param_1 + 0x10) - *(float *)(param_1 + 0x18);
      *(float *)(param_1 + 0x24) = (float)*(int *)(param_1 + 0x14) - *(float *)(param_1 + 0x1c);
      uVar2 = FUN_00686cc0();
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x188) = uVar2;
      iVar1 = *(int *)(param_1 + 0x2c);
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x184) = 1;
      *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) / (float)iVar1;
      *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) / (float)iVar1;
      uVar2 = FUN_005f3e50();
      *(undefined4 *)(param_1 + 0x28) = uVar2;
    }
  }
  return;
}

