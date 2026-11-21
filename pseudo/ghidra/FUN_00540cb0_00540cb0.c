// FUN_00540cb0  00540cb0

int FUN_00540cb0(void)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    iVar1 = FUN_00540c30(local_8);
    local_c = iVar1 + local_c;
  }
  return local_c;
}

