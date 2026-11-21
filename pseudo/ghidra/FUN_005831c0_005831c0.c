// FUN_005831c0  005831c0

undefined4 * __fastcall FUN_005831c0(undefined4 *param_1)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a6b98;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005d7b60(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = KenoRoom::vftable;
  uVar1 = FUN_00630f40("SID_KENO");
  FUN_005f38b0(uVar1);
  DAT_00793580 = 0;
  DAT_0079357c = param_1;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined1 *)((int)param_1 + 0x89) = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  FUN_005f1ad0(0x30dfe2);
  ExceptionList = local_10;
  return param_1;
}

