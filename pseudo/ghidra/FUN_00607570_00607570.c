// FUN_00607570  00607570

void __thiscall FUN_00607570(int param_1,int *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  if ((*(int *)(param_1 + 0x10) == -1) && (*(int *)(param_1 + 0x14) == -1)) {
    uVar1 = (**(code **)(*param_2 + 0x4c))();
    *(undefined4 *)(param_1 + 0x10) = uVar1;
    uVar1 = (**(code **)(*param_2 + 0x54))();
    *(undefined4 *)(param_1 + 0x14) = uVar1;
  }
  FUN_00606a60(param_2);
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x30);
  uVar2 = FUN_005eb610();
  FUN_005eb5d0((uVar2 & 0xff) + (uint)(-1 < *(int *)(param_1 + 0x2c)) * 2 + -1);
  return;
}

