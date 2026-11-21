// FUN_00421980  00421980

void __fastcall FUN_00421980(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_005fc360();
  if (iVar1 == 0) {
    DAT_00790340 = 0;
    DAT_0079033c = FUN_005eb240();
    DAT_00790338 = FUN_005eb240();
    (**(code **)(*param_1 + 8))(1,4);
  }
  else if (iVar1 == 1) {
    DAT_00790340 = DAT_00790340 + 1;
    if (DAT_00790340 <= DAT_00790338) {
      (**(code **)(**(int **)(DAT_00790360 + 0x7c) + 0xb0))((int)DAT_00790340);
    }
    if (DAT_00790340 <= DAT_0079033c) {
      (**(code **)(**(int **)(DAT_00790360 + 0x78) + 0xb0))((int)DAT_00790340);
    }
    if ((DAT_00790340 < DAT_0079033c) || (DAT_00790340 < DAT_00790338)) {
      (**(code **)(*param_1 + 4))(1);
    }
    else {
      (**(code **)(*param_1 + 4))(2);
    }
    (**(code **)(*param_1 + 0x1c))(4);
  }
  else if ((iVar1 == 2) && (param_1[4] != 0)) {
    (**(code **)(*(int *)param_1[4] + 0x1c))(0);
    FUN_005fc420(0);
  }
  return;
}

