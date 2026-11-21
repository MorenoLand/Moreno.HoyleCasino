// FUN_00417b10  00417b10

void FUN_00417b10(undefined4 param_1,int *param_2,int *param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  undefined4 extraout_var;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = FUN_0063aae0(2);
  *param_2 = *(int *)(local_8 + 0x10) + *(int *)(local_8 + 0x18) + *param_2;
  param_2[1] = param_2[1] + *(int *)(local_8 + 0x14);
  *param_3 = *param_3 + *(int *)(local_8 + 0x10);
  param_3[1] = param_3[1] + *(int *)(local_8 + 0x14);
  *param_4 = *param_4 + *(int *)(local_8 + 0x18);
  param_4[1] = param_4[1] + *(int *)(local_8 + 0x1c);
  cVar1 = (**(code **)(*DAT_007947e0 + 0x33c))(0xffffffff,extraout_var);
  if (cVar1 != '\0') {
    iVar2 = FUN_005f3bf0();
    if (iVar2 == 2) {
      FUN_005e0c40(param_1,&local_18,&local_10);
      *param_2 = local_18 + local_10 + *param_2;
      param_2[1] = param_2[1] + local_14;
      *param_3 = *param_3 + local_18;
      param_3[1] = param_3[1] + local_14;
      *param_4 = *param_4 + local_10;
      param_4[1] = param_4[1] + local_c;
    }
  }
  return;
}

