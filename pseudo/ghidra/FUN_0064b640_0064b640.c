// FUN_0064b640  0064b640

int __thiscall FUN_0064b640(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  undefined4 local_24;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006abf55;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  for (local_14 = 0; (local_14 < 3 && (*(int *)(param_1 + 0x198 + local_14 * 4) != 0));
      local_14 = local_14 + 1) {
    iVar2 = FUN_005eafc0(uVar1);
    if (iVar2 == param_2) {
      ExceptionList = local_10;
      return -1;
    }
  }
  if (local_14 == 3) {
    FUN_005e9f20("false","..\\casinoShell\\character.cpp",0x824);
    local_14 = -1;
  }
  else {
    pvVar3 = operator_new(0x184);
    local_8 = 0;
    if (pvVar3 == (void *)0x0) {
      local_24 = 0;
    }
    else {
      local_24 = FUN_0064b920(param_1);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x198 + local_14 * 4) = local_24;
    FUN_0064ba60(param_2,param_4);
    (**(code **)(**(int **)(param_1 + 0x198 + local_14 * 4) + 0xb0))(param_3);
    FUN_0064b3c0();
  }
  ExceptionList = local_10;
  return local_14;
}

