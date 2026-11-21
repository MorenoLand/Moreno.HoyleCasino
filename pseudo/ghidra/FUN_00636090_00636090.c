// FUN_00636090  00636090

void __thiscall FUN_00636090(undefined4 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char local_3e8 [28];
  int local_3cc;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aba6c;
  local_10 = ExceptionList;
  local_14 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_2 == (char *)0x0) {
    FUN_005e9f20("false","..\\casinoShell\\shell.cpp",0x792);
  }
  else {
    FUN_0063a0c0(local_14,param_1);
    local_8 = 0;
    for (local_3cc = 0; local_3cc < 100; local_3cc = local_3cc + 1) {
      sprintf(local_3e8,"user%d.log",local_3cc);
      cVar1 = FUN_0063ab10(local_3e8);
      if (cVar1 != '\0') {
        iVar2 = FUN_0063aac0();
        iVar2 = strcmp((char *)(iVar2 + 4),param_2);
        if (iVar2 == 0) {
          local_8 = 0xffffffff;
          FUN_0063a120();
          goto LAB_006361d1;
        }
      }
    }
    local_8 = 0xffffffff;
    FUN_0063a120();
  }
LAB_006361d1:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

