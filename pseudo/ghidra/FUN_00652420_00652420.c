// FUN_00652420  00652420

void __thiscall FUN_00652420(int param_1,int param_2)

{
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_10 = -1;
  *(undefined1 *)(param_1 + 0x10) = 0;
  local_c = 0;
  do {
    if (*(int *)(local_c * 0x14 + *(int *)(param_1 + 0x80)) == 0) {
      return;
    }
    if (*(int *)(local_c * 0x14 + *(int *)(param_1 + 0x80)) != local_10) {
      local_10 = *(int *)(local_c * 0x14 + *(int *)(param_1 + 0x80));
      if (local_8 == param_2) {
        *(int *)(param_1 + 8) = local_c;
        *(undefined4 *)(param_1 + 0x14) = 0;
        FUN_00651af0();
        return;
      }
      local_8 = local_8 + 1;
    }
    local_c = local_c + 1;
  } while( true );
}

