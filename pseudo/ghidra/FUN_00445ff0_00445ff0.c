// FUN_00445ff0  00445ff0

undefined4 __thiscall FUN_00445ff0(int param_1,char *param_2,int param_3)

{
  if (*(int *)(param_1 + 0x44 + param_3 * 0x78) == -1) {
    strcpy(param_2,(char *)&PTR_006b27f8);
  }
  else {
    if (*(int *)(param_1 + 0x6c + param_3 * 0x78) <= *(int *)(param_1 + 0x44 + param_3 * 0x78)) {
      FUN_0064c8d0(*(undefined4 *)(param_1 + 0x40 + param_3 * 0x78),0,param_2,1,1,1);
      return *(undefined4 *)(param_1 + 0x40 + param_3 * 0x78);
    }
    strcpy(param_2,(char *)&PTR_006b27f8);
  }
  return 0;
}

