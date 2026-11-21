// FUN_005512b0  005512b0

uint FUN_005512b0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  char cVar1;
  uint uVar2;
  int local_c;
  int local_8;
  
  local_c = 0;
  if (param_3 < (int)(0x10U - param_4)) {
    for (local_8 = 0; local_8 < param_4; local_8 = local_8 + 1) {
      cVar1 = FUN_00551040(param_2,param_3 + local_8);
      if (cVar1 != '\0') {
        local_c = local_c + 1;
      }
    }
    uVar2 = (uint)(local_c == param_1);
  }
  else {
    uVar2 = 0x10U - param_4 & 0xffffff00;
  }
  return uVar2;
}

