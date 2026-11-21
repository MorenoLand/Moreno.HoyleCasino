// FUN_004630c0  004630c0

void FUN_004630c0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined2 local_34 [20];
  uint local_c;
  int local_8;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  if (0x14 < param_3) {
    FUN_005e9f20("handSize < 21","..\\Casino\\pokerai.cpp",0xcd);
  }
  for (local_8 = 0; local_8 < 0x14; local_8 = local_8 + 1) {
    local_34[local_8] = 0;
  }
  for (local_8 = 0; local_8 < param_3; local_8 = local_8 + 1) {
    local_34[local_8] = *(undefined2 *)(param_1 + local_8 * 2);
  }
  FUN_00641e20(local_34,param_3);
  iVar1 = FUN_00462ba0(param_1,param_3,0);
  switch(iVar1 + -1) {
  case 0:
  case 5:
    FUN_00641280(CONCAT22((short)((uint)(iVar1 + -1) >> 0x10),local_34[(param_3 + -1) - param_2]));
    goto LAB_00463533;
  case 1:
    if (param_2 == 0) {
      for (local_8 = 2; local_8 < 0xf; local_8 = local_8 + 1) {
        iVar1 = FUN_00463a40(param_1,local_8,param_3);
        if (iVar1 == 2) goto LAB_00463533;
      }
    }
    param_2 = param_2 + -2;
    if (param_2 < 0) {
      param_2 = 0;
    }
    for (local_8 = 0xe; 1 < local_8; local_8 = local_8 + -1) {
      iVar1 = FUN_00463a40(param_1,local_8,param_3);
      if (iVar1 == 1) {
        if (param_2 == 0) goto LAB_00463533;
        param_2 = param_2 + -1;
      }
    }
    FUN_005e9f20("false","..\\Casino\\pokerai.cpp",0x145);
    break;
  case 2:
    if (param_2 == 0) {
      for (local_8 = 0xe; 1 < local_8; local_8 = local_8 + -1) {
        iVar1 = FUN_00463a40(param_1,local_8,param_3);
        if (iVar1 == 2) goto LAB_00463533;
      }
    }
    if (param_2 == 1) {
      for (local_8 = 2; local_8 < 0xf; local_8 = local_8 + 1) {
        iVar1 = FUN_00463a40(param_1,local_8,param_3);
        if (iVar1 == 2) goto LAB_00463533;
      }
    }
    for (local_8 = 2; local_8 < 0xf; local_8 = local_8 + 1) {
      iVar1 = FUN_00463a40(param_1,local_8,param_3);
      if (iVar1 == 1) goto LAB_00463533;
    }
    FUN_005e9f20("false","..\\Casino\\pokerai.cpp",299);
    break;
  case 3:
    for (local_8 = 0xe; 1 < local_8; local_8 = local_8 + -1) {
      iVar1 = FUN_00463a40(param_1,local_8,param_3);
      if (((iVar1 == 3) && (param_2 == 0)) ||
         ((iVar1 = FUN_00463a40(param_1,local_8,param_3), iVar1 == 1 && (param_2 == 1))))
      goto LAB_00463533;
    }
    for (local_8 = 2; local_8 < 0xe; local_8 = local_8 + 1) {
      iVar1 = FUN_00463a40(param_1,local_8,param_3);
      if (iVar1 == 1) goto LAB_00463533;
    }
    FUN_005e9f20("false","..\\Casino\\pokerai.cpp",0x110);
    break;
  case 4:
  case 8:
    goto LAB_00463533;
  case 6:
    for (local_8 = 2; local_8 < 0xf; local_8 = local_8 + 1) {
      iVar1 = FUN_00463a40(param_1,local_8,param_3);
      if (((iVar1 == 3) && (param_2 == 0)) ||
         ((iVar1 = FUN_00463a40(param_1,local_8,param_3), iVar1 == 2 && (param_2 != 0))))
      goto LAB_00463533;
    }
    FUN_005e9f20("false","..\\Casino\\pokerai.cpp",0xf7);
    goto LAB_00463533;
  case 7:
    for (local_8 = 2; local_8 < 0xe; local_8 = local_8 + 1) {
      iVar1 = FUN_00463a40(param_1,local_8,param_3);
      if (((iVar1 == 4) && (param_2 == 0)) ||
         ((iVar1 = FUN_00463a40(param_1,local_8,param_3), iVar1 == 1 && (param_2 != 1))))
      goto LAB_00463533;
    }
    FUN_005e9f20("false","..\\Casino\\pokerai.cpp",0xe9);
    goto LAB_00463533;
  }
  FUN_005e9f20("false","..\\Casino\\pokerai.cpp",0x149);
LAB_00463533:
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

