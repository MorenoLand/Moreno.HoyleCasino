// FUN_00669450  00669450

void __thiscall FUN_00669450(undefined4 param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006acc2b;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0063a0c0(uVar2,param_1);
  local_8 = 0;
  if ((*param_2 != '\0') && (*param_2 != '\x01')) {
    cVar1 = FUN_0063ab10(param_2 + 0x3c);
    if (cVar1 == '\0') {
      local_8 = 0xffffffff;
      FUN_0063a120();
      goto LAB_0066955a;
    }
    iVar3 = FUN_0063aac0();
    iVar3 = strcmp(param_2 + 8,(char *)(iVar3 + 4));
    if (iVar3 != 0) {
      local_8 = 0xffffffff;
      FUN_0063a120();
      goto LAB_0066955a;
    }
  }
  local_8 = 0xffffffff;
  FUN_0063a120();
LAB_0066955a:
  ExceptionList = local_10;
  __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return;
}

