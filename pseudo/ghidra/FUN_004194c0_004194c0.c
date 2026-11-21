// FUN_004194c0  004194c0

int FUN_004194c0(int param_1)

{
  short sVar1;
  int local_c;
  int local_8;
  
  local_8 = 0;
  if (param_1 == 4) {
    local_8 = 1;
  }
  else {
    for (local_c = 0; local_c < 4; local_c = local_c + 1) {
      sVar1 = FUN_004193d0(param_1,local_c,0);
      if (sVar1 != 0) {
        local_8 = local_8 + 1;
      }
    }
  }
  return local_8;
}

