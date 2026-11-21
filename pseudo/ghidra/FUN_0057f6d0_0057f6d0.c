// FUN_0057f6d0  0057f6d0

void __thiscall FUN_0057f6d0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_10;
  
  if (1000 < param_2) {
    FUN_005e9f20("num <=1000","..\\Casino\\kenodisplay.cpp",0x1ca);
  }
  iVar1 = (param_2 % 1000) / 100;
  iVar2 = (param_2 % 1000 + iVar1 * -100) / 10;
  local_10 = param_2 / 1000 + -1;
  if (local_10 < 0) {
    local_10 = 9;
  }
  (**(code **)(**(int **)(param_1 + 4) + 0xb0))(local_10);
  local_10 = iVar1 + -1;
  if (local_10 < 0) {
    local_10 = 9;
  }
  (**(code **)(**(int **)(param_1 + 8) + 0xb0))(local_10);
  local_10 = iVar2 + -1;
  if (local_10 < 0) {
    local_10 = 9;
  }
  (**(code **)(**(int **)(param_1 + 0xc) + 0xb0))(local_10);
  local_10 = param_2 % 1000 + iVar1 * -100 + iVar2 * -10 + -1;
  if (local_10 < 0) {
    local_10 = 9;
  }
  (**(code **)(**(int **)(param_1 + 0x10) + 0xb0))(local_10);
  return;
}

