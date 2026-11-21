// FUN_005604b0  005604b0

undefined4 __thiscall FUN_005604b0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(DAT_007947e0 + 0x4f14);
  if ((param_2 < 0) || (0xb < param_2)) {
    uVar2 = 0x31222a;
  }
  else if (iVar1 == 0) {
    if (8 < param_2) {
      FUN_005e9f20("handResult <= 8","..\\Casino\\vpmdisplay.cpp",0x12e,0,param_1);
    }
    uVar2 = *(undefined4 *)(&DAT_00743e6c + param_2 * 4);
  }
  else if (iVar1 == 5) {
    if (9 < param_2) {
      FUN_005e9f20("handResult <= 9","..\\Casino\\vpmdisplay.cpp",0x131,5,param_1);
    }
    uVar2 = *(undefined4 *)(&DAT_00743e44 + param_2 * 4);
  }
  else if (iVar1 == 10) {
    if (10 < param_2) {
      FUN_005e9f20("handResult <= 10","..\\Casino\\vpmdisplay.cpp",0x134,10,param_1);
    }
    uVar2 = *(undefined4 *)(&DAT_00743e18 + param_2 * 4);
  }
  else {
    uVar2 = 0x31222a;
  }
  return uVar2;
}

