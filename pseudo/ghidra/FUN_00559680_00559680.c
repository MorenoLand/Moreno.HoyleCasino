// FUN_00559680  00559680

bool FUN_00559680(void)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  for (local_8 = 2; local_8 < 0xf; local_8 = local_8 + 1) {
    iVar1 = FUN_00559d60(local_8);
    if (iVar1 == 2) {
      local_c = local_c + 1;
    }
  }
  return local_c == 2;
}

