// FUN_0064d840  0064d840

void __thiscall FUN_0064d840(int *param_1,int param_2)

{
  char cVar1;
  char *_Format;
  undefined4 uVar2;
  undefined1 local_94 [32];
  char local_74 [108];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  *(undefined1 *)(param_1[0xd] + 0x10) = 0;
  if (*(int *)(param_1[0xd] + 8) == param_2) {
    param_1[0xd] = 0;
  }
  else {
    cVar1 = (**(code **)(*DAT_0162ee84 + 0x160))();
    if ((cVar1 == '\0') && (cVar1 = FUN_006367d0(param_2), cVar1 != '\0')) {
      (**(code **)(*DAT_0162ee84 + 0x3b4))(param_2,local_94);
      _Format = (char *)FUN_00630f40("SID_SHELL_ALREADYINGAME_FORMAT",local_94);
      sprintf(local_74,_Format);
      uVar2 = FUN_00630f40("SID_SHELL_ALREADYINGAME_TITLE",0);
      FUN_0062ff10(local_74,uVar2);
    }
    else {
      cVar1 = (**(code **)(*param_1 + 0x140))(*(undefined4 *)(param_1[0xd] + 4),0,1);
      if (cVar1 != '\0') {
        FUN_0063b2d0();
        FUN_0063a3e0(*(undefined4 *)(param_1[0xd] + 4),0);
        FUN_0063a8d0(param_2,0,1,1,1);
        (**(code **)(*param_1 + 0x144))(0,param_2);
        param_1[0xd] = 0;
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

