// FUN_00635f30  00635f30

void __thiscall FUN_00635f30(undefined4 param_1,char *param_2,char *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int local_3cc;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aba39;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((param_2 == (char *)0x0) || (param_3 == (char *)0x0)) {
    FUN_005e9f20("false","..\\casinoShell\\shell.cpp",0x77b);
  }
  else {
    FUN_0063a0c0(uVar2,param_1);
    local_8 = 0;
    for (local_3cc = 0; local_3cc < 100; local_3cc = local_3cc + 1) {
      sprintf(param_3,"user%d.log",local_3cc);
      cVar1 = FUN_0063ab10(param_3);
      if (cVar1 != '\0') {
        iVar3 = FUN_0063aac0();
        iVar3 = strcmp((char *)(iVar3 + 4),param_2);
        if (iVar3 == 0) {
          local_8 = 0xffffffff;
          FUN_0063a120();
          goto LAB_0063606e;
        }
      }
    }
    *param_3 = '\0';
    local_8 = 0xffffffff;
    FUN_0063a120();
  }
LAB_0063606e:
  ExceptionList = local_10;
  __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return;
}

