// FUN_00541110  00541110

int __fastcall FUN_00541110(undefined4 param_1)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 3;
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    iVar1 = FUN_005dcb00(local_8,param_1);
    if (*(char *)(iVar1 + 0x4a0) != '\0') {
      iVar1 = FUN_00540c30(local_8);
      if (iVar1 < local_c) {
        local_c = FUN_00540c30(local_8);
      }
    }
  }
  return local_c;
}

