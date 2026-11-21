// FUN_0041b780  0041b780

void __thiscall FUN_0041b780(int param_1,int param_2)

{
  int iVar1;
  undefined4 local_14;
  undefined4 local_8;
  
  if (param_2 == -1) {
    local_8 = -1;
  }
  else {
    if (param_2 == 4) {
      local_14 = 0;
    }
    else {
      local_14 = (int)*(char *)(param_1 + 0x119 + param_2 * 0x118);
    }
    local_8 = local_14;
  }
  FUN_0041bba0(param_2,local_8,1,3,2);
  iVar1 = FUN_005dcb00(param_2);
  *(undefined1 *)(iVar1 + 0x4a2) = 1;
  FUN_004191f0(param_2,0,7);
  iVar1 = FUN_005dcb00(param_2);
  *(undefined1 *)(iVar1 + 0x4b0) = 0;
  FUN_00419a10(param_2);
  return;
}

