// FUN_00609650  00609650

bool __thiscall FUN_00609650(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int local_8;
  
  if (DAT_007960cb == '\0') {
    if (*(char *)(param_1 + 10) == '\0') {
      if ((param_2 < 0) || (0xb < param_2)) {
        FUN_005e9f20("false","..\\scilib\\platform\\VSoundManager.cpp",0x382);
        bVar2 = true;
      }
      else if (*(int *)(&DAT_00796b40 + param_2 * 0x24) == 0) {
        bVar2 = true;
      }
      else {
        alGetSourcei(*(undefined4 *)(&DAT_00796b3c + param_2 * 0x24),0x1010,&local_8);
        iVar1 = alGetError();
        if (iVar1 != 0) {
          FUN_005e9f20("false","..\\scilib\\platform\\VSoundManager.cpp",0x38c);
        }
        bVar2 = local_8 == 0x1014;
      }
    }
    else {
      bVar2 = true;
    }
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}

