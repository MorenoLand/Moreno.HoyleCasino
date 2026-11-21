// FUN_004488b0  004488b0

undefined1 __fastcall FUN_004488b0(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  
  cVar2 = FUN_00637630();
  if ((((cVar2 == '\0') || (DAT_00795f94 != '\0')) || (*(char *)(param_1 + 0x24) != '\0')) ||
     (*(char *)(DAT_00790710 + 0xd1) != '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

