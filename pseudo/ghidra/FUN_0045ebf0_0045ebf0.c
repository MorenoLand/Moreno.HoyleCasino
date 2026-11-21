// FUN_0045ebf0  0045ebf0

undefined4 __fastcall FUN_0045ebf0(int param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069f30b;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pvVar2 = operator_new(0x84);
  local_8 = 0;
  if (pvVar2 == (void *)0x0) {
    local_24 = 0;
  }
  else {
    local_24 = FUN_0045d1f0(uVar1);
  }
  local_8 = 0xffffffff;
  FUN_0045e8c0(*(undefined4 *)(param_1 + 4));
  ExceptionList = local_10;
  return local_24;
}

