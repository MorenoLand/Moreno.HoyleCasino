// FUN_00673f40  00673f40

void __fastcall FUN_00673f40(int *param_1)

{
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if ((char)param_1[9] == '\0') {
    FUN_005f5420();
    local_8 = param_1[6];
    local_c = param_1[7];
    local_10 = param_1[4];
    local_14 = param_1[5];
    (**(code **)(**(int **)(DAT_007960d8 + 0x10) + 0x14))(&local_14);
    (**(code **)(*param_1 + 0xac))();
  }
  return;
}

