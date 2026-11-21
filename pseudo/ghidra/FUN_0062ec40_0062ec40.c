// FUN_0062ec40  0062ec40

undefined4 * __fastcall FUN_0062ec40(undefined4 *param_1)

{
  uint uVar1;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ab7cb;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = StringManagerBase::vftable;
  FUN_0062f920(uVar1);
  local_8 = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  pvVar2 = operator_new(0x1000);
  param_1[0xb] = pvVar2;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0x2c;
  *(undefined1 *)((int)param_1 + 0x3d) = 10;
  *(undefined1 *)((int)param_1 + 0x3e) = 0;
  *(undefined1 *)((int)param_1 + 0x3f) = 1;
  ExceptionList = local_10;
  return param_1;
}

