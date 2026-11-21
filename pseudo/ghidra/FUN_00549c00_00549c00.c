// FUN_00549c00  00549c00

void __fastcall FUN_00549c00(int param_1)

{
  void *pvVar1;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a530a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00549b10(DAT_00781870 ^ (uint)&stack0xfffffffc);
  FUN_00545340();
  FUN_005452a0();
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x54);
  *(undefined1 *)(param_1 + 0x24) = 1;
  FUN_00545b40(1);
  pvVar1 = operator_new(0x28);
  local_8 = 0;
  if (pvVar1 == (void *)0x0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_00546eb0();
  }
  local_8 = 0xffffffff;
  FUN_005fc420(local_20);
  ExceptionList = local_10;
  return;
}

