// FUN_005b5620  005b5620

undefined4 FUN_005b5620(void)

{
  int iVar1;
  int local_1c;
  int local_18;
  undefined4 local_14 [4];
  
  local_14[0] = 2;
  local_14[1] = 0;
  local_14[2] = 1;
  local_14[3] = 3;
  local_18 = 0;
  do {
    if (3 < local_18) {
      return 0xffffffff;
    }
    for (local_1c = 0; iVar1 = FUN_005b58f0(local_14[local_18]), local_1c < iVar1;
        local_1c = local_1c + 1) {
      iVar1 = FUN_005b5010(local_14[local_18],local_1c);
      if (iVar1 == -1) {
        return local_14[local_18];
      }
    }
    local_18 = local_18 + 1;
  } while( true );
}

