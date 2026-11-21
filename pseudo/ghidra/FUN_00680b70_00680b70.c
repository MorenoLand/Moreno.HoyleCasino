// FUN_00680b70  00680b70

undefined4 * __fastcall FUN_00680b70(undefined4 *param_1)

{
  void *pvVar1;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006add43;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00625f10(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = HelpGroupBox::vftable;
  pvVar1 = operator_new(0x1d0);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (pvVar1 == (void *)0x0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_005ec5a0();
  }
  param_1[0x1b] = local_20;
  ExceptionList = local_10;
  return param_1;
}

