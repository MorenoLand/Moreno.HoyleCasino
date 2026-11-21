// FUN_0045ab50  0045ab50

void __fastcall FUN_0045ab50(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  short local_20 [6];
  uint local_14;
  int *local_10;
  int *local_c;
  short local_8;
  
  local_14 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_20[0] = 0x24;
  local_20[1] = 0x15;
  local_20[2] = 0x18;
  local_20[3] = 0x13;
  local_20[4] = 0x12;
  local_8 = 3;
  local_10 = *(int **)(DAT_00790740 + 0x44);
  local_c = *(int **)(DAT_00790740 + 0x40);
  iVar1 = FUN_005fc360();
  if (iVar1 == 0) {
    DAT_00790730 = 0;
    DAT_0079072c = 0;
    DAT_00790728 = FUN_005eb240();
    DAT_00790724 = FUN_005eb240();
    (**(code **)(*local_10 + 0x6c))(0x32);
    (**(code **)(*local_c + 0x6c))(0x33);
    (**(code **)(*local_10 + 0xb0))(0);
    (**(code **)(*local_c + 0xb0))(0);
    (**(code **)(*param_1 + 8))(1,(int)local_8);
  }
  else if (iVar1 == 1) {
    DAT_00790730 = DAT_00790730 + 1;
    if (DAT_00790730 <= DAT_00790728) {
      (**(code **)(*local_10 + 0xb0))((int)DAT_00790730);
    }
    if (DAT_00790730 <= DAT_00790724) {
      (**(code **)(*local_c + 0xb0))((int)DAT_00790730);
    }
    if (DAT_00790730 == 9) {
      (**(code **)(**(int **)(DAT_00790740 + 0x48) + 0x70))();
      (**(code **)(**(int **)(DAT_00790740 + 0x48) + 0xb0))(0);
    }
    else if (((param_1[8] == 0) || (param_1[8] == 2)) && (DAT_00790730 == 0x11)) {
      (**(code **)(*local_10 + 0x6c))(0x33);
      (**(code **)(*local_c + 0x6c))(0x32);
    }
    else if ((local_20[param_1[8]] < DAT_00790730) && (DAT_0079072c < 7)) {
      if (DAT_0079072c == 6) {
        uVar2 = FUN_006436c0();
        FUN_00460500(param_1[8],uVar2);
      }
      else {
        uVar2 = FUN_006436c0();
        FUN_00460500(param_1[8],uVar2);
        uVar2 = FUN_006436c0();
        FUN_00460500(param_1[8],uVar2);
      }
      FUN_004587e0();
      DAT_0079072c = DAT_0079072c + 2;
      local_8 = 2;
    }
    if ((DAT_00790730 < DAT_00790728) || (DAT_00790730 < DAT_00790724)) {
      (**(code **)(*param_1 + 4))(1);
    }
    else {
      (**(code **)(*param_1 + 4))(2);
    }
    (**(code **)(*param_1 + 0x1c))((int)local_8);
  }
  else if (iVar1 == 2) {
    if (param_1[4] != 0) {
      (**(code **)(*(int *)param_1[4] + 0x1c))(0);
    }
    FUN_005fc420(0);
  }
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

