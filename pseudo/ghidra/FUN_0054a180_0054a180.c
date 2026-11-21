// FUN_0054a180  0054a180

undefined4 __thiscall FUN_0054a180(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if ((param_2 != 1) && (param_2 != 2)) {
    FUN_005e9f20("whichHand==VB_PLAYER_HAND1 || whichHand==VB_PLAYER_HAND2",
                 "..\\Casino\\videoblackjackstate.cpp",0x37f);
  }
  if ((param_2 == 2) && (*(char *)(param_1 + 0x24) == '\0')) {
    uVar2 = 0;
  }
  else {
    cVar1 = FUN_0054a740(param_2);
    if (cVar1 == '\0') {
      cVar1 = FUN_0054a6c0(0);
      if ((cVar1 != '\0') && (cVar1 = FUN_0054a6c0(param_2), cVar1 != '\0')) {
        return 4;
      }
      cVar1 = FUN_0054a6c0(param_2);
      if (cVar1 == '\0') {
        cVar1 = FUN_0054a740(0);
        if (cVar1 == '\0') {
          cVar1 = FUN_0054a7a0(param_2);
          if (cVar1 == '\0') {
            cVar1 = FUN_0054a920(param_2);
            if (cVar1 == '\0') {
              cVar1 = FUN_0054a7e0(param_2);
              if (cVar1 == '\0') {
                iVar3 = FUN_00549e80(param_2,1);
                if (iVar3 < 0x16) {
                  iVar3 = FUN_00549e80(param_2,1);
                  iVar4 = FUN_00549e80(0,1);
                  if (iVar4 < iVar3) {
                    return 2;
                  }
                }
                uVar2 = 3;
              }
              else {
                uVar2 = 4;
              }
            }
            else {
              uVar2 = 6;
            }
          }
          else {
            uVar2 = 2;
          }
        }
        else {
          cVar1 = FUN_0054a920(param_2);
          if (cVar1 == '\0') {
            uVar2 = 2;
          }
          else {
            uVar2 = 6;
          }
        }
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 5;
    }
  }
  return uVar2;
}

