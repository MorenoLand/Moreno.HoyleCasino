// FUN_00652c70  00652c70

int __thiscall FUN_00652c70(int param_1,int param_2)

{
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_10 = -1;
  local_c = 0;
  while( true ) {
    if (*(int *)(local_c * 0x14 + *(int *)(param_1 + 0x80)) == 0) {
      FUN_005e9f20("false","..\\casinoShell\\tutorial.cpp",0x218);
      return 0;
    }
    if (*(int *)(local_c * 0x14 + *(int *)(param_1 + 0x80)) != local_10) {
      local_8 = local_8 + 1;
      local_10 = *(int *)(local_c * 0x14 + *(int *)(param_1 + 0x80));
    }
    if (local_8 + -1 == param_2) break;
    local_c = local_c + 1;
  }
  return local_10;
}

