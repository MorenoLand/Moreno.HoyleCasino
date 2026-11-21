// FUN_0041a570  0041a570

void __thiscall FUN_0041a570(int param_1,int param_2,undefined1 param_3)

{
  undefined1 local_c [8];
  
  *(undefined1 *)(param_1 + 0x11a + param_2 * 0x118) = 1;
  *(undefined1 *)(param_1 + 0x11b + param_2 * 0x118) = param_3;
  if (*(char *)(param_1 + 0x11b + param_2 * 0x118) != '\0') {
    FUN_0041a660(local_c,param_2);
    (**(code **)(**(int **)(param_1 + 0x468 + param_2 * 4) + 0xc4))(local_c,1,0);
  }
  return;
}

