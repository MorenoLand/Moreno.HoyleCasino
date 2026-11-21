// FUN_0041fd50  0041fd50

undefined4 FUN_0041fd50(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(undefined4 *)(&DAT_0070cd2c + param_1 * 8);
  }
  else {
    uVar1 = *(undefined4 *)(&DAT_0070cd0c + param_1 * 8);
  }
  return uVar1;
}

