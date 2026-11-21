// FUN_00689930  00689930

void __fastcall FUN_00689930(int param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_13c;
  undefined4 local_138;
  char local_120 [268];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ade5f;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar1;
  strcpy(local_120,(char *)&PTR_006b27f8);
  strcat(local_120,&DAT_0079542c);
  pvVar2 = operator_new(0x21c);
  local_8 = 0;
  if (pvVar2 == (void *)0x0) {
    local_138 = 0;
  }
  else {
    local_138 = FUN_00689f80(local_120,"Settings");
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14) = local_138;
  FUN_00625080(uVar1);
  pvVar2 = operator_new(8);
  local_8 = 1;
  if (pvVar2 == (void *)0x0) {
    local_13c = 0;
  }
  else {
    local_13c = FUN_00689db0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = local_13c;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

