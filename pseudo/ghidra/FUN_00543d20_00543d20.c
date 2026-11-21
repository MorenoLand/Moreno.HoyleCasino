// FUN_00543d20  00543d20

undefined4 FUN_00543d20(int param_1,char param_2)

{
  undefined4 uVar1;
  
  if (param_2 == '\0') {
    uVar1 = *(undefined4 *)(&DAT_0073b3fc + param_1 * 4);
  }
  else {
    uVar1 = *(undefined4 *)(&DAT_0073b3f0 + param_1 * 4);
  }
  return uVar1;
}

