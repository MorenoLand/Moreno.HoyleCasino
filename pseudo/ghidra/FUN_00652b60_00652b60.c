// FUN_00652b60  00652b60

void __thiscall FUN_00652b60(int param_1,int param_2,int *param_3,int *param_4)

{
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_14 = -1;
  local_8 = -1;
  local_10 = 0;
  *param_3 = 0;
  *param_4 = 0;
  local_c = 0;
  do {
    if (*(int *)(local_c * 0x14 + *(int *)(param_1 + 0x80)) == 0) {
      FUN_005e9f20("false","..\\casinoShell\\tutorial.cpp",0x206);
      return;
    }
    if (*(int *)(local_c * 0x14 + *(int *)(param_1 + 0x80)) != local_14) {
      local_8 = local_8 + 1;
      local_14 = *(int *)(local_c * 0x14 + *(int *)(param_1 + 0x80));
      local_10 = 0;
    }
    if (*(int *)(local_c * 0x14 + *(int *)(param_1 + 0x80)) ==
        *(int *)(*(int *)(param_1 + 8) * 0x14 + *(int *)(param_1 + 0x80))) {
      if (local_c == param_2) {
        *param_4 = local_10;
        *param_3 = local_8;
        return;
      }
      local_10 = local_10 + 1;
    }
    local_c = local_c + 1;
  } while( true );
}

