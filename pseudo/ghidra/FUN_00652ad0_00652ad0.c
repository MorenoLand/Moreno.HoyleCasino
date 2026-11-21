// FUN_00652ad0  00652ad0

undefined4 __thiscall FUN_00652ad0(int param_1,int param_2)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (*(int *)(local_8 * 0x14 + *(int *)(param_1 + 0x80)) == 0) {
      FUN_005e9f20("false","..\\casinoShell\\tutorial.cpp",0x1e6);
      return 0;
    }
    if (*(int *)(*(int *)(param_1 + 0x80) + 4 + local_8 * 0x14) == param_2) break;
    local_8 = local_8 + 1;
  }
  return *(undefined4 *)(local_8 * 0x14 + *(int *)(param_1 + 0x80));
}

