// FUN_0061dd90  0061dd90

undefined4 * __thiscall
FUN_0061dd90(undefined4 *param_1,undefined4 param_2,char *param_3,undefined4 param_4,
            undefined1 param_5)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ab2f8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0062aea0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = Resource::vftable;
  param_1[0xc] = param_2;
  param_1[0xd] = 0;
  strcpy((char *)(param_1 + 0xe),param_3);
  FUN_0061dff0(param_4,param_5);
  ExceptionList = local_10;
  return param_1;
}

