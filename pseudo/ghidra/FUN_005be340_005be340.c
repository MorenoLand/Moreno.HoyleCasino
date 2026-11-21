// FUN_005be340  005be340

undefined4 __thiscall FUN_005be340(int param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 local_10;
  
  local_10 = param_3;
  piVar1 = (int *)(*(int *)(param_1 + 0x10) + 0x20 + param_2 * 0x7c);
  for (; local_10 < 0; local_10 = local_10 + *piVar1) {
  }
  for (; *piVar1 <= local_10; local_10 = local_10 - *piVar1) {
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x10) + param_2 * 0x7c + 0x24 + local_10 * 4);
}

