// FUN_0062a520  0062a520

void __thiscall FUN_0062a520(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char local_3c [52];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  *(undefined4 *)(param_1 + 0x58) = param_2;
  iVar1 = FUN_0062a630();
  if (iVar1 == *(int *)(param_1 + 0x5c)) {
    (**(code **)(**(int **)(param_1 + 0x50) + 0xd0))();
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x50) + 0xcc))();
  }
  iVar1 = FUN_0062a630();
  if (iVar1 == *(int *)(param_1 + 0x60)) {
    (**(code **)(**(int **)(param_1 + 0x4c) + 0xd0))();
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x4c) + 0xcc))();
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    uVar2 = FUN_0062a630();
    sprintf(local_3c,"%d",uVar2);
    (**(code **)(**(int **)(param_1 + 0x54) + 0xb4))(local_3c);
    uVar2 = FUN_005f5400();
    (**(code **)(**(int **)(param_1 + 4) + 0x28))(uVar2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

