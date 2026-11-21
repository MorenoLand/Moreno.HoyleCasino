// FUN_00437860  00437860

undefined4 __fastcall FUN_00437860(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0xac4) == 0) && (cVar1 = FUN_00434410(), cVar1 == '\0')) {
    return 0;
  }
  if (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 7) {
    cVar1 = FUN_00436a00(0x37);
    if (cVar1 == '\0') {
      cVar1 = FUN_00436a00(0x38);
      if (cVar1 == '\0') {
        cVar1 = FUN_00436a00(0x39);
        if (cVar1 == '\0') {
          cVar1 = FUN_00436a00(0x3a);
          if (cVar1 == '\0') {
            cVar1 = FUN_00436a00(0x3b);
            if (cVar1 == '\0') {
              cVar1 = FUN_00436a00(0x3c);
              if (cVar1 == '\0') {
                uVar2 = 0;
              }
              else {
                uVar2 = 1;
              }
            }
            else {
              uVar2 = 1;
            }
          }
          else {
            uVar2 = 1;
          }
        }
        else {
          uVar2 = 1;
        }
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

