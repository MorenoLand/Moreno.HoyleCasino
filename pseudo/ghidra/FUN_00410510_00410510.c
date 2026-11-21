// FUN_00410510  00410510

void __fastcall FUN_00410510(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_005fc360();
  if (iVar1 == 0) {
    DAT_0079030c = 0;
    DAT_00790308 = FUN_005eb240();
    DAT_00790304 = FUN_005eb240();
    (**(code **)(*param_1 + 8))(1,4);
  }
  else if (iVar1 == 1) {
    DAT_0079030c = DAT_0079030c + 1;
    if (DAT_0079030c <= DAT_00790304) {
      (**(code **)(**(int **)(DAT_0079032c + 0x40) + 0xb0))((int)DAT_0079030c);
    }
    if (DAT_0079030c <= DAT_00790308) {
      (**(code **)(**(int **)(DAT_0079032c + 0x3c) + 0xb0))((int)DAT_0079030c);
    }
    if (((int)DAT_0079030c == (-(uint)((char)param_1[8] != '\0') & 3) + 4) &&
       (iVar1 = FUN_00418e70(), *(int *)(DAT_00790324 + 0x4c8) == iVar1)) {
      FUN_005eaf00(0x13a1);
      (**(code **)(**(int **)(DAT_0079032c + 0x44) + 0x74))();
    }
    if ((DAT_0079030c < DAT_00790308) || (DAT_0079030c < DAT_00790304)) {
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

