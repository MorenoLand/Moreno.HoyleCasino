// FUN_005511b0  005511b0

uint FUN_005511b0(int param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  int local_c;
  int local_8;
  
  local_c = 0;
  if (param_2 < (int)(0x10U - param_3)) {
    for (local_8 = 0; local_8 < param_3; local_8 = local_8 + 1) {
      cVar1 = FUN_00550fd0(param_2 + local_8);
      if (cVar1 != '\0') {
        local_c = local_c + 1;
      }
    }
    uVar2 = CONCAT31((int3)((uint)local_c >> 8),local_c == param_1);
  }
  else {
    uVar2 = 0x10U - param_3 & 0xffffff00;
  }
  return uVar2;
}

