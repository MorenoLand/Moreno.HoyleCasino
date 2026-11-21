// FUN_005593d0  005593d0

int __thiscall FUN_005593d0(undefined4 param_1,undefined2 param_2)

{
  int local_8;
  
  local_8 = FUN_00641280(param_2,param_1);
  if (local_8 == 0xf) {
    local_8 = 0x14;
  }
  else if ((local_8 == 2) &&
          ((((*(int *)(DAT_007947e0 + 0x4f14) == 5 || (*(int *)(DAT_007947e0 + 0x4f14) == 6)) ||
            (*(int *)(DAT_007947e0 + 0x4f14) == 7)) || (*(int *)(DAT_007947e0 + 0x4f14) == 10)))) {
    local_8 = 0x14;
  }
  return local_8;
}

