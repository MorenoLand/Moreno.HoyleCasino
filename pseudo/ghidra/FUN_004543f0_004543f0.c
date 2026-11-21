// FUN_004543f0  004543f0

uint FUN_004543f0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0xffffffff;
  local_8 = 0xffffffff;
  FUN_004516a0(&local_c,&local_8);
  uVar1 = FUN_0044f840(local_c,local_8,param_1,param_2);
  return uVar1 & 0xffff0000;
}

