// FUN_004f8f20  004f8f20

undefined2 __fastcall FUN_004f8f20(undefined1 *param_1)

{
  short sVar1;
  undefined2 uVar2;
  
  sVar1 = *(short *)(param_1 + 8);
  *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + 1;
  if (*(short *)(param_1 + 8) == *(short *)(param_1 + 6)) {
    *(undefined2 *)(param_1 + 8) = 0;
  }
  while ((*(short *)(param_1 + 8) != sVar1 &&
         ((*(char *)(*(int *)(param_1 + 0x30) + (int)*(short *)(param_1 + 8)) != '\0' ||
          (*(char *)(*(int *)(param_1 + 0x34) + (int)*(short *)(param_1 + 8)) != '\0'))))) {
    *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + 1;
    if (*(short *)(param_1 + 8) == *(short *)(param_1 + 6)) {
      *(undefined2 *)(param_1 + 8) = 0;
    }
  }
  if (*(short *)(param_1 + 8) == sVar1) {
    sVar1 = FUN_004f91a0();
    if (sVar1 == 1) {
      *param_1 = 0;
      uVar2 = 0xfffe;
    }
    else {
      sVar1 = FUN_004f9110();
      if (sVar1 < 2) {
        *param_1 = 0;
        FUN_004f9220();
        uVar2 = 0xfffd;
      }
      else {
        FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\PokerPot.cpp",0x5b0);
        uVar2 = 0xfffe;
      }
    }
  }
  else {
    uVar2 = *(undefined2 *)(param_1 + 8);
  }
  return uVar2;
}

