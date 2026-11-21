// FUN_005acba0  005acba0

void __fastcall FUN_005acba0(int *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined8 local_1c;
  undefined8 local_14;
  int local_8;
  
  local_8 = FUN_005b4f00();
  iVar3 = FUN_005fc360();
  if (iVar3 == 0) {
    (**(code **)(*param_1 + 4))(1);
    local_28 = -1;
    if (local_8 != -1) {
      FUN_005dcb00(local_8);
      piVar4 = (int *)FUN_0063aac0();
      if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        local_2c = local_8;
        local_24 = 0xffffffff;
        local_1c = 0;
        local_14 = 0x3ff0000000000000;
        switch(param_1[8]) {
        case 0:
          local_28 = 0x7d5;
          break;
        case 1:
          local_28 = 2000;
          break;
        case 2:
          local_28 = 0x7d2;
          break;
        case 3:
          local_28 = 0x7d4;
          break;
        case 4:
          local_28 = 0x830;
          break;
        case 5:
          local_28 = 0x7d8;
          break;
        case 6:
          local_28 = 0x82f;
          break;
        default:
          FUN_005e9f20("false","..\\Casino\\royalmatchdisplay.cpp",0x766);
        }
      }
    }
    if (local_28 == -1) {
      (**(code **)(*param_1 + 0x1c))(0);
    }
    else {
      FUN_00639390(&local_2c,param_1,0,0);
    }
  }
  else if (iVar3 == 1) {
    FUN_005fc420(0);
    if ((param_1[8] < 5) || (6 < param_1[8])) {
      cVar2 = FUN_005ad1f0(local_8,param_1[8],1);
      if (cVar2 == '\0') {
        return;
      }
    }
    else {
      FUN_005b73e0(local_8,param_1[8] == 5);
    }
    (**(code **)(**(int **)(DAT_00793600 + 4) + 8))(1,0);
  }
  else {
    FUN_005e9f20("false","..\\Casino\\royalmatchdisplay.cpp",0x786);
  }
  return;
}

