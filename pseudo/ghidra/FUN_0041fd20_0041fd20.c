// FUN_0041fd20  0041fd20

undefined4 FUN_0041fd20(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(undefined4 *)(&DAT_0070cce8 + param_1 * 8);
  }
  else {
    uVar1 = *(undefined4 *)(&DAT_0070ccc8 + param_1 * 8);
  }
  return uVar1;
}

