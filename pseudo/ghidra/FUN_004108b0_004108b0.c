// FUN_004108b0  004108b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004108b0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
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
  local_28[3] = *(int **)(DAT_0079032c + 0x40);
  local_18 = *(int **)(DAT_0079032c + 0x3c);
  uVar1 = FUN_005fc360();
  switch(uVar1) {
  case 0:
    DAT_0079031c = 0;
    _DAT_00790318 = 0;
    DAT_00790314 = FUN_005eb240();
    DAT_00790310 = FUN_005eb240();
    (**(code **)(*local_28[3] + 0xb0))(0);
    (**(code **)(*local_18 + 0xb0))(0);
    iVar2 = FUN_00418e70();
    if (*(int *)(DAT_00790324 + 0x4c8) == iVar2) {
      *(undefined1 *)((int)param_1 + 0x25) = 1;
    }
    (**(code **)(*param_1 + 8))(1,4);
    break;
  case 1:
    DAT_0079031c = DAT_0079031c + 1;
    if (DAT_0079031c <= DAT_00790314) {
      (**(code **)(*local_28[3] + 0xb0))((int)DAT_0079031c);
    }
    if (DAT_0079031c <= DAT_00790310) {
      (**(code **)(*local_18 + 0xb0))((int)DAT_0079031c);
    }
    if ((int)DAT_0079031c == local_14[param_1[8]] + -1) {
      iVar2 = FUN_0062fbf0(3,0,0,5,1,0x3f800000,_DAT_006b3654,0);
      (**(code **)(*DAT_0162ee84 + 0x80))(local_28[iVar2]);
    }
    else if (DAT_0079031c == local_14[param_1[8]]) {
      uVar3 = 0xffffffff;
      uVar1 = FUN_006436c0(0xffffffff);
      FUN_00419670(param_1[8],uVar1,uVar3);
      FUN_0040cc00();
    }
    if ((DAT_0079031c < DAT_00790314) || (DAT_0079031c < DAT_00790310)) {
      (**(code **)(*param_1 + 4))(1);
    }
    else if (*(char *)((int)param_1 + 0x25) == '\0') {
      (**(code **)(*param_1 + 4))(4);
    }
    else {
      (**(code **)(*param_1 + 4))(2);
    }
    (**(code **)(*param_1 + 0x1c))(4);
    break;
  case 2:
    DAT_0079031c = 0;
    FUN_005eaf00(0x13af);
    FUN_005eaf00(0x13ae);
    (**(code **)(*local_28[3] + 0xb0))(0);
    (**(code **)(*local_18 + 0xb0))(0);
    DAT_00790314 = FUN_005eb240();
    DAT_00790310 = FUN_005eb240();
    (**(code **)(*param_1 + 8))(3,4);
    break;
  case 3:
    DAT_0079031c = DAT_0079031c + 1;
    if (DAT_0079031c <= DAT_00790314) {
      (**(code **)(*local_28[3] + 0xb0))((int)DAT_0079031c);
    }
    if (DAT_0079031c <= DAT_00790310) {
      (**(code **)(*local_18 + 0xb0))((int)DAT_0079031c);
    }
    if (DAT_0079031c == 3) {
      (**(code **)(**(int **)(DAT_0079032c + 0x44) + 0x70))();
    }
    else if (DAT_0079031c == local_14[5]) {
      FUN_005eaf00(0x13b1);
      (**(code **)(**(int **)(DAT_0079032c + 0x44) + 0x74))();
    }
    if ((DAT_0079031c < DAT_00790314) || (DAT_0079031c < DAT_00790310)) {
      (**(code **)(*param_1 + 4))(3);
    }
    else {
      (**(code **)(*param_1 + 4))(4);
    }
    (**(code **)(*param_1 + 0x1c))(4);
    break;
  case 4:
    (**(code **)(*local_28[3] + 0x6c))(0x97);
    (**(code **)(*local_18 + 0x6c))(0x96);
    if (param_1[4] != 0) {
      (**(code **)(*(int *)param_1[4] + 0x1c))(0);
      FUN_005fc420(0);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

