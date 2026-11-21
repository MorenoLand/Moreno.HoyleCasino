// FUN_0060a0d0  0060a0d0

float10 __thiscall FUN_0060a0d0(int param_1,undefined4 param_2)

{
  int iVar1;
  float10 fVar2;
  undefined4 local_8;
  
  if (DAT_007960cb == '\0') {
    if (*(char *)(param_1 + 10) == '\0') {
      iVar1 = FUN_0060a060(param_2);
      fVar2 = (float10)iVar1 / (float10)local_8;
    }
    else {
      fVar2 = (float10)0;
    }
  }
  else {
    fVar2 = (float10)0;
  }
  return fVar2;
}

