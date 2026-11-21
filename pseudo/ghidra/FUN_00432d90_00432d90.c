// FUN_00432d90  00432d90

void FUN_00432d90(int param_1,undefined4 param_2)

{
  undefined4 extraout_var;
  
  FUN_005d9f50(param_1,param_2);
  if (*(int *)(DAT_007906d4 + 0xae0) != -1) {
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined4 *)(DAT_007906d4 + 0xae0) = 0xffffffff;
    FUN_00429fa0(extraout_var);
    FUN_00429c30();
  }
  return;
}

