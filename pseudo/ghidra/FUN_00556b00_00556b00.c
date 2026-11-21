// FUN_00556b00  00556b00

void FUN_00556b00(undefined4 param_1,int *param_2,int *param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  char local_24;
  int local_1c;
  int local_18;
  char local_11;
  int local_10;
  int local_c;
  int *local_8;
  
  local_8 = (int *)FUN_0063aae0(0x11);
  iVar2 = FUN_005f3bf0();
  if (iVar2 != 0x11) {
    iVar2 = FUN_005f3bf0();
    if (iVar2 != 0x12) {
      local_24 = '\0';
      goto LAB_00556b46;
    }
  }
  local_24 = '\x01';
LAB_00556b46:
  local_11 = local_24;
  if (local_24 == '\0') {
    *param_2 = *param_2 + *local_8;
    param_2[1] = param_2[1] + local_8[1];
    *param_3 = *param_3 + *local_8;
    param_3[1] = param_3[1] + local_8[1];
  }
  cVar1 = (**(code **)(*DAT_007947e0 + 0x33c))(0xffffffff);
  if (cVar1 != '\0') {
    iVar2 = FUN_005f3bf0();
    if (iVar2 == 0x11) {
      *param_2 = *param_2 + *local_8;
      param_2[1] = param_2[1] + local_8[1];
      *param_3 = *param_3 + *local_8;
      param_3[1] = param_3[1] + local_8[1];
      FUN_005e0c40(param_1,&local_1c,&local_10);
      *param_2 = local_1c + local_10 + *param_2;
      param_2[1] = param_2[1] + local_18;
      *param_3 = *param_3 + local_1c;
      param_3[1] = param_3[1] + local_18;
      *param_4 = *param_4 + local_10;
      param_4[1] = param_4[1] + local_c;
    }
  }
  return;
}

