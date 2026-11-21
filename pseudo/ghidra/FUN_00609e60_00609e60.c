// FUN_00609e60  00609e60

float10 __thiscall FUN_00609e60(int param_1,int param_2)

{
  float10 fVar1;
  float local_8;
  
  if (DAT_007960cb == '\0') {
    if (*(char *)(param_1 + 10) == '\0') {
      if (((param_2 < 0) || (2 < param_2)) || (*(int *)(&DAT_00796d28 + param_2 * 0x74) == 0)) {
        FUN_005e9f20("false","..\\scilib\\platform\\VSoundManager.cpp",0x4a7);
        fVar1 = (float10)0;
      }
      else {
        FUN_0062d830(&local_8);
        fVar1 = (float10)local_8;
      }
    }
    else {
      fVar1 = (float10)0;
    }
  }
  else {
    fVar1 = (float10)0;
  }
  return fVar1;
}

