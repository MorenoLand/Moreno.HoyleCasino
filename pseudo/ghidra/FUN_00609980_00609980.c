// FUN_00609980  00609980

void __thiscall FUN_00609980(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  if ((DAT_007960cb == '\0') && (*(char *)(param_1 + 10) == '\0')) {
    if ((param_2 < 0) || (0xb < param_2)) {
      FUN_005e9f20("false","..\\scilib\\platform\\VSoundManager.cpp",0x3f6);
    }
    else {
      cVar1 = FUN_00609b80(param_2);
      if (cVar1 != '\0') {
        FUN_0062fde0("pausing sound on channel %d\n",param_2);
        alSourcePause(*(undefined4 *)(&DAT_00796b3c + param_2 * 0x24));
        (&DAT_00796b44)[param_2 * 0x24] = 1;
        iVar2 = alGetError();
        if (iVar2 != 0) {
          FUN_005e9f20("false","..\\scilib\\platform\\VSoundManager.cpp",0x3fe);
        }
      }
    }
  }
  return;
}

