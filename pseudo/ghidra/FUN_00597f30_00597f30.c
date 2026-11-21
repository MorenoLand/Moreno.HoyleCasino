// FUN_00597f30  00597f30

int __fastcall FUN_00597f30(undefined4 param_1)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 6;
  for (local_c = 0; local_c < 5; local_c = local_c + 1) {
    iVar1 = FUN_005dcb00(local_c,param_1);
    if (*(char *)(iVar1 + 0x4a0) != '\0') {
      iVar1 = FUN_005983c0(local_c);
      if (iVar1 < local_8) {
        local_8 = FUN_005983c0(local_c);
      }
    }
  }
  return local_8;
}

