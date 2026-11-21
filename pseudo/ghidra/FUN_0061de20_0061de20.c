// FUN_0061de20  0061de20

void __thiscall
FUN_0061de20(undefined4 *param_1,undefined4 param_2,undefined4 param_3,void *param_4,int param_5,
            undefined4 param_6)

{
  void *pvVar1;
  char local_118 [260];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ab31e;
  local_10 = ExceptionList;
  local_14 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0062aea0(local_14);
  local_8 = 0;
  *param_1 = Resource::vftable;
  param_1[0x53] = 0;
  param_1[0x56] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined1 *)(param_1 + 0x55) = 0;
  param_1[0xc] = param_2;
  param_1[0xd] = param_3;
  *(undefined1 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    if ((param_4 == (void *)0x0) || (param_5 == 0)) {
      FUN_0061dff0(param_6,0xffffffff);
    }
    else {
      param_1[0x53] = param_5;
      pvVar1 = operator_new(param_1[0x53]);
      param_1[0x56] = pvVar1;
      memcpy((void *)param_1[0x56],param_4,param_1[0x53]);
      if (DAT_00795fb2 != '\0') {
        sprintf(local_118,"Resource %i created.  ",param_3);
        FUN_0062fde0(local_118);
      }
      FUN_0061dff0(param_6,0xffffffff);
    }
  }
  local_8 = 0xffffffff;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

