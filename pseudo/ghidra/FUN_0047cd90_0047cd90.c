// FUN_0047cd90  0047cd90

/* WARNING: Removing unreachable block (ram,0x0047cdf7) */

undefined4 __fastcall FUN_0047cd90(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  cVar1 = FUN_0047cd30(param_1);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    do {
      do {
        uVar2 = FUN_0062fc30(0,6);
        uVar2 = FUN_0047e390(uVar2);
        cVar1 = FUN_004c61b0();
      } while (cVar1 != '\0');
      iVar3 = FUN_004c7010();
    } while (iVar3 != 1);
  }
  return uVar2;
}

