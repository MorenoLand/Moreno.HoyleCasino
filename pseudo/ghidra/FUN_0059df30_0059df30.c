// FUN_0059df30  0059df30

void __fastcall FUN_0059df30(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_30;
  int local_24;
  short local_20 [6];
  uint local_14;
  int *local_10;
  int *local_c;
  short local_8;
  
  local_14 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_20[0] = 0x24;
  local_20[1] = 0x15;
  local_20[2] = 0x1c;
  local_20[3] = 0x15;
  local_20[4] = 0x13;
  local_20[5] = 0x13;
  local_8 = 3;
  local_10 = *(int **)(DAT_007935c4 + 0xa0);
  local_c = *(int **)(DAT_007935c4 + 0x9c);
  iVar1 = FUN_005fc360();
  if (iVar1 == 0) {
    DAT_007935bc = 0;
    DAT_007935b8 = 0;
    DAT_007935b4 = FUN_005eb240();
    DAT_007935b0 = FUN_005eb240();
    (**(code **)(*local_10 + 0x6c))(0x32);
    (**(code **)(*local_c + 0x6c))(0x33);
    (**(code **)(*local_10 + 0xb0))(0);
    (**(code **)(*local_c + 0xb0))(0);
    (**(code **)(*param_1 + 8))(1,(int)local_8);
  }
  else if (iVar1 == 1) {
    DAT_007935bc = DAT_007935bc + 1;
    if (DAT_007935bc <= DAT_007935b4) {
      (**(code **)(*local_10 + 0xb0))((int)DAT_007935bc);
    }
    if (DAT_007935bc <= DAT_007935b0) {
      (**(code **)(*local_c + 0xb0))((int)DAT_007935bc);
    }
    if (DAT_007935bc == 9) {
      (**(code **)(**(int **)(DAT_007935c4 + 0xa4) + 0x70))();
      (**(code **)(**(int **)(DAT_007935c4 + 0xa4) + 0xb0))(0);
    }
    else if (((param_1[8] == 0) || (param_1[8] == 2)) && (DAT_007935bc == 0x11)) {
      (**(code **)(*local_10 + 0x6c))(0x33);
      (**(code **)(*local_c + 0x6c))(0x32);
    }
    else if ((local_20[param_1[8]] < DAT_007935bc) && (DAT_007935b8 == 0)) {
      if (param_1[8] == 4) {
        local_30 = 3;
      }
      else {
        local_30 = (param_1[8] == 5) + 2;
      }
      local_24 = local_30;
      while (local_24 = local_24 + -1, -1 < local_24) {
        uVar2 = FUN_006436c0();
        FUN_005a1e00(param_1[8],uVar2);
        DAT_007935b8 = DAT_007935b8 + 1;
      }
      FUN_0059c2d0();
      local_8 = 2;
    }
    if ((DAT_007935bc < DAT_007935b4) || (DAT_007935bc < DAT_007935b0)) {
      (**(code **)(*param_1 + 4))(1);
    }
    else {
      (**(code **)(*param_1 + 4))(2);
    }
    (**(code **)(*param_1 + 0x1c))((int)local_8);
  }
  else if ((iVar1 == 2) && (param_1[4] != 0)) {
    (**(code **)(*(int *)param_1[4] + 0x1c))(0);
    FUN_005fc420(0);
  }
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

