// FUN_005556e0  005556e0

void __fastcall FUN_005556e0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 uVar5;
  undefined4 uVar6;
  int local_18 [5];
  
  local_18[0] = -1;
  local_18[1] = 1;
  local_18[2] = 2;
  local_18[3] = 3;
  local_18[4] = 0;
  iVar1 = FUN_00641280((short)param_1[100]);
  if (iVar1 == 0xe) {
    iVar1 = 1;
  }
  else {
    iVar1 = FUN_00641280((short)param_1[100]);
  }
  if ((short)param_1[100] == -1) {
    (**(code **)(*param_1 + 0xb0))(0x35,iVar1,param_1,iVar1);
    uVar5 = extraout_var_03;
  }
  else {
    iVar2 = FUN_00641290((short)param_1[100]);
    (**(code **)(*param_1 + 0xb0))(local_18[iVar2] * 0xd + -1 + iVar1);
    iVar1 = FUN_00641280(CONCAT22(extraout_var_00,(short)param_1[100]));
    uVar5 = extraout_var_01;
    if (iVar1 == 0xf) {
      (**(code **)(*param_1 + 0xb0))(0x34);
      uVar5 = extraout_var_02;
    }
  }
  if (((DAT_00793428 != 0) &&
      (iVar1 = FUN_0054c590(CONCAT22(uVar5,(short)param_1[100])), iVar1 == 0x14)) &&
     (iVar1 = FUN_00641280(CONCAT22(extraout_var,(short)param_1[100])), iVar1 == 2)) {
    uVar6 = 0xffffffff;
    iVar1 = FUN_005f53c0(0xffffffff);
    iVar1 = iVar1 + 1;
    uVar3 = (**(code **)(*param_1 + 0x54))(iVar1);
    uVar4 = (**(code **)(*param_1 + 0x4c))(uVar3);
    FUN_005eae80((-(uint)((char)param_1[0x6a] != '\0') & 0xffd04547) + 0x30f357,uVar4,uVar3,iVar1,
                 uVar6);
    (**(code **)(*(int *)param_1[0x69] + 0x74))();
  }
  FUN_005eb570();
  return;
}

