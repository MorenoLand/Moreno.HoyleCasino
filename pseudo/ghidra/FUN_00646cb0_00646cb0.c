// FUN_00646cb0  00646cb0

undefined1 __fastcall FUN_00646cb0(int param_1)

{
  int *piVar1;
  undefined1 local_11;
  
  piVar1 = (int *)FUN_0063aac0();
  if (*piVar1 == 3) {
    if (*(int *)(param_1 + 0x14) == 0) {
      local_11 = 1;
    }
    else {
      local_11 = FUN_006646c0();
    }
  }
  else {
    local_11 = FUN_005f54c0();
  }
  return local_11;
}

