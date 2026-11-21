// FUN_00652d20  00652d20

int __fastcall FUN_00652d20(int param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  local_10 = -1;
  for (local_c = 0; *(int *)(local_c * 0x14 + *(int *)(param_1 + 0x80)) != 0; local_c = local_c + 1)
  {
    if (*(int *)(local_c * 0x14 + *(int *)(param_1 + 0x80)) != local_10) {
      local_8 = local_8 + 1;
      local_10 = *(int *)(local_c * 0x14 + *(int *)(param_1 + 0x80));
    }
  }
  return local_8;
}

