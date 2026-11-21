// FUN_004094b0  004094b0

int FUN_004094b0(undefined4 param_1)

{
  short sVar1;
  int local_c;
  int local_8;
  
  local_c = 0;
  for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
    sVar1 = FUN_004093d0(param_1,local_8);
    if (sVar1 != 0) {
      local_c = local_c + 1;
    }
  }
  return local_c;
}

