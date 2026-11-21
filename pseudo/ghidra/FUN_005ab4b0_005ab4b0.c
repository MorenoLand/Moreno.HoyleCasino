// FUN_005ab4b0  005ab4b0

void __fastcall FUN_005ab4b0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_14;
  int local_c;
  
  uVar2 = FUN_005b4f00();
  uVar3 = FUN_005b4e50(uVar2);
  local_14 = abs(*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x48));
  if (local_14 < 0x32) {
    local_14 = 0;
  }
  local_c = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x4c);
  if (local_c < 0x32) {
    local_c = 0;
  }
  if (*(int *)(param_1 + 0x58) == 8) {
    if ((local_c < local_14) && (cVar1 = FUN_005ad1f0(uVar2,0,1), cVar1 != '\0')) {
      FUN_005a7080();
    }
    else if ((local_14 < local_c) &&
            ((cVar1 = FUN_005b6170(uVar2), cVar1 == '\0' &&
             (cVar1 = FUN_005ad1f0(uVar2,1,1), cVar1 != '\0')))) {
      FUN_005a7080();
    }
  }
  else if (*(int *)(param_1 + 0x58) == 0x10) {
    if (((local_c < local_14) && (cVar1 = FUN_005b3710(uVar2,uVar3), cVar1 != '\0')) &&
       (cVar1 = FUN_005ad1f0(uVar2,3,1), cVar1 != '\0')) {
      FUN_005a7080();
    }
    else if (((local_14 < local_c) && (cVar1 = FUN_005b3430(uVar2), cVar1 != '\0')) &&
            (cVar1 = FUN_005ad1f0(uVar2,2,1), cVar1 != '\0')) {
      FUN_005a7080();
    }
  }
  else {
    FUN_005e9f20("false","..\\Casino\\royalmatchdisplay.cpp",0x576);
  }
  return;
}

