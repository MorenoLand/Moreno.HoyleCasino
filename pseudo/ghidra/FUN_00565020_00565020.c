// FUN_00565020  00565020

void __fastcall FUN_00565020(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 uVar3;
  undefined2 extraout_var_03;
  int local_24;
  int local_18 [5];
  
  local_18[0] = -1;
  local_18[1] = 1;
  local_18[2] = 2;
  local_18[3] = 3;
  local_18[4] = 0;
  iVar1 = FUN_00641280((short)param_1[100]);
  if (iVar1 == 0xe) {
    local_24 = 1;
  }
  else {
    local_24 = FUN_00641280((short)param_1[100]);
  }
  iVar1 = FUN_00641290((short)param_1[100]);
  (**(code **)(*param_1 + 0xb0))(local_18[iVar1] * 0xd + -1 + local_24);
  iVar1 = FUN_00641280(CONCAT22(extraout_var_00,(short)param_1[100]));
  uVar3 = extraout_var_01;
  if (iVar1 == 0xf) {
    (**(code **)(*param_1 + 0xb0))(0x34);
    uVar3 = extraout_var_02;
  }
  iVar1 = FUN_005593d0(CONCAT22(uVar3,(short)param_1[100]));
  if (iVar1 == 0x14) {
    iVar1 = FUN_00641280(CONCAT22(extraout_var,(short)param_1[100]));
    if (iVar1 == 2) {
      uVar2 = FUN_00641290((short)param_1[100]);
      switch(uVar2) {
      case 1:
        (**(code **)(*param_1 + 0xb0))(0x37);
        break;
      case 2:
        (**(code **)(*param_1 + 0xb0))(0x38);
        break;
      case 3:
        (**(code **)(*param_1 + 0xb0))(0x39);
        break;
      case 4:
        (**(code **)(*param_1 + 0xb0))(0x36);
      }
    }
    else {
      iVar1 = FUN_00641280(CONCAT22(extraout_var_03,(short)param_1[100]));
      if (iVar1 == 0xf) {
        (**(code **)(*param_1 + 0xb0))(0x3a);
      }
    }
  }
  FUN_005eb570();
  return;
}

