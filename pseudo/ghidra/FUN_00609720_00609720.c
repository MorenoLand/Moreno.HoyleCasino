// FUN_00609720  00609720

void __thiscall FUN_00609720(int param_1,int param_2,char param_3)

{
  int iVar1;
  
  if (DAT_007960cb == '\0') {
    if (*(char *)(param_1 + 10) == '\0') {
      if ((param_2 < 0) || (0xb < param_2)) {
        FUN_005e9f20("false","..\\scilib\\platform\\VSoundManager.cpp",0x3a3);
      }
      else {
        alSourceStop(*(undefined4 *)(&DAT_00796b3c + param_2 * 0x24));
        iVar1 = alGetError();
        if (iVar1 != 0) {
          FUN_005e9f20("false","..\\scilib\\platform\\VSoundManager.cpp",0x3ac);
        }
        alSourcei(*(undefined4 *)(&DAT_00796b3c + param_2 * 0x24),0x1009,0);
        iVar1 = alGetError();
        if (iVar1 != 0) {
          FUN_005e9f20("false","..\\scilib\\platform\\VSoundManager.cpp",0x3b0);
        }
        if ((*(int *)(&DAT_00796b40 + param_2 * 0x24) != 0) && (param_3 != '\0')) {
          FUN_006041d0(*(undefined4 *)(&DAT_00796b40 + param_2 * 0x24));
        }
        *(undefined4 *)(&DAT_00796b40 + param_2 * 0x24) = 0;
        (&DAT_00796b44)[param_2 * 0x24] = 0;
        *(undefined4 *)(&DAT_00796b48 + param_2 * 0x24) = 5;
        *(undefined4 *)(&DAT_00796b4c + param_2 * 0x24) = 0;
      }
    }
    else {
      PlaySoundA((LPCSTR)0x0,(HMODULE)0x0,5);
    }
  }
  return;
}

