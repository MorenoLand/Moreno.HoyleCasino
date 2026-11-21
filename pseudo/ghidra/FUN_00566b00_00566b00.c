// FUN_00566b00  00566b00

void __thiscall FUN_00566b00(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  
  local_10 = 0;
  iVar1 = *(int *)(DAT_007947e0 + 0x4f14);
  if (iVar1 == 0) {
    if (8 < param_2) {
      FUN_005e9f20("handResult <= 8","..\\Casino\\vpmdisplay.cpp",0xb03);
    }
    local_10 = *(undefined4 *)(&DAT_007448fc + param_2 * 4);
  }
  else if (iVar1 == 5) {
    if (9 < param_2) {
      FUN_005e9f20("handResult <= 9","..\\Casino\\vpmdisplay.cpp",0xb07);
    }
    local_10 = *(undefined4 *)(&DAT_007448d4 + param_2 * 4);
  }
  else if (iVar1 == 10) {
    if (10 < param_2) {
      FUN_005e9f20("handResult <= 10","..\\Casino\\vpmdisplay.cpp",0xb0b);
    }
    local_10 = *(undefined4 *)(&DAT_007448a8 + param_2 * 4);
  }
  (**(code **)(**(int **)(param_1 + 8) + 0xb0))(local_10);
  uVar2 = FUN_005604b0(param_2);
  uVar2 = FUN_005603b0(uVar2);
  (**(code **)(**(int **)(param_1 + 4) + 0xb0))(uVar2);
  return;
}

