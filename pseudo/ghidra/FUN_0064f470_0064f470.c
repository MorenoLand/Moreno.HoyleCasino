// FUN_0064f470  0064f470

void FUN_0064f470(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  char *_Format;
  int *local_134;
  undefined4 local_130;
  char local_118 [256];
  uint local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ac19c;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = uVar2;
  pvVar3 = operator_new(0x1c0);
  local_8 = 0;
  if (pvVar3 == (void *)0x0) {
    local_130 = 0;
  }
  else {
    local_130 = FUN_00674d40(uVar2);
  }
  local_8 = 0xffffffff;
  local_14 = local_130;
  cVar1 = FUN_00675480();
  if (cVar1 == '\0') {
    _Format = (char *)FUN_00630f40("SID_SHELL_MISSINGFACEMAKER_FORMAT",&DAT_00795634);
    sprintf(local_118,_Format);
    FUN_0062ff10(local_118,&DAT_00795634,0);
  }
  else {
    if (DAT_016306a4 == (int *)0x0) {
      pvVar3 = operator_new(0x640);
      local_8 = 1;
      if (pvVar3 == (void *)0x0) {
        local_134 = (int *)0x0;
      }
      else {
        local_134 = (int *)FUN_00656340(local_14,param_1);
      }
      local_8 = 0xffffffff;
      DAT_016306a4 = local_134;
      (**(code **)(*local_134 + 0x3c))();
    }
    FUN_006571b0();
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}

