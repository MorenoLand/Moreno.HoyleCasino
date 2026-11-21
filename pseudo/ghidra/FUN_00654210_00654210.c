// FUN_00654210  00654210

void FUN_00654210(undefined4 param_1,char *param_2)

{
  uint uVar1;
  void *pvVar2;
  int local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ac4cf;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pvVar2 = operator_new(0x28);
  local_8 = 0;
  if (pvVar2 == (void *)0x0) {
    local_24 = 0;
  }
  else {
    local_24 = FUN_00654740(uVar1);
  }
  local_8 = 0xffffffff;
  strcpy((char *)(local_24 + 0x14),param_2);
  FUN_00628980(local_24,param_1,0xffffffff,0);
  ExceptionList = local_10;
  return;
}

