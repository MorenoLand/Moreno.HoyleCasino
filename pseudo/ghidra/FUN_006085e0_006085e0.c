// FUN_006085e0  006085e0

float10 __thiscall FUN_006085e0(undefined4 param_1,int param_2)

{
  float10 fVar1;
  
  if ((param_2 < 0) || (0xb < param_2)) {
    FUN_005e9f20("false","..\\scilib\\platform\\VSoundManager.cpp",299,param_1);
    fVar1 = (float10)0;
  }
  else {
    fVar1 = (float10)*(float *)(&DAT_00796b50 + param_2 * 0x24);
  }
  return fVar1;
}

