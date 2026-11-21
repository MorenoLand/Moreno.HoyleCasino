// FUN_005f0cc0  005f0cc0

undefined4 * __fastcall FUN_005f0cc0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a9ce3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005e9e20(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = sciRoom::vftable;
  FUN_0060c5f0();
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_0060c5f0();
  DAT_015e55e4 = param_1;
  param_1[1] = 0;
  DAT_007950ac = 0;
  param_1[10] = 0;
  ExceptionList = local_10;
  return param_1;
}

