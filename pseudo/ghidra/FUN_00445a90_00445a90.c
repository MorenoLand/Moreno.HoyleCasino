// FUN_00445a90  00445a90

int FUN_00445a90(void)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    iVar1 = FUN_00445a00(local_8);
    local_c = iVar1 + local_c;
  }
  return local_c;
}

