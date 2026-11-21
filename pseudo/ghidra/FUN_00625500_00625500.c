// FUN_00625500  00625500

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00625500(int *param_1,int *param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  int iStack_14;
  int iStack_10;
  float local_c;
  float local_8;
  
  switch(param_4) {
  case 1:
    (**(code **)(*param_1 + 0x28))(&local_8,&local_c);
    iVar1 = FUN_00686cc0();
    *param_3 = iVar1;
    iVar1 = FUN_00686cc0();
    param_3[1] = iVar1;
    iVar1 = FUN_00686cc0();
    param_3[2] = iVar1;
    iVar1 = FUN_00686cc0();
    param_3[3] = iVar1;
    break;
  case 2:
    (**(code **)(*param_1 + 0x2c))(&iStack_10,&iStack_14,0,0,0,0);
    local_8 = (float)iStack_10;
    local_c = (float)iStack_14;
    iVar1 = FUN_00686cc0();
    param_3[2] = iVar1 + *param_3;
    iVar1 = FUN_00686cc0();
    param_3[3] = iVar1 + param_3[1];
    break;
  case 3:
    (**(code **)(*param_1 + 0x28))(&local_8,&local_c);
    iVar1 = FUN_00686cc0();
    param_3[1] = iVar1;
    iVar1 = FUN_00686cc0();
    param_3[3] = iVar1 + param_3[1];
    iVar1 = FUN_00686cc0();
    *param_3 = iVar1;
    iVar1 = FUN_00686cc0();
    param_3[2] = iVar1 + *param_3;
    break;
  case 4:
    (**(code **)(*param_1 + 0x28))(&local_8,&local_c);
    iVar1 = FUN_00686cc0();
    param_3[1] = iVar1;
    local_8 = (float)(param_3[2] - *param_3) / (float)(param_2[2] - *param_2);
    iVar1 = FUN_00686cc0();
    param_3[3] = iVar1 + param_3[1];
    iVar1 = FUN_00686cc0();
    param_3[3] = iVar1;
    (**(code **)(*param_1 + 0x28))(&local_8,&local_c);
    iVar1 = FUN_00686cc0();
    *param_3 = iVar1;
    iVar1 = FUN_00686cc0();
    param_3[2] = iVar1;
    break;
  case 5:
    (**(code **)(*param_1 + 0x28))(&local_8,&local_c);
    iVar1 = FUN_00686cc0();
    *param_3 = iVar1;
    local_c = (float)(param_3[3] - param_3[1]) / (float)(param_2[3] - param_2[1]);
    iVar1 = FUN_00686cc0();
    param_3[2] = iVar1 + *param_3;
    iVar1 = FUN_00686cc0();
    param_3[2] = iVar1;
    (**(code **)(*param_1 + 0x28))(&local_8,&local_c);
    iVar1 = FUN_00686cc0();
    param_3[1] = iVar1;
    iVar1 = FUN_00686cc0();
    param_3[3] = iVar1;
    break;
  default:
    if (param_4 < 10) {
      FUN_005e9f20("false","..\\scilib\\platform\\VPrintJob.cpp",0xb4);
      return 0;
    }
    pfVar4 = &local_c;
    pfVar3 = &local_8;
    (**(code **)(*param_1 + 0x28))(pfVar3,pfVar4);
    iVar1 = FUN_00686cc0();
    *param_3 = iVar1;
    iVar1 = FUN_00686cc0();
    param_3[1] = iVar1;
    local_8 = ((float)param_4 / (float)_DAT_006b4b00) * local_8;
    local_c = ((float)param_4 / (float)_DAT_006b4b00) * local_c;
    iVar2 = param_2[2] - *param_2;
    iVar1 = FUN_00686cc0();
    param_3[2] = iVar1 + *param_3;
    iVar1 = FUN_00686cc0(pfVar3,pfVar4,param_2[3] - param_2[1],iVar2);
    param_3[3] = iVar1 + param_3[1];
  }
  return 1;
}

