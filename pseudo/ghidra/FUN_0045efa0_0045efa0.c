// FUN_0045efa0  0045efa0

void __thiscall FUN_0045efa0(int param_1,undefined4 param_2,int *param_3,int *param_4,int *param_5)

{
  char cVar1;
  int iVar2;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = FUN_0063aae0((-(uint)(*(int *)(param_1 + 4) != 0) & 0xfffffffb) + 10);
  *param_3 = *(int *)(local_8 + 8) + *(int *)(local_8 + 0x10) + *param_3;
  param_3[1] = param_3[1] + *(int *)(local_8 + 0xc);
  *param_4 = *param_4 + *(int *)(local_8 + 8);
  param_4[1] = param_4[1] + *(int *)(local_8 + 0xc);
  *param_5 = *param_5 + *(int *)(local_8 + 0x10);
  param_5[1] = param_5[1] + *(int *)(local_8 + 0x14);
  cVar1 = (**(code **)(*DAT_007947e0 + 0x33c))(0xffffffff);
  if (cVar1 != '\0') {
    iVar2 = FUN_005f3bf0();
    if (iVar2 == (-(uint)(*(int *)(param_1 + 4) != 0) & 0xfffffffb) + 10) {
      FUN_005e0c40(param_2,&local_18,&local_10);
      *param_3 = local_18 + local_10 + *param_3;
      param_3[1] = param_3[1] + local_14;
      *param_4 = *param_4 + local_18;
      param_4[1] = param_4[1] + local_14;
      *param_5 = *param_5 + local_10;
      param_5[1] = param_5[1] + local_c;
    }
  }
  return;
}

