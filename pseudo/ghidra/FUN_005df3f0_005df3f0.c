// FUN_005df3f0  005df3f0

undefined4 FUN_005df3f0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = *(undefined4 *)(&DAT_0075d99c + param_2 * 4);
  }
  else if (param_1 == 1) {
    uVar1 = *(undefined4 *)(&DAT_0075d9b4 + param_2 * 4);
  }
  else if (param_1 == 2) {
    uVar1 = *(undefined4 *)(&DAT_0075d864 + param_2 * 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

