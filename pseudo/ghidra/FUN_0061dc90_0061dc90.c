// FUN_0061dc90  0061dc90

void __thiscall
FUN_0061dc90(undefined4 *param_1,char *param_2,undefined4 param_3,undefined4 param_4,
            undefined1 param_5)

{
  size_t sVar1;
  char local_1c;
  char local_1b;
  char local_1a;
  char local_19;
  undefined1 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ab2cb;
  local_10 = ExceptionList;
  local_14 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0062aea0(local_14);
  local_8 = 0;
  *param_1 = Resource::vftable;
  param_1[0xd] = param_3;
  *(undefined1 *)(param_1 + 0xe) = 0;
  sVar1 = strlen(param_2);
  if (sVar1 < 5) {
    memset(&local_1c,0x20,4);
    local_18 = 0;
    sVar1 = strlen(param_2);
    memcpy(&local_1c,param_2,sVar1);
    _strupr(&local_1c);
    param_1[0xc] = local_19 * 0x1000000 + local_1a * 0x10000 + local_1b * 0x100 + (int)local_1c;
    FUN_0061dff0(param_4,param_5);
  }
  local_8 = 0xffffffff;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

