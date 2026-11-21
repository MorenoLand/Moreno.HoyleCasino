// FUN_0057e760  0057e760

void __fastcall FUN_0057e760(int param_1)

{
  void *pvVar1;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a68fb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0057e4c0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  if (*(int *)(param_1 + 0x17c) == 0) {
    pvVar1 = operator_new(0x28);
    local_8 = 0;
    if (pvVar1 == (void *)0x0) {
      local_20 = 0;
    }
    else {
      local_20 = FUN_0057ea10(param_1);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x17c) = local_20;
  }
  (**(code **)(**(int **)(param_1 + 0x17c) + 8))(0,0);
  ExceptionList = local_10;
  return;
}

