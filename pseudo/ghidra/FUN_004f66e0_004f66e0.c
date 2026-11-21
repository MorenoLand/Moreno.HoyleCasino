// FUN_004f66e0  004f66e0

undefined4 __fastcall FUN_004f66e0(char *param_1)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  
  if (param_1[1] == '\0') {
    FUN_005e9f20("bInitialized","..\\Casino\\PokerPot.cpp",0x27a);
  }
  if (*param_1 == '\0') {
    uVar3 = 0;
  }
  else {
    cVar1 = FUN_004f6690();
    if (cVar1 == '\0') {
      uVar3 = 0;
    }
    else {
      cVar1 = FUN_005da7b0();
      if (cVar1 == '\0') {
        if ((*(short *)(param_1 + 0x88) == 0) && (sVar2 = FUN_004f9110(), 2 < sVar2)) {
          return 0;
        }
        sVar2 = FUN_004f9110();
        if (sVar2 == 1) {
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
        }
      }
      else {
        if ((*(short *)(param_1 + 0x88) == 0) && (sVar2 = FUN_004f9110(), 1 < sVar2)) {
          return 0;
        }
        sVar2 = FUN_004f9110();
        if (sVar2 == 1) {
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
        }
      }
    }
  }
  return uVar3;
}

