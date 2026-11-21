// FUN_005d67d0  005d67d0

void __thiscall FUN_005d67d0(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 *local_2c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a9091;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((*(int *)(param_1 + 0x49c) == 0) ||
     (cVar1 = FUN_005f54c0(DAT_00781870 ^ (uint)&stack0xfffffffc), cVar1 == '\0')) {
    iVar2 = FUN_0063aac0();
    FUN_0062fde0("Not flipping plaque for player: %s [%d]\n",iVar2 + 4,*(undefined4 *)(param_1 + 4))
    ;
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 0x1c))(0);
    }
  }
  else {
    iVar2 = FUN_0063aac0();
    FUN_0062fde0("Flipping plaque for player: %s [%d]\n",iVar2 + 4,*(undefined4 *)(param_1 + 4));
    if (*(int *)(*(int *)(param_1 + 0x20) + 0x20) == 0) {
      FUN_00646f80();
      local_14 = FUN_005f53c0();
      local_14 = local_14 + 100;
    }
    else {
      local_14 = FUN_005f53c0();
      local_14 = local_14 + -1;
    }
    (**(code **)(**(int **)(param_1 + 0x49c) + 0x6c))(local_14);
    FUN_005d7680(param_3,param_4);
    local_2c = operator_new(0x20);
    local_8 = 0;
    if (local_2c == (undefined4 *)0x0) {
      local_2c = (undefined4 *)0x0;
    }
    else {
      FUN_006010a0(param_2);
      *local_2c = CasinoShowNetPlaqueCycle::vftable;
    }
    local_8 = 0xffffffff;
    FUN_005f5d50(local_2c);
    (**(code **)(**(int **)(param_1 + 0x49c) + 0x74))();
  }
  ExceptionList = local_10;
  return;
}

