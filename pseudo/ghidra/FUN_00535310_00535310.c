// FUN_00535310  00535310

void FUN_00535310(undefined4 param_1,int *param_2,int *param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  undefined4 extraout_var;
  undefined8 local_18;
  undefined8 local_10;
  int *local_8;
  
  local_8 = (int *)FUN_0063aae0(0xe);
  *param_2 = *param_2 + *local_8;
  param_2[1] = param_2[1] + local_8[1];
  *param_3 = *param_3 + *local_8;
  param_3[1] = param_3[1] + local_8[1];
  cVar1 = (**(code **)(*DAT_007947e0 + 0x33c))(0xffffffff,extraout_var);
  if (cVar1 != '\0') {
    iVar2 = FUN_005f3bf0();
    if (iVar2 == 0xe) {
      local_18 = FUN_0064c8a0(0,0);
      local_10 = FUN_0064c8a0(0,0);
      FUN_005e0c40(param_1,&local_18,&local_10);
      *param_2 = (int)local_18 + (int)local_10 + *param_2;
      param_2[1] = param_2[1] + local_18._4_4_;
      *param_3 = *param_3 + (int)local_18;
      param_3[1] = param_3[1] + local_18._4_4_;
      *param_4 = *param_4 + (int)local_10;
      param_4[1] = param_4[1] + local_10._4_4_;
    }
  }
  return;
}

