// FUN_005dedc0  005dedc0

int __thiscall FUN_005dedc0(int *param_1,int param_2)

{
  int iVar1;
  int local_c;
  int local_8;
  
  local_c = 0;
  if (param_2 == -1) {
    param_2 = FUN_005f3bf0();
  }
  if (param_2 == 0x30d401) {
    local_c = 0x2f7471;
  }
  else {
    for (local_8 = 0; iVar1 = (**(code **)(*param_1 + 0xe4))(), local_8 < iVar1;
        local_8 = local_8 + 1) {
      if (*(int *)(&DAT_007947f0 + local_8 * 0xc) == param_2) {
        local_c = *(int *)(&DAT_007947f8 + local_8 * 0xc);
      }
    }
    if (local_c == 0) {
      FUN_005e9f20("false","..\\Casino\\casinoshell.cpp",0x423);
    }
  }
  return local_c;
}

