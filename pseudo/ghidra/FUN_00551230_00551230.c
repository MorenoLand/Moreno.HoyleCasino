// FUN_00551230  00551230

uint FUN_00551230(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  uint in_EAX;
  uint uVar2;
  int local_c;
  int local_8;
  
  local_c = 0;
  if (param_3 < 0xb) {
    for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
      cVar1 = FUN_00551040(param_2,param_3 + local_8);
      if (cVar1 == '\0') {
        if (local_c != param_1) {
          local_c = 0;
        }
      }
      else {
        local_c = local_c + 1;
      }
    }
    uVar2 = CONCAT31((int3)((uint)local_c >> 8),local_c == param_1);
  }
  else {
    uVar2 = in_EAX & 0xffffff00;
  }
  return uVar2;
}

