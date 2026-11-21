// FUN_004a39c0  004a39c0

undefined4 FUN_004a39c0(void)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  
  sVar1 = 0;
  do {
    iVar3 = FUN_0047f950();
    if (iVar3 <= sVar1) {
      return 1;
    }
    iVar3 = FUN_0047e420();
    if (sVar1 != iVar3) {
      FUN_0047e390((int)sVar1);
      iVar3 = FUN_004c7010();
      if (iVar3 == 1) {
        FUN_0047e390((int)sVar1);
        uVar4 = FUN_004c7050();
        sVar2 = FUN_004f69e0(uVar4);
        if (sVar2 != 1) {
          return 0;
        }
      }
    }
    sVar1 = sVar1 + 1;
  } while( true );
}

