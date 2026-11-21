// FUN_006160c0  006160c0

undefined4 * __thiscall
FUN_006160c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ab21e;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0061de20(param_2,param_3,param_4,param_5,param_6);
  local_8 = 0;
  *param_1 = TSprite::vftable;
  FUN_006161a0(uVar1);
  ExceptionList = local_10;
  return param_1;
}

