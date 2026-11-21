// FUN_005eedc0  005eedc0

void __thiscall FUN_005eedc0(int param_1,int param_2,int *param_3,int *param_4)

{
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  *param_3 = 0;
  local_c = 0;
  local_8 = 0;
  while ((*(char *)(param_2 + local_c) != '\0' &&
         (FUN_005eebf0(local_c,&local_18,&local_14,&local_10,param_2),
         *(char *)(param_2 + local_18) != '\0'))) {
    if (*param_3 < local_10) {
      *param_3 = local_10;
    }
    local_8 = local_8 + 1;
    local_c = local_14;
  }
  if (local_8 == 0) {
    local_8 = 1;
  }
  *param_4 = *(short *)(param_1 + 0x96) * local_8;
  *param_3 = *param_3 - (uint)*(ushort *)(param_1 + 0x90);
  return;
}

