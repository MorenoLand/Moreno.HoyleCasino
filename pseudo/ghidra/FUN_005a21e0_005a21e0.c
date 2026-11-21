// FUN_005a21e0  005a21e0

int __fastcall FUN_005a21e0(undefined4 param_1)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 3;
  for (local_c = 0; local_c < 6; local_c = local_c + 1) {
    iVar1 = FUN_005dcb00(local_c,param_1);
    if (*(char *)(iVar1 + 0x4a0) != '\0') {
      iVar1 = FUN_005a2690(local_c);
      if (iVar1 < local_8) {
        local_8 = FUN_005a2690(local_c);
      }
    }
  }
  return local_8;
}

