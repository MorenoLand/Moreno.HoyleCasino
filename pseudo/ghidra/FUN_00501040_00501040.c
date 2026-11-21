// FUN_00501040  00501040

undefined4 FUN_00501040(void)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  short local_10;
  
  local_10 = 0;
  do {
    iVar2 = FUN_0047f950();
    if (iVar2 <= local_10) {
      return 1;
    }
    iVar2 = FUN_0047e420();
    if (local_10 != iVar2) {
      FUN_0047e390((int)local_10);
      iVar2 = FUN_004c7010();
      if (iVar2 == 1) {
        uVar3 = FUN_004c7050();
        sVar1 = FUN_004f69e0(uVar3);
        if (sVar1 != 1) {
          return 0;
        }
      }
    }
    local_10 = local_10 + 1;
  } while( true );
}

