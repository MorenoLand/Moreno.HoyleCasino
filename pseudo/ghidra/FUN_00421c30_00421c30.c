// FUN_00421c30  00421c30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00421c30(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *local_28 [4];
  int *local_18;
  short local_14 [6];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_28[0] = (int *)0x18a8b;
  local_28[1] = (int *)0x18a8c;
  local_28[2] = (int *)0x18a8d;
  local_14[0] = 6;
  local_14[1] = 6;
  local_14[2] = 6;
  local_14[3] = 5;
  local_14[4] = 5;
  local_14[5] = 7;
  local_28[3] = *(int **)(DAT_00790360 + 0x7c);
  local_18 = *(int **)(DAT_00790360 + 0x78);
  iVar1 = FUN_005fc360();
  if (iVar1 == 0) {
    DAT_00790350 = 0;
    _DAT_0079034c = 0;
    DAT_00790348 = FUN_005eb240();
    DAT_00790344 = FUN_005eb240();
    (**(code **)(*local_28[3] + 0xb0))(0);
    (**(code **)(*local_18 + 0xb0))(0);
    (**(code **)(*param_1 + 8))(1,4);
  }
  else if (iVar1 == 1) {
    DAT_00790350 = DAT_00790350 + 1;
    if (DAT_00790350 <= DAT_00790348) {
      (**(code **)(*local_28[3] + 0xb0))((int)DAT_00790350);
    }
    if (DAT_00790350 <= DAT_00790344) {
      (**(code **)(*local_18 + 0xb0))((int)DAT_00790350);
    }
    if ((int)DAT_00790350 == local_14[param_1[8]] + -1) {
      iVar1 = FUN_0062fbf0(3,0,0,5,1,0x3f800000,_DAT_006b3654,0);
      (**(code **)(*DAT_0162ee84 + 0x80))(local_28[iVar1]);
    }
    else if (DAT_00790350 == local_14[param_1[8]]) {
      uVar2 = FUN_006436c0();
      FUN_00426310(param_1[8],uVar2);
      FUN_0041f1b0();
    }
    if ((DAT_00790350 < DAT_00790348) || (DAT_00790350 < DAT_00790344)) {
      (**(code **)(*param_1 + 4))(1);
    }
    else {
      (**(code **)(*param_1 + 4))(2);
    }
    (**(code **)(*param_1 + 0x1c))(4);
  }
  else if (iVar1 == 2) {
    (**(code **)(*local_28[3] + 0x6c))(0x33);
    (**(code **)(*local_18 + 0x6c))(0x32);
    if (param_1[4] != 0) {
      (**(code **)(*(int *)param_1[4] + 0x1c))(0);
      FUN_005fc420(0);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

