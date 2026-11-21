// FUN_00609b80  00609b80

uint __thiscall FUN_00609b80(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int local_8;
  
  if (DAT_007960cb == '\0') {
    if (*(char *)(param_1 + 10) == '\0') {
      if ((param_2 < 0) || (0xb < param_2)) {
        uVar1 = FUN_005e9f20("false","..\\scilib\\platform\\VSoundManager.cpp",0x430);
        uVar1 = uVar1 & 0xffffff00;
      }
      else if (*(int *)(&DAT_00796b3c + param_2 * 0x24) == 0) {
        uVar1 = 0;
      }
      else {
        alGetSourcei(*(undefined4 *)(&DAT_00796b3c + param_2 * 0x24),0x1010,&local_8);
        iVar2 = alGetError();
        if (iVar2 != 0) {
          FUN_005e9f20("false","..\\scilib\\platform\\VSoundManager.cpp",0x439);
        }
        uVar1 = (uint)(local_8 == 0x1012);
      }
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

