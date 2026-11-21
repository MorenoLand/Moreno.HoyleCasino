// FUN_004fa2e0  004fa2e0

void __fastcall FUN_004fa2e0(int param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a2767;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pvVar2 = operator_new(0x7d4);
  local_8 = 0;
  if (pvVar2 == (void *)0x0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_00479140(uVar1);
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa4) = local_20;
  FUN_004799e0();
  ExceptionList = local_10;
  return;
}

