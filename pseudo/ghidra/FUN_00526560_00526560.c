// FUN_00526560  00526560

void __thiscall FUN_00526560(undefined4 param_1,int param_2)

{
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < 0xa1; local_8 = local_8 + 1) {
    if (*(int *)(DAT_0079337c + 0x80 + local_8 * 4) != param_2) {
      FUN_005cd330(param_1);
    }
  }
  return;
}

