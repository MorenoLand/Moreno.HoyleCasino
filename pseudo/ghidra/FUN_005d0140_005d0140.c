// FUN_005d0140  005d0140

void __fastcall FUN_005d0140(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *local_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a8d72;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f85d0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  cVar1 = FUN_00635cb0(8);
  if (cVar1 == '\0') {
    local_28 = operator_new(0x20);
    local_8 = 0;
    if (local_28 == (undefined4 *)0x0) {
      local_28 = (undefined4 *)0x0;
    }
    else {
      FUN_005fc0d0(0);
      *local_28 = TypeNameScript::vftable;
    }
    local_8 = 0xffffffff;
    FUN_005f5df0(local_28);
  }
  else {
    iVar2 = FUN_0063aac0();
    (**(code **)(**(int **)(param_1 + 0x1c0) + 0xb4))(iVar2 + 4);
    while (*(char *)(param_1 + 0x200) == '\0') {
      (**(code **)(*DAT_007960d8 + 0x10))();
      FUN_00613e70();
    }
  }
  ExceptionList = local_10;
  return;
}

