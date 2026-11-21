// FUN_005f91b0  005f91b0

undefined4 __thiscall FUN_005f91b0(int *param_1,undefined4 *param_2,char param_3)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int local_8;
  
  if (param_1 == (int *)0x0) {
    FUN_005e9f20("false","..\\scilib\\sciplane.cpp",0x25b);
    uVar2 = 0;
  }
  else {
    cVar1 = FUN_005f88f0();
    if (cVar1 == '\0') {
      if (param_3 != '\0') {
        if ((char)param_1[0x5e] != '\0') {
          (**(code **)(*param_1 + 0x14))(*param_2,param_2[1],param_2[2],param_2[3]);
        }
        if (param_1[0x5f] != 0) {
          (**(code **)(*(int *)param_1[0x5f] + 0x9c))(param_2);
        }
      }
      local_8 = FUN_0060c9a0();
      while (local_8 = local_8 + -1, -1 < local_8) {
        piVar3 = (int *)FUN_0060ca40(local_8);
        if ((piVar3 != (int *)0x0) && (cVar1 = FUN_005f54a0(), cVar1 != '\0')) {
          (**(code **)(*piVar3 + 0x9c))(param_2);
        }
      }
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

