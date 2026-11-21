// FUN_00454200  00454200

uint FUN_00454200(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 1;
  local_8 = 2;
  FUN_00450cd0(0,&local_c,&local_8);
  uVar1 = FUN_0044f840(local_c,local_8,param_1,param_2);
  return uVar1 & 0xffff0000;
}

