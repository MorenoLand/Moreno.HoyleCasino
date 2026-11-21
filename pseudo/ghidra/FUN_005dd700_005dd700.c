// FUN_005dd700  005dd700

void __thiscall FUN_005dd700(int *param_1,char param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined1 local_14c [64];
  char local_10c [260];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  if (*(char *)((int)param_1 + 0x25) != '\0') {
    param_2 = '\x01';
  }
  cVar1 = (**(code **)(*param_1 + 0x33c))(0xffffffff);
  if (cVar1 == '\0') {
    FUN_005f39c0(param_2);
  }
  else if ((DAT_007947e4 == (int *)0x0) ||
          ((iVar2 = (**(code **)(*DAT_007947e4 + 0x2d8))(), iVar2 != 0 && (iVar2 != 1)))) {
    if (((char)param_1[9] == '\0') && (param_2 == '\0')) {
      cVar1 = (**(code **)(*DAT_0162ee80 + 0x80))();
      if (cVar1 == '\0') {
        uVar4 = FUN_005f3bf0(local_14c);
        (**(code **)(*param_1 + 0x338))(uVar4);
        pcVar3 = (char *)FUN_00630f40("SID_CASINO_GAMEINPROGRESS_FORMAT",local_14c);
        sprintf(local_10c,pcVar3);
      }
      else {
        pcVar3 = (char *)FUN_00630f40("SID_SHELL_CONFIRMQUIT_FORMAT",&DAT_00795634);
        sprintf(local_10c,pcVar3);
      }
      uVar4 = FUN_00630f40("SID_SHELL_QUITTING",4);
      iVar2 = FUN_0062ff10(local_10c,uVar4);
      if (iVar2 == 6) {
        if (param_1[0xd] == 0x44c) {
          *(undefined1 *)(param_1 + 9) = 1;
        }
        else {
          (**(code **)(*param_1 + 0x34))(0x44c);
        }
      }
    }
    else {
      *(undefined1 *)(param_1 + 9) = 1;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

