// FUN_005a3e80  005a3e80

void FUN_005a3e80(int param_1)

{
  char cVar1;
  int iVar2;
  int local_28;
  undefined1 local_20 [12];
  undefined2 local_14 [6];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  if (param_1 != 5) {
    for (local_28 = 0; local_28 < 5; local_28 = local_28 + 1) {
      local_14[local_28] = 0;
    }
    FUN_00462930(DAT_007935d0 + 200 + param_1 * 6,(param_1 == 4) + '\x02',DAT_007935d0 + 0xe6,3,
                 local_20);
    FUN_00462a40(5,local_20,6,local_14);
    iVar2 = FUN_00462ba0(local_14,5,0);
    cVar1 = FUN_005a3660(param_1);
    if (((cVar1 != '\0') && (iVar2 < 3)) && (iVar2 == 2)) {
      FUN_004639e0(local_14,5);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

