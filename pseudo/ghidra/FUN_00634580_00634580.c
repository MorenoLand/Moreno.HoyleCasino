// FUN_00634580  00634580

void __thiscall FUN_00634580(int *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  size_t sVar3;
  undefined4 uVar4;
  char local_10c [260];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  uVar4 = *(undefined4 *)(param_1[0x16] + param_2 * 4);
  piVar2 = (int *)FUN_0063aac0();
  if ((*piVar2 == 2) || (piVar2 = (int *)FUN_0063aac0(), *piVar2 == 3)) {
    cVar1 = '\x01';
  }
  else {
    cVar1 = '\0';
  }
  if (cVar1 == '\0') {
    FUN_005e9f20("false","..\\casinoShell\\shell.cpp",0x569);
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0xdc))(cVar1,param_1,uVar4);
    if ((((cVar1 != '\0') && (cVar1 = (**(code **)(*DAT_0162ee80 + 0x200))(), cVar1 == '\0')) &&
        (cVar1 = (**(code **)(*DAT_0162ee80 + 0x1f8))(), cVar1 == '\0')) &&
       (((**(code **)(**(int **)(DAT_007960d8 + 0x14) + 0x10))
                   ("AllowRewardRestore",&PTR_006b27f8,local_10c,0xff),
        (char)DAT_0162ee80[0x10] == '\0' || (sVar3 = strlen(local_10c), sVar3 == 0)))) {
      FUN_0066fff0(param_3,1,0);
      uVar4 = FUN_005f3bf0(local_10c);
      (**(code **)(*param_1 + 0x338))(uVar4);
      uVar4 = FUN_00634310(param_3,0);
      FUN_0062fde0("REWARD GIVEN: Game %s, Reward #%d, Value = HB %d\n",local_10c,param_3,uVar4);
      if (DAT_0162ee80[0x14] != 0) {
        FUN_00671170(param_3);
        cVar1 = FUN_00671110();
        if (cVar1 == '\0') {
          FUN_00671120(1);
        }
        (**(code **)(*(int *)DAT_0162ee80[0x14] + 0x74))();
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

