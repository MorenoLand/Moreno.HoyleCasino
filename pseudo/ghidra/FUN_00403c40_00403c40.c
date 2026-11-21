// FUN_00403c40  00403c40

undefined1 __fastcall FUN_00403c40(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  
  cVar2 = FUN_00637630();
  if ((((cVar2 == '\0') || (DAT_00795f94 != '\0')) || (*(char *)(param_1 + 0x24) != '\0')) ||
     (*(char *)(DAT_007902f0 + 0xb2) != '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

