// FUN_00598370  00598370

int FUN_00598370(void)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  for (local_c = 0; local_c < 5; local_c = local_c + 1) {
    iVar1 = FUN_005983c0(local_c);
    local_8 = iVar1 + local_8;
  }
  return local_8;
}

